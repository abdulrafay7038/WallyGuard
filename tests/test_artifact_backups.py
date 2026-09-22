"""Patch backups must be quarantined before the Fixer's stage guard rejects them."""
import json
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

from orchestration.artifact_guard import ArtifactViolation, finish, is_snapshot_backup, snapshot


class FixerBackupTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name) / 'work'
        self.tests = Path(self.temp.name) / 'artifacts'
        self.root.mkdir()
        self.tests.mkdir()
        self.git('init', '-q')
        (self.root / 'src/cache').mkdir(parents=True)
        self.rtl = self.root / 'src/cache/cachefsm.sv'
        self.rtl.write_text('module cachefsm;\n  wire old_signal;\nendmodule\n')
        (self.root / 'setup.sh').write_text('original setup\n')
        self.git('add', '.')
        self.git('-c', 'user.name=Test', '-c', 'user.email=test@example.test',
                 'commit', '-qm', 'fixture')
        self.original = self.rtl.read_bytes()

    def git(self, *args):
        return subprocess.run(['git', '-C', str(self.root), *args], check=True,
                              capture_output=True, text=True).stdout

    def start(self, role='rtl_fixer'):
        return Path(snapshot(str(self.root), str(self.tests), role))

    def backup(self, suffix='.orig', contents=None):
        path = Path(str(self.rtl) + suffix)
        path.write_bytes(self.original if contents is None else contents)
        return path

    def test_real_patch_backup_is_archived_and_rtl_diff_survives(self):
        if not shutil.which('patch'):
            self.skipTest('patch executable unavailable')
        self.rtl.write_bytes(self.original.replace(b'old_signal', b'new_signal'))
        diff = self.git('diff', '--binary')
        self.rtl.write_bytes(self.original)
        guard = self.start()
        subprocess.run(['patch', '--batch', '--backup', '-p1'], cwd=self.root,
                       input=diff, text=True, check=True, capture_output=True)
        backup = Path(str(self.rtl) + '.orig')
        self.assertTrue(backup.exists())
        finish(str(guard))
        self.assertFalse(backup.exists())
        self.assertEqual(self.git('diff', '--binary'), diff)
        self.assertEqual((guard / 'backups/src/cache/cachefsm.sv.orig').read_bytes(), self.original)
        record = json.loads((guard / 'backups.json').read_text())
        self.assertIn('source/src/cache/cachefsm.sv.orig', record)
        self.assertFalse((guard / 'violations.json').exists())
        self.assertEqual(self.git('ls-files', '--others', '--exclude-standard'), '')
        # A repeated check must not mistake the controller's archive for edits.
        finish(str(guard))

    def test_ignored_backups_and_common_suffixes_are_quarantined(self):
        (self.root / '.git/info/exclude').write_text('*.orig\n*.bak\n*~\n')
        guard = self.start()
        paths = [self.backup(suffix) for suffix in ('.orig', '.bak', '~')]
        for path in paths:
            path.chmod(0o600)  # Copy tools need not retain original permissions.
        finish(str(guard))
        self.assertTrue(all(not path.exists() for path in paths))
        self.assertEqual(len(json.loads((guard / 'backups.json').read_text())), 3)

    def test_backup_must_match_stage_snapshot_not_head(self):
        # A second Fixer stage starts with the previous fix attempt's edits.
        self.rtl.write_bytes(b'previous fix attempt\n')
        guard = self.start()
        self.backup(contents=self.rtl.read_bytes())
        self.rtl.write_bytes(b'refined fix\n')
        finish(str(guard))
        self.assertEqual((guard / 'backups/src/cache/cachefsm.sv.orig').read_bytes(), b'previous fix attempt\n')

    def test_unrelated_unauthorized_edit_still_fails(self):
        guard = self.start()
        backup = self.backup()
        self.rtl.write_bytes(b'candidate fix\n')
        (self.root / 'setup.sh').write_text('unauthorized setup\n')
        with self.assertRaises(ArtifactViolation):
            finish(str(guard))
        self.assertFalse(backup.exists())
        self.assertEqual(self.rtl.read_bytes(), b'candidate fix\n')
        self.assertEqual((self.root / 'setup.sh').read_text(), 'original setup\n')
        self.assertEqual(json.loads((guard / 'violations.json').read_text())['files'], ['source/setup.sh'])

    def test_changed_staged_symlink_and_reject_backups_still_fail(self):
        for kind in ('changed', 'staged', 'symlink', 'reject', 'new_source'):
            with self.subTest(kind=kind):
                guard = self.start()
                backup = self.backup('.rej' if kind == 'reject' else '.orig',
                                     b'unrelated content' if kind == 'changed' else None)
                if kind == 'staged':
                    self.git('add', str(backup))
                if kind == 'symlink':
                    backup.unlink()
                    backup.symlink_to(self.rtl)
                if kind == 'new_source':
                    backup.unlink()
                    backup = self.root / 'src/cache/new.sv.orig'
                    backup.write_bytes(self.original)
                with self.assertRaises(ArtifactViolation):
                    finish(str(guard))
                self.assertFalse(backup.exists())
                self.assertNotIn(str(backup.relative_to(self.root)), self.git('ls-files'))
                self.assertEqual(self.rtl.read_bytes(), self.original)

    def test_preexisting_backup_is_protected(self):
        backup = self.backup(contents=b'existing evidence\n')
        guard = self.start()
        backup.write_bytes(self.original)
        with self.assertRaises(ArtifactViolation):
            finish(str(guard))
        self.assertEqual(backup.read_bytes(), b'existing evidence\n')

    def test_other_roles_cannot_create_rtl_backups(self):
        for role in ('architect', 'tester', 'critic'):
            with self.subTest(role=role):
                guard = self.start(role)
                backup = self.backup()
                with self.assertRaises(ArtifactViolation):
                    finish(str(guard))
                self.assertFalse(backup.exists())

    def test_redirected_parent_is_not_a_snapshot_backup(self):
        guard = self.start()
        manifest = json.loads((guard / 'manifest.json').read_text())
        outside = Path(self.temp.name) / 'outside'
        (self.root / 'src/cache').rename(outside)
        (self.root / 'src/cache').symlink_to(outside, target_is_directory=True)
        self.backup()
        self.assertFalse(is_snapshot_backup(self.root, 'src/cache/cachefsm.sv.orig',
                                           manifest['files'], {'src/cache/cachefsm.sv'}))


if __name__ == '__main__':
    unittest.main()
