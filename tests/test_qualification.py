"""Qualification distinguishes lack of evidence, incompatibility, and CPU evidence."""
import json
import tempfile
import unittest
import fcntl
from pathlib import Path
from unittest.mock import patch
from tools import test_profiles as profiles
from tools.qualification_state import classify_failure, implementation_fingerprint
from tools.qualify import raw_selection, stimulus_coverage
from tools.build_storage import release_intermediates


class QualificationTests(unittest.TestCase):
    def setUp(self):
        for name in ('VALIDATION','ATTEMPTS'):
            override=patch.object(profiles,name,{})
            override.start();self.addCleanup(override.stop)

    def proof(self,config,test,**kwargs):
        row=profiles.compatibility(config,test,candidate=True)
        return dict(config_sha256=row['config_sha256'],profile_fingerprint=row['profile_fingerprint'],
                    implementation_fingerprint=implementation_fingerprint(),**kwargs)

    def test_derivative_is_candidate_without_a_prior_smoke(self):
        config='nocache_rv64gc'
        self.assertTrue(profiles.WALLY_CONFIGS[config]['candidate'])
        self.assertEqual(profiles.configuration_status(config)[0],'UNQUALIFIED')
        row=profiles.compatibility(config,'wallyguard_config_smoke')
        self.assertFalse(row['campaign_enabled'])
        self.assertEqual(row['trace_comparison'],'unqualified')
        self.assertTrue(profiles.compatibility(config,'wallyguard_config_smoke',candidate=True)['campaign_enabled'])

    def test_complete_smoke_promotes_only_its_actual_test_config_pair(self):
        config='nocache_rv64gc';test='wallyguard_config_smoke'
        profiles.VALIDATION[config]={test:self.proof(config,test)}
        self.assertEqual(profiles.configuration_status(config)[0],'SUPPORTED')
        self.assertTrue(profiles.compatibility(config,test)['campaign_enabled'])
        self.assertEqual(profiles.compatibility(config,'wallyguard_branch')['status'],'UNQUALIFIED')
        self.assertEqual(profiles.configuration_status('nocache_rv32gc')[0],'UNQUALIFIED')

    def test_changed_rtl_or_runner_invalidates_old_evidence(self):
        config='rv64gc';test='wallyguard_config_smoke'
        proof=self.proof(config,test);proof['implementation_fingerprint']='old sources'
        profiles.VALIDATION[config]={test:proof}
        self.assertEqual(profiles.configuration_status(config)[0],'UNQUALIFIED')

    def test_timeout_and_mismatch_do_not_ban_configuration(self):
        for result in ({'status':'WALLY_TRACE_ERROR','timed_out':True}, {'status':'TRACE_MISMATCH'}):
            self.assertEqual(classify_failure(result)[0],'UNQUALIFIED')
        self.assertEqual(classify_failure({'status':'GENERATOR_ERROR'},'No module named vsc')[0],'UNQUALIFIED')

    def test_concrete_hierarchy_failure_has_different_classification(self):
        status,category=classify_failure({'status':'WALLY_TRACE_ERROR'},"%Error wallyTracer.sv: Can't find definition of privileged in dotted reference")
        self.assertEqual((status,category),('UNSUPPORTED','trace hierarchy assumption'))
        self.assertEqual(profiles.configuration_status('rv32i')[0],'UNSUPPORTED')

    def test_timeout_option_in_command_is_not_a_timeout(self):
        status,category=classify_failure({'status':'GENERATOR_ERROR'},
            "Command: run.py --gen_timeout 120\nKeyError: 'EBREAK'")
        self.assertEqual((status,category),('UNSUPPORTED','RISC-V-DV incompatibility'))

    def test_missing_link_library_is_not_a_trace_hierarchy_blocker(self):
        status,category=classify_failure({'status':'WALLY_TRACE_ERROR'},
            "verilator wallyTracer.sv\nld: cannot find -lmissing\n%Error: make exited with 2")
        self.assertEqual((status,category),('UNQUALIFIED','infrastructure limitation'))

    def test_unknown_generated_opcode_does_not_ban_the_configuration(self):
        status,category=classify_failure({'status':'GENERATOR_ERROR'},"Error: unrecognized opcode bogus x1,x2")
        self.assertEqual((status,category),('UNSUPPORTED','RISC-V-DV incompatibility'))

    def test_generator_bug_does_not_mark_configuration_unsupported(self):
        config='rv64gc';test='wallyguard_config_smoke'
        profiles.ATTEMPTS[config]={test:self.proof(config,test,status='UNSUPPORTED',category='RISC-V-DV incompatibility',reason='bad generated immediate')}
        self.assertEqual(profiles.compatibility(config,test)['status'],'UNSUPPORTED')
        self.assertEqual(profiles.configuration_status(config)[0],'UNQUALIFIED')

    def test_upstream_probe_does_not_substitute_a_custom_profile(self):
        row=raw_selection('rv64gc','riscv_hint_instr_test')
        self.assertEqual(row['riscv_dv_test'],'riscv_hint_instr_test')
        self.assertEqual(row['gen_test'],'riscv_rand_instr_test')
        self.assertEqual(row['generator_options']['hint_instr_ratio'],'5')
        self.assertNotIn('bare_program_mode',row['generator_options'])

    def test_passing_empty_family_stimulus_does_not_qualify(self):
        with tempfile.TemporaryDirectory() as tmp:
            path=Path(tmp)/'trace.csv'
            path.write_text('pc,binary\n80000000,00000013\n80000004,00000001\n')
            result={'generation':{'compare_start_pc':'80000000'},'wally':{'trace_path':str(path)}}
            self.assertFalse(stimulus_coverage(result,{'test_area':'fence'})['validated'])
            self.assertTrue(stimulus_coverage(result,{'test_area':'compressed'})['validated'])

    def test_termination_store_alone_does_not_qualify_memory(self):
        with tempfile.TemporaryDirectory() as tmp:
            path=Path(tmp)/'trace.csv';path.write_text('pc,binary\n80000000,00302023\n')
            result={'generation':{'compare_start_pc':'80000000'},'wally':{'trace_path':str(path)}}
            self.assertFalse(stimulus_coverage(result,{'test_area':'memory'})['validated'])

    def test_cleanup_preserves_binary_sources_and_busy_builds(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);build=root/'owned';build.mkdir()
            for name in ('Vtestbench','code.cpp','code.h','code.o','lib.a','header.gch'):(build/name).write_bytes(b'123')
            with (root/'.owned.lock').open('a') as lock:
                fcntl.flock(lock,fcntl.LOCK_EX|fcntl.LOCK_NB)
                report=release_intermediates([build],root)
                self.assertEqual(report['bytes_released'],0)
                self.assertTrue(report['busy'])
            report=release_intermediates([build],root)
            self.assertEqual(report['bytes_released'],9)
            self.assertEqual({p.name for p in build.iterdir()},{'Vtestbench','code.cpp','code.h'})

    def test_configuration_constraint_failure_is_concrete(self):
        result=classify_failure({'status':'WALLY_TRACE_ERROR'},
            '[0] %Fatal: riscvassertions.sv:47: SVADU_SUPPORTED requires virtual memory')
        self.assertEqual(result,('UNSUPPORTED','configuration constraint violation'))

if __name__=='__main__':unittest.main()
