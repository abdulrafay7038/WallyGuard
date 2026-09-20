import json
from pathlib import Path
import tempfile
import threading
import time
from types import SimpleNamespace
import unittest
from unittest.mock import Mock, patch

import loop
from orchestration.coverage import coverage_summary
from orchestration.performance import measurements
from orchestration.timing import active_record, measured_worker, export_timing, record_event
from orchestration.tool_runtime import ManagedBashTool


class CoverageTests(unittest.TestCase):
    def test_full_history_deduplicated_and_claims_not_counted_as_proof(self):
        history = [dict(tag=str(i), target='MMU', status='test_repair_exhausted', source_base='old') for i in range(70)]
        history += [dict(tag='proven', target='MMU page walk', tested=True, reproduced=True, status='confirmed', source_base='base')]
        result = coverage_summary(history + history, 'base')
        row = result['areas']['mmu']
        self.assertEqual((row['selected'], row['tested'], row['reproduced'], row['confirmed'], row['same_base']), (71, 1, 1, 1, 1))
        self.assertNotIn('mmu', result['prefer'])
        self.assertLess(len(json.dumps(result)), 3000)

    def test_unknown_areas_not_invented_and_failed_planning_not_counted(self):
        result = coverage_summary([dict(tag='1', target='novel interaction', subsystem=['bad optional label']),
                                   dict(tag='2', target='planning failed')])
        self.assertEqual(result['areas']['unclassified']['selected'], 1)
        self.assertEqual(sum(row['selected'] for row in result['areas'].values()), 1)

    def test_ledger_does_not_trust_untested_agent_claim(self):
        entry = loop.history_entry(dict(tag='1', status='test_repair_exhausted',
            plan=dict(target='MMU'), tester=dict(report='confirmed bug')))
        self.assertFalse(entry['tested'])
        self.assertFalse(entry['reproduced'])


class TimingTests(unittest.TestCase):
    def test_worker_wrapper_preserves_normal_calls_and_remote_reports_overhead(self):
        @measured_worker
        def work(value):
            return value + 1
        self.assertEqual(work(3), 4)
        result = work(3, _wg_measure=True)
        self.assertEqual(result['value'], 4)
        work.chia_remote = Mock(return_value=result)
        record = {}
        context = active_record.set(record)
        try:
            with patch.object(loop, 'get', side_effect=lambda value: value):
                self.assertEqual(loop.remote(work, 3), 4)
        finally:
            active_record.reset(context)
        work.chia_remote.assert_called_once_with(3, _wg_measure=True)
        self.assertGreaterEqual(record['operations'][0]['queue_transport_seconds'], 0)
        self.assertTrue(loop.verify_command._wg_measured)

    def test_failure_timing_retains_failure(self):
        work = SimpleNamespace(__name__='work', chia_remote=Mock(side_effect=RuntimeError('failed')))
        record = {}
        context = active_record.set(record)
        try:
            with self.assertRaisesRegex(RuntimeError, 'failed'):
                loop.remote(work)
        finally:
            active_record.reset(context)
        self.assertEqual(record['operations'][0]['status'], 'failed')
        self.assertIsNone(record['operations'][0]['worker_seconds'])

    def test_export_intervals_do_not_double_count_overlapping_tools(self):
        result = export_timing(dict(messages=[dict(info=dict(role='assistant', time=dict(created=0, completed=10000)),
            parts=[dict(type='tool', state=dict(time=dict(start=2000, end=6000))),
                   dict(type='tool', state=dict(time=dict(start=4000, end=8000)))])]))
        self.assertEqual(result['tool_rpc_seconds'], 6)
        self.assertEqual(result['assistant_non_tool_seconds'], 4)
        self.assertIsNone(result['llm_generation_seconds'])
        self.assertIsNone(export_timing({})['assistant_non_tool_seconds'])

    def test_interrupted_command_report_is_explicit_not_zero(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            (root / 'attempt.json').write_text(json.dumps(dict(tag='1', status='failed',
                timings=[dict(stage='architect', duration_seconds=5)])))
            record_event(root / 'logs/tool-timing.jsonl', 'COMMAND_STARTED', role='architect', job_id='unfinished')
            result = measurements(root)
            self.assertEqual(result['agents']['architect']['tool_calls'], 1)
            self.assertEqual(len(result['unfinished_commands']), 1)
            self.assertIsNone(result['agents']['architect']['llm_generation'])
            self.assertIsNone(result['worktree_setup'])

    def test_timing_write_failure_does_not_change_execution(self):
        with patch('orchestration.timing.event', side_effect=OSError('full')):
            record_event('/missing/log', 'STARTED')


class BudgetTests(unittest.IsolatedAsyncioTestCase):
    async def test_advisory_budget_allows_essential_followup_and_records_reason(self):
        with tempfile.TemporaryDirectory() as tmp:
            tool = object.__new__(ManagedBashTool)
            tool.role = 'architect'
            tool.work_dir = tool.test_dir = tmp
            tool.timeout_seconds = 5
            tool._cancel_event = threading.Event()
            tool._stage_started = time.monotonic() - 500
            tool._metrics = dict(commands=12, command_seconds=0)
            result = json.loads(await tool.run_command('printf done', extension_reason='Check the flush priority'))
            while result['status'] == 'RUNNING':
                result = json.loads(await tool.command_status(result['job_id']))
            self.assertEqual(result['status'], 'PASS')
            self.assertIn('budget reached', result['planning_progress']['reminder'])
            events = [json.loads(line) for line in (Path(tmp) / 'logs/tool-timing.jsonl').read_text().splitlines()]
            self.assertEqual(events[0]['extension_reason'], 'Check the flush priority')
            self.assertEqual(events[-1]['status'], 'COMMAND_FINISHED')
            self.assertGreater(events[-1]['duration_seconds'], 0)


if __name__ == '__main__':
    unittest.main()
