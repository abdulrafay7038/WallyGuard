"""Actual loop control flow with mocked agents/tools; no cloud or hardware."""
import copy
import io
from contextlib import redirect_stdout
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch
import loop
from orchestration.result_classifier import Outcome
from orchestration.verification_state import confirmation_allowed


class LoopIntegrationTests(unittest.TestCase):
    def campaign(self, *, regression=True, regression_pass=True, baseline=Outcome.MISMATCH_CONFIRMED,
                 directed=True, directed_pass=True, targeted=True, repair_attempts=1, saved=False):
        self.calls=[]; self.feedback=[];self.exports=[];patched=False
        def remote(function,*args,**kwargs):
            nonlocal patched
            name=function.__name__;self.calls.append(name)
            if name=='make_worktree':return {'scratch':'/fixture/work','test_dir':'/fixture/artifacts','base_commit':'fixture'}
            if name in ('save_attempt','archive_inputs','stage_finish'):return None
            if name=='stage_snapshot':return '/fixture/guard'
            if name=='architect':return {'target':'ALU','rationale':'case','tester_prompt':'exercise','knowledge':'source'}
            if name=='tester':return {'found_bug':True,'report':'candidate','evidence':'files',
                                     **({'reproducer_file':'reproducer.json'} if saved else {'reproducer':{'version':1}})}
            if name=='read_reproducer':return {'version':1}
            if name=='test_fingerprint':return {'test.S':'hash'}
            if name=='check_changes':return 'RTL diff' if patched else ''
            if name=='critic':return {'verdict':'approve','critique':'evidence reviewed'}
            if name=='rtl_fixer':
                self.feedback.append(copy.deepcopy(args[1].get('feedback')))
                patched=True
                return {'changed':True,'report':'small RTL correction'}
            if name=='export_patch':
                record=args[1];self.exports.append(copy.deepcopy(record))
                return 'confirmed-bugs/fix.patch' if confirmation_allowed(record) else 'candidate-bugs/fix.patch'
            if name=='verify_command':
                path=args[2]
                if 'reproducer' in path:
                    status=(Outcome.MATCH if targeted else Outcome.MISMATCH_CONFIRMED) if patched else baseline
                    return {'status':status,'passed':status==Outcome.MATCH,'returncode':0}
                passed=True if not patched else (directed_pass if 'directed' in path else regression_pass)
                return {'ran':True,'status':'REGRESSION_PASS' if passed else 'REGRESSION_FAIL','passed':passed,'returncode':0 if passed else 1}
            raise AssertionError((name,args))
        record={'tag':'fixture','status':'in_progress'}
        with patch.object(loop,'remote',side_effect=remote),patch.object(loop,'RUN_REGRESSION',regression),\
             patch.object(loop,'DIRECTED_COMMAND','bin/directed' if directed else ''),redirect_stdout(io.StringIO()):
            loop.run_attempt(record,[],repair_attempts)
        return record

    def test_full_four_agent_flow_confirms_only_all_gates(self):
        result=self.campaign()
        self.assertEqual(result['status'],'confirmed')
        self.assertTrue(confirmation_allowed(result))
        self.assertEqual([c for c in self.calls if c in {'architect','tester','critic','rtl_fixer'}],
                         ['architect','tester','critic','rtl_fixer','critic'])
        self.assertEqual(len(result['test_revisions'][0]['repeats']),loop.BASELINE_RUNS-1)
        self.assertTrue(result['patch'].startswith('confirmed-bugs/'))

    def test_no_regression_is_candidate_only(self):
        result=self.campaign(regression=False)
        self.assertEqual(result['status'],'candidate_fix_verified')
        self.assertFalse(confirmation_allowed(result))
        self.assertTrue(result['patch'].startswith('candidate-bugs/'))

    def test_saved_contract_runs_all_existing_confirmation_gates(self):
        result=self.campaign(saved=True)
        self.assertEqual(result['status'],'confirmed')
        self.assertTrue(confirmation_allowed(result))
        self.assertEqual(self.calls.count('read_reproducer'),1)
        self.assertEqual(result['tester']['reproducer'],{'version':1})

    def test_saved_contract_does_not_bypass_failed_baseline(self):
        result=self.campaign(saved=True,baseline=Outcome.TEST_INVALID)
        self.assertEqual(result['status'],'test_repair_exhausted')
        self.assertNotIn('critic',self.calls)
        self.assertEqual(self.exports,[])

    def test_no_directed_is_candidate_only(self):
        result=self.campaign(directed=False)
        self.assertEqual(result['status'],'candidate_fix_verified')
        self.assertFalse(confirmation_allowed(result))
        self.assertTrue(result['fix_attempts'][-1]['regression']['ran'])

    def test_enabled_validation_matrix(self):
        for regression in (False, True):
            for directed in (False, True):
                for directed_pass in (False, True):
                    for regression_pass in (False, True):
                        with self.subTest(regression=regression, directed=directed,
                                          directed_pass=directed_pass, regression_pass=regression_pass):
                            result = self.campaign(regression=regression, directed=directed,
                                directed_pass=directed_pass, regression_pass=regression_pass)
                            fix = result['fix_attempts'][-1]
                            expected = (not directed or directed_pass) and (not regression or regression_pass)
                            self.assertEqual(bool(self.exports), expected)
                            self.assertEqual(fix['regression']['ran'], regression and (not directed or directed_pass))
                            if not expected:
                                self.assertEqual(result['status'], 'fix_attempts_exhausted')

    def test_candidate_export_rechecks_enabled_validation(self):
        from inspect import unwrap
        result = self.campaign(regression=False)
        result['fix_attempts'][-1]['directed']['passed'] = False
        with patch.object(loop, 'check_changes', return_value='patch'):
            with self.assertRaises(loop.ArtifactError):
                unwrap(loop.export_patch)('/fixture/cvw', result, 'patch')

    def test_passed_flag_without_execution_cannot_export(self):
        from orchestration.verification_state import candidate_allowed
        result = self.campaign()
        result['fix_attempts'][-1]['directed']['ran'] = False
        self.assertFalse(candidate_allowed(result))

    def test_regression_failure_returns_feedback_to_fixer(self):
        result=self.campaign(regression_pass=False,repair_attempts=2)
        self.assertEqual(result['status'],'fix_attempts_exhausted')
        self.assertEqual(len(self.feedback),2)
        self.assertIsNotNone(self.feedback[1])
        self.assertFalse(confirmation_allowed(result))
        self.assertEqual(self.exports,[])

    def test_bad_artifacts_never_reach_fixer(self):
        result=self.campaign(baseline=Outcome.TEST_INVALID)
        self.assertEqual(result['status'],'test_repair_exhausted')
        self.assertNotIn('rtl_fixer',self.calls)
        self.assertEqual(self.exports,[])

    def test_failed_targeted_verification_blocks_confirmation(self):
        result=self.campaign(targeted=False)
        self.assertEqual(result['status'],'fix_attempts_exhausted')
        self.assertFalse(confirmation_allowed(result))
        self.assertEqual(self.exports,[])

    def test_forged_confirmed_record_rejected_at_export(self):
        record={'status':'full_regression_passed','scratch':'/fixture','base_commit':'base','test_dir':'tests','tag':'fixture'}
        from inspect import unwrap
        with patch.object(loop,'check_changes',return_value='patch'):
            with self.assertRaises(loop.ArtifactError):
                unwrap(loop.export_patch)('/fixture/cvw',record,'patch')

    def test_unresolved_failure_stops_discovery(self):
        def attempt(record,*args):record['status']='fix_attempts_exhausted'
        with patch.object(loop,'remote',return_value=[]),patch.object(loop,'run_attempt',side_effect=attempt) as work,redirect_stdout(io.StringIO()):
            loop.main(max_iterations=3)
        work.assert_called_once()


if __name__=='__main__':unittest.main()
