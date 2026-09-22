"""Real Git worktrees exercise retention across iterations and driver restarts."""
from copy import deepcopy
from inspect import unwrap
import json
from pathlib import Path
import subprocess
import tempfile
import unittest
from unittest.mock import patch

import loop
from orchestration.result_classifier import Outcome
from orchestration.workspace_baseline import retain_verified_fix


class WorkspaceBaselineTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        self.base = self.root / 'cvw'
        self.base.mkdir()
        self.git(self.base, 'init', '-q')
        self.git(self.base, 'config', 'user.name', 'Test')
        self.git(self.base, 'config', 'user.email', 'test@example.test')
        (self.base / 'src').mkdir()
        (self.base / 'src/test.sv').write_text('baseline\n')
        (self.base / 'README').write_text('source\n')
        self.git(self.base, 'add', '.')
        self.git(self.base, 'commit', '-qm', 'baseline')
        self.original = self.git(self.base, 'rev-parse', 'HEAD').strip()
        self.scratch = self.root / 'wally-worktrees/wally-shared'
        self.scratch.parent.mkdir()
        self.git(self.base, 'worktree', 'add', '--detach', str(self.scratch), self.original)
        self.state_path = self.scratch.parent / 'wally-shared.json'
        self.state = dict(source=str(self.base), source_head=self.original,
                          base_commit=self.original, tag='first')
        self.state_path.write_text(json.dumps(self.state))
        (self.scratch / 'build-cache').write_text('keep build data')
        self.archive_fix('first', self.original, 'fixed once\n')

    def git(self, directory, *args):
        return subprocess.run(['git', '-C', str(directory), *args], check=True,
                              capture_output=True, text=True).stdout

    def archive_fix(self, tag, baseline, contents):
        self.archive = self.root / 'runs' / tag
        self.archive.mkdir(parents=True, exist_ok=True)
        (self.scratch / 'src/test.sv').write_text(contents)
        diff = self.git(self.scratch, 'diff', '--binary', baseline, '--')
        (self.archive / 'proposed.patch').write_text(diff)
        exported = self.root / f'{tag}.patch'
        exported.write_text(diff)
        proof = dict(status=Outcome.MISMATCH_CONFIRMED, fingerprint='reproducer')
        self.record = dict(tag=tag, status='candidate_fix_verified', active=False,
                           base_commit=baseline, scratch=str(self.scratch), test_dir=str(self.archive),
                           patch=str(exported), run_regression=False, directed_configured=False,
                           bug_review={'verdict': 'approve'},
                           test_revisions=[dict(baseline_reproducer=proof, repeats=[dict(proof)])],
                           fix_attempts=[dict(reproducer={'status': Outcome.MATCH},
                                              review={'verdict': 'approve'})])
        self.save_record()

    def save_record(self):
        (self.archive / 'attempt.json').write_text(json.dumps(self.record))

    def start(self, tag):
        with patch.object(loop, 'validate_spike', return_value='fixture-spike'), \
             patch.object(loop, 'simulation_env', return_value={}), \
             patch.object(loop, 'prepare_derived_configs', return_value={}), \
             patch.object(loop, 'seed_harness'):
            return unwrap(loop.make_worktree)(str(self.base), tag)

    def test_accepted_fixes_accumulate_across_restarts_and_failed_attempts(self):
        first_archive = (self.archive / 'attempt.json').read_bytes()
        # A driver restart reads state from disk, not an in-memory record.
        second = self.start('second')
        self.assertNotEqual(second['base_commit'], self.original)
        self.assertEqual((self.scratch / 'src/test.sv').read_text(), 'fixed once\n')
        self.assertEqual(self.git(self.scratch, 'status', '--porcelain', '--', 'src/'), '')
        self.assertEqual((self.archive / 'attempt.json').read_bytes(), first_archive)
        self.archive_fix('second', second['base_commit'], 'fixed twice\n')
        self.assertNotIn('-baseline\n', (self.archive / 'proposed.patch').read_text())
        third = self.start('third')
        self.assertEqual(self.git(self.scratch, 'rev-parse', third['base_commit'] + '^').strip(),
                         second['base_commit'])
        # A later failed fix must not wipe out either accepted fix.
        (self.scratch / 'src/test.sv').write_text('unverified edit\n')
        third_archive = self.root / 'runs/third/attempt.json'
        record = json.loads(third_archive.read_text())
        record.update(status='agent_failed', active=False)
        third_archive.write_text(json.dumps(record))
        fourth = self.start('fourth')
        self.assertEqual(fourth['base_commit'], third['base_commit'])
        self.assertEqual((self.scratch / 'src/test.sv').read_text(), 'fixed twice\n')
        self.assertEqual((self.scratch / 'build-cache').read_text(), 'keep build data')
        self.assertEqual(self.git(self.base, 'rev-parse', 'HEAD').strip(), self.original)
        self.assertEqual(self.git(self.base, 'status', '--porcelain'), '')
        self.assertEqual([fix['tag'] for fix in json.loads(self.state_path.read_text())['retained_fixes']],
                         ['first', 'second'])

    def test_restart_after_persisting_baseline_does_not_promote_twice(self):
        promoted = retain_verified_fix(self.scratch, self.state_path, self.state,
                                        self.record, self.archive)
        # Simulate a crash before reset and before changing the ownership tag.
        self.assertEqual(self.git(self.scratch, 'rev-parse', 'HEAD').strip(), self.original)
        result = self.start('second')
        self.assertEqual(result['base_commit'], promoted['base_commit'])
        self.assertEqual(len(json.loads(self.state_path.read_text())['retained_fixes']), 1)

    def test_private_index_does_not_capture_unverified_workspace_edits(self):
        (self.scratch / 'README').write_text('unverified staged change\n')
        self.git(self.scratch, 'add', 'README')
        (self.scratch / 'src/test.sv').write_text('unverified later change\n')
        result = self.start('second')
        self.assertEqual((self.scratch / 'src/test.sv').read_text(), 'fixed once\n')
        self.assertEqual((self.scratch / 'README').read_text(), 'source\n')
        self.assertEqual(self.git(self.scratch, 'diff', '--name-only', self.original,
                                  result['base_commit']).strip(), 'src/test.sv')

    def test_invalid_accepted_records_block_reset(self):
        original = deepcopy(self.record)
        for change in ('active', 'archive', 'baseline', 'review', 'verification', 'confirmed'):
            with self.subTest(change=change):
                self.record = deepcopy(original)
                if change == 'active': self.record['active'] = True
                if change == 'archive': self.record['workspace_recovery_required'] = True
                if change == 'baseline': self.record['base_commit'] = 'wrong-base'
                if change == 'review': self.record['fix_attempts'][0]['review']['verdict'] = 'reject'
                if change == 'verification': self.record['fix_attempts'][0]['reproducer']['status'] = Outcome.TOOL_FAILURE
                if change == 'confirmed': self.record['status'] = 'confirmed'
                self.save_record()
                with self.assertRaises(loop.WorkspaceUnavailableError):
                    self.start('blocked')
                self.assertEqual(json.loads(self.state_path.read_text()), self.state)
                self.assertEqual((self.scratch / 'src/test.sv').read_text(), 'fixed once\n')
                self.assertFalse((self.root / 'runs/blocked').exists())

    def test_confirmed_fix_is_retained(self):
        self.record.update(status='confirmed', run_regression=True, directed_configured=True)
        self.record['fix_attempts'][0].update(directed=dict(ran=True, passed=True),
                                            regression=dict(ran=True, passed=True))
        self.save_record()
        self.assertNotEqual(self.start('second')['base_commit'], self.original)

    def test_missing_or_mismatched_patch_blocks_reset(self):
        exported = Path(self.record['patch'])
        for contents in ('different patch', None):
            if contents is None:
                exported.unlink()
            else:
                exported.write_text(contents)
            with self.assertRaises(loop.WorkspaceUnavailableError):
                self.start('blocked')
            self.assertEqual(json.loads(self.state_path.read_text()), self.state)
            self.assertEqual((self.scratch / 'src/test.sv').read_text(), 'fixed once\n')

    def test_non_rtl_patch_cannot_enter_baseline(self):
        (self.scratch / 'README').write_text('bad edit\n')
        diff = self.git(self.scratch, 'diff', '--binary', self.original)
        Path(self.record['patch']).write_text(diff)
        (self.archive / 'proposed.patch').write_text(diff)
        with self.assertRaises(loop.WorkspaceUnavailableError):
            self.start('blocked')
        self.assertEqual(json.loads(self.state_path.read_text()), self.state)

    def test_source_head_change_blocks_promotion(self):
        self.git(self.base, 'commit', '--allow-empty', '-qm', 'source advanced')
        with self.assertRaises(loop.WorkspaceUnavailableError):
            self.start('blocked')
        self.assertEqual(json.loads(self.state_path.read_text()), self.state)

    def test_state_write_failure_leaves_worktree_and_baseline_intact(self):
        with patch.object(Path, 'replace', side_effect=OSError('disk full')):
            with self.assertRaises(loop.WorkspaceUnavailableError):
                self.start('blocked')
        self.assertEqual(json.loads(self.state_path.read_text()), self.state)
        self.assertEqual(self.git(self.scratch, 'rev-parse', 'HEAD').strip(), self.original)
        self.assertEqual((self.scratch / 'src/test.sv').read_text(), 'fixed once\n')


if __name__ == '__main__':
    unittest.main()
