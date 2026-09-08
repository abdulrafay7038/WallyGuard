"""Audited test adapters and deterministic four-dimensional selection.

Upstream definitions remain intact in test_inventory.json. Custom profiles are
explicitly named: they do not masquerade as unsupported upstream stress tests.
"""
import hashlib
import json
from pathlib import Path
from .configs import WALLY_CONFIGS
from .qualification_state import evidence_current, load_attempts, implementation_fingerprint

DATA = Path(__file__).parent/'data'
INVENTORY = json.loads((DATA/'test_inventory.json').read_text())
BASE_OPTIONS = dict(fix_sp=1,instr_cnt=200,num_of_sub_program=0,boot_mode='m',bare_program_mode=1,
    num_of_harts=1,no_csr_instr=1,no_ebreak=1,no_dret=1,no_wfi=1,
    enable_floating_point=0,enable_vector_extension=0,no_directed_instr=1,no_fence=1)
# These are deliberate WallyGuard profiles using the installed base generator.
# Disabling subprograms and SYNCH is required by documented pyflow defects.
CUSTOM = {
    'wallyguard_rand': ('general', {}, 'Integer/M/compressed random body with forward conditional branches'),
    'wallyguard_arithmetic': ('arithmetic', {'no_branch_jump':1,'no_data_page':1}, 'Integer ALU/M/compressed instructions; no branches or memory'),
    'wallyguard_branch': ('branch', {}, 'Random forward conditional branches mixed with integer instructions; no call/iTLB stress'),
}
ADAPTERS = {name:dict(area=area,gen_test='riscv_instr_base_test',
                     generator_options={**BASE_OPTIONS,**opts},description=description,
                     adaptation='WallyGuard bare single-hart profile; 200 instructions; no subprograms, CSR, FPU, fence or directed streams')
            for name,(area,opts,description) in CUSTOM.items()}
ADAPTERS.update({
    'wallyguard_byte_memory': dict(area='memory',gen_test='riscv_instr_base_test',
        generator_options={**BASE_OPTIONS,'no_directed_instr':0,'directed_instr_0':'riscv_load_store_rand_instr_stream,20',
                           'disable_compressed_instr':1,'enable_unaligned_load_store':1},
        description='Installed load/store stream restricted to LB/LBU/SB',
        adaptation='This pyflow option combination selects only byte accesses, avoiding its broken multi-width/compressed access selection; not multi-width coverage'),
    'wallyguard_memory_hazard': dict(area='memory',gen_test='riscv_instr_base_test',
        generator_options={**BASE_OPTIONS,'no_directed_instr':0,'directed_instr_0':'riscv_load_store_hazard_instr_stream,20',
                           'disable_compressed_instr':1,'enable_unaligned_load_store':1},
        description='Byte load/store hazard directed stream', adaptation='Installed stream with byte-only access selection'),
    'wallyguard_memory_stress': dict(area='memory',gen_test='riscv_instr_base_test',
        generator_options={**BASE_OPTIONS,'no_directed_instr':0,'directed_instr_0':'riscv_load_store_stress_instr_stream,20',
                           'disable_compressed_instr':1,'enable_unaligned_load_store':1},
        description='Back-to-back byte load/store directed stream', adaptation='Installed stream with byte-only access selection'),
    'wallyguard_config_smoke': dict(area='general',gen_test='riscv_instr_base_test',
        generator_options={**BASE_OPTIONS,'instr_cnt':20},
        description='Small integer configuration qualification smoke', adaptation='20-instruction bare general profile'),
    'wallyguard_compressed': dict(area='compressed',gen_test='riscv_instr_base_test',
        generator_options={**BASE_OPTIONS,'disable_compressed_instr':0},
        description='Integer compressed instructions mixed with the random body', adaptation='Bare base generator with compressed instructions enabled'),
    'wallyguard_fence': dict(area='fence',gen_test='riscv_instr_base_test',
        generator_options={**BASE_OPTIONS,'no_fence':0},
        description='Single-hart fence instruction execution', adaptation='Bare base generator with fence generation enabled; no multi-hart ordering claim'),
    'wallyguard_loop': dict(area='loop',gen_test='riscv_instr_base_test',
        generator_options={**BASE_OPTIONS,'no_directed_instr':0,'directed_instr_0':'riscv_loop_instr,20'},
        description='Installed loop directed stream', adaptation='Bare single-program stream qualification'),
    'riscv_arithmetic_basic_test': dict(area='arithmetic',gen_test='riscv_instr_base_test',
        generator_options={**BASE_OPTIONS,'no_directed_instr':0,'directed_instr_0':'riscv_int_numeric_corner_stream,20','no_data_page':1,'no_branch_jump':1},
        description='Upstream integer corner stream and arithmetic-only body',
        adaptation='200 body instructions; corner-stream ratio 20/1000 ensures four insertions; bare single-hart setup'),
    'wallyguard_memory': dict(area='memory',gen_test='riscv_instr_base_test',
        generator_options={**BASE_OPTIONS,'no_directed_instr':0,'directed_instr_0':'riscv_load_store_rand_instr_stream,20'},
        description='Implemented pyflow random aligned load/store stream',
        adaptation='Custom single-program profile of installed load/store stream; no MMU or subprograms'),
    'wallyguard_jump': dict(area='branch',gen_test='riscv_instr_base_test',
        generator_options={**BASE_OPTIONS,'no_directed_instr':0,'directed_instr_0':'riscv_jal_instr,20'},
        description='Implemented pyflow JAL directed stream',
        adaptation='Custom single-program JAL stream; no subprogram/iTLB stress'),
})
# Populated only after a successful full remote-generation/local-comparison probe.
VALIDATION = json.loads((DATA/'validated_combinations.json').read_text()) if (DATA/'validated_combinations.json').exists() else {}
ATTEMPTS = load_attempts()
TEST_PROFILES = {}
for name, test in INVENTORY['tests'].items():
    TEST_PROFILES.setdefault(test['area'],dict(description=test['area']+' verification',tests=[]))['tests'].append(name)
for name, adapter in ADAPTERS.items():
    tests = TEST_PROFILES.setdefault(adapter['area'],dict(description=adapter['description'],tests=[]))['tests']
    if name not in tests: tests.append(name)
CAMPAIGN_WEIGHTS = {'general':4,'arithmetic':3,'branch':3,'memory':2,'loop':2}


def compatibility(config, test, *, candidate=False):
    cfg=WALLY_CONFIGS[config]
    adapter=ADAPTERS.get(test)
    reason=cfg['reason']
    if reason is None and test == 'wallyguard_memory':
        reason = ('Installed pyflow gen_load_store_instr accumulates allowed_instr across accesses; '
                  'it emits invalid compressed offsets (RV32 seed 5382: c.sw a5,-246(a5)) and can select misaligned widths. '
                  'The stream is generated and inventoried, but is not campaign-safe on either XLEN.')
    if reason is None and test == 'wallyguard_loop':
        reason = ('Installed riscv_loop_instr constructs an unrandomized loop-update instruction; '
                  'the qualification assembly contains srai with an unset immediate and GCC reports '
                  'instruction srai requires absolute expression. The loop generator needs a semantic fix.')
    if reason is None and adapter is None:
        reason=INVENTORY['tests'][test]['reason']
        if reason and 'unvalidated' in reason and not any(word in reason for word in ('TODO','Missing','No ', 'missing')):
            reason=None
    fingerprint=hashlib.sha256(json.dumps(dict(config=config,test=test,adapter=adapter,revision=INVENTORY['provenance']['revision']),sort_keys=True).encode()).hexdigest()
    proof=VALIDATION.get(config,{}).get(test)
    if not evidence_current(proof, cfg['config_sha256'], fingerprint):
        proof = None
    attempt=ATTEMPTS.get(config,{}).get(test)
    if not evidence_current(attempt,cfg['config_sha256'],fingerprint):attempt=None
    if reason is None and attempt and attempt['status']=='UNSUPPORTED':
        reason=attempt['reason']
    status='UNSUPPORTED' if reason else 'SUPPORTED' if proof else 'UNQUALIFIED'
    if status=='UNQUALIFIED':
        reason=(attempt or {}).get('reason') or 'Awaiting successful end-to-end qualification for this configuration/profile'
    area=adapter['area'] if adapter else INVENTORY['tests'][test]['area']
    return dict(wally_config=config,xlen=cfg['xlen'],spike_isa=cfg['spike_isa'],
        riscv_dv_target=cfg['riscv_dv_target'],mabi=cfg['mabi'],config_sha256=cfg['config_sha256'],
        implementation_fingerprint=implementation_fingerprint(),
        riscv_dv_revision=INVENTORY['provenance']['revision'],profile_fingerprint=fingerprint,test_area=area,riscv_dv_test=test,
        generator_backend='pyflow' if adapter else INVENTORY['tests'][test]['generator_backend'],
        generator_options=adapter['generator_options'] if adapter else {},
        gen_test=adapter['gen_test'] if adapter else INVENTORY['tests'][test]['gen_test'],
        status=status,campaign_enabled=status=='SUPPORTED' or (candidate and status=='UNQUALIFIED'),
        reason=reason,validation=proof,qualification_attempt=attempt,
        wally_execution='validated' if proof else 'unvalidated',
        spike_execution='validated' if proof else 'unvalidated',
        trace_comparison='validated' if proof else 'unsupported' if status=='UNSUPPORTED' else 'unqualified',
        signature_comparison='optional',normalization_required=True,
        required_extensions=['I','M','C','Zicsr'] if adapter else INVENTORY['tests'][test]['required_extensions'],
        trace_requirements=['ordered PC/binary/events','integer GPR effects','privilege mode'],
        adaptation=adapter.get('adaptation') if adapter else None)


def stable_number(*parts):
    return int.from_bytes(hashlib.sha256('|'.join(map(str,parts)).encode()).digest()[:8],'big')


def resolve_selection(config, area, seed, test=None, *, candidate=False):
    if config not in WALLY_CONFIGS: raise ValueError(f'Unknown Wally configuration: {config}')
    if test is not None:
        if test not in ADAPTERS and test not in INVENTORY['tests']:
            raise ValueError(f'Unknown installed/custom RISC-V-DV test: {test}')
        return compatibility(config,test,candidate=candidate)
    if area=='campaign':
        choices=[]
        for a,weight in CAMPAIGN_WEIGHTS.items():
            if any(compatibility(config,t,candidate=candidate)['campaign_enabled'] for t in TEST_PROFILES.get(a,{}).get('tests',[])):
                choices.extend([a]*weight)
        if not choices:
            return dict(compatibility(config,'wallyguard_rand',candidate=candidate),test_area='campaign',reason=WALLY_CONFIGS[config]['reason'] or 'No compatible weighted areas',campaign_enabled=False)
        area=choices[stable_number(config,seed,'area')%len(choices)]
    if area not in TEST_PROFILES:raise ValueError(f'Unknown test area: {area}')
    options=[compatibility(config,t,candidate=candidate) for t in sorted(TEST_PROFILES[area]['tests'])]
    eligible=[s for s in options if s['campaign_enabled']]
    if eligible:return eligible[stable_number(config,area,seed,'test')%len(eligible)]
    # Return an explicit skip, preserving every underlying blocker's explanation.
    result=dict(options[0]);result.update(campaign_enabled=False,
        status='UNQUALIFIED' if any(s['status']=='UNQUALIFIED' for s in options) else 'UNSUPPORTED',
        reason='; '.join(dict.fromkeys(s['reason'] for s in options)))
    return result


def matrix():
    return [compatibility(c,t) for c in sorted(WALLY_CONFIGS) for t in sorted(set(INVENTORY['tests'])|set(ADAPTERS))]


def configuration_status(config):
    rows=[compatibility(config,t) for t in ADAPTERS]
    if any(row['status']=='SUPPORTED' for row in rows):return 'SUPPORTED', None
    smoke=compatibility(config,'wallyguard_config_smoke')
    if WALLY_CONFIGS[config]['reason']:return 'UNSUPPORTED',WALLY_CONFIGS[config]['reason']
    attempt=smoke.get('qualification_attempt') or {}
    if attempt.get('category') in ('bad ISA mapping','trace hierarchy assumption','configuration compilation failure',
                                  'configuration constraint violation','generator startup incompatibility'):
        return smoke['status'],smoke['reason']
    return 'UNQUALIFIED',smoke['reason']


def list_data(kind, as_json=False):
    rows_all = matrix()
    if kind=='matrix':data=rows_all
    elif kind=='configs':
        data=[]
        for c,v in sorted(WALLY_CONFIGS.items()):
            areas=sorted({s['test_area'] for s in rows_all if s['wally_config']==c and s['campaign_enabled']})
            status,reason=configuration_status(c)
            data.append(dict(v,supported_areas=areas,campaign_enabled=bool(areas),verilator='validated' if areas else 'unvalidated',wally_trace='validated' if areas else 'unvalidated',spike_trace='validated' if areas else 'unvalidated',
                             status=status,reason=reason))
    elif kind=='areas':
        data=[]
        for a,v in sorted(TEST_PROFILES.items()):
            rows=[s for s in rows_all if s['test_area']==a]
            states={s['status'] for s in rows}
            data.append(dict(test_area=a,**v,status='SUPPORTED' if 'SUPPORTED' in states else 'UNQUALIFIED' if 'UNQUALIFIED' in states else 'UNSUPPORTED',
                compatible_configs=sorted({s['wally_config'] for s in rows if s['campaign_enabled']}),weight=CAMPAIGN_WEIGHTS.get(a,0)))
    else:
        data=[]
        for t in sorted(set(INVENTORY['tests'])|set(ADAPTERS)):
            rows=[s for s in rows_all if s['riscv_dv_test']==t]
            data.append(dict(riscv_dv_test=t,test_area=rows[0]['test_area'],
                status='SUPPORTED' if any(s['campaign_enabled'] for s in rows) else 'UNQUALIFIED' if any(s['status']=='UNQUALIFIED' for s in rows) else 'UNSUPPORTED',
                compatible_configs=[s['wally_config'] for s in rows if s['campaign_enabled']],
                reasons={s['wally_config']:s['reason'] for s in rows if not s['campaign_enabled']},
                definition=INVENTORY['tests'].get(t,ADAPTERS.get(t))))
    if as_json:print(json.dumps(data,indent=2));return
    if kind=='configs':print('CONFIG                           STATUS       XLEN    ISA / DV TARGET / AREAS / REASON')
    for row in data:
        if kind=='configs':print(f"{row['wally_config']:32} {row['status']:12} XLEN={row['xlen']} ISA={row['spike_isa']} target={row['riscv_dv_target']} | {','.join(row['supported_areas'])} | {row['reason'] or ''}")
        elif kind=='areas':print(f"{row['test_area']:12} {row['status']:12} configs={','.join(row['compatible_configs'])} | tests={','.join(row['tests'])}")
        else:print(f"{row['riscv_dv_test']} | {row['test_area']} | {row['status']} | configs={','.join(row['compatible_configs'])} | {'; '.join(dict.fromkeys(row['reasons'].values()))}")
