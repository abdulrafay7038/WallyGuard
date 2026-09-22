from pathlib import Path
import tempfile
import unittest

from orchestration.result_classifier import TOOL_ERROR
from orchestration.test_preflight import selfcheck_error_log, selfcheck_failure_summary


class SelfCheckTerminationTests(unittest.TestCase):
    def setUp(self):
        self.temp=tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root=Path(self.temp.name)
        self.elf=self.root/'test.elf'
        self.source=self.root/'testbench/testbench.sv'
        self.source.parent.mkdir()
        self.source.write_text('// fixture\ntask automatic CheckSelfCheck;\n  $stop;\nendtask\n')
        self.path=self.root/'wally.log'
        self.record=f'Error on test {self.elf} result 2: adr = 00000000 sim (D$) 00000000 signature = 9abcdef0\n'
        self.summary=f'{self.elf} failed with 1 errors. :(\n'
        self.stop=f'%Error: {self.source}:3: Verilog $stop\n'

    def check(self,text):
        self.path.write_text(text)
        return selfcheck_error_log(self.path,self.root,self.elf)

    def test_expected_stop_is_ignored_without_rewriting_raw_log(self):
        original=self.record+self.summary+self.stop+'Aborting...\n'
        result=self.check(original)
        self.assertFalse(TOOL_ERROR.search(result))
        self.assertTrue(selfcheck_failure_summary(result,self.elf))
        self.assertEqual(self.path.read_text(),original)

    def test_unrelated_error_before_or_after_stop_remains_visible(self):
        for error in ('%Error: another.sv:100: Assertion failed\n',
                      'make: *** [simulator] Error 2\n', 'Segmentation fault\n'):
            for text in (error+self.record+self.summary+self.stop,
                         self.record+self.summary+self.stop+error):
                with self.subTest(error=error,text=text):
                    self.assertTrue(TOOL_ERROR.search(self.check(text)))

    def test_missing_summary_wrong_elf_source_or_line_fail_closed(self):
        for text in (self.record+self.stop,
                     self.record+self.summary.replace('test.elf','other.elf')+self.stop,
                     self.record+self.summary+self.stop.replace(':3:',':4:'),
                     self.record+self.summary+self.stop.replace('testbench.sv','other.sv')):
            self.assertTrue(TOOL_ERROR.search(self.check(text)))
        self.source.unlink()
        self.assertTrue(TOOL_ERROR.search(self.check(self.record+self.summary+self.stop)))
