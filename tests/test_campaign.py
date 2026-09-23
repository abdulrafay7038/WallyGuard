"""Unattended continuation never outruns archiving or workspace restoration."""
import os
import pickle
import json
import subprocess
import tempfile
from pathlib import Path
from inspect import unwrap
import unittest
from unittest.mock import patch

import loop
from orchestration.artifact_guard import ArtifactViolation
from orchestration.campaign import CampaignPolicy, STOP_OUTCOMES


class CampaignPolicyTests(unittest.TestCase):
    def record(self, status, **extra):
        return dict(tag='run', status=status, **extra)

    def receipt(self):
        return dict(tag='run', safe_to_release=True)

    def test_archive_acknowledgement_required_even_after_success(self):
        for receipt in (None, {}, {'tag':'wrong', 'safe_to_release':True},
                        {'tag':'run', 'safe_to_release':False}):
            self.assertIn('Archive', CampaignPolicy(48).stop_reason(self.record('no_bug'), receipt))

    def test_default_preserves_stop_on_failure(self):
        for status in STOP_OUTCOMES:
            self.assertIsNotNone(CampaignPolicy().stop_reason(self.record(status), self.receipt()))

    def test_only_restored_guard_failure_can_continue(self):
        for restored in (False, None):
            self.assertIsNotNone(CampaignPolicy(48).stop_reason(
                self.record('invalid_artifacts', artifact_guard_restored=restored), self.receipt()))
        self.assertIsNone(CampaignPolicy(48).stop_reason(
            self.record('invalid_artifacts', artifact_guard_restored=True), self.receipt()))

    def test_systemic_failures_and_unfinished_states_stop(self):
        for status in ('agent_failed','api_rate_limit','controller_error','mcp_server_timeout',
                       'regression_blocked','workspace_unavailable','in_progress','unknown'):
            with self.subTest(status=status):
                self.assertIsNotNone(CampaignPolicy(48).stop_reason(self.record(status),self.receipt()))

    def test_consecutive_failure_breaker_and_reset(self):
        policy=CampaignPolicy(48)
        for _ in range(2):
            self.assertIsNone(policy.stop_reason(self.record('fix_rejected'),self.receipt()))
        self.assertIsNone(policy.stop_reason(self.record('no_bug'),self.receipt()))
        self.assertEqual(policy.consecutive_failures,0)
        for _ in range(2):
            self.assertIsNone(policy.stop_reason(self.record('agent_output_invalid'),self.receipt()))
        self.assertIn('3 consecutive',policy.stop_reason(self.record('fix_attempts_exhausted'),self.receipt()))

    def test_duration_and_invalid_settings(self):
        self.assertFalse(CampaignPolicy(48).expired(48*3600-1))
        self.assertTrue(CampaignPolicy(48).expired(48*3600))
        self.assertFalse(CampaignPolicy().expired(1e9))
        for hours in (-1,float('inf'),float('nan')):
            with self.assertRaises(ValueError): CampaignPolicy(hours)
        with self.assertRaises(ValueError): CampaignPolicy(48,0)

    def test_restoration_marker_survives_exception_serialization(self):
        self.assertFalse(ArtifactViolation('failed').restored)
        error=pickle.loads(pickle.dumps(ArtifactViolation('restored',restored=True)))
        self.assertTrue(error.restored)


class CampaignDriverTests(unittest.TestCase):
    def run_driver(self, outcomes, *, archive='ok', hours='48'):
        self.archived=[]
        def attempt(record, history, fixes):
            value=outcomes.pop(0)
            if isinstance(value, BaseException): raise value
            record['status']=value
        def remote(function,*args):
            if function is loop.load_history: return []
            self.assertIs(function,loop.save_attempt)
            record=args[1]
            self.archived.append(dict(record))
            if archive=='raise': raise OSError('disk full')
            return dict(tag=record['tag'],safe_to_release=archive=='ok')
        with patch.dict(os.environ,{'WALLY_CAMPAIGN_HOURS':hours,'WALLY_CAMPAIGN_MAX_FAILURES':'3'}), \
             patch.object(loop,'remote',side_effect=remote), patch.object(loop,'run_attempt',side_effect=attempt), \
             patch.object(loop,'log'):
            return loop.main(max_iterations=2)

    def test_restored_failure_archived_before_next_iteration(self):
        self.assertEqual(self.run_driver([ArtifactViolation('guard restored',True),'no_bug']),0)
        self.assertEqual([x['status'] for x in self.archived],['invalid_artifacts','no_bug'])
        self.assertTrue(self.archived[0]['artifact_guard_restored'])
        self.assertTrue(all(x['active'] is False for x in self.archived))

    def test_archive_exception_or_incomplete_receipt_stops(self):
        for archive in ('raise','incomplete'):
            self.assertEqual(self.run_driver(['no_bug'],archive=archive),1)
            self.assertEqual(len(self.archived),1)

    def test_unrestored_guard_and_unexpected_exception_stop(self):
        for error in (ArtifactViolation('not restored'), RuntimeError('unexpected')):
            self.assertEqual(self.run_driver([error]),1)
            self.assertEqual(len(self.archived),1)

    def test_normal_mode_still_stops_on_rejected_fix(self):
        self.assertEqual(self.run_driver(['fix_rejected'],hours='0'),1)

    def test_duration_stops_only_after_completed_attempt_is_archived(self):
        with patch.object(CampaignPolicy,'expired',side_effect=[False,True]):
            self.assertEqual(self.run_driver(['no_bug']),0)
        self.assertEqual(len(self.archived),1)
        self.assertFalse(self.archived[0]['active'])

    def test_submission_forwards_campaign_settings(self):
        from orchestration.submission import submission_command
        command,_=submission_command(Path(loop.__file__).parent,'http://localhost:8265',
            {'WALLY_CAMPAIGN_HOURS':'48','WALLY_CAMPAIGN_MAX_FAILURES':'3'})
        runtime=json.loads(command[command.index('--runtime-env-json')+1])
        self.assertEqual(runtime['env_vars']['WALLY_CAMPAIGN_HOURS'],'48')
        self.assertEqual(runtime['env_vars']['WALLY_CAMPAIGN_MAX_FAILURES'],'3')

    def test_worker_reports_incomplete_archive_to_driver(self):
        with tempfile.TemporaryDirectory() as directory:
            root=Path(directory)
            record=dict(tag='run',status='fix_rejected',active=False,scratch=str(root),
                        test_dir=str(root/'runs/run'),base_commit='baseline')
            with patch.object(loop,'git',side_effect=subprocess.CalledProcessError(1,['git'])):
                receipt=unwrap(loop.save_attempt)(str(root/'cvw'),record)
            self.assertFalse(receipt['safe_to_release'])
            saved=json.loads((root/'runs/run/attempt.json').read_text())
            self.assertTrue(saved['workspace_recovery_required'])


if __name__=='__main__': unittest.main()
