"""Performance changes must preserve verification and cancellation behavior."""
import asyncio
from copy import deepcopy
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

from orchestration.context import agent_context
from orchestration.scaffold import seed_harness
from orchestration.test_preflight import contract_errors, run_reproducer
from orchestration.tool_runtime import ManagedBashTool
from orchestration.performance import report


class ContextTests(unittest.TestCase):
    def test_history_is_indexed_and_full_evidence_retained(self):
        context = {'history': [{'tag': str(i), 'target': 'MMU', 'status': 'no_bug',
                               'knowledge': 'x' * 4000, 'report': 'y' * 4000} for i in range(50)],
                   'history_dir': '/archive', 'plan': {'tester_prompt': 'exact assignment'},
                   'test_feedback': {'verification': {'reason': 'precise failure'}},
                   'timings': [], 'models': {'tester': 'model'}}
        before = deepcopy(context)
        architect = agent_context('architect', context)
        self.assertEqual(len(architect['history']), 40)
        self.assertEqual(architect['history'][0]['tag'], '10')
        self.assertNotIn('knowledge', architect['history'][0])
        self.assertLess(len(json.dumps(architect)), len(json.dumps(context)) / 10)
        tester = agent_context('tester', context)
        self.assertNotIn('history', tester)
        self.assertEqual(tester['test_feedback'], context['test_feedback'])
        tester['plan']['tester_prompt'] = 'changed copy'
        self.assertEqual(context, before)

    def test_fixer_and_critic_keep_verification_evidence(self):
        context = dict(plan={'target': 'x'}, tester={'reproducer': {'version': 1}},
                       baseline_reproducer={'fingerprint': 'baseline'},
                       baseline_regression={'passed': False}, bug_review={'verdict': 'approve'},
                       feedback={'reproducer': {'reason': 'precise failure'}},
                       fix={'regression': {'passed': False}})
        for role in ('rtl_fixer', 'critic'):
            result = agent_context(role, context)
            for key in ('tester', 'plan', 'baseline_reproducer', 'baseline_regression'):
                self.assertEqual(result[key], context[key])
        self.assertEqual(agent_context('rtl_fixer', context)['feedback'], context['feedback'])
        self.assertEqual(agent_context('critic', context)['fix'], context['fix'])


class PreflightTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.root = Path(self.tmp.name) / 'work'
        self.tests = Path(self.tmp.name) / 'run'
        self.root.mkdir()
        with patch('orchestration.scaffold.shutil.which', return_value='/usr/bin/spike'):
            seed_harness(str(self.root), str(self.tests))
        self.contract = json.loads((self.tests / 'reproducer.json').read_text())
        self.which = patch('orchestration.test_preflight.shutil.which', return_value='/usr/bin/spike')
        self.which.start()
        self.addCleanup(self.which.stop)

    def check(self):
        return contract_errors(self.contract, self.root, self.tests, {'PATH': ''})

    def test_scaffold_contract_is_ready_before_build(self):
        self.assertEqual(self.check(), [])
        self.assertIn('.error', (self.tests / 'tests/template.S.example').read_text())
        self.assertIn('begin_signature:', (self.tests / 'tests/selfcheck.h').read_text())
        self.assertFalse((self.tests / 'tests/test.S').exists())

    def test_scaffold_never_overwrites_work(self):
        path = self.tests / 'reproducer.json'
        path.write_text('existing')
        seed_harness(str(self.root), str(self.tests))
        self.assertEqual(path.read_text(), 'existing')

    def test_metadata_and_wrapper_rejected_before_build(self):
        (self.tests / 'tests/test.S').write_text('la t0, handler\ncsrw mtvec, t0\n')
        self.contract['test']['wally'][0] = str(self.tests / 'wrapper.sh')
        errors = self.check()
        self.assertTrue(any('handler' in e for e in errors))
        self.assertTrue(any('bin/wsim' in e for e in errors))
        with patch('orchestration.test_preflight.run_command') as command:
            result = run_reproducer(str(self.root), str(self.tests), self.contract,
                                    str(self.tests / 'logs/check.log'), 3)
        command.assert_not_called()
        self.assertEqual(result['status'], 'TEST_INVALID')
        self.assertGreaterEqual(result['duration_seconds'], 0)

    def test_bad_contract_shapes_fail_closed(self):
        for change in ({'trap_vectors': [{}]}, {'trap_vectors': None}, {'control': []},
                       {'build': ['bash', '-c', 'true']}, {'test': {}}):
            with self.subTest(change=change):
                contract = {**self.contract, **change}
                self.assertTrue(contract_errors(contract, self.root, self.tests, {'PATH': ''}))

    def test_reused_signature_and_wrong_elf_rejected(self):
        self.contract['test']['oracle_signature'] = self.contract['control']['oracle_signature']
        self.assertTrue(any('distinct signature' in e for e in self.check()))
        self.contract['test']['oracle'][-1] = '/different.elf'
        self.assertTrue(any('same ELF' in e for e in self.check()))


class PollTests(unittest.IsolatedAsyncioTestCase):
    def tool(self, task):
        tool = object.__new__(ManagedBashTool)
        tool.test_dir = '/fixture'
        tool._jobs = {'job': task}
        tool._poll_wait = .1
        return tool

    async def test_poll_returns_completion_without_extra_turn(self):
        task = asyncio.create_task(asyncio.sleep(.01, result='{"status":"PASS"}'))
        tool = self.tool(task)
        self.assertEqual(json.loads(await tool.command_status('job'))['status'], 'PASS')

    async def test_poll_timeout_preserves_running_job(self):
        task = asyncio.create_task(asyncio.sleep(.04, result='{"status":"PASS"}'))
        tool = self.tool(task)
        tool._poll_wait = .001
        self.assertEqual(json.loads(await tool.command_status('job'))['status'], 'RUNNING')
        self.assertFalse(task.cancelled())
        await task
        self.assertEqual(json.loads(await tool.command_status('job'))['status'], 'PASS')

    async def test_cancelled_poll_does_not_cancel_job(self):
        task = asyncio.create_task(asyncio.sleep(.04, result='{"status":"PASS"}'))
        tool = self.tool(task)
        poll = asyncio.create_task(tool.command_status('job'))
        await asyncio.sleep(.001)
        poll.cancel()
        with self.assertRaises(asyncio.CancelledError):
            await poll
        self.assertFalse(task.cancelled())
        await task

    async def test_preflight_tool_cannot_escape_run_directory(self):
        tool = object.__new__(ManagedBashTool)
        tool.test_dir = '/fixture/run'
        result = json.loads(await tool.validate_reproducer('../secret.json'))
        self.assertEqual(result['status'], 'PREFLIGHT_INVALID')


class TimingTests(unittest.TestCase):
    def test_merge_conflicts_stop_before_workspace_copy(self):
        import inspect
        import loop
        with tempfile.TemporaryDirectory() as temporary:
            base = Path(temporary) / 'cvw'
            base.mkdir()
            with patch.object(loop, 'git', side_effect=['base\n', 'unmerged entry\n']), \
                 patch.object(loop.shutil, 'copytree') as copy:
                with self.assertRaisesRegex(loop.WorkspaceUnavailableError, 'merge conflicts'):
                    inspect.unwrap(loop.make_worktree)(str(base), 'test-run')
            copy.assert_not_called()

    def test_failed_stage_keeps_timing_and_runs_guard_once(self):
        import loop
        context = {'test_dir': '/fixture', 'timings': []}
        calls = []
        def remote(fn, *args):
            calls.append(fn.__name__)
            if fn.__name__ == 'tester':
                raise RuntimeError('provider failed')
            return '/guard'
        with patch.object(loop, 'remote', side_effect=remote), patch.object(loop, 'log'):
            with self.assertRaisesRegex(RuntimeError, 'provider failed'):
                loop.agent_stage(loop.tester, '/work', context)
        self.assertEqual(calls, ['stage_snapshot', 'tester', 'stage_finish'])
        self.assertEqual(context['timings'][0]['status'], 'failed')

    def test_guard_failure_recorded_without_second_finish(self):
        import loop
        context = {'test_dir': '/fixture', 'timings': []}
        calls = []
        def remote(fn, *args):
            calls.append(fn.__name__)
            if fn.__name__ == 'stage_finish':
                raise RuntimeError('unauthorized edit')
            return '/guard' if fn.__name__ == 'stage_snapshot' else {}
        with patch.object(loop, 'remote', side_effect=remote), patch.object(loop, 'log'):
            with self.assertRaisesRegex(RuntimeError, 'unauthorized edit'):
                loop.agent_stage(loop.tester, '/work', context)
        self.assertEqual(calls.count('stage_finish'), 1)
        self.assertEqual(context['timings'][0]['status'], 'failed')

    def test_report_includes_durations_and_tool_counts(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            (root / 'attempt.json').write_text(json.dumps(dict(tag='example', status='no_bug',
                timings=[dict(stage='tester', duration_seconds=30, context_bytes=123, status='completed')])))
            tool = root / 'controller/agent-tester'
            tool.mkdir(parents=True)
            (tool / 'tool-metrics.json').write_text(json.dumps(dict(commands=5, polls=2, preflights=1, command_seconds=4)))
            output = report(root)
            self.assertIn('30.0', output)
            self.assertIn('5 commands, 2 polls, 1 preflights', output)
