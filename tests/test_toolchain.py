"""Regressions for the September 19 campaign's wrong-Spike failure."""
import inspect
import os
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest
from unittest.mock import patch

from orchestration.toolchain import simulation_env, validate_spike
from orchestration.result_classifier import artifact_argv


class ToolchainTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.root = Path(self.tmp.name)
        for name, banner in [('riscv', 'Spike RISC-V ISA Simulator fixture'), ('system', 'Secrets CLI')]:
            binary = self.root / name / 'bin/spike'
            binary.parent.mkdir(parents=True)
            binary.write_text('#!/bin/sh\nprintf "%s\\n" "' + banner + '" >&2\n')
            binary.chmod(0o755)

    def test_toolchain_beats_unrelated_spike_in_path(self):
        with patch.dict(os.environ, {'PATH': str(self.root / 'system/bin'),
                                    'RISCV': str(self.root / 'riscv')}, clear=True):
            env = simulation_env('/work')
        expected = str(self.root / 'riscv/bin/spike')
        self.assertEqual(validate_spike(env), expected)
        self.assertEqual(shutil.which('spike', path=env['PATH']), expected)

    def test_explicit_wrong_oracle_fails_without_fallback(self):
        with patch.dict(os.environ, {'WALLY_SPIKE': str(self.root / 'system/bin/spike'),
                                    'RISCV': str(self.root / 'riscv')}, clear=True):
            env = simulation_env('/work')
        with self.assertRaisesRegex(ValueError, 'not identified'):
            validate_spike(env)

    def test_wally_elf2hex_wins_while_spike_stays_pinned(self):
        checkout = self.root / 'cvw'
        for root, marker in [(checkout, 'wally'), (self.root/'riscv', 'toolchain')]:
            binary=root/'bin/elf2hex';binary.parent.mkdir(parents=True,exist_ok=True)
            binary.write_text('#!/bin/sh\nprintf '+marker+'\\n\n');binary.chmod(0o755)
        with patch.dict(os.environ, {'RISCV':str(self.root/'riscv'), 'PATH':str(self.root/'system/bin')},clear=True):
            env=simulation_env(str(checkout))
        self.assertEqual(shutil.which('elf2hex',path=env['PATH']),str(checkout/'bin/elf2hex'))
        self.assertEqual(validate_spike(env),str(self.root/'riscv/bin/spike'))

    def test_identity_probe_has_short_deadline(self):
        with patch('orchestration.toolchain.subprocess.run', side_effect=subprocess.TimeoutExpired('spike', 5)) as run:
            with self.assertRaisesRegex(ValueError, 'Cannot identify'):
                validate_spike({'WALLY_SPIKE': '/fake/spike'})
        self.assertEqual(run.call_args.kwargs['timeout'], 5)

    def test_wrong_oracle_stops_before_workspace_copy(self):
        import loop
        base = self.root / 'cvw'
        base.mkdir()
        with patch.object(loop, 'git', side_effect=['base\n', '']), \
             patch.object(loop, 'validate_spike', side_effect=ValueError('wrong oracle')), \
             patch.object(loop.shutil, 'copytree') as copy:
            with self.assertRaisesRegex(loop.WorkspaceUnavailableError, 'wrong oracle'):
                inspect.unwrap(loop.make_worktree)(str(base), 'test')
        copy.assert_not_called()

    def test_event_log_is_not_a_reproducer_input(self):
        import loop
        (self.root / 'control.S').write_text('original')
        (self.root / 'events.jsonl').write_text('first event\n')
        fingerprint = inspect.unwrap(loop.test_fingerprint)
        before = fingerprint(str(self.root), str(self.root))
        (self.root / 'events.jsonl').write_text('first event\nsecond event\n')
        self.assertEqual(before, fingerprint(str(self.root), str(self.root)))
        (self.root / 'control.S').write_text('tampered')
        self.assertNotEqual(before, fingerprint(str(self.root), str(self.root)))

    def test_inline_repair_error_points_to_saved_build_script(self):
        with self.assertRaisesRegex(ValueError, 'build_reproducer.sh'):
            artifact_argv(['python3', '-c', 'print(1);\nprint(2)'], self.root, self.root)
