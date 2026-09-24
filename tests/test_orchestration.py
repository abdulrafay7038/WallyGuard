import io
import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile
from types import SimpleNamespace
import unittest
from unittest.mock import Mock, patch

from orchestration.agent_protocol import parse_agent_response, structured_response, AgentOutputInvalid
from orchestration.artifact_guard import snapshot, finish, ArtifactViolation
from orchestration.event_log import configure_logger, event, redact
from orchestration.retry_policy import RetryPolicy, retry_call, AgentCallFailure, MCPFailure
from orchestration.result_classifier import classify, Outcome, artifact_argv
from orchestration.stage_runner import with_tool_recovery
from orchestration.test_preflight import run_reproducer, vector_preflight, log_markers
from orchestration.processes import run_command


class ProtocolTests(unittest.TestCase):
    def test_clean_fenced_prose_before_after(self):
        raw = '{"verdict":"approve","critique":"checked {signals}"}'
        for value in (raw, '```json\n' + raw + '\n```', 'Reasoning\n' + raw,
                      raw + '\nExplanation', 'Reasoning\n```json\n' + raw + '\n```\nDone'):
            with self.subTest(value=value):
                self.assertEqual(parse_agent_response('critic', value)['verdict'], 'approve')

    def test_invalid_fields_and_ambiguity(self):
        for raw in ('{', '[]', '{}', '{"critique":"fine"}',
                    '{"verdict":"yes","critique":"fine"}',
                    '{"verdict":"approve","critique":"fine"} {}'):
            with self.subTest(raw=raw), self.assertRaises(AgentOutputInvalid):
                parse_agent_response('critic', raw)

    def test_missing_verdict_format_repair_saved(self):
        artifacts = {}
        repair = Mock(return_value='{"verdict":"revise","critique":"needs work"}')
        result = structured_response('critic', '{"critique":"needs work"}', repair, artifacts.__setitem__)
        self.assertEqual(result['verdict'], 'revise')
        self.assertEqual(set(artifacts), {'original.txt','validation-errors.json','format-repair.txt','parsed.json'})
        repair.assert_called_once()
        self.assertIn('Do not redo technical work', repair.call_args.args[0])

    def test_failed_repair_is_typed_and_bounded(self):
        artifacts, repair = {}, Mock(return_value='not JSON')
        with self.assertRaises(AgentOutputInvalid):
            structured_response('critic', '{}', repair, artifacts.__setitem__)
        repair.assert_called_once()
        self.assertEqual(len(artifacts['validation-errors.json']), 2)
        self.assertIn('format-repair.txt', artifacts)

    def test_fixer_prose_does_not_need_repair(self):
        repair = Mock()
        result = structured_response('rtl_fixer', 'Based on evidence: {"changed":true,"report":"one fix"}\nDone', repair, Mock())
        self.assertTrue(result['changed'])
        repair.assert_not_called()

    def test_architect_and_tester_schema(self):
        with self.assertRaises(AgentOutputInvalid):
            parse_agent_response('architect', '{"target":"x"}')
        with self.assertRaises(AgentOutputInvalid):
            parse_agent_response('tester', '{"found_bug":"true","report":"x"}')
        self.assertFalse(parse_agent_response('tester', '{"found_bug":false,"report":"no finding"}')['found_bug'])


class ClassifierTests(unittest.TestCase):
    advisory = ("[0] %Warning: riscvassertions_wally.sv:45: testbench.riscvassertions_wally: "
                "Some regression tests will fail if UNCORE_RAM_RANGE is less than 64'h07FFFFFF\n")

    def test_ram_advisory_still_requires_complete_comparison(self):
        for complete, equal, expected in (
                (True, True, Outcome.MATCH), (True, False, Outcome.MISMATCH_CONFIRMED),
                (False, True, Outcome.TEST_INVALID), (True, None, Outcome.TEST_INVALID)):
            with self.subTest(complete=complete, equal=equal):
                self.assertEqual(classify({'returncode': 0}, self.advisory,
                    complete=complete, equal=equal).status, expected)

    def test_ram_advisory_does_not_hide_actual_failures(self):
        for marker, expected in (
                ('FAIL: bad result', Outcome.TEST_INVALID),
                ('%Warning: Assertion failed', Outcome.TEST_INVALID),
                ('%Error: simulator stopped', Outcome.TOOL_FAILURE),
                ('FAILURE: Watch Dog Time Out', Outcome.DUT_WATCHDOG_FAILURE)):
            for log in (self.advisory + marker, marker + '\n' + self.advisory,
                        self.advisory.rstrip() + ' ' + marker):
                with self.subTest(log=log):
                    with tempfile.TemporaryDirectory() as directory:
                        path = Path(directory) / 'wally.log'
                        path.write_text(log)
                        for text in (log, log_markers(path)):
                            self.assertEqual(classify({'returncode': 0}, text,
                                complete=True, equal=True).status, expected)

    def test_watchdog_zero_is_not_host_timeout(self):
        result = classify({'returncode':0}, 'FAILURE: Watch Dog Time Out', complete=True, equal=False)
        self.assertEqual(result.status, Outcome.DUT_WATCHDOG_FAILURE)
        self.assertFalse(result.timed_out)
        self.assertFalse(result.passed)

    def test_host_timeout(self):
        self.assertEqual(classify({'returncode':-9,'timed_out':True}).status, Outcome.INFRA_TIMEOUT)

    def test_exit_one_never_proves_mismatch(self):
        self.assertEqual(classify({'returncode':1}, complete=True, equal=False).status, Outcome.TOOL_FAILURE)

    def test_complete_independent_artifacts(self):
        self.assertEqual(classify({'returncode':0}, complete=True, equal=False).status, Outcome.MISMATCH_CONFIRMED)
        self.assertEqual(classify({'returncode':0}, complete=True, equal=True).status, Outcome.MATCH)
        self.assertEqual(classify({'returncode':0}, equal=False).status, Outcome.TEST_INVALID)

    def test_build_and_oracle_errors(self):
        self.assertEqual(classify({'returncode':1}, build_ok=False).status, Outcome.BUILD_FAILURE)
        self.assertEqual(classify({'returncode':0}, oracle_ok=False).status, Outcome.ORACLE_FAILURE)

    def test_masking_boundary_rejected(self):
        for command in ('reproducer.sh || exit 1', 'reproducer.sh || true', 'exit 1',
                        'bash -c "exit 1"', 'python -c "print(1)"', ['repro.sh', ';exit 1']):
            with self.subTest(command=command), self.assertRaises(ValueError):
                artifact_argv(command, Path('/tmp'))


class RetryTests(unittest.TestCase):
    class RateLimit(Exception):
        retry_after = 3
        exit_code = 1

    def test_rate_limit_then_success_same_closure(self):
        response = SimpleNamespace(success=True, result='done')
        call = Mock(side_effect=[self.RateLimit(), response])
        emit, sleep = Mock(), Mock()
        self.assertIs(retry_call(call, lambda e:isinstance(e,self.RateLimit), emit, sleep=sleep), response)
        sleep.assert_called_once_with(3)
        self.assertEqual(call.call_args_list[0], call.call_args_list[1])
        self.assertEqual(emit.call_args_list[0].args[0], 'API_RATE_LIMIT')
        self.assertEqual(emit.call_args.args[0], 'RATE_LIMIT_WAIT')

    def test_exhaustion(self):
        call, sleep, emit = Mock(side_effect=self.RateLimit()), Mock(), Mock()
        with self.assertRaises(self.RateLimit):
            retry_call(call, lambda e:isinstance(e,self.RateLimit), emit, RetryPolicy(1), sleep)
        self.assertEqual(call.call_count, 2)
        events = [entry.kwargs for entry in emit.call_args_list if entry.args[0] == 'API_RATE_LIMIT']
        self.assertEqual([entry['will_retry'] for entry in events], [True, False])
        self.assertEqual([entry['attempt_number'] for entry in events], [1, 2])
        self.assertEqual(events[-1]['max_attempts'], 2)

    def test_long_retry_after_stops_without_retrying_early(self):
        error=self.RateLimit();error.retry_after=10000
        call,sleep=Mock(side_effect=error),Mock()
        with self.assertRaises(self.RateLimit):
            retry_call(call,lambda e:isinstance(e,self.RateLimit),Mock(),sleep=sleep)
        call.assert_called_once();sleep.assert_not_called()

    def test_generic_exit_one_not_rate_limit(self):
        call = Mock(return_value=SimpleNamespace(success=False, result='', stderr='CLI broke', returncode=1))
        emit, sleep = Mock(), Mock()
        with self.assertRaises(AgentCallFailure):
            retry_call(call, lambda e:False, emit, sleep=sleep)
        sleep.assert_not_called()
        self.assertEqual(emit.call_args.kwargs['stderr'], 'CLI broke')

    def test_empty_response_retries_then_succeeds(self):
        empty = SimpleNamespace(success=True, result='', api_metadata={})
        success = SimpleNamespace(success=True, result='plan')
        call, emit, sleep = Mock(side_effect=[empty, success]), Mock(), Mock()
        self.assertIs(retry_call(call, lambda e:False, emit, sleep=sleep), success)
        sleep.assert_called_once_with(5)
        self.assertEqual(call.call_count, 2)
        self.assertEqual(emit.call_args_list[0].args[0], 'AGENT_EMPTY_RESPONSE')

    def test_empty_response_retry_is_bounded(self):
        empty = SimpleNamespace(success=True, result='', api_metadata={})
        call, emit, sleep = Mock(return_value=empty), Mock(), Mock()
        with self.assertRaises(AgentCallFailure):
            retry_call(call, lambda e:False, emit, sleep=sleep)
        self.assertEqual(call.call_count, 2)
        sleep.assert_called_once_with(5)
        event = emit.call_args_list[-1]
        self.assertEqual(event.args[0], 'AGENT_EMPTY_RESPONSE')
        self.assertFalse(event.kwargs['will_retry'])

    def test_zero_exit_empty_response_retries_even_if_unsuccessful(self):
        empty = SimpleNamespace(success=False, result='', returncode=0, api_metadata={})
        success = SimpleNamespace(success=True, result='plan')
        call, sleep = Mock(side_effect=[empty, success]), Mock()
        self.assertIs(retry_call(call, lambda e:False, Mock(), sleep=sleep), success)
        sleep.assert_called_once_with(5)

    def test_mcp_restart_once_same_call(self):
        first, second = Mock(), Mock()
        first.ready.side_effect = MCPFailure('hung')
        create = Mock(side_effect=[first,second])
        call = Mock(return_value={'result':'ok'})
        self.assertEqual(with_tool_recovery(create, call, Mock()), {'result':'ok'})
        self.assertEqual(create.call_count, 2)
        first.stop.assert_called_once();second.stop.assert_called_once()
        call.assert_called_once_with(second)

    def test_mcp_retry_exhaustion(self):
        tool = Mock();tool.ready.side_effect=MCPFailure('hung')
        create=Mock(return_value=tool)
        with self.assertRaises(MCPFailure):
            with_tool_recovery(create, Mock(), Mock())
        self.assertEqual(create.call_count, 2)
        self.assertEqual(tool.stop.call_count, 2)


class ArtifactTests(unittest.TestCase):
    def setUp(self):
        self.tmp=tempfile.TemporaryDirectory();self.addCleanup(self.tmp.cleanup)
        self.root=Path(self.tmp.name)/'work';self.root.mkdir()
        self.tests=Path(self.tmp.name)/'artifacts';self.tests.mkdir()
        subprocess.run(['git','init','-q',str(self.root)],check=True)
        (self.root/'src').mkdir();(self.root/'src/test.sv').write_text('original RTL')
        (self.root/'setup.sh').write_text('original setup')
        self.git('add','.')
        self.git('-c','user.name=Test','-c','user.email=test@example.test','commit','-qm','fixture')
    def git(self,*args):
        return subprocess.run(['git','-C',str(self.root),*args],capture_output=True,text=True,check=True).stdout
    def test_setup_restored_and_next_stage_clean(self):
        before=snapshot(str(self.root),str(self.tests),'tester')
        (self.root/'setup.sh').write_text('unauthorized')
        with self.assertRaises(ArtifactViolation):finish(before)
        self.assertEqual((self.root/'setup.sh').read_text(),'original setup')
        self.assertEqual(self.git('status','--porcelain'),'')
        self.assertTrue((Path(before)/'unauthorized/source/setup.sh').is_file())
        finish(snapshot(str(self.root),str(self.tests),'tester'))
    def test_valid_rtl_retained_unauthorized_restored(self):
        before=snapshot(str(self.root),str(self.tests),'rtl_fixer')
        (self.root/'src/test.sv').write_text('candidate RTL')
        (self.root/'setup.sh').write_text('unauthorized')
        with self.assertRaises(ArtifactViolation):finish(before)
        self.assertIn('src/test.sv',self.git('diff','--name-only'))
        self.assertNotIn('setup.sh',self.git('diff','--name-only'))
    def test_critic_original_test_restored(self):
        source=self.tests/'test.S';source.write_text('original')
        before=snapshot(str(self.root),str(self.tests),'critic');source.write_text('bad')
        with self.assertRaises(ArtifactViolation):finish(before)
        self.assertEqual(source.read_text(),'original')
    def test_lifecycle_events_do_not_violate_critic_or_fixer_guard(self):
        import inspect
        import loop
        root_events = self.tests / 'events.jsonl'
        root_events.write_text('controller history\n')
        for role in ('critic', 'rtl_fixer'):
            before = snapshot(str(self.root), str(self.tests), role)
            inspect.unwrap(loop.save_lifecycle_events)(str(self.tests), [
                dict(status='TOOL_STOP_TIMING', agent=role, duration_seconds=.1)])
            finish(before)
            self.assertEqual(root_events.read_text(), 'controller history\n')
        self.assertEqual(len((self.tests / 'logs/lifecycle-events.jsonl').read_text().splitlines()), 2)
        before = snapshot(str(self.root), str(self.tests), 'critic')
        root_events.write_text('agent tampering')
        with self.assertRaises(ArtifactViolation):
            finish(before)
        self.assertEqual(root_events.read_text(), 'controller history\n')
    def test_new_unauthorized_file_removed(self):
        for role in ('tester', 'rtl_fixer'):
            with self.subTest(role=role):
                before=snapshot(str(self.root),str(self.tests),role)
                (self.root/'new-env.sh').write_text('bad')
                with self.assertRaises(ArtifactViolation):finish(before)
                self.assertFalse((self.root/'new-env.sh').exists())
                self.assertEqual((Path(before)/'unauthorized/source/new-env.sh').read_text(), 'bad')

    def fixer_commands(self, *commands):
        import asyncio
        import threading
        from orchestration.tool_runtime import ManagedBashTool
        tool = object.__new__(ManagedBashTool)
        tool.role = 'rtl_fixer'
        tool.work_dir, tool.test_dir = str(self.root), str(self.tests)
        tool.timeout_seconds = 5
        tool._cancel_event = threading.Event()
        tool._metrics = dict(commands=0, command_seconds=0)
        async def execute():
            results = []
            for command in commands:
                result = json.loads(await tool.run_command(command))
                while result['status'] == 'RUNNING':
                    result = json.loads(await tool.command_status(result['job_id']))
                results.append(result)
            return results
        return asyncio.run(execute()), tool._metrics

    def test_fixer_relative_helper_and_rtl_edit_pass_guard(self):
        before = snapshot(str(self.root), str(self.tests), 'rtl_fixer')
        results, metrics = self.fixer_commands(
            'cat > patch_controller.sh <<\'SH\'\nprintf "candidate RTL" > "$WALLY/src/test.sv"\nSH\n'
            'bash ./patch_controller.sh\ncd "$WALLY"',
            'pwd; test -f patch_controller.sh; test -f "$WALLY/src/test.sv"')
        self.assertEqual([r['status'] for r in results], ['PASS', 'PASS'])
        self.assertEqual(metrics['commands'], 2)
        self.assertIn(str(self.tests/'fixer'), results[1]['tail'])
        self.assertTrue((self.tests/'fixer/patch_controller.sh').is_file())
        self.assertFalse((self.root/'patch_controller.sh').exists())
        self.assertEqual((self.root/'src/test.sv').read_text(), 'candidate RTL')
        finish(before)

    def test_fixer_scratch_does_not_allow_original_test_edits(self):
        original = self.tests/'test.S'
        original.write_text('frozen test')
        before = snapshot(str(self.root), str(self.tests), 'rtl_fixer')
        results, _ = self.fixer_commands('printf changed > ../test.S')
        self.assertEqual(results[0]['status'], 'PASS')
        with self.assertRaises(ArtifactViolation):
            finish(before)
        self.assertEqual(original.read_text(), 'frozen test')

    def test_fixer_rejects_redirected_scratch_without_execution(self):
        (self.tests/'fixer').symlink_to(self.root, target_is_directory=True)
        results, metrics = self.fixer_commands('printf bad > patch_controller.sh')
        self.assertEqual(results[0]['status'], 'INVALID_COMMAND')
        self.assertFalse((self.root/'patch_controller.sh').exists())
        self.assertEqual(metrics['commands'], 0)


class LoggingTests(unittest.TestCase):
    def test_only_successful_health_requests_are_quiet(self):
        import logging
        from orchestration.event_log import QuietSuccessfulHealthChecks
        filt = QuietSuccessfulHealthChecks()
        def record(text, level=logging.INFO):
            return logging.LogRecord('httpx', level, '', 0, text, (), None)
        self.assertFalse(filt.filter(record('HTTP Request: GET http://host:8000/healthz "HTTP/1.1 200 OK"')))
        for text in ('HTTP Request: GET http://host:8000/healthz "HTTP/1.1 503 Unavailable"',
                     'HTTP Request: GET http://host:8000/api "HTTP/1.1 200 OK"', 'connection failed'):
            self.assertTrue(filt.filter(record(text)))

    def test_rate_limit_log_explains_action_without_exposing_secrets(self):
        with tempfile.TemporaryDirectory() as temporary:
            for retry in (True, False):
                with self.assertLogs('wallyguard.events', level='INFO') as logs:
                    event(Path(temporary)/'events.jsonl', 'API_RATE_LIMIT', stage='architect',
                          model='provider/model', attempt_number=2, max_attempts=5,
                          retry_after=60, will_retry=retry, error='Resource exhausted Authorization=private')
                text = '\n'.join(logs.output)
                self.assertIn('attempt=2/5', text)
                self.assertIn('retry in 60s' if retry else 'stopping', text)
                self.assertNotIn('private', text)

    def test_one_logical_event_once(self):
        stream=io.StringIO()
        logger=configure_logger('wallyguard.test-once',stream)
        configure_logger('wallyguard.test-once',stream)
        logger.info('logical event')
        self.assertEqual(stream.getvalue().count('logical event'),1)
        self.assertFalse(logger.propagate)
    def test_jsonl_and_redaction(self):
        with tempfile.TemporaryDirectory() as temporary:
            path=Path(temporary)/'events.jsonl'
            event(path,'API_RATE_LIMIT',readable=False,api_key='secret',error='Authorization=abc Bearer foobar',stage='tester')
            records=path.read_text().splitlines();self.assertEqual(len(records),1)
            self.assertNotIn('foobar',records[0]);self.assertNotIn('"secret"',records[0])
            self.assertIn('timestamp',json.loads(records[0]))


class PreflightTests(unittest.TestCase):
    def setUp(self):
        self.tmp=tempfile.TemporaryDirectory();self.addCleanup(self.tmp.cleanup)
        self.root=Path(self.tmp.name);self.tests=self.root/'tests';self.tests.mkdir()
        (self.tests/'build').mkdir();(self.tests/'build/test.elf').write_bytes(b'ELF')
        (self.root/'bin').mkdir()
        for name in ('wsim','spike'):(self.root/'bin'/name).write_text('placeholder')
        config = self.root/'config/rv64gc/config.vh'
        config.parent.mkdir(parents=True)
        config.write_text("localparam XLEN = 32'd64;\nlocalparam logic F_SUPPORTED = 1;\n"
                          "localparam logic D_SUPPORTED = 1;\nlocalparam logic ZFINX_SUPPORTED = 0;\n")
        self.contract={'version':1,'oracle':'spike','build':['make'],'trap_vectors':[]}
        for name in ('control','test'):
            self.contract[name]={'wally':[str(self.root/'bin/wsim'),'rv64gc','--elf',str(self.tests/'build/test.elf')],
                'oracle':[str(self.root/'bin/spike'),'--isa=rv64gc',str(self.tests/'build/test.elf')],
                'wally_signature':f'build/{name}-wally.sig','oracle_signature':f'build/{name}-oracle.sig',
                'wally_complete':'WALLY_DONE','oracle_complete':'SPIKE_DONE'}
    def run_contract(self, bad=False, timeout=3):
        def run(command, log, *args):
            log.parent.mkdir(parents=True,exist_ok=True)
            name=log.stem
            log.write_text('SPIKE_DONE\nWALLY_DONE\n')
            if name != 'build':
                group,which=name.split('-')
                (self.tests/'build'/f'{group}-{which}.sig').write_text('02\n' if bad and group=='control' and which=='wally' else ('01\n' if group=='control' or which=='oracle' else '02\n'))
            return {'status':'PASS','returncode':0,'timed_out':False,'log_path':str(log),'deadline':args[0]}
        with patch('orchestration.test_preflight.validate_spike'), patch('orchestration.test_preflight.run_command',side_effect=run),patch('orchestration.test_preflight.shutil.which',return_value=str(self.root/'bin/spike')):
            return run_reproducer(str(self.root),str(self.tests),self.contract,str(self.root/'run.log'),timeout)
    def test_oracle_deadline_does_not_shorten_build_or_dut(self):
        with patch.dict('os.environ', {'WALLY_ORACLE_TIMEOUT':'60'}):
            result=self.run_contract(timeout=900)
        self.assertEqual(result['steps']['build']['deadline'],900)
        self.assertEqual(result['steps']['control-oracle']['deadline'],60)
        self.assertEqual(result['steps']['test-oracle']['deadline'],60)
        self.assertEqual(result['steps']['test-wally']['deadline'],900)
    def test_controller_supplies_test_dir_to_real_saved_build_script(self):
        script = self.tests / 'build_reproducer.sh'
        (self.tests/'source.txt').write_text('source in run directory')
        script.write_text('#!/bin/bash\nset -eu\nmkdir -p "$WALLY_TEST_DIR/build"\n'
                          'printf "%s" "$WALLY_TEST_DIR" > "$WALLY_TEST_DIR/build/env.txt"\n'
                          'cat source.txt > build/source-copy.txt\n')
        self.contract['build'] = ['bash', str(script.relative_to(self.root))]
        real_run = run_command
        def execute(command, path, timeout, env, cwd):
            self.assertEqual(env['WALLY_TEST_DIR'], str(self.tests.resolve()))
            if path.stem == 'build':
                self.assertEqual(cwd,self.tests.resolve())
                self.assertEqual(command[1],str(script.resolve()))
                return real_run(command, path, timeout, env, cwd)
            path.write_text('stop after build')
            return dict(status='COMMAND_FAILED', returncode=1, log_path=str(path))
        with patch.dict(os.environ, {'WALLY_TEST_DIR': '/wrong/inherited/path'}), \
             patch('orchestration.test_preflight.validate_spike'), \
             patch('orchestration.test_preflight.shutil.which', return_value=str(self.root/'bin/spike')), \
             patch('orchestration.test_preflight.run_command', side_effect=execute):
            result = run_reproducer(str(self.root), str(self.tests), self.contract, str(self.root/'env.log'), 3)
        self.assertEqual(result['steps']['build']['status'], 'PASS')
        self.assertEqual((self.tests/'build/env.txt').read_text(), str(self.tests.resolve()))
        self.assertEqual((self.tests/'build/source-copy.txt').read_text(),'source in run directory')
        self.assertFalse(result['passed'])  # Build success is not oracle/DUT proof.
    def test_real_controller_compares_artifacts(self):
        self.assertEqual(self.run_contract()['status'],Outcome.MISMATCH_CONFIRMED)
    def test_broken_control_blocks_acceptance(self):
        self.assertEqual(self.run_contract(bad=True)['status'],Outcome.TEST_INVALID)
    def test_comparison_evidence_survives_later_signature_overwrite(self):
        result=self.run_contract()
        saved=Path(result['captured']['test-wally_signature.sig']['path'])
        (self.tests/'build/test-wally.sig').write_text('ffff\n')
        self.assertEqual(saved.read_text(),'02\n')
        self.assertIn('test.elf',result['captured'])

    def test_missing_contract_fails_closed(self):
        result=run_reproducer(str(self.root),str(self.tests),{},str(self.root/'run.log'),3)
        self.assertEqual(result['status'],Outcome.TEST_INVALID)
    def test_shell_masking_contract_rejected(self):
        self.contract['build']='reproducer.sh || exit 1'
        self.assertEqual(self.run_contract()['status'],Outcome.TEST_INVALID)
    def test_fake_oracle_script_rejected(self):
        self.contract['test']['oracle']=['bash',str(self.tests/'fake.sh')]
        (self.tests/'fake.sh').write_text('exit 1')
        self.assertEqual(self.run_contract()['status'],Outcome.TEST_INVALID)
    def test_vector_metadata_required(self):
        (self.tests/'test.S').write_text('csrw mtvec, t0')
        self.assertEqual(self.run_contract()['status'],Outcome.TEST_INVALID)
    def test_vector_misalignment_detected(self):
        self.contract['trap_vectors']=[{'elf':'build/test.elf','symbol':'handler'}]
        def run(argv,log,*args):log.write_text('80000002 T handler\n');return {'returncode':0,'log_path':str(log)}
        with patch('orchestration.test_preflight.shutil.which',return_value='/bin/nm'),patch('orchestration.test_preflight.run_command',side_effect=run):
            errors=vector_preflight(self.contract,self.tests,self.root,self.root,3,{'PATH':''})
        self.assertIn('4-byte-aligned',errors[0])


class ProcessTests(unittest.TestCase):
    def test_stdout_stderr_and_timeout(self):
        with tempfile.TemporaryDirectory() as temporary:
            log=Path(temporary)/'process.log'
            result=run_command([sys.executable,'-c','import time; print("out",flush=True); time.sleep(10)'],log,.15)
            self.assertEqual(result['status'],'TIMEOUT')
            self.assertIn('out',log.read_text())
    def test_child_group_cleaned(self):
        with tempfile.TemporaryDirectory() as temporary:
            pidfile=Path(temporary)/'pid'
            script='import subprocess,time,pathlib,sys; p=subprocess.Popen([sys.executable,"-c","import time; time.sleep(60)"]); pathlib.Path(sys.argv[1]).write_text(str(p.pid)); time.sleep(60)'
            result=run_command([sys.executable,'-c',script,str(pidfile)],Path(temporary)/'log',.3)
            self.assertEqual(result['status'],'TIMEOUT')
            pid=int(pidfile.read_text());stat=Path(f'/proc/{pid}/stat')
            self.assertTrue(not stat.exists() or stat.read_text().rsplit(')',1)[1].split()[0]=='Z')



class ToolRuntimeTests(unittest.TestCase):
    def test_health_progress_reflects_commands_and_is_throttled(self):
        from orchestration.tool_runtime import ManagedBashTool
        tool = object.__new__(ManagedBashTool)
        tool.name='example'; tool.role='architect'; tool.hostname='127.0.0.1'; tool.port=8765
        tool._stage_started=0; tool._metrics=dict(commands=7, polls=2)
        tool._jobs={'finished':Mock(done=lambda:True), 'active':Mock(done=lambda:False)}
        with patch('orchestration.tool_runtime.time.monotonic',return_value=100):
            progress=tool.progress()
        self.assertEqual(progress['running_commands'],1)
        response=Mock();response.json.return_value=progress
        with patch('httpx.Client') as factory, patch('orchestration.tool_runtime.configure_logger') as logger, \
             patch('chia.base.tools.ChiaTool.resolve_tool_url',side_effect=lambda url:url), \
             patch('orchestration.tool_runtime.time.monotonic',side_effect=[100,115,161]):
            factory.return_value.__enter__.return_value.get.return_value=response
            tool.ready(); tool.ready(); tool.ready()
        self.assertEqual(logger.return_value.info.call_count,2)
        self.assertIn(7,logger.return_value.info.call_args.args)

    def test_readiness_uses_health_endpoint(self):
        from orchestration.tool_runtime import ManagedBashTool
        tool=object.__new__(ManagedBashTool);tool.hostname='127.0.0.1';tool.port=8765
        response=Mock();response.json.return_value={'status':'ready'}
        client=Mock();client.get.return_value=response
        with patch('httpx.Client') as factory,patch('chia.base.tools.ChiaTool.resolve_tool_url',side_effect=lambda url:url):
            factory.return_value.__enter__.return_value=client
            tool.ready()
        client.get.assert_called_once_with('http://127.0.0.1:8765/healthz')

    def test_hung_actor_is_force_cleaned(self):
        from orchestration.tool_runtime import ManagedBashTool
        import ray
        tool=object.__new__(ManagedBashTool);actor=Mock();tool._server_actor=actor
        with patch('ray.get',side_effect=ray.exceptions.GetTimeoutError()),patch('ray.kill') as kill:
            tool.stop()
        kill.assert_called_once_with(actor,no_restart=True)
        self.assertIsNone(tool._server_actor)

    def test_shutdown_cancels_owned_command(self):
        import threading
        cancel=threading.Event()
        with tempfile.TemporaryDirectory() as temporary:
            timer=threading.Timer(.1,cancel.set);timer.start()
            try:
                result=run_command([sys.executable,'-c','import time; time.sleep(30)'],Path(temporary)/'log',20,cancellation_event=cancel)
            finally:timer.cancel()
        self.assertEqual(result['status'],'INFRA_FAILURE')
        self.assertLess(result['duration_seconds'],3)

    def test_format_repair_cannot_call_tools(self):
        import loop
        from orchestration.tool_runtime import ManagedBashTool
        tool=Mock();tool.name='tester_test';tool.submitted_result.return_value=None
        response=SimpleNamespace(result='{"critique":"needs revision"}',stderr='',returncode=0,stream_result='')
        repaired=SimpleNamespace(result='{"verdict":"revise","critique":"needs revision"}')
        with patch.object(loop,'ManagedBashTool',return_value=tool),patch.object(loop,'DiagnosticOpenCodeLLM') as model,\
             patch.object(loop,'prompt_with_rate_limit_retry',side_effect=[response,repaired]) as prompt, patch.object(loop,'remote'):
            result=loop.ask_agent('critic','/fixture',loop.CRITIC_PROMPT,{'test_dir':'/fixture/test','models':{'critic':'mock'}})
        self.assertEqual(result['verdict'],'revise')
        self.assertEqual(prompt.call_args_list[1].args[2],[])
        self.assertEqual(model.call_args_list[1].kwargs['config'],{'*':'deny'})
        self.assertFalse(model.call_args_list[1].kwargs['dangerously_skip_permissions'])

class NativeSelfCheckTests(unittest.TestCase):
    setUp = PreflightTests.setUp
    def run_selfcheck(self, *, matched=False, watchdog=False, tool_error=False, extra_error='', summary=True, equal_values=False, advisory=False):
        header=bytearray(64);header[:5]=b'\x7fELF\x02';header[18:20]=(243).to_bytes(2,'little')
        (self.tests/'build/test.elf').write_bytes(header)
        source=self.root/'testbench/testbench.sv';source.parent.mkdir()
        source.write_text('task automatic CheckSelfCheck;\n  $stop;\nendtask\n')
        for name in ('control','test'):
            self.contract[name]['mode']='selfcheck'
            self.contract[name]['oracle'] += [f'+signature={self.tests}/build/{name}-oracle.sig', '+signature-granularity=8']
        def run(argv,log,*args):
            log.parent.mkdir(parents=True,exist_ok=True)
            if log.stem.endswith('symbols'):
                content='80001000 D selfcheck_record\n80001000 D begin_signature\n80001028 D end_signature\n80002000 D tohost\n'
            elif log.stem.endswith('elf-prepare'):
                content=''
                for suffix in ('.memfile','.objdump'):
                    Path(str(self.tests/'build/test.elf')+suffix).write_text('generated from ELF')
            elif log.stem.endswith('wally'):
                elf=str(self.tests/'build/test.elf')
                content=elf+' succeeded.  Brilliant!!!\n'
                if tool_error:
                    content='make: *** [control.elf.memfile] Error 1\n'+content
                if log.stem.startswith('test') and not matched:
                    content='FAILURE: Watch Dog Time Out\n' if watchdog else f'  Error on test {elf} result 0: adr = 80000100 sim (D$) 00000002 signature = 00000001\n'
                    if equal_values:
                        content = content.replace('sim (D$) 00000002', 'sim (D$) 00000001')
                    if not watchdog:
                        if summary:content+=f'{elf} failed with 1 errors. :(\n'
                        content+=f'%Error: {source}:2: Verilog $stop\nAborting...\n'+extra_error
            else:
                content=''
                if log.stem.endswith('oracle'):
                    (self.tests/'build'/f'{log.stem}.sig').write_text('0000000000000001\n'+'0000000000000000\n'*4)
            if advisory and log.stem.endswith('wally'):
                content = ClassifierTests.advisory + content
            log.write_text(content)
            failed=log.stem=='test-wally' and not matched
            return {'status':'COMMAND_FAILED' if failed else 'PASS','returncode':134 if failed else 0,
                    'timed_out':False,'log_path':str(log)}
        with patch('orchestration.test_preflight.validate_spike'), patch('orchestration.test_preflight.run_command',side_effect=run),patch('orchestration.test_preflight.shutil.which',side_effect=lambda name,**kw:str(self.root/'bin'/name)):
            return run_reproducer(str(self.root),str(self.tests),self.contract,str(self.root/'run.log'),3)
    def test_native_expected_actual_mismatch(self):
        result=self.run_selfcheck()
        self.assertEqual(result['status'],Outcome.MISMATCH_CONFIRMED)
        self.assertEqual(result['fingerprint']['wally'],'00000002')
    def test_native_match_with_ram_advisory(self):
        self.assertEqual(self.run_selfcheck(matched=True, advisory=True)['status'], Outcome.MATCH)

    def test_native_match(self):
        self.assertEqual(self.run_selfcheck(matched=True)['status'],Outcome.MATCH)
    def test_equal_values_in_failure_record_are_invalid_not_a_bug(self):
        result=self.run_selfcheck(equal_values=True)
        self.assertEqual(result['status'],Outcome.TEST_INVALID)
        self.assertFalse(result['passed'])
        self.assertIn('a2=expected, a3=actual',result['reason'])
    def test_malformed_record_cannot_hide_real_tool_failure(self):
        result=self.run_selfcheck(equal_values=True,extra_error='make: *** [simulator] Error 2\n')
        self.assertEqual(result['status'],Outcome.TOOL_FAILURE)
    def test_expected_stop_cannot_hide_later_tool_error(self):
        self.assertEqual(self.run_selfcheck(extra_error='make: *** [simulator] Error 2\n')['status'],Outcome.TOOL_FAILURE)
    def test_mismatch_without_failure_summary_is_not_promoted(self):
        self.assertEqual(self.run_selfcheck(summary=False)['status'],Outcome.TOOL_FAILURE)
    def test_native_watchdog_is_not_promoted(self):
        self.assertEqual(self.run_selfcheck(watchdog=True)['status'],Outcome.DUT_WATCHDOG_FAILURE)
    def test_make_error_overrides_apparent_selfcheck_success(self):
        result=self.run_selfcheck(matched=True,tool_error=True)
        self.assertEqual(result['status'],Outcome.TEST_INVALID)
        self.assertEqual(result['control']['status'],Outcome.TOOL_FAILURE)

class OpenCodeDiagnosticsTests(unittest.TestCase):
    def test_generic_failure_preserves_stdout_stderr(self):
        from inspect import unwrap
        from orchestration.tool_runtime import DiagnosticOpenCodeLLM
        from chia.models.opencode import UnknownOpenCodeError
        llm=object.__new__(DiagnosticOpenCodeLLM)
        response=SimpleNamespace(result='partial answer',stream_result='full stdout',stderr='bad config',returncode=1,success=False)
        llm._run_opencode=Mock(return_value=response)
        llm._classify_error=Mock(side_effect=UnknownOpenCodeError('node',1,'CLI failed',stderr='bad config'))
        result=unwrap(DiagnosticOpenCodeLLM.prompt)(llm,'prompt',[])
        self.assertFalse(result.success)
        self.assertEqual(result.stream_result,'full stdout')
        self.assertEqual(result.stderr,'bad config')
        self.assertIn('error_type',result.api_metadata)

    def test_rate_metadata_uses_bounded_backoff_without_retry_after(self):
        limited=SimpleNamespace(success=False,result='',stderr='rate details',stream_result='api stream',returncode=1,
                                api_metadata={'error_type':'rate_limit','message':'429'})
        success=SimpleNamespace(success=True,result='done')
        sleep,emit=Mock(),Mock()
        self.assertIs(retry_call(Mock(side_effect=[limited,success]),lambda e:False,emit,RetryPolicy(1,2,5),sleep),success)
        sleep.assert_called_once_with(2)
        self.assertEqual(emit.call_args_list[0].kwargs['stderr'],'rate details')

    def test_rate_failure_survives_worker_serialization(self):
        import pickle
        from orchestration.retry_policy import ProviderRateLimited
        response=SimpleNamespace(api_metadata={'error_type':'rate_limit','retry_after':3},returncode=1,
                                 result='partial',stderr='details',stream_result='transcript')
        restored=pickle.loads(pickle.dumps(ProviderRateLimited(response)))
        self.assertEqual(restored.retry_after,3)
        self.assertEqual(restored.stderr,'details')

    def test_capture_keeps_json_clean_and_separate_stderr(self):
        from orchestration.tool_runtime import DiagnosticOpenCodeLLM
        llm=object.__new__(DiagnosticOpenCodeLLM);llm.timeout_seconds=3
        result=llm._capture([sys.executable,'-c','import sys; print("{}",flush=True); print("diagnostic",file=sys.stderr)'],os.environ.copy())
        self.assertEqual(json.loads(result.stdout),{})
        self.assertEqual(result.stderr.strip(),'diagnostic')

class ExtraSafetyTests(unittest.TestCase):
    setUp = ArtifactTests.setUp
    git = ArtifactTests.git
    # Exercise controller-owned files without replaying the inherited test cases.
    def test_ignored_environment_file_is_protected(self):
        (self.root/'.gitignore').write_text('.env\n')
        (self.root/'.env').write_text('original environment')
        before=snapshot(str(self.root),str(self.tests),'tester')
        (self.root/'.env').write_text('changed environment')
        with self.assertRaises(ArtifactViolation):finish(before)
        self.assertEqual((self.root/'.env').read_text(),'original environment')

    def test_controller_snapshot_is_protected(self):
        source=self.tests/'controller/inputs-0/test.S';source.parent.mkdir(parents=True);source.write_text('frozen')
        before=snapshot(str(self.root),str(self.tests),'tester');source.write_text('forged')
        with self.assertRaises(ArtifactViolation):finish(before)
        self.assertEqual(source.read_text(),'frozen')

class LifecycleTests(unittest.TestCase):
    def test_actor_startup_shutdown_handshake(self):
        import threading
        import time
        from orchestration.tool_runtime import ToolServer
        cls=ToolServer.__ray_metadata__.modified_class
        server=cls()
        tool=SimpleNamespace(name='fixture',mcp=Mock())
        created=[]
        class Uvicorn:
            def __init__(self, config):
                self.config=config;self.started=False;self.should_exit=False;created.append(self)
            def run(self):
                self.started=True
                while not self.should_exit:time.sleep(.005)
        with patch('uvicorn.Server',Uvicorn),patch('ray.util.get_node_ip_address',return_value='127.0.0.1'),\
             patch('ray.get_runtime_context',return_value=SimpleNamespace(get_node_id=lambda:'fixture')),\
             patch.dict(os.environ,{'CHIA_TOOL_BASE_PORT':'18900','CHIA_TOOL_MAX_PORT':'18900','CHIA_TOOL_ADVERTISE_HOST':'127.0.0.1'}):
            host,port,node=server.start(tool)
            self.assertEqual((host,port,node),('127.0.0.1',18900,'fixture'))
            self.assertIn('/healthz',[route.path for route in created[0].config.app.routes])
            self.assertTrue(server.stop())
            self.assertTrue(created[0].should_exit)
            self.assertTrue(tool._cancel_event.is_set())
            self.assertFalse(server.thread.is_alive())


class AsyncToolTests(unittest.IsolatedAsyncioTestCase):
    async def test_long_tool_returns_promptly_and_poll_preserves_log(self):
        import asyncio
        import threading
        import time
        from orchestration.tool_runtime import ManagedBashTool
        with tempfile.TemporaryDirectory() as temporary:
            tool=object.__new__(ManagedBashTool)
            tool.work_dir=temporary;tool.test_dir=temporary;tool.timeout_seconds=5
            tool._cancel_event=threading.Event();tool._response_wait=.01
            start=time.monotonic()
            pending=json.loads(await tool.run_command('sleep 0.3; echo complete'))
            self.assertEqual(pending['status'],'RUNNING')
            self.assertLess(time.monotonic()-start,.25)
            busy=json.loads(await tool.run_command('echo should-not-run'))
            self.assertEqual(busy['status'],'BUSY')
            self.assertEqual(busy['job_id'],pending['job_id'])
            await tool._jobs[pending['job_id']]
            result=json.loads(await tool.command_status(pending['job_id']))
            self.assertEqual(result['status'],'PASS')
            self.assertIn('complete',Path(result['log_path']).read_text())
            self.assertNotIn('should-not-run',Path(result['log_path']).read_text())

if __name__ == '__main__':
    unittest.main()
