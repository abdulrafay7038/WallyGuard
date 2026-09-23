"""Small role-specific prompts; full evidence stays in the run archive."""
from copy import deepcopy


def review_history(record: dict) -> list[dict]:
    """Bounded advisory feedback; never used by verification/promotion gates."""
    notes = list(record.get('review_notes', []))
    if not notes:
        if record.get('bug_review'):
            notes.append(dict(record['bug_review'], phase='bug_review', guard_passed=True))
        for fix in record.get('fix_attempts', []):
            if fix.get('review'):
                notes.append(dict(fix['review'], phase='fix_review', guard_passed=True))
    return [dict(verdict=note.get('verdict'), critique=str(note.get('critique', ''))[:1800],
                 phase=note.get('phase', 'unknown'), guard_passed=note.get('guard_passed') is True,
                 artifact=note.get('artifact')) for note in notes[-3:]
            if note.get('verdict') in {'reject', 'revise'}]


def observed_failure(record: dict) -> str:
    """Carry controller observations forward, without promoting agent claims."""
    observations = []
    for revision in record.get('test_revisions', []):
        result = revision.get('baseline_reproducer', {})
        if result.get('status'):
            control = result.get('control', {})
            text = ': '.join(str(result.get(k, '')) for k in ('status', 'reason'))
            if control:
                text += '; control=' + str(control.get('status', 'unknown'))
            if text not in observations:
                observations.append(text)
    if record.get('error'):
        observations.append(str(record['error']))
    return ' | '.join(observations)[-900:]


def investigation_lessons(history: list[dict], base: str) -> dict:
    """Keep useful outcomes beyond the five most recent notes, with provenance.

    Selection hints only: no agent report becomes a controller observation, and
    a match on one test never establishes correctness of an entire subsystem.
    """
    unique = {entry['tag']: entry for entry in history if entry.get('tag')
              and entry.get('target') not in (None, '', 'planning failed')}
    entries = list(unique.values())
    negatives = [entry for entry in entries if entry.get('status') in
                 {'no_bug', 'baseline_not_reproduced', 'bug_rejected', 'fix_rejected'}]
    # Favor evidence on today's RTL, then recency. Repeated subsystem names do
    # not imply duplicate bugs; retain separate investigations and their tags.
    negatives = sorted(reversed(negatives),
                       key=lambda entry: entry.get('source_base') != base)[:8]
    accepted = [entry for entry in entries if entry.get('status') in
                {'confirmed', 'candidate_fix_verified'}][-8:]

    def summary(entry):
        return dict(tag=entry['tag'], target=str(entry.get('target', ''))[:400],
                    status=entry.get('status'), source_base=entry.get('source_base'),
                    same_base=bool(base) and entry.get('source_base') == base,
                    controller_observation=str(entry.get('observed_failure', ''))[:900],
                    tester_report_unverified=str(entry.get('report', ''))[:1200],
                    critic_feedback=deepcopy(entry.get('critic_feedback', [])[-1:]))

    return dict(negative_results=[summary(entry) for entry in negatives],
                accepted_targets=[dict(tag=entry['tag'], target=str(entry.get('target', ''))[:400],
                                       source_base=entry.get('source_base'), status=entry.get('status'))
                                  for entry in accepted],
                policy='Advisory evidence, not proof of correctness or novelty. Before revisiting a lead, '
                       'identify the changed trigger, configuration, source, or evidence that addresses '
                       'its previous outcome. Check accepted targets against current RTL; do not assume '
                       'every historical patch is present.')


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
    if role in {'architect', 'tester'}:
        result['investigation_lessons'] = deepcopy(context.get('investigation_lessons'))
        if result['investigation_lessons'] is None:
            result['investigation_lessons'] = investigation_lessons(
                context.get('history', []), context.get('base_commit', ''))
        entries = [entry for entry in context.get('history', []) if entry.get('critic_feedback')]
        result['prior_critic_feedback'] = [dict(
            tag=entry.get('tag'), target=str(entry.get('target', ''))[:400],
            source_base=entry.get('source_base'), notes=deepcopy(entry['critic_feedback']))
            for entry in entries[-5:]]
    # Include concise observations so tooling mistakes do not require another
    # investigation of the archive. Agent notes remain explicitly unverified.
    if role == 'architect':
        from .planning import MAX_COMMANDS, READ_SECONDS
        result['coverage'] = deepcopy(context.get('coverage', {}))
        result['exploration_budget'] = dict(commands=12, deeply_read_files=6, minutes=8,
            policy='Advisory: hand off once grounded. If more reading is essential, explain the missing fact '
                   'in extension_reason on the next tool call; no forced failure or reduced agent timeout.')
        result['repository_subsystems'] = {
            'mmu': 'src/mmu/ (mmu.sv, hptw.sv, pmpchecker.sv, adrdec.sv, tlb.sv)',
            'cache': 'src/cache/ (cache.sv, cachefsm.sv, cacheway.sv, cmo.sv)',
            'atomics': 'src/lsu/ (lsu.sv, amoalu.sv, lrsc.sv, atomic.sv)',
            'privileged': 'src/privileged/ (csr.sv, csrm.sv, csrs.sv, csrc.sv, csri.sv, trap.sv)',
            'ieu': 'src/ieu/ (controller.sv, datapath.sv, alu.sv, shifter.sv, regfile.sv, bmu/)',
            'fpu': 'src/fpu/ (fpu.sv, postproc/flags.sv, fdiv.sv, fmul.sv)',
            'ifu': 'src/ifu/ (ifu.sv, decompress.sv, bpred/)',
            'hazard': 'src/hazard/ (hazard.sv)',
        }
        result['recent_commits'] = [
            f"{entry.get('tag')}: {str(entry.get('target', ''))[:100]} ({entry.get('status')})"
            for entry in context.get('history', [])[-5:] if entry.get('target')
        ]
        result['exploration_budget'] = dict(
            max_commands=MAX_COMMANDS,
            minutes=READ_SECONDS // 60,
            policy=f'Strict budget: maximum {MAX_COMMANDS} commands / {READ_SECONDS // 60} minutes. '
                   f'After 8 commands, extension_reason is required. Stay within ONE subsystem. '
                   'Do not run git log or directory scans; use repository_subsystems.'
        )
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
