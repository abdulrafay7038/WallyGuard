import tempfile
from pathlib import Path
import unittest
from unittest.mock import Mock

from orchestration.test_preflight import prepare_selfcheck_elf


class ElfPreparationTests(unittest.TestCase):
    def setUp(self):
        self.temp=tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root=Path(self.temp.name)
        self.elf=self.root/'control.elf'
        self.elf.write_bytes(b'unchanged ELF fixture')
        self.symbols={'begin_signature':0x80001000, 'selfcheck_record':0x80001000,
                      'tohost':0x80002000, 'end_signature':0x80001028}

    def output(self,suffix):
        return Path(str(self.elf)+suffix)

    def test_fresh_preparation_keeps_aliases_and_preserves_elf(self):
        suffixes=('.memfile','.objdump','.objdump.addr','.objdump.lab')
        for suffix in suffixes:self.output(suffix).write_text('stale')
        original=self.elf.read_bytes()
        def execute(name,argv):
            self.assertTrue(all(not self.output(s).exists() for s in suffixes))
            self.assertIn(str(self.output('.objdump')),argv)
            for suffix in suffixes:self.output(suffix).write_text('fresh')
            log=self.root/'prepare.log';log.write_text('')
            return dict(status='PASS',returncode=0,log_path=str(log))
        self.assertTrue(prepare_selfcheck_elf(self.root,self.elf,self.symbols,8,execute,'control')['passed'])
        maps=dict(zip(self.output('.objdump.lab').read_text().splitlines(),
                      self.output('.objdump.addr').read_text().splitlines()))
        self.assertEqual(maps['selfcheck_record'],maps['begin_signature'])
        self.assertEqual(int(maps['selfcheck_record'],16),0x80001000)
        self.assertEqual(self.elf.read_bytes(),original)

    def test_failed_or_missing_outputs_never_pass(self):
        for status,content in [('COMMAND_FAILED','make: *** Error 1'),('PASS','make: *** Error 1'),('PASS','')]:
            log=self.root/'prepare.log';log.write_text(content)
            execute=Mock(return_value=dict(status=status,returncode=0,log_path=str(log)))
            result=prepare_selfcheck_elf(self.root,self.elf,self.symbols,8,execute,'control')
            self.assertEqual(result['status'],'BUILD_FAILURE')
            self.assertFalse(result['passed'])

    def test_symlink_output_is_refused_before_deletion_or_execution(self):
        outside=self.root/'preserved';outside.write_text('original')
        self.output('.objdump.lab').symlink_to(outside)
        execute=Mock()
        with self.assertRaisesRegex(ValueError,'symlinks'):
            prepare_selfcheck_elf(self.root,self.elf,self.symbols,8,execute,'control')
        execute.assert_not_called()
        self.assertEqual(outside.read_text(),'original')
