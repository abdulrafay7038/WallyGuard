"""Promotion gates owned exclusively by deterministic controller results."""
from .result_classifier import Outcome


def configured_validation_passed(record: dict, fix: dict) -> bool:
    """Skipped optional stages are neutral; enabled stages must run and pass."""
    def passed(name):
        result = fix.get(name, {})
        return result.get('ran') is True and result.get('passed') is True
    return (fix.get('reproducer', {}).get('status') == Outcome.MATCH
            and (not record.get('directed_configured', True) or passed('directed'))
            and (not record.get('run_regression', True) or passed('regression')))


def candidate_allowed(record: dict) -> bool:
    revisions, fixes = record.get('test_revisions', []), record.get('fix_attempts', [])
    if not revisions or not fixes:
        return False
    baseline, fix = revisions[-1], fixes[-1]
    proof = baseline.get('baseline_reproducer', {})
    repeats = baseline.get('repeats', [])
    return (proof.get('status') == Outcome.MISMATCH_CONFIRMED and bool(repeats)
            and all(run.get('status') == Outcome.MISMATCH_CONFIRMED
                    and run.get('fingerprint') == proof.get('fingerprint') for run in repeats)
            and record.get('bug_review', {}).get('verdict') == 'approve'
            and configured_validation_passed(record, fix)
            and fix.get('review', {}).get('verdict') == 'approve')


def confirmation_allowed(record: dict) -> bool:
    revisions = record.get('test_revisions', [])
    fixes = record.get('fix_attempts', [])
    if not revisions or not fixes or not record.get('run_regression') or not candidate_allowed(record):
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
