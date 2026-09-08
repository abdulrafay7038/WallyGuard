"""Sequential CHIA qualification with persistent, versioned PASS/failure evidence."""
import argparse
import csv
from collections import Counter
from datetime import datetime, timezone
import fcntl
import json
from pathlib import Path
import shlex
import shutil
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from tools import test_profiles as profiles
from tools.configs import ROOT, WALLY_CONFIGS
from tools.qualification_state import (atomic_json, classify_failure, implementation_fingerprint,
                                      evidence_current, ATTEMPTS_FILE)
from tools.build_storage import BUILD_ROOT, release_intermediates


def stimulus_coverage(result, selection):
    """A PASS without any instructions from the requested family is insufficient."""
    marker=int(result['generation']['compare_start_pc'],16)
    counts=Counter();in_body=False
    with Path(result['wally']['trace_path']).open() as handle:
        for row in csv.DictReader(handle):
            if int(row['pc'],16)==marker:in_body=True
            if not in_body:continue
            binary=int(row['binary'],16)
            counts['instructions']+=1
            if binary & 3 != 3:counts['compressed']+=1
            if binary & 0x7f==0x0f:counts['fence']+=1
            if binary & 0x7f in (0x03,0x23):counts['memory']+=1
            if binary & 0x7f==0x03:counts['loads']+=1
            if binary & 0x7f==0x23:counts['stores']+=1
    area=selection['test_area']
    required=area if area in ('compressed','fence','memory') else 'instructions'
    validated=counts[required]>0
    if area=='memory':validated=counts['loads']>0 and counts['stores']>0
    return dict(counts=counts,required=required,validated=validated)


def raw_selection(config, test):
    """Probe the installed definition unchanged. Never substitute a bare profile."""
    selection=profiles.compatibility(config,test,candidate=True)
    if test not in profiles.ADAPTERS:
        record=profiles.INVENTORY['tests'][test]
        options={}
        for item in shlex.split(record['generator_options'],comments=True):
            if item.startswith('+') and '=' in item:
                key,value=item[1:].split('=',1);options[key]=value
        selection.update(generator_options=options,gen_test=record['gen_test'])
    return selection


def execute_one(config,test,session,args):
    import ray
    from chia.base.ChiaFunction import get
    from tools import generator
    from tools.campaign import inspect_local_elf
    from wally_loop import execute_elf,save_summary
    selection=raw_selection(config,test)
    blocked=selection['status']=='UNSUPPORTED'
    # A diagnostic probe may run a blocked upstream definition, but its PASS
    # cannot override a missing architectural oracle or known unsafe backend.
    selection['campaign_enabled']=True
    selection['generation_timeout']=args.generator_timeout
    directory=session/f'{config}_{test}';directory.mkdir()
    result=None;log='';meta={}
    try:
        ref=generator.generate_riscv_dv_test.chia_remote(args.seed,selection=selection)
        try:
            generated=get(ref, timeout=args.generator_timeout+120)
        except Exception:
            ray.cancel(ref,force=False);raise
        log=generated.get('generation_log','')
        elf,artifact,meta=generator.materialize_generated_test(generated,directory.name+'_'+session.name,ROOT/'generated_tests')
        del generated
        if elf is None:
            result=meta
            atomic_json(directory/'result.json',meta)
        else:
            inspect_local_elf(elf,artifact)
            previous_builds=set(BUILD_ROOT.glob(config+'_testbench*'))
            run_args=argparse.Namespace(wally_config=config,wally_timeout=args.wally_timeout,
                                      spike_timeout=args.spike_timeout,local=False)
            wally,spike,comparison=execute_elf(elf,directory,run_args)
            created_builds=set(BUILD_ROOT.glob(config+'_testbench*'))-previous_builds
            atomic_json(directory/'build_cleanup.json',release_intermediates(created_builds))
            save_summary(directory,elf,wally,spike,comparison,generation=meta,config=config)
            result=json.loads((directory/'result.json').read_text())
            if result['status']=='PASS':
                coverage=stimulus_coverage(result,selection)
                atomic_json(directory/'stimulus.json',coverage)
                if not coverage['validated']:
                    result=dict(result,status='QUALIFICATION_COVERAGE_ERROR',error='No retired '+coverage['required']+' instructions in the generated body')
                    atomic_json(directory/'result.json',result)
            result['timed_out']=wally['timed_out'] or spike['timed_out']
            for side in ('wally','spike'):
                path=Path(result[side].get('runner_log_path',result[side]['log_path']))
                if path.exists():log+='\n'+path.read_text(errors='replace')[-200000:]
    except Exception as exc:
        result=dict(status='QUALIFICATION_ERROR',error=f'{type(exc).__name__}: {exc}')
        atomic_json(directory/'result.json',result)
    if result['status']=='PASS' and not blocked:
        status,category='SUPPORTED','complete end-to-end PASS'
        reason=None
    elif blocked:
        status,category='UNSUPPORTED','known technical blocker'
        reason=selection['reason']
    else:
        status,category=classify_failure(result,log)
        reason=category+': '+str(result.get('error') or result['status'])
    evidence=dict(status=status,category=category,reason=reason,
        outcome=result['status'],result=str(directory/'result.json'),
        artifact_directory=str(artifact) if 'artifact' in locals() else None,
        seed=args.seed,config_sha256=selection['config_sha256'],
        profile_fingerprint=selection['profile_fingerprint'],
        implementation_fingerprint=implementation_fingerprint(),
        timestamp=datetime.now(timezone.utc).isoformat(),elf_sha256=meta.get('elf_sha256'))
    atomic_json(directory/'qualification.json',evidence)
    profiles.ATTEMPTS.setdefault(config,{})[test]=evidence
    if status=='SUPPORTED':profiles.VALIDATION.setdefault(config,{})[test]=evidence
    else:profiles.VALIDATION.get(config,{}).pop(test,None)
    atomic_json(ATTEMPTS_FILE,profiles.ATTEMPTS)
    atomic_json(profiles.DATA/'validated_combinations.json',profiles.VALIDATION)
    return evidence


def main(argv=None):
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('mode',choices=('configs','tests'))
    p.add_argument('--config',default='all')
    p.add_argument('--test',action='append')
    p.add_argument('--seed',type=int,default=5382)
    p.add_argument('--force',action='store_true',help='Repeat current evidence, including failed probes')
    p.add_argument('--limit',type=int,help='Bound the number of new attempts; all others remain unqualified')
    p.add_argument('--wally-timeout',type=int,default=1800)
    p.add_argument('--spike-timeout',type=int,default=120)
    p.add_argument('--generator-timeout',type=int,default=720)
    p.add_argument('--min-free-gb',type=float,default=2.0,help='Stop before exhausting build/evidence storage; deferred candidates remain UNQUALIFIED')
    p.add_argument('--plan',action='store_true',help='Print candidate plan without connecting to Ray')
    args=p.parse_args(argv)
    if args.limit is not None and args.limit<0:p.error('--limit must be nonnegative')
    if args.min_free_gb<0:p.error('--min-free-gb must be nonnegative')
    if min(args.wally_timeout,args.spike_timeout,args.generator_timeout)<=0:p.error('Timeouts must be positive')
    if not 0<=args.seed<2**31:p.error('Seed must be in [0, 2**31)')
    if args.config!='all' and args.config not in WALLY_CONFIGS:p.error('Unknown Wally configuration')
    configs=sorted(WALLY_CONFIGS,key=lambda c:(WALLY_CONFIGS[c]['derivative'],c)) if args.config=='all' else [args.config]
    if args.mode=='tests' and args.config=='all':
        configs=[c for c in configs if profiles.configuration_status(c)[0]=='SUPPORTED']
    tests=args.test or (['wallyguard_config_smoke'] if args.mode=='configs' else sorted(set(profiles.ADAPTERS)|set(profiles.INVENTORY['tests']),key=lambda t:(t not in profiles.ADAPTERS,t)))
    if any(t not in profiles.ADAPTERS and t not in profiles.INVENTORY['tests'] for t in tests):p.error('Unknown test')
    todo=[];skips=[]
    for config in configs:
        for test in tests:
            selection=profiles.compatibility(config,test,candidate=True)
            if WALLY_CONFIGS[config]['reason']:
                skips.append(dict(config=config,test=test,status='UNSUPPORTED',reason=WALLY_CONFIGS[config]['reason']));continue
            if args.mode=='configs' and profiles.configuration_status(config)[0]=='SUPPORTED' and not args.force:continue
            attempt=selection.get('qualification_attempt')
            if not args.force and (selection['status']=='SUPPORTED' or (attempt and attempt['status']=='UNSUPPORTED')):continue
            todo.append((config,test))
    if args.limit is not None:todo=todo[:args.limit]
    if args.plan:
        print(json.dumps(dict(attempts=todo,skips=skips),indent=2));return 0
    session=ROOT/'runs'/datetime.now(timezone.utc).strftime('qualification_%Y%m%d_%H%M%S_%f')
    session.mkdir(parents=True)
    atomic_json(session/'plan.json',dict(attempts=todo,skips=skips))
    print('Qualification evidence:',session,flush=True)
    if not todo:print('No new qualification attempts required.',flush=True);return 0
    # One driver owns cache mutations and local simulator qualification at a time.
    with (ROOT/'.qualification.lock').open('w') as lock:
        try:fcntl.flock(lock,fcntl.LOCK_EX|fcntl.LOCK_NB)
        except BlockingIOError:p.error('Another qualification command is running')
        import ray,ray.cloudpickle
        from tools import generator
        ray.init(address='auto',logging_level='ERROR',runtime_env={'env_vars':{'PYTHONPATH':str(ROOT)}})
        ray.cloudpickle.register_pickle_by_value(generator)
        available=ray.cluster_resources()
        missing=[r for r in ('generator','wally','spike','compare') if available.get(r,0)<1]
        if missing:raise RuntimeError('Missing CHIA resources: '+','.join(missing))
        results=[]
        for index,(config,test) in enumerate(todo,1):
            free=shutil.disk_usage(ROOT).free
            if free < args.min_free_gb*1024**3:
                reason=f'Infrastructure limitation: {free/1024**3:.2f} GiB free; qualification reserve is {args.min_free_gb:.2f} GiB'
                atomic_json(session/'deferred.json',dict(status='UNQUALIFIED',reason=reason,attempts=todo[index-1:]))
                atomic_json(session/'summary.json',dict(results=results,counts=dict(Counter(r['status'] for r in results)),remaining=len(todo)-index+1,infrastructure_error=reason))
                print(reason+'; remaining candidates stay UNQUALIFIED.',flush=True)
                from tools.qualification_report import build_report
                build_report()
                return 1
            print(f'[{index}/{len(todo)}] {config} / {test}',flush=True)
            result=execute_one(config,test,session,args)
            results.append(dict(wally_config=config,riscv_dv_test=test,**result))
            atomic_json(session/'summary.json',dict(results=results,counts=dict(Counter(r['status'] for r in results)),remaining=len(todo)-index))
            print(f"  {result['status']}: {result['reason'] or result['category']}",flush=True)
        print('Qualification counts:',dict(Counter(r['status'] for r in results)),flush=True)
        from tools.qualification_report import build_report
        build_report()
        return int(any(r['status']!='SUPPORTED' for r in results))

if __name__=='__main__':raise SystemExit(main())
