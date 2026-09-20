"""Bounded subprocesses with on-disk output and cleanup of owned descendants."""
from datetime import datetime, timezone
from contextlib import ExitStack
import math
import os
from pathlib import Path
import shlex
import signal
import subprocess
import time


def _process_table():
    """Linux process identities; start time prevents signalling a reused PID."""
    table = {}
    for entry in Path("/proc").iterdir():
        if not entry.name.isdecimal():
            continue
        try:
            fields = (entry / "stat").read_text().rsplit(")", 1)[1].split()
            table[int(entry.name)] = (int(fields[1]), fields[19], fields[0])
        except (OSError, ValueError, IndexError):
            continue  # A process can exit during the snapshot.
    return table


def _remember_descendants(pid, known):
    if not Path("/proc").is_dir():
        return {}
    table = _process_table()
    parents = {pid} | {child for child, birth in known.items()
                       if child in table and table[child][1] == birth}
    while True:
        children = {child for child, (parent, _, _) in table.items()
                    if parent in parents and child not in parents}
        if not children:
            break
        parents.update(children)
    for child in parents - {pid}:
        if child in table:
            known[child] = table[child][1]
    return table


def _signal_tree(process, known, signum):
    table = _remember_descendants(process.pid, known)
    # Most commands, including make and the regression multiprocessing pool,
    # retain this group. Track descendants too: some tools create new sessions.
    try:
        os.killpg(process.pid, signum)
    except ProcessLookupError:
        pass
    for pid, birth in tuple(known.items()):
        if pid in table and table[pid][1] == birth and table[pid][2] != "Z":
            try:
                os.kill(pid, signum)
            except ProcessLookupError:
                pass


def _cleanup(process, known):
    """Bounded TERM/KILL cleanup, even when the direct child has already exited."""
    _signal_tree(process, known, signal.SIGTERM)
    deadline = time.monotonic() + 0.5
    while time.monotonic() < deadline:
        process.poll()  # Reap our direct child, including on cancellation.
        table = _remember_descendants(process.pid, known)
        live = [pid for pid, birth in known.items()
                if pid in table and table[pid][1] == birth and table[pid][2] != "Z"]
        if process.returncode is not None and not live:
            break
        time.sleep(0.025)
    _signal_tree(process, known, signal.SIGKILL)
    deadline = time.monotonic() + 2
    try:
        process.wait(timeout=2)
    except subprocess.TimeoutExpired:
        return "Child did not exit after SIGKILL (possible uninterruptible I/O)"
    while time.monotonic() < deadline:
        table = _remember_descendants(process.pid, known)
        if not any(pid in table and table[pid][1] == birth and table[pid][2] != "Z"
                   for pid, birth in known.items()):
            return None
        time.sleep(0.025)
    return "Descendant did not exit after SIGKILL (possible uninterruptible I/O)"


def run_command(command, log_path, timeout, env=None, cwd=None, cancellation_event=None,
                stdout_path=None, stderr_path=None):
    """Run a command without a shell; never hold an executor or capture output in RAM.

    stdout and stderr share the ordered log, so both paths identify that file.
    A command's nonzero exit is COMMAND_FAILED; its caller determines whether
    this is a deterministic RTL failure or an infrastructure problem. Exceptions
    such as cancellation propagate only after the owned process tree is stopped.
    """
    if not isinstance(timeout, (int, float)) or not math.isfinite(timeout) or timeout <= 0:
        raise ValueError("Command timeout must be a positive finite number")
    if isinstance(command, (str, bytes)) or not command:
        raise ValueError("Command must be a nonempty argument list")
    command = [str(argument) for argument in command]
    log_path = Path(log_path)
    log_path.parent.mkdir(parents=True, exist_ok=True)
    started = time.monotonic()
    result = dict(command=command, status="INFRA_FAILURE", returncode=-1,
                  timed_out=False, error=None, log_path=str(log_path),
                  stdout_path=str(log_path), stderr_path=str(log_path),
                  started_at=datetime.now(timezone.utc).isoformat())
    process, known = None, {}
    with ExitStack() as stack:
        handle = stack.enter_context(log_path.open("w", buffering=1))
        stdout = stack.enter_context(Path(stdout_path).open("w")) if stdout_path else handle
        stderr = stack.enter_context(Path(stderr_path).open("w")) if stderr_path else subprocess.STDOUT
        result["stdout_path"] = str(stdout_path or log_path)
        result["stderr_path"] = str(stderr_path or log_path)
        handle.write(f"Started: {result['started_at']}\nCommand: {shlex.join(command[:2] if stdout_path else command)}\n\n")
        handle.flush()
        try:
            process = subprocess.Popen(command, stdout=stdout, stderr=stderr, stdin=subprocess.DEVNULL,
                                       cwd=cwd, env=env, start_new_session=True)
            deadline = started + timeout
            while True:
                _remember_descendants(process.pid, known)
                code = process.poll()
                if code is not None:
                    result.update(returncode=code, status="PASS" if code == 0 else "COMMAND_FAILED",
                                  error=None if code == 0 else f"Command exited with code {code}")
                    break
                if cancellation_event is not None and cancellation_event.is_set():
                    result.update(status='INFRA_FAILURE', error='Command cancelled by tool shutdown')
                    break
                remaining = deadline - time.monotonic()
                if remaining <= 0:
                    result.update(status="TIMEOUT", timed_out=True,
                                  error=f"Timeout after {timeout} seconds")
                    break
                time.sleep(min(0.1, remaining))
        except Exception as exc:
            result.update(status="INFRA_FAILURE", error=f"{type(exc).__name__}: {exc}")
        except BaseException as exc:
            result.update(status="INFRA_FAILURE", error=f"{type(exc).__name__}: command cancelled")
            raise
        finally:
            cleanup_started = time.monotonic()
            if process is not None:
                try:
                    cleanup_error = _cleanup(process, known)
                except Exception as exc:
                    cleanup_error = f"Process cleanup failed: {type(exc).__name__}: {exc}"
                if process.returncode is not None and result['returncode'] == -1:
                    result['returncode'] = process.returncode
                if cleanup_error:
                    result.update(status="INFRA_FAILURE", error=cleanup_error)
            result.update(cleanup_seconds=time.monotonic() - cleanup_started,
                          duration_seconds=time.monotonic() - started,
                          finished_at=datetime.now(timezone.utc).isoformat())
            handle.write(f"\nFinished: {result['finished_at']}\nReturn code: {result['returncode']}\n"
                         f"Status: {result['status']}\n")
            if result["error"]:
                handle.write(f"ERROR: {result['error']}\n")
    return result
