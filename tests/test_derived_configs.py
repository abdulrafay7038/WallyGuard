"""Generated configs are prepared outside agent stages and remain protected."""
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest
from unittest.mock import patch

from orchestration.artifact_guard import ArtifactViolation, finish, snapshot
from orchestration.derived_configs import prepare_derived_configs


@unittest.skipUnless(shutil.which('perl'), 'Wally configuration generator requires Perl')
class DerivedConfigTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)/'work'
        self.root.mkdir()
        (self.root/'config/base').mkdir(parents=True)
        (self.root/'bin').mkdir()
        self.base = self.root/'config/base/config.vh'
        self.base.write_text('localparam logic DEBUG_SUPPORTED = 0;\n')
        (self.root/'config/derivlist.txt').write_text('deriv example base\n')
        self.generator = self.root/'bin/derivgen.pl'
        self.generator.write_text('use File::Path qw(make_path); use File::Copy qw(copy);\n'
                                  'my $root = $ENV{WALLY}; make_path("$root/config/deriv/example");\n'
                                  'copy("$root/config/base/config.vh", "$root/config/deriv/example/config.vh") or die $!;\n')
        (self.root/'.gitignore').write_text('config/deriv/\n')
        self.git('init', '-q')
        self.git('add', '.')
        self.git('-c', 'user.name=Test', '-c', 'user.email=test@example.test', 'commit', '-qm', 'fixture')
        self.output = self.root/'config/deriv/example/config.vh'
        self.output.parent.mkdir(parents=True)
        self.output.write_text('stale config\n')

    def git(self, *args):
        return subprocess.run(['git', '-C', str(self.root), *args], check=True,
                              capture_output=True, text=True).stdout

    def test_regeneration_cache_and_agent_guard(self):
        old_head = self.git('rev-parse', 'HEAD')
        state = prepare_derived_configs(self.root)
        self.assertTrue(state['regenerated'])
        self.assertEqual(self.output.read_text(), self.base.read_text())
        mtime = self.output.stat().st_mtime_ns
        with patch('orchestration.derived_configs.run_command') as command:
            cached = prepare_derived_configs(self.root, state)
        self.assertFalse(cached['regenerated'])
        command.assert_not_called()
        self.assertEqual(self.output.stat().st_mtime_ns, mtime)
        self.assertEqual(self.git('status', '--porcelain'), '')
        self.assertEqual(self.git('rev-parse', 'HEAD'), old_head)
        run = Path(self.temp.name)/'run'
        run.mkdir()
        guard = snapshot(str(self.root), str(run), 'tester')
        self.output.write_text('agent changed config')
        with self.assertRaises(ArtifactViolation):
            finish(guard)
        self.assertEqual(self.output.read_text(), self.base.read_text())

    def test_input_output_and_generator_changes_invalidate_cache(self):
        state = prepare_derived_configs(self.root)
        for path, content in ((self.base, 'new baseline\n'), (self.output, 'stale again\n'),
                              (self.generator, self.generator.read_text()+'# new generator\n')):
            path.write_text(content)
            state = prepare_derived_configs(self.root, state)
            self.assertTrue(state['regenerated'])
            self.assertEqual(self.output.read_text(), self.base.read_text())

    def test_missing_output_and_obsolete_output_regenerated(self):
        state = prepare_derived_configs(self.root)
        self.output.unlink()
        extra = self.output.parent/'obsolete'
        extra.write_text('old')
        result = prepare_derived_configs(self.root, state)
        self.assertTrue(result['regenerated'])
        self.assertTrue(self.output.exists())
        self.assertFalse(extra.exists())

    def test_failure_warning_and_incomplete_output_preserve_previous_configs(self):
        for source in ('exit 2;', 'print "Unable to find FIELD in example";', 'exit 0;'):
            self.generator.write_text(source)
            with self.subTest(source=source), self.assertRaises(ValueError):
                prepare_derived_configs(self.root)
            self.assertEqual(self.output.read_text(), 'stale config\n')

    def test_symlinks_and_tracked_outputs_are_not_replaced(self):
        original = self.output.read_text()
        self.output.unlink()
        self.output.symlink_to(self.base)
        with self.assertRaisesRegex(ValueError, 'symlinks'):
            prepare_derived_configs(self.root)
        self.assertTrue(self.output.is_symlink())
        self.output.unlink()
        self.output.write_text(original)
        self.git('add', '-f', 'config/deriv/example/config.vh')
        with self.assertRaisesRegex(ValueError, 'tracked derived'):
            prepare_derived_configs(self.root)
        self.assertEqual(self.output.read_text(), original)

    def test_failed_install_rolls_back_previous_configs(self):
        rename = Path.rename
        def fail_new(path, destination):
            if path.name == 'new':
                raise OSError('installation failure')
            return rename(path, destination)
        with patch.object(Path, 'rename', fail_new), self.assertRaisesRegex(OSError, 'installation failure'):
            prepare_derived_configs(self.root)
        self.assertEqual(self.output.read_text(), 'stale config\n')


if __name__ == '__main__':
    unittest.main()
