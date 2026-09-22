"""Reject incompatible oracle configurations without executing a simulator."""
import copy
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

from orchestration.isa_compatibility import check_isa_compatibility
from orchestration.result_classifier import Outcome
from orchestration.test_preflight import contract_errors, run_reproducer


class ISACompatibilityTests(unittest.TestCase):
    def setUp(self):
        temporary = tempfile.TemporaryDirectory()
        self.addCleanup(temporary.cleanup)
        self.root = Path(temporary.name)
        self.config = self.root / 'config/rv64gc/config.vh'
        self.config.parent.mkdir(parents=True)
        self.write_config()
        self.tests = self.root / 'run'
        self.tests.mkdir()
        self.elf = str(self.tests / 'build/test.elf')
        self.wally = [str(self.root/'bin/wsim'), 'rv64gc', '--elf', self.elf]
        self.spike = str(self.root/'bin/spike')
        self.env = {'WALLY_SPIKE': self.spike, 'PATH': ''}

    def write_config(self, xlen=64, f=1, d=1, zfinx=0):
        self.config.write_text(f"localparam XLEN = 32'd{xlen};\n"
                               f"localparam logic F_SUPPORTED = {f};\n"
                               f"localparam logic D_SUPPORTED = 1'b{d};\n"
                               f"localparam logic ZFINX_SUPPORTED = {zfinx};\n")

    def check(self, isa):
        check_isa_compatibility(self.wally, [self.spike, '--isa='+isa, self.elf], self.root)

    def contract(self):
        contract = {'version': 1, 'oracle': 'spike', 'build': ['make']}
        for name in ('control', 'test'):
            contract[name] = dict(wally=self.wally[:], oracle=[self.spike, '--isa=rv64gc', self.elf],
                                  wally_signature=f'build/{name}-wally.sig',
                                  oracle_signature=f'build/{name}-oracle.sig',
                                  wally_complete='done', oracle_complete='done')
        return contract

    def test_equivalent_g_expanded_and_versioned_isa(self):
        for isa in ('rv64gc', 'RV64GC', 'rv64imafdc_smstateen',
                    'rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr', 'rv64gc_zacas_zicboz'):
            with self.subTest(isa=isa):
                self.check(isa)
        check_isa_compatibility(self.wally, [self.spike, '--isa', 'rv64gc', self.elf], self.root)

    def test_fcsr_false_lead_rejected_for_both_control_and_test(self):
        for role in ('control', 'test'):
            contract = self.contract()
            contract[role]['oracle'][1] = '--isa=rv64imac_smstateen_zfinx'
            errors = contract_errors(contract, self.root, self.tests, self.env)
            self.assertEqual(len(errors), 1)
            self.assertTrue(errors[0].startswith(role+': Incompatible'))
            self.assertIn('ZFINX_SUPPORTED: Wally=0, Spike=1', errors[0])

    def test_xlen_and_fp_extension_mismatches(self):
        for isa, field in (('rv32gc', 'XLEN'), ('rv64imac', 'F_SUPPORTED'),
                           ('rv64imafc', 'D_SUPPORTED'), ('rv64imac_zdinx', 'ZFINX_SUPPORTED')):
            with self.subTest(isa=isa), self.assertRaisesRegex(ValueError, field):
                self.check(isa)

    def test_matched_integer_and_zfinx_configurations(self):
        self.write_config(xlen=32, f=0, d=0)
        self.check('rv32imac')
        self.write_config(f=0, d=0, zfinx=1)
        for isa in ('rv64imac_zfinx', 'rv64imac_zfinx1p0', 'rv64imac_zdinx'):
            self.check(isa)
        with self.assertRaisesRegex(ValueError, 'ZFINX_SUPPORTED'):
            self.check('rv64imac')

    def test_config_contents_override_misleading_directory_name(self):
        self.write_config(xlen=32)
        self.check('rv32gc')
        with self.assertRaisesRegex(ValueError, 'XLEN: Wally=32'):
            self.check('rv64gc')

    def test_missing_duplicate_and_guest_only_isa_fail(self):
        for args in ([self.elf], ['--isa=rv64gc', '--isa=rv32gc', self.elf],
                     [self.elf, '--isa=rv64gc'], ['--isa=', self.elf]):
            with self.subTest(args=args), self.assertRaisesRegex(ValueError, 'Spike'):
                check_isa_compatibility(self.wally, [self.spike]+args, self.root)

    def test_unsupported_config_and_overrides_fail_closed(self):
        for option in ('--params', '--params=P=0', '-pP=0', '--define', '-dFOO'):
            with self.subTest(option=option), self.assertRaisesRegex(ValueError, 'overrides'):
                check_isa_compatibility(self.wally+[option], [self.spike, '--isa=rv64gc', self.elf], self.root)
        self.config.write_text('localparam XLEN = OTHER_XLEN; // XLEN=64\n')
        with self.assertRaisesRegex(ValueError, 'literal XLEN'):
            self.check('rv64gc')
        self.config.unlink()
        with self.assertRaisesRegex(ValueError, 'Cannot read'):
            self.check('rv64gc')

    def test_comments_cannot_supply_configuration_values(self):
        text = self.config.read_text()
        self.config.write_text('/* localparam XLEN = 32; */\n'+text+'// localparam logic F_SUPPORTED = 0;\n')
        self.check('rv64gc')
        self.config.write_text(text.replace('localparam logic F_SUPPORTED = 1;', '// localparam logic F_SUPPORTED = 1;'))
        with self.assertRaisesRegex(ValueError, 'literal F_SUPPORTED'):
            self.check('rv64gc')

    def test_controller_blocks_before_build_or_spike_and_preserves_inputs(self):
        contract = self.contract()
        contract['test']['oracle'][1] = '--isa=rv64imac_smstateen_zfinx'
        before = copy.deepcopy(contract)
        with patch('orchestration.test_preflight.simulation_env', return_value=self.env), \
             patch('orchestration.test_preflight.run_command') as command, \
             patch('orchestration.test_preflight.validate_spike') as identify:
            result = run_reproducer(str(self.root), str(self.tests), contract, str(self.tests/'result.log'), 900)
        self.assertEqual(result['status'], Outcome.TEST_INVALID)
        self.assertFalse(result['passed'])
        self.assertEqual(result['steps'], {})
        self.assertIn('Incompatible', result['reason'])
        command.assert_not_called()
        identify.assert_not_called()
        self.assertEqual(contract, before)


if __name__ == '__main__':
    unittest.main()
