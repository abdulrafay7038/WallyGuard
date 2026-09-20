"""Speed changes preserve inputs, evidence gates and bounded execution."""
import inspect
import json
import os
from pathlib import Path
import tempfile
import threading
import unittest
from unittest.mock import patch

from orchestration.agent_protocol import parse_agent_response, AgentOutputInvalid
from orchestration.artifact_guard import test_files
from orchestration.context import agent_context, observed_failure
from orchestration.input_files import input_files
from orchestration.test_preflight import saved_contract
from orchestration.tool_runtime import ManagedBashTool


class FastPathTests(unittest.TestCase):
    def test_observed_failures_are_not_agent_claims(self):
        record = {'tester': {'report': 'definitely confirmed'}, 'test_revisions': [
            {'baseline_reproducer': {'status': 'TEST_INVALID', 'reason': 'Control failed',
                                    'control': {'status': 'HOST_COMMAND_TIMEOUT'}}}]}
        lesson = observed_failure(record)
        self.assertIn('HOST_COMMAND_TIMEOUT', lesson)
        self.assertNotIn('definitely confirmed', lesson)
        context = {'history': [{'tag': 'old', 'target': 'PMP', 'status': 'test_repair_exhausted',
                               'observed_failure': lesson}]}
        self.assertIn('Control failed', agent_context('architect', context)['history'][0]['observed_failure'])
        self.assertIn('Control failed', agent_context('tester', context)['recent_failures'][0]['observed_failure'])

    def test_saved_contract_schema_rejects_ambiguous_or_arbitrary_paths(self):
        base = dict(found_bug=True, report='candidate', evidence='logs', reproducer_file='reproducer.json')
        self.assertEqual(parse_agent_response('tester', json.dumps(base)), base)
        for change in ({'reproducer_file': '../outside.json'}, {'reproducer': {}}):
            with self.subTest(change=change), self.assertRaises(AgentOutputInvalid):
                parse_agent_response('tester', json.dumps({**base, **change}))

    def test_saved_contract_read_preserves_exact_contents_and_rejects_symlink_escape(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp) / 'run'
            root.mkdir()
            path = root / 'reproducer.json'
            contract = {'version': 1, 'build': ['bash', '/exact/path']}
            path.write_text(json.dumps(contract))
            self.assertEqual(saved_contract(str(root)), contract)
            path.unlink()
            outside = Path(tmp) / 'outside.json'
            outside.write_text('{}')
            path.symlink_to(outside)
            with self.assertRaises(ValueError):
                saved_contract(str(root))

    def test_pruned_walk_preserves_guard_and_fingerprint_inputs(self):
        import loop
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            names = ['tests/control.S', 'reproducer.json', 'build/deep/binary', 'logs/deep/log',
                     'controller/guards/a/source.sv', 'controller/agent-abc/parsed.json',
                     'controller/guards-extra/keep.json', 'controller/input-snapshots/test.S',
                     'fixer/extra.S', 'critic/notes', 'nested/build/ignore', 'events.jsonl']
            for name in names:
                path = root / name
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_text(name)
            old_guard = {str(p.relative_to(root)) for p in root.rglob('*') if p.is_file()
                         and not set(p.relative_to(root).parts) & {'build', 'logs', '__pycache__'}
                         and not str(p.relative_to(root)).startswith(('controller/guards/', 'controller/agent-'))}
            self.assertEqual(test_files(root), old_guard)
            excluded = {'build', 'logs', 'critic', 'fixer', '__pycache__', 'untracked-rtl', 'controller'}
            expected = {str(p.relative_to(root)) for p in root.rglob('*') if p.is_file()
                        and not set(p.relative_to(root).parts) & excluded}
            visited = []
            original = os.scandir
            def scan(path):
                visited.append(str(path))
                return original(path)
            with patch('os.scandir', side_effect=scan):
                actual = {str(p.relative_to(root)) for p in input_files(root, excluded)}
            self.assertEqual(actual, expected)
            self.assertNotIn(str(root / 'build'), visited)
            self.assertNotIn(str(root / 'controller'), visited)
            fingerprints = inspect.unwrap(loop.test_fingerprint)(str(root), str(root))
            self.assertEqual(set(fingerprints), expected - {'events.jsonl'})


class CommandDeadlineTests(unittest.IsolatedAsyncioTestCase):
    async def test_tester_relative_helper_stays_in_run_directory(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            checkout, artifacts = root / 'cvw', root / 'run'
            checkout.mkdir()
            artifacts.mkdir()
            tool = object.__new__(ManagedBashTool)
            tool.role = 'tester'
            tool.work_dir, tool.test_dir = str(checkout), str(artifacts)
            tool.timeout_seconds = 5
            tool._cancel_event = threading.Event()
            command = 'printf "# helper\\n" > fix_json.py\nprintf "%s\\n%s\\n" "$WALLY" "$WALLY_TEST_DIR"'
            result = json.loads(await tool.run_command(command))
            while result['status'] == 'RUNNING':
                result = json.loads(await tool.command_status(result['job_id']))
            self.assertEqual(result['status'], 'PASS')
            self.assertTrue((artifacts / 'fix_json.py').is_file())
            self.assertFalse((checkout / 'fix_json.py').exists())
            output = Path(result['log_path']).read_text()
            self.assertIn(str(checkout), output)
            self.assertIn(str(artifacts), output)

    async def test_default_and_explicit_command_deadlines(self):
        with tempfile.TemporaryDirectory() as tmp:
            tool = object.__new__(ManagedBashTool)
            tool.work_dir = tool.test_dir = tmp
            tool.timeout_seconds = 900
            tool._cancel_event = threading.Event()
            deadlines = []
            def run(command, path, timeout, *args):
                deadlines.append(timeout)
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_text('done')
                return {'status': 'PASS', 'duration_seconds': .01}
            with patch('orchestration.tool_runtime.run_command', side_effect=run), \
                 patch.dict(os.environ, {'WALLY_COMMAND_TIMEOUT': '120'}):
                for requested in [None, 600, 5000]:
                    result = json.loads(await tool.run_command('echo ok', requested))
                    while result['status'] == 'RUNNING':
                        result = json.loads(await tool.command_status(result['job_id']))
                    self.assertEqual(result['status'], 'PASS')
                self.assertEqual(deadlines, [120, 600, 900])
                for invalid in [0, -1, float('nan'), float('inf'), True]:
                    self.assertEqual(json.loads(await tool.run_command('echo ok', invalid))['status'], 'INVALID_COMMAND')
                self.assertEqual(len(deadlines), 3)
