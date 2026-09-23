"""Planning limits and validated handoffs; no planning outcome proves a bug."""
import os
from .retry_policy import AgentCallFailure

MAX_COMMANDS = 24
READ_SECONDS = 480
MAX_COMMANDS = min(16, max(6, int(os.environ.get('WALLY_ARCHITECT_MAX_COMMANDS', '14'))))
READ_SECONDS = min(600, max(120, int(os.environ.get('WALLY_ARCHITECT_MAX_SECONDS', '360'))))
HANDOFF_SECONDS = 90


class PlanningBudgetExpired(AgentCallFailure):
    pass


def no_lead(reason):
    return dict(outcome='no_grounded_lead', reason=reason,
                knowledge='Planning ended without a validated handoff; no DUT conclusion.')


def validate_plan(value):
    def text(item, key):
        if not isinstance(item.get(key), str) or not item[key].strip():
            raise ValueError(f'architect: nonempty {key} required')
    if value.get('outcome') == 'no_grounded_lead':
        text(value, 'reason')
        text(value, 'knowledge')
        return
    if value.get('outcome') != 'investigate':
        raise ValueError('architect: outcome must be investigate or no_grounded_lead')
    for key in ('target', 'rationale', 'tester_prompt', 'knowledge'):
        text(value, key)
    evidence = value.get('evidence')
    if not isinstance(evidence, list) or not 2 <= len(evidence) <= 6:
        raise ValueError('architect: evidence requires 2–6 entries including rtl and isa')
    kinds = set()
    for entry in evidence:
        if not isinstance(entry, dict) or entry.get('kind') not in {'rtl', 'isa', 'oracle'}:
            raise ValueError('architect: evidence kind must be rtl, isa, or oracle')
        kinds.add(entry['kind'])
        text(entry, 'claim')
        if entry.get('status') not in {'source_checked', 'observed', 'unverified'}:
            raise ValueError('architect: invalid evidence status')
        if entry['status'] != 'unverified':
            text(entry, 'reference')
        if entry['kind'] == 'rtl' and entry['status'] != 'source_checked':
            raise ValueError('architect: RTL must be source_checked with a file/line reference')
        if entry['kind'] == 'oracle' and entry['status'] == 'observed':
            text(entry, 'command')
    if not {'rtl', 'isa'} <= kinds:
        raise ValueError('architect: RTL and ISA evidence entries required')
    cases = value.get('probe_batch')
    if not isinstance(cases, list) or not 1 <= len(cases) <= 8:
        raise ValueError('architect: probe_batch must contain 1–8 related cases')
    identifiers = set()
    for case in cases:
        if not isinstance(case, dict):
            raise ValueError('architect: each probe must be an object')
        for key in ('id', 'trigger', 'expected', 'configuration'):
            text(case, key)
        if case['id'] in identifiers:
            raise ValueError('architect: probe ids must be unique')
        identifiers.add(case['id'])
