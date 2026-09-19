"""Print recorded stage timings: python -m orchestration.performance runs/TAG."""
import argparse
import json
from pathlib import Path


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
    return '\n'.join(rows)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('run', type=Path)
    args = parser.parse_args()
    print(report(args.run))
