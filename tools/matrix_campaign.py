"""Sequential configuration/area orchestration over the bounded existing campaign."""
import copy
import json
from collections import defaultdict
from .configs import WALLY_CONFIGS
from .test_profiles import TEST_PROFILES, resolve_selection, configuration_status
from .campaign import run_campaign, write_json
from . import console


def aggregate(results, skips):
    groups={name:defaultdict(lambda:dict(tests=0,passed=0,mismatch=0,generator_errors=0,infrastructure_errors=0)) for name in ('by_config_area','by_test','by_config')}
    for row in results:
        keys=(f"{row['wally_config']}/{row['test_area']}", f"{row['wally_config']}/{row['riscv_dv_test']}",row['wally_config'])
        for group,key in zip(groups.values(),keys):
            count=group[key];count['tests']+=1;status=row['status']
            category=('passed' if status=='PASS' else 'mismatch' if status=='TRACE_MISMATCH' else
                      'generator_errors' if status in ('GENERATOR_ERROR','INITIALIZATION_ERROR') else 'infrastructure_errors')
            count[category]+=1
    return {**{k:dict(v) for k,v in groups.items()},'skipped':skips,'results':results}


def run_matrix(args,session,execute,save,display,directed):
    configs=sorted(WALLY_CONFIGS) if args.wally_config=='all' else [args.wally_config]
    areas=sorted(TEST_PROFILES) if args.all_areas else [args.test_area]
    results=[];skips=[];failed=False;directed_results={}
    original_config=args.wally_config
    def persist():
        report=aggregate(results,skips);report['directed']=directed_results
        write_json(session/'matrix_summary.json',report)
        write_json(session/'skipped.json',skips)
        return report
    # Consolidate derivative exclusions once. All concrete config/area records
    # remain machine-readable; do not perform O(skips squared) JSON rewrites.
    derivatives=[c for c in configs if configuration_status(c)[0]!='SUPPORTED' and WALLY_CONFIGS[c].get('derivative')]
    for c in derivatives:
        for a in areas:
            state,reason=configuration_status(c)
            skips.append(dict(wally_config=c,test_area=a,status='SKIPPED_'+state,
                              xlen=WALLY_CONFIGS[c]['xlen'],reason=reason))
    if derivatives:
        print(f"{len(derivatives)} derivative configurations are not qualified for campaigns; states and reasons in skipped.json",flush=True)
    write_json(session/'skipped.json',skips)
    configs=[c for c in configs if c not in derivatives]
    # CONFIG=all retains directed-first behavior across the whole experiment.
    if original_config=='all' and not args.skip_directed and 'rv64gc' in configs and any(
            resolve_selection('rv64gc',a,args.seed or 0,args.riscv_dv_test)['campaign_enabled'] for a in areas):
        args.wally_config='rv64gc'
        directory=session/'rv64gc_directed';directory.mkdir()
        directed_results['rv64gc']=directed(args,directory,save)
        failed |= bool(directed_results['rv64gc']['failed'])
        if failed and args.stop_on_failure:persist();return 1
    for config in configs:
        # save() closes over the original argument object: keep its config synchronized.
        args.wally_config=config
        ran_directed=config in directed_results
        for area in areas:
            selection=resolve_selection(config,area,args.seed or 0,args.riscv_dv_test)
            if not selection['campaign_enabled']:
                skip=dict(selection,status='SKIPPED_'+selection['status'])
                skips.append(skip)
                directory=session/f'skipped_{config}_{area}';directory.mkdir(exist_ok=True)
                write_json(directory/'result.json',skip)
                print(f"{skip['status']} {config}/{area}: {selection['reason']}",flush=True)
                continue
            child=copy.copy(args);child.test_area=area
            if args.all_areas:child.num_tests=args.num_tests_per_area;child.once=False
            directory=session/f'{config}_{area}';directory.mkdir()
            if not ran_directed and not args.skip_directed:
                # Existing directed ELFs are RV64GC. Never run them on an RV32 core.
                if config=='rv64gc':
                    child.directed_summary=directed(child,directory,save)
                    directed_results[config]=child.directed_summary
                    if child.directed_summary['failed']:
                        failed=True
                        if args.stop_on_failure:persist();return 1
                else:
                    skips.append(dict(wally_config=config,test_area='local_directed',status='SKIPPED_UNSUPPORTED',reason='Existing tests/*.elf are RV64GC binaries; no matching directed build for this config'))
                ran_directed=True
            console.phase(f'{config} | {area} | RISC-V-DV')
            code=run_campaign(child,directory,execute,save,lambda *a:display(*a,generated=True))
            campaign=json.loads((directory/'campaign.json').read_text())
            results.extend(campaign['results']);failed |= bool(code)
            persist()
            if code==130 or (code and args.stop_on_failure):return code
    args.wally_config=original_config
    report=persist()
    print('\nCONFIG / AREA                         TESTS   PASS   MISMATCH   GEN_ERR   INFRA_ERR',flush=True)
    for key,c in sorted(report['by_config_area'].items()):
        print(f"{key:36} {c['tests']:5} {c['passed']:6} {c['mismatch']:10} {c['generator_errors']:9} {c['infrastructure_errors']:11}")
    for title,groups in (('Exact underlying tests',report['by_test']),('Configuration totals',report['by_config'])):
        print(f'\n{title}:',flush=True)
        for key,c in sorted(groups.items()):
            print(f"  {key:48} {c['tests']:4} tests | {c['passed']:4} PASS | {c['mismatch']} mismatch | {c['generator_errors']} generator errors | {c['infrastructure_errors']} infrastructure errors",flush=True)
    print(f'Skipped combinations: {len(skips)} | Summary: {session / "matrix_summary.json"}',flush=True)
    return int(failed)
