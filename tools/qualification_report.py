"""Export current three-state qualification counts and the full compatibility matrix."""
import argparse
import csv
import fcntl
import json
import re
from collections import Counter
from datetime import datetime, timezone
from pathlib import Path
from . import test_profiles as profiles
from .configs import ROOT, WALLY_CONFIGS
from .qualification_state import atomic_json, classify_failure, evidence_current, ATTEMPTS_FILE, configuration_startup_blocker


def review_failures():
    """Reclassify saved diagnostics without regenerating or rerunning an ELF."""
    with (ROOT/'.qualification.lock').open('a') as lock:
        fcntl.flock(lock,fcntl.LOCK_EX|fcntl.LOCK_NB)
        for config,tests in profiles.ATTEMPTS.items():
            for test,attempt in tests.items():
                row=profiles.compatibility(config,test)
                if not row.get('qualification_attempt') or attempt['outcome']=='PASS':continue
                result_path=Path(attempt['result'])
                if not result_path.exists():continue
                result=json.loads(result_path.read_text());pieces=[]
                artifact=attempt.get('artifact_directory')
                if artifact and (Path(artifact)/'generation.log').exists():pieces.append((Path(artifact)/'generation.log').read_text(errors='replace'))
                for side in ('wally','spike'):
                    runner=result.get(side,{})
                    if runner.get('timed_out'):result['timed_out']=True
                    path=runner.get('runner_log_path') or runner.get('log_path')
                    if path and Path(path).exists():pieces.append(Path(path).read_text(errors='replace')[-200000:])
                log='\n'.join(pieces)
                status,category=classify_failure(result,log)
                errors=[line.strip() for line in log.splitlines() if re.search(r'^(?:\w*(?:Error|Exception):|%Error)|\berror:|%Fatal:',line)]
                diagnostic=next((line for line in errors if not line.startswith(('RuntimeError: RISC-V-DV exited','Exception: Test-generation jobs failed'))),result.get('error') or result['status'])
                diagnostic=configuration_startup_blocker(result,log) or diagnostic
                attempt['diagnostic']=diagnostic
                attempt['observed_failure_category']=category
                if attempt.get('category')!='known technical blocker':
                    previous={k:attempt[k] for k in ('status','category','reason')}
                    attempt.update(status=status,category=category,reason=category+': '+str(diagnostic))
                    if previous!={k:attempt[k] for k in previous}:attempt['previous_classification']=previous
                atomic_json(result_path.parent/'qualification.json',attempt)
        atomic_json(ATTEMPTS_FILE,profiles.ATTEMPTS)


def build_report():
    rows=profiles.matrix();configs=[];areas=[]
    for config,cfg in sorted(WALLY_CONFIGS.items()):
        status,reason=profiles.configuration_status(config)
        configs.append(dict(cfg,status=status,reason=reason))
        for area in sorted(profiles.TEST_PROFILES):
            selected=[r for r in rows if r['wally_config']==config and r['test_area']==area]
            states={r['status'] for r in selected}
            state='SUPPORTED' if 'SUPPORTED' in states else 'UNQUALIFIED' if 'UNQUALIFIED' in states else 'UNSUPPORTED'
            areas.append(dict(wally_config=config,test_area=area,status=state,
                supported_tests=[r['riscv_dv_test'] for r in selected if r['status']=='SUPPORTED'],
                unqualified_tests=[r['riscv_dv_test'] for r in selected if r['status']=='UNQUALIFIED'],
                unsupported_tests=[r['riscv_dv_test'] for r in selected if r['status']=='UNSUPPORTED']))
    report=dict(generated_at=datetime.now(timezone.utc).isoformat(),configurations_discovered=len(configs),configuration_counts=dict(Counter(c['status'] for c in configs)),
        configurations=configs,upstream_tests=sorted(profiles.INVENTORY['tests']),
        supported_areas=sorted({r['test_area'] for r in rows if r['status']=='SUPPORTED'}),
        combination_counts=dict(Counter(r['status'] for r in rows)),area_config_matrix=areas)
    probes={}
    for config,tests in profiles.ATTEMPTS.items():
        for test,attempt in tests.items():
            if test in profiles.INVENTORY['tests']:
                row=profiles.compatibility(config,test)
                probes.setdefault(test,[]).append(dict(wally_config=config,outcome=attempt['outcome'],
                    current_status=row['status'],execution_inputs_current=bool(row.get('qualification_attempt')),
                    result=attempt['result'],diagnostic=attempt.get('diagnostic') or attempt.get('reason')))
    report['upstream_probes']=probes
    report['upstream_tests_attempted']=len(probes)
    atomic_json(ROOT/'docs/qualification_results.json',report)
    atomic_json(profiles.DATA/'compatibility.json',rows)
    with (ROOT/'docs/area_config_matrix.csv').open('w') as handle:
        writer=csv.DictWriter(handle,fieldnames=list(areas[0]));writer.writeheader()
        writer.writerows({k:','.join(v) if isinstance(v,list) else v for k,v in row.items()} for row in areas)
    counts=report['configuration_counts']
    lines=['# Current qualification results','',f"Configurations discovered: {len(configs)}. "+', '.join(f'{k}: {v}' for k,v in counts.items())+'.','',
        'Supported areas: '+', '.join(report['supported_areas'])+'.','',
        'These counts are current source-qualified evidence, not the number of tests that passed in earlier source revisions. Unqualified configurations are not declared incompatible.','',
        'See [all configuration statuses and reasons](qualification_results.json), [area/config support](area_config_matrix.csv), [full config/area/exact-test matrix](../tools/data/compatibility.json), and [commands/cache semantics](QUALIFICATION.md).','',
        '## Supported configurations','', '| Configuration | XLEN | Spike ISA | DV target | Qualified areas |','|---|---:|---|---|---|']
    for c in configs:
        if c['status']=='SUPPORTED':
            enabled=sorted({r['test_area'] for r in rows if r['wally_config']==c['wally_config'] and r['status']=='SUPPORTED'})
            lines.append(f"| {c['wally_config']} | {c['xlen']} | {c['spike_isa']} | {c['riscv_dv_target']} | {', '.join(enabled)} |")
    lines+=['','## Exact upstream tests discovered','']+['- `'+t+'`' for t in report['upstream_tests']]
    lines+=['',f"Upstream definitions with saved probe evidence: {len(probes)}/{len(report['upstream_tests'])}. Historical probes are distinguished from current execution-input qualification in the JSON report.",'']
    lines+=['','## Concrete configuration blockers','']
    for reason,count in Counter(c['reason'] for c in configs if c['status']=='UNSUPPORTED').items():lines.append(f'- {count}: {reason}')
    lines+=['','## Test probe evidence','', '| Configuration / exact test | State | Observed outcome | Reason / diagnostic | Evidence |','|---|---|---|---|---|']
    for row in rows:
        attempt=row.get('qualification_attempt')
        if not attempt:continue
        reason=(attempt.get('reason') or '')+' '+(attempt.get('diagnostic') or '')
        reason=reason.replace('|','/').replace('\n',' ')
        lines.append(f"| {row['wally_config']} / {row['riscv_dv_test']} | {row['status']} | {attempt['outcome']} | {reason} | [result]({attempt['result']}) |")
    (ROOT/'docs/QUALIFICATION_RESULTS.md').write_text('\n'.join(lines)+'\n')
    print(json.dumps({k:report[k] for k in ('configurations_discovered','configuration_counts','supported_areas','combination_counts')},indent=2))
    return report

if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--review-failures',action='store_true');args=parser.parse_args()
    if args.review_failures:review_failures()
    build_report()
