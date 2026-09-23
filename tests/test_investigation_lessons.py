"""Disproof survives unrelated attempts without becoming verified evidence."""
from copy import deepcopy
import unittest

from orchestration.context import agent_context, investigation_lessons, observed_failure


class InvestigationLessonsTests(unittest.TestCase):
    def entry(self, tag, status='no_bug', base='base', **extra):
        return dict(tag=tag, status=status, target='PMP investigation ' + tag,
                    source_base=base, report='Spike and Wally matched in this experiment', **extra)

    def test_old_negative_survives_many_infrastructure_failures(self):
        history = [self.entry('old', observed_failure='MATCH: signatures agree')]
        history += [self.entry(str(i), 'agent_failed') for i in range(50)]
        lessons = investigation_lessons(history, 'base')
        self.assertEqual([e['tag'] for e in lessons['negative_results']], ['old'])
        # Full-history summary survives the driver's compact recent history.
        context = dict(base_commit='base', history=history[-40:], investigation_lessons=lessons)
        for role in ('architect', 'tester'):
            result = agent_context(role, context)
            self.assertEqual(result['investigation_lessons'], lessons)
            result['investigation_lessons']['negative_results'].clear()
            self.assertEqual(len(lessons['negative_results']), 1)

    def test_bounded_same_baseline_first_then_recency_and_deduplication(self):
        history = [self.entry('old-same')]
        history += [self.entry(str(i), base='older-base') for i in range(20)]
        history += [self.entry('19', base='older-base')]
        result = investigation_lessons(history, 'base')['negative_results']
        self.assertEqual(len(result), 8)
        self.assertEqual([e['tag'] for e in result[:3]], ['old-same', '19', '18'])
        self.assertTrue(result[0]['same_base'])
        self.assertFalse(result[1]['same_base'])

    def test_controller_match_preserved_separately_from_agent_claim(self):
        record = dict(test_revisions=[dict(baseline_reproducer=dict(
            status='MATCH', reason='Controller compared signatures', control={'status':'MATCH'}))])
        observation = observed_failure(record)
        self.assertIn('MATCH: Controller compared signatures', observation)
        entry = self.entry('one', 'baseline_not_reproduced', observed_failure=observation)
        entry['report'] = 'Tester claims a bug'
        result = investigation_lessons([entry], 'base')['negative_results'][0]
        self.assertEqual(result['controller_observation'], observation)
        self.assertEqual(result['tester_report_unverified'], 'Tester claims a bug')
        self.assertEqual(observed_failure({'tester': {'report': 'Confirmed bug'}}), '')

    def test_candidate_is_not_mislabelled_as_confirmed_or_disproved(self):
        history = [self.entry('candidate', 'candidate_fix_verified'),
                   self.entry('incomplete', 'test_repair_exhausted')]
        result = investigation_lessons(history, 'base')
        self.assertEqual(result['negative_results'], [])
        self.assertEqual(result['accepted_targets'][0]['status'], 'candidate_fix_verified')
        self.assertNotIn('retained', result['accepted_targets'][0])

    def test_unaccepted_review_keeps_provenance_and_input_is_unchanged(self):
        history = [self.entry('rejected', 'fix_rejected', critic_feedback=[dict(
            verdict='reject', critique='Wrong oracle flags', guard_passed=False)])]
        before = deepcopy(history)
        result = investigation_lessons(history, 'base')
        note = result['negative_results'][0]['critic_feedback'][0]
        self.assertFalse(note['guard_passed'])
        note['critique'] = 'changed copy'
        self.assertEqual(history, before)

    def test_other_roles_do_not_receive_extra_planning_context(self):
        for role in ('critic', 'rtl_fixer'):
            self.assertNotIn('investigation_lessons', agent_context(role, dict(history=[self.entry('one')])))


if __name__ == '__main__':
    unittest.main()
