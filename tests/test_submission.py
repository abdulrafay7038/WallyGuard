import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import patch

from orchestration.submission import main, source_digest, submission_command


class SubmissionTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        (self.root / 'orchestration/templates').mkdir(parents=True)
        (self.root / 'loop.py').write_text('raise SystemExit(0)\n')
        (self.root / 'orchestration/worker.py').write_text('value = 1\n')
        (self.root / 'orchestration/templates/selfcheck.h').write_text('template\n')

    def test_digest_tracks_code_templates_and_missing_files_but_not_runs(self):
        original = source_digest(self.root)
        (self.root / 'runs').mkdir()
        (self.root / 'runs/attempt.json').write_text('{}')
        self.assertEqual(source_digest(self.root), original)
        for name in ('loop.py', 'orchestration/worker.py', 'orchestration/templates/selfcheck.h'):
            path = self.root / name
            before = path.read_bytes()
            path.write_bytes(before + b'changed')
            self.assertNotEqual(source_digest(self.root), original)
            path.write_bytes(before)
        (self.root / 'orchestration/worker.py').unlink()
        self.assertNotEqual(source_digest(self.root), original)

    def test_submission_forwards_only_selected_configuration_and_pins_digest(self):
        command, digest = submission_command(self.root, 'http://head:8265',
                                            {'WALLY_RUN_REGRESSION': '1', 'SECRET': 'private'})
        runtime = json.loads(command[command.index('--runtime-env-json') + 1])
        self.assertEqual(runtime['working_dir'], str(self.root))
        self.assertEqual(runtime['env_vars'], {'WALLY_RUN_REGRESSION': '1'})
        self.assertEqual(command[-2:], ['--verify', digest])

    def run_entrypoint(self, digest):
        # Actual separate Python process; stale/missing source must never execute loop.py.
        env = dict(os.environ, PYTHONPATH=str(Path(__file__).resolve().parents[1]))
        return subprocess.run([sys.executable, '-B', '-m', 'orchestration.submission',
                               '--verify', digest], cwd=self.root, env=env,
                              capture_output=True, text=True, timeout=10)

    def test_verified_code_runs_and_records_verified_digest(self):
        (self.root / 'loop.py').write_text(
            'import os\nprint("RAN:" + os.environ["WALLYGUARD_CONTROLLER_SHA256"])\n')
        digest = source_digest(self.root)
        result = self.run_entrypoint(digest)
        self.assertEqual(result.returncode, 0, result.stderr)
        self.assertIn('RAN:' + digest, result.stdout)

    def test_stale_or_incomplete_package_cannot_start_campaign(self):
        digest = source_digest(self.root)
        (self.root / 'loop.py').write_text('print("CAMPAIGN STARTED")\n')
        result = self.run_entrypoint(digest)
        self.assertNotEqual(result.returncode, 0)
        self.assertIn('source mismatch', result.stderr)
        self.assertNotIn('CAMPAIGN STARTED', result.stdout)
        (self.root / 'loop.py').unlink()
        self.assertNotEqual(self.run_entrypoint(digest).returncode, 0)

    def test_dry_run_does_not_submit(self):
        with patch('orchestration.submission.subprocess.run') as submit, patch('builtins.print'):
            self.assertEqual(main(['--dry-run']), 0)
        submit.assert_not_called()


if __name__ == '__main__':
    unittest.main()
