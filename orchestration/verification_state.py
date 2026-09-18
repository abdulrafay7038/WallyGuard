"""Promotion gates owned exclusively by deterministic controller results."""
from .result_classifier import Outcome


def confirmation_allowed(record: dict) -> bool:
    revisions = record.get('test_revisions', [])
    fixes = record.get('fix_attempts', [])
    if not revisions or not fixes or not record.get('run_regression'):
        return False
    baseline, fix = revisions[-1], fixes[-1]
    return (baseline.get('baseline_reproducer', {}).get('status') == Outcome.MISMATCH_CONFIRMED
            and bool(baseline.get('repeats'))
            and all(run.get('status') == Outcome.MISMATCH_CONFIRMED for run in baseline['repeats'])
            and record.get('bug_review', {}).get('verdict') == 'approve'
            and fix.get('reproducer', {}).get('status') == Outcome.MATCH
            and fix.get('directed', {}).get('passed') is True
            and fix.get('regression', {}).get('passed') is True
            and fix.get('review', {}).get('verdict') == 'approve')
