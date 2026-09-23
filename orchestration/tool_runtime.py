"""Project-local MCP lifecycle; no changes to installed CHIA internals."""
import asyncio
import json
import math
import os
from pathlib import Path
import threading
import time
import uuid
from datetime import datetime, timezone
import anyio
import ray
from chia.base.tools.ChiaTool import ChiaTool, ToolInfo
from chia.base.tools.util import make_router_lifespan
from chia.base.ChiaFunction import ChiaFunction
from chia.models.opencode import OpenCodeLLM, OpenCodeError
from chia.base.llm_call import QueryResult
from .event_log import configure_logger, event, redact, quiet_health_checks
from .processes import run_command
from .retry_policy import MCPFailure
from .test_preflight import contract_errors, under
from .toolchain import simulation_env
from .timing import record_event, export_timing
from .opencode_recovery import continuation_session, clear_recovered_error, completed_tool_ids, CONTINUATION
from .agent_protocol import parse_agent_response


@ray.remote(num_cpus=0)
class ToolServer:
    def submitted_result(self):
        # Use the actor's memory; the disk copy is diagnostic, never an input.
        return getattr(self.tool, '_submitted_result', None)

    def start(self, tool):
        import uvicorn
        from fastapi import FastAPI
        self.tool, self.server, self.thread = tool, None, None
        tool._cancel_event = threading.Event()
        tool._stage_started = time.monotonic()
        host = ray.util.get_node_ip_address()
        base = int(os.environ.get('CHIA_TOOL_BASE_PORT', '8000'))
        last = int(os.environ.get('CHIA_TOOL_MAX_PORT', str(base + 99)))
        # Own the logger hierarchy explicitly: one handler and no parent fan-out.
        # Ray can forward these records without local duplicate emissions.
        for name in ('uvicorn', 'uvicorn.error', 'uvicorn.access'):
            logger = configure_logger(name)
            logger.handlers[:] = [h for h in logger.handlers if getattr(h, '_wallyguard', False)][:1]
        for port in range(base, last + 1):
            tool.mcp._session_manager = None
            app = FastAPI(lifespan=make_router_lifespan([tool.mcp]))
            @app.get('/healthz')
            async def health():
                return tool.progress()
            app.mount(f'/{tool.name}', tool.mcp.streamable_http_app())
            self.server = uvicorn.Server(uvicorn.Config(app, host=host, port=port,
                log_config=None, log_level='info', access_log=False, timeout_graceful_shutdown=5))
            self.thread = threading.Thread(target=self.server.run, daemon=True)
            self.thread.start()
            deadline = time.monotonic() + 5
            while self.thread.is_alive() and time.monotonic() < deadline:
                if self.server.started:
                    return os.environ.get('CHIA_TOOL_ADVERTISE_HOST', host), port, ray.get_runtime_context().get_node_id()
                time.sleep(.05)
            self.server.should_exit = True
            self.thread.join(2)
            if self.thread.is_alive():
                raise MCPFailure('MCP startup thread did not stop')
        raise MCPFailure('No available MCP port')

    def write(self, name: str, value):
        directory = Path(self.tool.artifact_dir)
        directory.mkdir(parents=True, exist_ok=True)
        if Path(name).name != name:
            raise ValueError('Invalid agent artifact filename')
        path = directory / name
        clean = redact(value)
        path.write_text(clean if isinstance(clean, str) else json.dumps(clean, indent=2))

    def emit(self, status: str, fields: dict):
        event(Path(self.tool.artifact_dir) / 'events.jsonl', status, agent=self.tool.role,
              stage=self.tool.role, iteration_id=Path(self.tool.test_dir).name, **fields)

    def stop(self):
        started = time.monotonic()
        self.tool._cancel_event.set()
        if self.server:
            self.server.should_exit = True
        if self.thread:
            self.thread.join(6)
        if hasattr(self.tool, '_metrics'):
            self.tool._metrics['cleanup_seconds'] = time.monotonic() - started
            self.write('tool-metrics.json', self.tool._metrics)
        return not self.thread or not self.thread.is_alive()


class ManagedBashTool(ChiaTool):
    def __init__(self, name: str, work_dir: str, test_dir: str, role: str, timeout_seconds: int):
        super().__init__(name)
        self.work_dir, self.test_dir, self.role = work_dir, test_dir, role
        self.timeout_seconds = timeout_seconds
        self.artifact_dir = str(Path(test_dir) / 'controller' / ('agent-' + name))
        self.mcp.add_tool(self.run_command, name=f'{name}_run_command')
        self.mcp.add_tool(self.command_status, name=f'{name}_command_status')
        self.mcp.add_tool(self.validate_reproducer, name=f'{name}_validate_reproducer')
        self.mcp.add_tool(self.submit_result, name=f'{name}_submit_result')
        if role == 'tester':
            self.mcp.add_tool(self.oracle_probe_batch, name=f'{name}_oracle_probe_batch')
        self._submitted_result = None
        self._metrics = dict(commands=0, polls=0, preflights=0, command_seconds=0.0)
        self._stage_started = time.monotonic()
        self._server_actor = ToolServer.options(resources={'wally_sim': 1}).remote()
        try:
            self.hostname, self.port, self.node_id = ray.get(self._server_actor.start.remote(self), timeout=45)
            self.tool_info = ToolInfo(name, self.port, self.node_id)
        except Exception as exc:
            self.stop()
            raise MCPFailure(f'MCP startup failed: {type(exc).__name__}') from exc

    def progress(self):
        metrics = getattr(self, '_metrics', {})
        return dict(status='ready', tool=self.name, commands=metrics.get('commands', 0),
                    polls=metrics.get('polls', 0),
                    running_commands=sum(not task.done() for task in getattr(self, '_jobs', {}).values()),
                    elapsed_seconds=round(time.monotonic() - self._stage_started))

    def ready(self):
        import httpx
        from chia.base.tools.ChiaTool import resolve_tool_url
        quiet_health_checks()
        try:
            url = resolve_tool_url(f'http://{self.hostname}:{self.port}/healthz')
            with httpx.Client(timeout=5, trust_env=False) as client:
                response = client.get(url)
                response.raise_for_status()
                progress = response.json()
                if progress.get('status') != 'ready':
                    raise ValueError('Unready MCP response')
                now = time.monotonic()
                if 'commands' in progress and now - getattr(self, '_last_progress_log', now - 60) >= 60:
                    self._last_progress_log = now
                    configure_logger('wallyguard.progress').info(
                        'AGENT_PROGRESS stage=%s elapsed=%ss commands=%s running=%s; awaiting agent completion',
                        self.role, progress.get('elapsed_seconds'), progress['commands'],
                        progress.get('running_commands'))
        except (httpx.HTTPError, ValueError) as exc:
            raise MCPFailure(f'MCP readiness failed: {type(exc).__name__}') from exc

    def save(self, name, value):
        ray.get(self._server_actor.write.remote(name, value), timeout=15)

    def submitted_result(self):
        return ray.get(self._server_actor.submitted_result.remote(), timeout=15)

    def emit(self, status, **fields):
        ray.get(self._server_actor.emit.remote(status, fields), timeout=15)

    def stop(self):
        actor = self._server_actor
        self._server_actor = None
        if actor is None:
            return
        try:
            ray.get(actor.stop.remote(), timeout=8)
        except (ray.exceptions.RayError, TimeoutError):
            pass  # Recovery is actor termination below; a hung server is never reused.
        finally:
            ray.kill(actor, no_restart=True)

    async def command_status(self, job_id: str) -> str:
        """Wait up to 30 seconds for completion; full output remains in its log."""
        if hasattr(self, '_metrics'):
            self._metrics['polls'] += 1
        task = getattr(self, '_jobs', {}).get(job_id)
        if task is not None and not task.done():
            # asyncio.wait leaves the job alive on timeout or caller cancellation.
            await asyncio.wait({task}, timeout=getattr(self, '_poll_wait', 30))
        return self._command_result(job_id)

    def _command_result(self, job_id: str) -> str:
        task = getattr(self, '_jobs', {}).get(job_id)
        if task is None:
            return json.dumps(dict(status='UNKNOWN_JOB', job_id=job_id))
        if not task.done():
            return json.dumps(dict(status='RUNNING', job_id=job_id,
                log_path=str(Path(self.test_dir) / 'logs' / f'tool-{job_id}.log')))
        if task.cancelled():
            return json.dumps(dict(status='INFRA_FAILURE', job_id=job_id, error='Tool shutdown cancelled command'))
        try:
            result = json.loads(task.result())
            if getattr(self, 'role', '') == 'architect':
                elapsed = time.monotonic() - getattr(self, '_stage_started', time.monotonic())
                count = getattr(self, '_metrics', {}).get('commands', 0)
                result['planning_progress'] = dict(
                    commands=count,
                    elapsed_seconds=round(elapsed, 1),
                    reminder='Continue source investigation until a strong lead is grounded. '
                             'Stay in one subsystem; leave oracle probes, assembly and simulation to Tester.')
            return json.dumps(result)
        except (OSError, ValueError) as exc:
            return json.dumps(dict(status='INFRA_FAILURE', job_id=job_id,
                                   error=str(redact(f'{type(exc).__name__}: {exc}'))))

    async def oracle_probe_batch(self, cases_json: str) -> str:
        """Run 1–8 built ELFs on Spike; each case has id, isa, elf, optional args. Oracle evidence only."""
        from .oracle_probes import validate_cases, run_batch
        from .toolchain import validate_spike
        if getattr(self, 'role', '') != 'tester':
            return json.dumps(dict(status='INVALID_ROLE'))
        if getattr(self, '_submitted_result', None) is not None:
            return json.dumps(dict(status='RESULT_ALREADY_SUBMITTED'))
        if not hasattr(self, '_jobs'):
            self._jobs = {}
        for job_id, task in self._jobs.items():
            if not task.done():
                return json.dumps(dict(status='BUSY', job_id=job_id))
        try:
            cases = validate_cases(cases_json, self.test_dir)
        except (ValueError, TypeError, OSError) as exc:
            return json.dumps(dict(status='PROBES_INVALID', error=str(exc)))
        job_id = uuid.uuid4().hex
        directory = Path(self.test_dir) / 'logs' / ('oracle-probes-' + job_id)
        def execute():
            env = simulation_env(self.work_dir)
            try:
                validate_spike(env)
                report = run_batch(cases, directory, env, self._cancel_event)
            except (ValueError, OSError) as exc:
                report = dict(status='INFRA_FAILURE', error=str(exc))
            return json.dumps(redact(dict(report, job_id=job_id, artifact_dir=str(directory))))
        async def job():
            return await anyio.to_thread.run_sync(execute, abandon_on_cancel=False)
        task = asyncio.create_task(job())
        self._jobs[job_id] = task
        await asyncio.wait({task}, timeout=getattr(self, '_response_wait', 2))
        return self._command_result(job_id)

    async def validate_reproducer(self, contract_path: str = 'reproducer.json') -> str:
        """Check the saved contract before submitting a finding; does not prove a bug."""
        if getattr(self, 'role', '') == 'architect':
            return json.dumps(dict(status='PLANNING_ONLY', note='Reproducer validation belongs to Tester.'))
        if getattr(self, '_submitted_result', None) is not None:
            return json.dumps(dict(status='RESULT_ALREADY_SUBMITTED', note='Finish with done; no further tools needed.'))
        if hasattr(self, '_metrics'):
            self._metrics['preflights'] += 1
        for job_id, task in getattr(self, '_jobs', {}).items():
            if not task.done():
                return json.dumps(dict(status='BUSY', job_id=job_id))
        try:
            path = under(contract_path, Path(self.test_dir))
            contract = json.loads(path.read_text())
            env = simulation_env(self.work_dir)
            errors = await anyio.to_thread.run_sync(
                lambda: contract_errors(contract, Path(self.work_dir), Path(self.test_dir), env))
            return json.dumps(dict(status='PREFLIGHT_INVALID' if errors else 'PREFLIGHT_READY',
                                   errors=errors, note='Static checks only; controller still builds and verifies independently.'))
        except (OSError, ValueError, TypeError) as exc:
            return json.dumps(dict(status='PREFLIGHT_INVALID', errors=[str(redact(str(exc)))]))

    async def submit_result(self, result_json: str) -> str:
        """Save your complete final role JSON before replying done. Freezes further commands; no verification gates are bypassed."""
        for job_id, task in getattr(self, '_jobs', {}).items():
            if not task.done():
                return json.dumps(dict(status='BUSY', job_id=job_id, note='Wait for the command before submitting.'))
        try:
            # Strict JSON at this boundary; never salvage part of a truncated call.
            parsed = parse_agent_response(self.role, json.dumps(json.loads(result_json)))
        except (ValueError, TypeError) as exc:
            return json.dumps(dict(status='RESULT_INVALID', error=str(redact(str(exc)))))
        previous = getattr(self, '_submitted_result', None)
        if previous is not None:
            return json.dumps(dict(status='RESULT_ACCEPTED' if previous['result'] == parsed else 'RESULT_ALREADY_SUBMITTED',
                                   note='The first accepted result is immutable; finish with done.'))
        checkpoint = dict(role=self.role, result=parsed, commands=getattr(self, '_metrics', {}).get('commands', 0),
                          submitted_at=datetime.now(timezone.utc).isoformat())
        # No await between the idle check and freeze: a new shell job cannot
        # interleave on the MCP event loop. Persist before acknowledging success.
        path = Path(self.artifact_dir) / 'submitted-result.json'
        try:
            path.parent.mkdir(parents=True, exist_ok=True)
            pending = path.with_suffix('.json.tmp')
            pending.write_text(json.dumps(checkpoint, indent=2) + '\n')
            pending.replace(path)
        except OSError as exc:
            return json.dumps(dict(status='INFRA_FAILURE', error=str(redact(str(exc)))))
        self._submitted_result = checkpoint
        return json.dumps(dict(status='RESULT_ACCEPTED', note='Complete result saved. Reply done; further commands are disabled.'))

    async def run_command(self, command: str, timeout_seconds: float | None = None,
                          extension_reason: str = '') -> str:
        """Execute with a 120s default. Tester starts in test_dir, Fixer in test_dir/fixer; use $WALLY for RTL."""
        if getattr(self, '_submitted_result', None) is not None:
            return json.dumps(dict(status='RESULT_ALREADY_SUBMITTED', note='Command not executed. Finish with done.'))
        if not hasattr(self, '_jobs'):
            self._jobs = {}
        for job_id, task in self._jobs.items():
            if not task.done():
                return json.dumps(dict(status='BUSY', job_id=job_id,
                    reason='Poll the running command before submitting another command'))
        if getattr(self, 'role', '') == 'architect':
            count = getattr(self, '_metrics', {}).get('commands', 0)
            elapsed = time.monotonic() - getattr(self, '_stage_started', time.monotonic())
        try:
            requested = float(os.environ.get('WALLY_COMMAND_TIMEOUT', '120')) if timeout_seconds is None else timeout_seconds
            if isinstance(requested, bool) or not isinstance(requested, (float, int)) or not math.isfinite(requested) or requested <= 0:
                raise ValueError('timeout_seconds must be positive and finite')
            deadline = min(requested, self.timeout_seconds)
        except (TypeError, ValueError) as exc:
            return json.dumps(dict(status='INVALID_COMMAND', error=str(exc)))
        # Completed metadata is bounded; full logs are never discarded.
        for key in list(self._jobs)[:-128]:
            del self._jobs[key]
        env = simulation_env(self.work_dir)
        env['WALLY_TEST_DIR'] = str((Path(self.work_dir) / self.test_dir).resolve())
        command_dir = env['WALLY_TEST_DIR'] if getattr(self, 'role', None) == 'tester' else self.work_dir
        if getattr(self, 'role', None) == 'rtl_fixer':
            command_dir = Path(env['WALLY_TEST_DIR']) / 'fixer'
            # Relative helper/backup files belong in the Fixer's allowed scope.
            # Refuse a redirected directory; never follow it into original inputs.
            if command_dir.is_symlink():
                return json.dumps(dict(status='INVALID_COMMAND', error='Fixer directory must not be a symlink'))
            try:
                command_dir.mkdir(parents=True, exist_ok=True)
            except OSError as exc:
                return json.dumps(dict(status='INFRA_FAILURE', error=str(redact(str(exc)))))
        job_id = uuid.uuid4().hex
        if hasattr(self, '_metrics'):
            self._metrics['commands'] += 1
        log_path = Path(self.test_dir) / 'logs' / f'tool-{job_id}.log'
        timing_path = Path(self.test_dir) / 'logs' / 'tool-timing.jsonl'
        fields = dict(role=getattr(self, 'role', 'unknown'), job_id=job_id, log_path=str(log_path))
        record_event(timing_path, 'COMMAND_STARTED', **fields, extension_reason=extension_reason[:400])
        def run():
            result = run_command(['bash', '-o', 'pipefail', '-c', command], log_path,
                                 deadline, env, command_dir, self._cancel_event)
            if hasattr(self, '_metrics'):
                self._metrics['command_seconds'] += result['duration_seconds']
            record_event(timing_path, 'COMMAND_FINISHED', **fields,
                         duration_seconds=result['duration_seconds'], outcome=result['status'],
                         cleanup_seconds=result.get('cleanup_seconds'))
            with log_path.open('rb') as handle:
                handle.seek(max(0, log_path.stat().st_size - 6000))
                result['tail'] = handle.read().decode(errors='replace')
            return json.dumps(redact(dict(result, job_id=job_id)))
        async def job():
            return await anyio.to_thread.run_sync(run, abandon_on_cancel=False)
        task = asyncio.create_task(job())
        self._jobs[job_id] = task
        await asyncio.wait({task}, timeout=getattr(self, '_response_wait', 2))
        return self._command_result(job_id)


@ray.remote(num_cpus=0)
class LLMCapacity:
    def __init__(self, limit: int):
        self.leases = {}
        self.limit = limit
    async def acquire(self, token: str, lifetime: float):
        while True:
            now = time.monotonic()
            self.leases = {key: expiry for key, expiry in self.leases.items() if expiry > now}
            if len(self.leases) < self.limit:
                self.leases[token] = now + lifetime
                return
            await asyncio.sleep(.1)
    async def release(self, token: str):
        self.leases.pop(token, None)


class DiagnosticOpenCodeLLM(OpenCodeLLM):
    """Keep CLI/API failures which upstream prompt() replaces with an empty result."""
    def _build_config(self, tools):
        from chia.base.tools.ChiaTool import resolve_tool_url
        config = super()._build_config(tools)
        for entry in config.get('mcp', {}).values():
            entry['url'] = resolve_tool_url(entry['url'])
        return config

    def _capture(self, cmd: list, env: dict):
        started = time.monotonic()
        response = self._capture_once(cmd, env)
        if len(cmd) < 2 or cmd[1] != 'run' or getattr(self, '_turn_recovery', None):
            return response
        session = continuation_session(response.stdout)
        remaining = self.timeout_seconds - (time.monotonic() - started)
        if not session or remaining <= 0:
            return response
        # The original prompt is the final positional argument in CHIA's CLI.
        # Reuse its config, tools, model and exact session; no fresh conversation.
        if any(flag in cmd for flag in ('--session', '-s', '--continue', '-c', '--fork')):
            return response
        self._turn_recovery = dict(session=session, stdout=response.stdout, stderr=response.stderr,
                                   returncode=response.returncode, attempts=[])
        resumed = cmd[:-1] + ['--session', session, CONTINUATION]
        seen = completed_tool_ids(response.stdout)
        # One initial continuation; a second is allowed only after new completed
        # tool calls. Both consume the original deadline and retain the session.
        for attempt in range(2):
            self._performance['protocol_recovery_attempts'] = attempt + 1
            configure_logger('wallyguard.recovery').info(
                'MODEL_TURN_RECOVERY attempt=%s/2 session=%s; continuing existing assignment', attempt + 1, session)
            response = self._capture_once(resumed, env, timeout=remaining)
            self._turn_recovery['attempts'].append(dict(stdout=response.stdout, stderr=response.stderr,
                                                       returncode=response.returncode))
            remaining = self.timeout_seconds - (time.monotonic() - started)
            completed = completed_tool_ids(response.stdout)
            if (attempt == 1 or continuation_session(response.stdout) != session
                    or remaining <= 0 or not completed - seen):
                break
            seen.update(completed)
        return response

    def _capture_once(self, cmd: list, env: dict, timeout=None):
        from tempfile import TemporaryDirectory
        from types import SimpleNamespace
        with TemporaryDirectory(prefix='wallyguard-opencode-') as temporary:
            root = Path(temporary)
            result = run_command(cmd, root / 'command.log', timeout or self.timeout_seconds, env=env,
                stdout_path=root / 'stdout', stderr_path=root / 'stderr')
            self._last_command_status = {key: result[key] for key in ('status', 'timed_out', 'returncode', 'duration_seconds')}
            if not hasattr(self, '_performance'):
                self._performance = {'commands': []}
            self._performance['commands'].append(dict(operation=cmd[1] if len(cmd) > 1 else 'unknown',
                seconds=result['duration_seconds'], cleanup_seconds=result.get('cleanup_seconds'),
                status=result['status']))
            stdout = (root / 'stdout').read_text(errors='replace')
            stderr = (root / 'stderr').read_text(errors='replace')
            if result['status'] in ('TIMEOUT', 'INFRA_FAILURE'):
                stderr += '\n' + str(result['error'])
            return SimpleNamespace(returncode=result['returncode'], stdout=stdout, stderr=stderr)

    def _extract_from_export(self, export):
        self._performance.update(export_timing(export))
        if getattr(self, '_turn_recovery', None):
            export = clear_recovered_error(export, self._turn_recovery['session'])
        return super()._extract_from_export(export)

    @ChiaFunction(resources={'opencode_creds': 1}, max_retries=0)
    def prompt(self, user_message: str, tools=None):
        started = time.monotonic()
        self._performance = {'commands': []}
        self._turn_recovery = None
        self._last_metadata, self._last_export_error = {}, None
        try:
            result = self._run_opencode(user_message, tools or [])
        except (OSError, TimeoutError) as exc:
            result = QueryResult('', -1, f'{type(exc).__name__}: {exc}', '', False)
            self._performance['worker_seconds'] = time.monotonic() - started
            result.performance = self._performance
            result.protocol_recovery = self._turn_recovery
            return result
        self._performance['worker_seconds'] = time.monotonic() - started
        result.performance = self._performance
        result.protocol_recovery = self._turn_recovery
        try:
            self._classify_error(result, export_error=self._last_export_error)
        except OpenCodeError as exc:
            result.success = False
            # Only explicitly selected API metadata; never include request/auth headers.
            result.api_metadata = dict(error_type=exc.error_type, message=exc.raw_message,
                                       status_code=(self._last_export_error or {}).get('data', {}).get('statusCode'),
                                       command=getattr(self, '_last_command_status', {}))
            if exc.error_type == 'rate_limit':
                from datetime import datetime, timezone
                from email.utils import parsedate_to_datetime
                data = (self._last_export_error or {}).get('data', {})
                headers = data.get('responseHeaders', {}) or {}
                retry_after = headers.get('retry-after') or headers.get('Retry-After')
                if retry_after is not None:
                    try:
                        result.api_metadata['retry_after'] = max(0, float(retry_after))
                    except (ValueError, TypeError):
                        try:
                            result.api_metadata['retry_after'] = max(0, (parsedate_to_datetime(retry_after) - datetime.now(timezone.utc)).total_seconds())
                        except (ValueError, TypeError, OverflowError):
                            pass  # Missing/invalid Retry-After uses bounded policy backoff.
            return result
        result.success = True
        return result
