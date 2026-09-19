"""Small role-specific prompts; full evidence stays in the run archive."""
from copy import deepcopy


def agent_context(role: str, context: dict) -> dict:
    common = ('tag', 'iteration', 'scratch', 'test_dir', 'base_commit', 'baseline_tree',
              'history_dir', 'original_checkout', 'isa_docs', 'run_regression',
              'verification_scope', 'regression_command', 'phase')
    per_role = {
        'architect': (),
        'tester': ('plan', 'test_feedback', 'tester'),
        'critic': ('plan', 'tester', 'baseline_reproducer', 'baseline_regression', 'fix'),
        'rtl_fixer': ('plan', 'tester', 'baseline_reproducer', 'bug_review',
                      'baseline_regression', 'feedback'),
    }
    result = {key: deepcopy(context[key]) for key in common + per_role[role] if key in context}
    # History is an index, not a second copy of all prior investigations.
    # Agents can read the full attempt by tag through history_dir when relevant.
    if role == 'architect':
        result['history'] = [{key: str(entry.get(key, ''))[:400]
                              for key in ('tag', 'target', 'status')}
                             for entry in context.get('history', [])[-40:]]
    return result
