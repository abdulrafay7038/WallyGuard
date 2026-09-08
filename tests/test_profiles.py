"""Selection, compatibility, metadata and collision regression checks."""
import copy
import json
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch
from tools import test_profiles as profiles
from tools.generator import validate_elf
from tools.evidence import collection_directory
from tools.matrix_campaign import aggregate

class ProfileTests(unittest.TestCase):
    def setUp(self):
        # Tests must not depend on qualification jobs mutating the on-disk cache.
        self.validation_patch=patch.object(profiles,'VALIDATION',{})
        self.attempt_patch=patch.object(profiles,'ATTEMPTS',{})
        self.validation_patch.start();self.attempt_patch.start()
        self.addCleanup(self.validation_patch.stop);self.addCleanup(self.attempt_patch.stop)
        from tools.qualification_state import implementation_fingerprint
        for config in ('rv64gc','rv32gc','rv32imc'):
            for test in ('wallyguard_rand','wallyguard_arithmetic','wallyguard_branch','wallyguard_jump','riscv_arithmetic_basic_test'):
                selection=profiles.compatibility(config,test,candidate=True)
                profiles.VALIDATION.setdefault(config,{})[test]=dict(config_sha256=selection['config_sha256'],
                    profile_fingerprint=selection['profile_fingerprint'],implementation_fingerprint=implementation_fingerprint())

    def test_installed_inventory_and_special_paths_are_preserved(self):
        self.assertEqual(len(profiles.INVENTORY['tests']),38)
        csr=profiles.INVENTORY['tests']['riscv_csr_test']
        self.assertIn('scripts/gen_csr_test.py',csr['special_generation_logic'])
        self.assertEqual(csr['generator_backend'],'special-python-csr')
        self.assertIn('riscv_load_store_rand_instr_stream', profiles.INVENTORY['directed_streams'])

    def test_same_four_dimensions_reproduce_selection(self):
        for config in ('rv64gc','rv32gc','rv32imc'):
            a=profiles.resolve_selection(config,'branch',5382)
            b=profiles.resolve_selection(config,'branch',5382)
            self.assertEqual(a,b)
            self.assertTrue(a['campaign_enabled'])
            self.assertEqual(a,profiles.resolve_selection(config,'general',99,a['riscv_dv_test']))

    def test_unsupported_is_not_substituted(self):
        for test in ('riscv_csr_test','riscv_loop_test','riscv_floating_point_rand_test','riscv_full_interrupt_test','wallyguard_memory'):
            s=profiles.resolve_selection('rv64gc','general',42,test)
            self.assertEqual(s['riscv_dv_test'],test)
            self.assertFalse(s['campaign_enabled']); self.assertTrue(s['reason'])
        self.assertFalse(profiles.resolve_selection('rv32i','branch',42)['campaign_enabled'])
        with self.assertRaises(ValueError): profiles.resolve_selection('rv64gc','general',42,'made_up_test')

    def test_weighted_campaign_is_deterministic_and_only_eligible(self):
        selected=[profiles.resolve_selection('rv64gc','campaign',n) for n in range(100)]
        self.assertTrue(all(s['campaign_enabled'] for s in selected))
        self.assertEqual({s['test_area'] for s in selected},{'general','arithmetic','branch'})
        self.assertEqual(selected,[profiles.resolve_selection('rv64gc','campaign',n) for n in range(100)])

    def test_changed_config_invalidates_qualification(self):
        with patch.dict(profiles.WALLY_CONFIGS['rv64gc'],config_sha256='changed'):
            self.assertFalse(profiles.resolve_selection('rv64gc','general',0)['campaign_enabled'])

    def test_elf_class_must_match_selected_config(self):
        header=bytearray(64);header[:6]=b'\x7fELF\x01\x01';header[16:20]=b'\x02\x00\xf3\x00'
        validate_elf(bytes(header),32)
        with self.assertRaises(ValueError):validate_elf(bytes(header),64)

    def test_archive_names_include_session_config_and_area(self):
        a=collection_directory('/tmp/runs/session_one/rv32gc_branch/000001_seed_42','/tmp/archive')
        b=collection_directory('/tmp/runs/session_two/rv32gc_branch/000001_seed_42','/tmp/archive')
        self.assertNotEqual(a,b)
        self.assertEqual(str(a),'/tmp/archive/session_one/rv32gc_branch/000001_seed_42')

    def test_summary_separates_bugs_from_infrastructure(self):
        rows=[dict(wally_config='rv64gc',test_area='branch',riscv_dv_test='wallyguard_jump',status=s) for s in ('PASS','TRACE_MISMATCH','GENERATOR_ERROR','WALLY_TRACE_ERROR')]
        c=aggregate(rows,[])['by_config']['rv64gc']
        self.assertEqual(c,dict(tests=4,passed=1,mismatch=1,generator_errors=1,infrastructure_errors=1))

    def test_all_configs_runs_directed_before_any_generation(self):
        from argparse import Namespace
        from contextlib import redirect_stdout
        import io
        from tools import matrix_campaign
        events=[]
        with tempfile.TemporaryDirectory() as tmp:
            args=Namespace(wally_config='all',test_area='general',seed=42,riscv_dv_test=None,
                           all_areas=False,skip_directed=False,stop_on_failure=False)
            def directed(args,session,save):
                events.append(('directed',args.wally_config))
                return dict(attempted=1,passed=1,failed=0,results=[])
            def campaign(args,session,*callbacks):
                events.append(('generated',args.wally_config))
                (session/'campaign.json').write_text(json.dumps(dict(results=[])))
                return 0
            configs={k:profiles.WALLY_CONFIGS[k] for k in ('rv32gc','rv64gc')}
            with patch.object(matrix_campaign,'WALLY_CONFIGS',configs),patch.object(matrix_campaign,'run_campaign',side_effect=campaign),redirect_stdout(io.StringIO()):
                code=matrix_campaign.run_matrix(args,Path(tmp),None,None,None,directed)
            self.assertEqual(code,0)
            self.assertEqual(events,[('directed','rv64gc'),('generated','rv32gc'),('generated','rv64gc')])

    def test_bare_normalization_preserves_setup_and_fills_only_missing_thread_register(self):
        from tools.generator import normalize_bare_setup,normalize_initialization,validate_initialization
        source='init:\n'+''.join(f' li x{r}, 7\n' for r in range(1,32) if r not in (2,30))+' la x2, user_stack_end\nmain:\nwallyguard_compare_start:\naddi x3,x30,1\n'
        patched,audit=normalize_bare_setup(source)
        patched=normalize_initialization(patched)
        self.assertEqual(audit['zeroed_uninitialized_gprs'],['x30'])
        self.assertIn('la x2, user_stack_end',patched)
        self.assertIn('li x3, 7',patched)
        self.assertLess(patched.index('li x30, 0'),patched.index('wallyguard_compare_start:'))
        self.assertEqual(validate_initialization(patched),dict(x11='0x0',validated=True))
        again,audit=normalize_bare_setup(patched)
        self.assertEqual(again,patched)
        self.assertEqual(audit['zeroed_uninitialized_gprs'],[])

    def test_specialized_or_ambiguous_initialization_is_rejected(self):
        from tools.generator import normalize_bare_setup,InitializationError
        for assembly in ('main:\nwallyguard_compare_start:\n',
                         'init:\nla x11, user_stack_end\nwallyguard_compare_start:\n',
                         'init:\nla x2, user_stack_end\nwallyguard_compare_start:\n'):
            with self.assertRaises(InitializationError):normalize_bare_setup(assembly)

    def test_elf32_entry_does_not_include_program_header_offset(self):
        from tools.spike import elf_metadata
        with tempfile.TemporaryDirectory() as tmp:
            path=Path(tmp)/'test.elf';header=bytearray(64)
            header[:6]=b'\x7fELF\x01\x01';header[24:28]=(0x80000000).to_bytes(4,'little')
            header[28:32]=(0xdeadbeef).to_bytes(4,'little');path.write_bytes(header)
            with patch('tools.spike.subprocess.check_output',return_value='80001000 T tohost\n'):
                entry,tohost=elf_metadata(path)
            self.assertEqual(entry,0x80000000);self.assertEqual(tohost,0x80001000)
