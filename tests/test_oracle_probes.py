"""Unit tests for oracle batch probes and planning budget limits."""
import json
import os
import tempfile
from pathlib import Path
import unittest
from unittest.mock import Mock, patch

from orchestration.oracle_probes import validate_cases, run_batch
from orchestration.planning import validate_plan, no_lead, MAX_COMMANDS, READ_SECONDS
from orchestration.context import agent_context


class OracleProbesTests(unittest.TestCase):
    def setUp(self):
        self.temp_dir = tempfile.TemporaryDirectory()
        self.root = Path(self.temp_dir.name)
        self.elf_file = self.root / 'test.elf'
        self.elf_file.write_bytes(b'\x7fELFfake')

    def tearDown(self):
        self.temp_dir.cleanup()

    def test_validate_cases_success(self):
        cases = [
            {'id': 'case1', 'isa': 'rv64gc', 'elf': 'test.elf', 'args': ['--pmpgranularity=4']},
            {'id': 'case2', 'isa': 'rv32imac', 'elf': 'test.elf'}
        ]
        res = validate_cases(json.dumps(cases), str(self.root))
        self.assertEqual(len(res), 2)
        self.assertEqual(res[0]['id'], 'case1')
        self.assertEqual(res[0]['isa'], 'rv64gc')
        self.assertEqual(res[0]['args'], ['--pmpgranularity=4'])
        self.assertEqual(res[1]['args'], [])

    def test_validate_cases_invalid(self):
        # Empty list
        with self.assertRaises(ValueError):
            validate_cases(json.dumps([]), str(self.root))
        # Non-existent ELF
        with self.assertRaises(ValueError):
            validate_cases(json.dumps([{'id': 'c1', 'isa': 'rv64gc', 'elf': 'missing.elf'}]), str(self.root))
        # Duplicate ID
        with self.assertRaises(ValueError):
            validate_cases(json.dumps([
                {'id': 'dup', 'isa': 'rv64gc', 'elf': 'test.elf'},
                {'id': 'dup', 'isa': 'rv64gc', 'elf': 'test.elf'}
            ]), str(self.root))
        # Illegal arguments
        with self.assertRaises(ValueError):
            validate_cases(json.dumps([
                {'id': 'c1', 'isa': 'rv64gc', 'elf': 'test.elf', 'args': ['--arbitrary-flag']}
            ]), str(self.root))

    @patch('orchestration.oracle_probes.run_command')
    def test_run_batch_execution(self, mock_run):
        mock_run.return_value = {
            'status': 'PASS',
            'returncode': 0,
            'timed_out': False,
            'log_path': str(self.root / 'log.log')
        }
        cases = [{'id': 'probe1', 'isa': 'rv64gc', 'elf': str(self.elf_file), 'args': []}]
        log_dir = self.root / 'probes'
        res = run_batch(cases, log_dir, {'WALLY_SPIKE': '/usr/bin/spike'})
        self.assertEqual(res['status'], 'PROBES_COMPLETE')
        self.assertEqual(len(res['observations']), 1)
        self.assertTrue((log_dir / 'results.json').exists())


class PlanningBudgetTests(unittest.TestCase):
    def test_budget_bounds(self):
        self.assertLessEqual(MAX_COMMANDS, 16)
        self.assertGreaterEqual(MAX_COMMANDS, 6)
        self.assertLessEqual(READ_SECONDS, 600)
        self.assertGreaterEqual(READ_SECONDS, 120)

    def test_validate_plan_valid(self):
        plan = {
            'outcome': 'investigate',
            'target': 'MMU superpage misaligned check',
            'rationale': 'LEAF state does not verify PPN bits',
            'tester_prompt': 'Build assembly for Sv39 superpage',
            'knowledge': 'Inspected src/mmu/hptw.sv',
            'evidence': [
                {'kind': 'rtl', 'status': 'source_checked', 'claim': 'Misaligned signal missing in LEAF', 'reference': 'hptw.sv:318'},
                {'kind': 'isa', 'status': 'source_checked', 'claim': 'Sv39 requires PPN0=0 for 2MB pages', 'reference': 'Privileged Spec 4.3.2'}
            ],
            'probe_batch': [
                {'id': 'probe_misaligned', 'trigger': 'sv39 leaf with ppn0!=0', 'expected': 'page fault', 'configuration': 'rv64gc'}
            ]
        }
        validate_plan(plan)

    def test_validate_plan_no_lead(self):
        plan = no_lead('No candidate finding in integer ALU')
        validate_plan(plan)
        self.assertEqual(plan['outcome'], 'no_grounded_lead')

    def test_context_includes_repository_subsystems(self):
        ctx = {'history': [{'tag': 'run-1', 'target': 'HPTW bug', 'status': 'candidate_fix_verified'}]}
        res = agent_context('architect', ctx)
        self.assertIn('repository_subsystems', res)
        self.assertIn('recent_commits', res)
        self.assertIn('mmu', res['repository_subsystems'])
        self.assertEqual(len(res['recent_commits']), 1)


if __name__ == '__main__':
    unittest.main()

