"""Small role-specific prompts; full evidence stays in the run archive."""
from copy import deepcopy


def observed_failure(record: dict) -> str:
    """Carry controller observations forward, without promoting agent claims."""
    observations = []
    for revision in record.get('test_revisions', []):
        result = revision.get('baseline_reproducer', {})
        if result.get('status') and result['status'] != 'MATCH':
            control = result.get('control', {})
            text = ': '.join(str(result.get(k, '')) for k in ('status', 'reason'))
            if control:
                text += '; control=' + str(control.get('status', 'unknown'))
            if text not in observations:
                observations.append(text)
    if record.get('error'):
        observations.append(str(record['error']))
    return ' | '.join(observations)[-900:]


def agent_context(role: str, context: dict) -> dict:
    common = ('tag', 'iteration', 'scratch', 'test_dir', 'base_commit', 'baseline_tree',
              'history_dir', 'original_checkout', 'isa_docs', 'run_regression',
              'verification_scope', 'regression_command', 'directed_configured', 'phase')
    per_role = {
        'architect': (),
        'tester': ('plan', 'test_feedback', 'tester'),
        'critic': ('plan', 'tester', 'baseline_reproducer', 'baseline_regression', 'fix'),
        'rtl_fixer': ('plan', 'tester', 'baseline_reproducer', 'bug_review',
                      'baseline_regression', 'feedback'),
    }
    result = {key: deepcopy(context[key]) for key in common + per_role[role] if key in context}
    # Include concise observations so tooling mistakes do not require another
    # investigation of the archive. Agent notes remain explicitly unverified.
    if role == 'architect':
        result['coverage'] = deepcopy(context.get('coverage', {}))
        result['exploration_budget'] = dict(commands=12, deeply_read_files=6, minutes=8,
            policy='Advisory: hand off once grounded. If more reading is essential, explain the missing fact '
                   'in extension_reason on the next tool call; no forced failure or reduced agent timeout.')
        result['history'] = [{key: str(entry.get(key, ''))[:400]
                              for key in ('tag', 'target', 'status', 'observed_failure', 'source_base')}
                             for entry in context.get('history', [])[-40:]]
        result['recent_agent_notes_unverified'] = [
            {'tag': entry.get('tag'), 'notes': str(entry.get('knowledge', ''))[:400],
             'tester_report': str(entry.get('report', ''))[:600]}
            for entry in context.get('history', [])[-5:] if entry.get('knowledge') or entry.get('report')]
    elif role == 'tester':
        result['recent_failures'] = [
            {key: str(entry.get(key, ''))[:500] for key in ('tag', 'target', 'observed_failure')}
            for entry in context.get('history', [])[-5:] if entry.get('observed_failure')]
        previous = result.get('tester', {})
        if previous.get('reproducer_file') == 'reproducer.json':
            previous.pop('reproducer', None)  # Exact current contract is on disk.
    return result
