"""Print recorded stage timings: python -m orchestration.performance runs/TAG."""
import argparse
import json
from pathlib import Path


def measurements(directory: Path) -> dict:
    record = json.loads((directory / 'attempt.json').read_text())
    roles = {}
    for timing in record.get('timings', []):
        role = roles.setdefault(timing['stage'], dict(total=0, tool_calls=0, polls=0, preflights=0,
            tool_time=0, llm_generation=None, opencode_worker=None, opencode_export=None,
            assistant_non_tool=None, capacity_wait=0, llm_queue_transport=None, tool_rpc_time=None))
        role['total'] += timing['duration_seconds']
    for path in (directory / 'controller').glob('agent-*/tool-metrics.json'):
        role_name = path.parent.name.removeprefix('agent-').rsplit('_', 1)[0]
        if role_name not in roles:
            continue
        role, metrics = roles[role_name], json.loads(path.read_text())
        role['tool_calls'] += metrics.get('commands', 0)
        role['polls'] += metrics.get('polls', 0)
        role['preflights'] += metrics.get('preflights', 0)
        role['tool_time'] += metrics.get('command_seconds', 0)
    tool_events = directory / 'logs/tool-timing.jsonl'
    unfinished = []
    if tool_events.exists():
        started, finished = {}, {}
        for line in tool_events.read_text().splitlines():
            entry = json.loads(line)
            (finished if entry['status'] == 'COMMAND_FINISHED' else started)[entry['job_id']] = entry
        unfinished = [entry for key, entry in started.items() if key not in finished]
        for name, role in roles.items():
            role['tool_calls'] = sum(entry['role'] == name for entry in started.values())
            role['tool_time'] = sum(entry['duration_seconds'] for entry in finished.values() if entry['role'] == name)
    rate_wait, retries, recovery, lifecycle_cleanup = 0.0, 0, 0, 0.0
    llm_observed = set()
    event_paths = list((directory / 'controller').glob('agent-*/events.jsonl')) + [
        directory / 'events.jsonl', directory / 'logs/lifecycle-events.jsonl']
    for path in event_paths:
        if not path.exists():
            continue
        for line in path.read_text().splitlines():
            entry = json.loads(line)
            status = entry.get('status')
            if status == 'RATE_LIMIT_WAIT':
                rate_wait += entry['duration_seconds']
                retries += 1
            elif status == 'MCP_SERVER_TIMEOUT' and entry.get('retry_count') == 0:
                recovery += 1
            elif status == 'TOOL_STOP_TIMING':
                lifecycle_cleanup += entry['duration_seconds']
            elif status == 'LLM_TIMING' and entry.get('agent') in roles:
                name = entry['agent']
                llm_observed.add(name)
                role, perf = roles[name], entry.get('performance', {})
                role['capacity_wait'] += entry.get('capacity_wait_seconds', 0)
                if perf.get('worker_seconds') is not None:
                    role['opencode_worker'] = (role['opencode_worker'] or 0) + perf['worker_seconds']
                    role['llm_queue_transport'] = (role['llm_queue_transport'] or 0) + max(0, entry['dispatch_seconds'] - perf['worker_seconds'])
                if 'commands' in perf:
                    role['opencode_export'] = (role['opencode_export'] or 0) + sum(command['seconds'] for command in perf['commands'] if command['operation'] == 'export')
                if perf.get('assistant_non_tool_seconds') is not None:
                    role['assistant_non_tool'] = (role['assistant_non_tool'] or 0) + perf['assistant_non_tool_seconds']
                if perf.get('tool_rpc_seconds') is not None:
                    role['tool_rpc_time'] = (role['tool_rpc_time'] or 0) + perf['tool_rpc_seconds']
    for name, role in roles.items():
        role['shell_commands'] = role['tool_calls']
        role['tool_calls'] += role['polls'] + role['preflights']
        if name not in llm_observed:
            for key in ('opencode_worker', 'opencode_export', 'assistant_non_tool', 'capacity_wait', 'llm_queue_transport'):
                role[key] = None
    checks = []
    for revision in record.get('test_revisions', []):
        checks += [revision.get('baseline_reproducer', {})] + revision.get('repeats', [])
    suites = [record.get('baseline_regression', {})]
    for fix in record.get('fix_attempts', []):
        checks.append(fix.get('reproducer', {}))
        suites += [fix.get('directed', {}), fix.get('regression', {})]
    steps = [(name, step) for check in checks for name, step in check.get('steps', {}).items()]
    def commands(suffix):
        return sum(step.get('duration_seconds', 0) for name, step in steps if name.endswith(suffix))
    operations = record.get('operations', [])
    def operation_time(*names):
        return sum(op['total_seconds'] for op in operations if op['operation'] in names) if operations else None
    return dict(tag=record['tag'], status=record['status'], iteration_total=record.get('duration_seconds'),
        agents=roles, controller_verification_total=operation_time('verify_command'),
        verification_execution=sum(check.get('duration_seconds', 0) for check in checks + suites),
        wally_build_and_simulation=commands('-wally'), spike_time=commands('-oracle'),
        test_build_time=commands('build'), regression_time=sum(suite.get('duration_seconds', 0) for suite in suites),
        comparison_and_evidence=sum(check.get('performance', {}).get('comparison_and_evidence_seconds', 0) for check in checks)
            if any('performance' in check for check in checks) else None,
        rtl_build_time=None, simulation_only_time=None,
        worktree_setup=operation_time('make_worktree'), guards=operation_time('stage_snapshot', 'stage_finish', 'check_changes', 'test_fingerprint'),
        archive=(operation_time('save_attempt') or 0) + record.get('final_archive_seconds', 0) if operations else None,
        queue_transport=sum(op.get('queue_transport_seconds') or 0 for op in operations) if operations else None,
        cleanup=lifecycle_cleanup if llm_observed else None,
        retries=retries if llm_observed else None, recovery_retries=recovery if llm_observed else None,
        rate_limit_wait=rate_wait if llm_observed else None, unfinished_commands=unfinished,
        note='Nested/overlapping durations, not additive. Null means unavailable, not zero. '
             'LLM generation and separate RTL compilation/simulation are not exposed by the current backends. '
             'Queue/transport includes serialization, scheduling and result transfer. Old command metrics may omit interrupted jobs.')


def report(directory: Path) -> str:
    record = json.loads((directory / 'attempt.json').read_text())
    rows = [f"{record['tag']}: {record['status']}", 'Stage                 Seconds   Context bytes']
    if 'duration_seconds' in record:
        rows.insert(1, f"Iteration: {record['duration_seconds']:.1f}s")
    for stage in record.get('timings', []):
        rows.append(f"{stage['stage']:20} {stage['duration_seconds']:8.1f} {stage['context_bytes']:15d}  {stage['status']}")
    if not record.get('timings'):
        rows.append('No stage timings recorded (older run or stage still active).')
    totals = dict(commands=0, polls=0, preflights=0, command_seconds=0.0)
    metric_files = list((directory / 'controller').glob('agent-*/tool-metrics.json'))
    for path in metric_files:
        metrics = json.loads(path.read_text())
        for key in totals:
            totals[key] += metrics.get(key, 0)
    if metric_files:
        rows.append(f"Tools ({len(metric_files)} recorded sessions): {totals['commands']} commands, {totals['polls']} polls, "
                    f"{totals['preflights']} preflights, {totals['command_seconds']:.1f}s command wall time")
    else:
        rows.append('No tool metrics recorded (older run or tool shutdown has not completed).')
    rows.append('Stage times include model/tool waits and guards. Command time is included, not additional.')
    rows.append(json.dumps(measurements(directory), indent=2))
    return '\n'.join(rows)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('run', type=Path)
    parser.add_argument('--json', action='store_true', help='Machine-readable breakdown; null means unavailable')
    args = parser.parse_args()
    print(json.dumps(measurements(args.run), indent=2) if args.json else report(args.run))
