"""Build auditable test records from the captured remote YAML and Python sources."""
import json, re
from pathlib import Path
import yaml

DATA=Path(__file__).parent/'data'

def build():
    raw=json.loads((DATA/'riscv_dv_inventory.json').read_text()); files=raw['files']
    tests={}; imports={}
    for path,text in files.items():
        if not path.endswith('.yaml') or 'testlist' not in path: continue
        imports[path]=[]
        for entry in yaml.safe_load(text) or []:
            if 'import' in entry:
                imports[path].append(entry['import'].replace('<riscv_dv_root>/',''));continue
            if 'test' not in entry: continue
            name=entry['test']; record=tests.setdefault(name,dict(name=name,variants=[]))
            record['variants'].append(dict(source=path,**entry))
    def reachable(path,seen=None):
        seen=set() if seen is None else seen
        if path in seen:return set()
        seen.add(path)
        names={n for n,r in tests.items() if any(v['source']==path for v in r['variants'])}
        for child in imports.get(path,[]):names |= reachable(child,seen)
        return names
    targets={p.split('/')[1]:sorted(reachable(p)) for p in imports if p.startswith('target/')}
    factory=files['pygen/pygen_src/riscv_utils.py']
    available=set(re.findall(r'"(riscv_\w+)":',factory))
    streams={}
    for p,s in files.items():
        if p.startswith(('pygen/pygen_src/','src/')):
            for name in re.findall(r'class\s+(riscv_\w+)\s*(?:\(|extends)',s):
                if any(x in p for x in ('directed','load_store','loop','amo','stream')):
                    streams.setdefault(name,dict(name=name,sources=[],pyflow_factory=name in available))['sources'].append(p)
    for name,r in tests.items():
        v=r['variants'][0]; opts=v.get('gen_opts',''); gen=v.get('gen_test')
        directed=re.findall(r'(?:directed_instr_\d+|stream_name_\d+)=(\w+)',opts)
        area='general'; reason=None
        if 'floating_point' in name: area='fpu';reason='Missing FPR architectural comparison'
        elif 'vector' in name: area='vector';reason='No vector state comparison or vector Wally configuration'
        elif 'debug' in name: area='debug';reason='No equivalent debug driver; pyflow gen_debug_rom is TODO/pass'
        elif 'interrupt' in name: area='interrupt';reason='No synchronized deterministic interrupt stimulus'
        elif 'csr' in name: area='csr';reason='CSR writes are diagnostic only; CSR model/privilege equivalence is not compared'
        elif any(x in name for x in ('page_table','sfence','mmu')): area='mmu';reason='pyflow gen_page_table_section is TODO/pass; translation/trap alignment unvalidated'
        elif 'privileged' in name or 'pmp' in name or 'u_mode' in name: area='privilege';reason='Privilege/PMP setup and complete trap transitions are unvalidated'
        elif any(x in name for x in ('illegal','ebreak','misaligned','unaligned')): area='exception';reason='Exception generation/handler alignment unvalidated; no campaign trap adapter'
        elif name in ('riscv_b_ext_test','riscv_zbb_zbt_test'): area='bitmanip';reason='No qualified B/Zbt target profile: selected Spike ISA is the GC/IMC subset; Zbt is not mapped or compared as a supported extension'
        elif 'shared_mem' in name or 'single_hart' in name: area='multihart';reason='Profile belongs to multi_harts target; only the single-hart bare target adapters are qualified'
        elif 'cov_test' in name: area='coverage';reason='Trace consumer/coverage task, not executable test generation'
        elif 'amo' in name: area='atomic';reason='LR/SC outcomes and atomic memory effects lack equivalent comparison model'
        elif 'arithmetic' in name: area='arithmetic'
        elif 'loop' in name: area='loop'
        elif 'jump' in name: area='branch'
        elif 'compressed' in name or 'hint' in name: area='compressed'
        backend=('special-python-csr' if name=='riscv_csr_test' else
                 'pyflow' if f'pygen/pygen_src/test/{gen}.py' in files else 'unavailable-in-pyflow')
        if reason is None:
            missing=sorted(set(directed)-available)
            reason=('Directed streams missing from pyflow factory: '+', '.join(missing) if missing else
                    'Not yet validated end-to-end with the installed pyflow backend')
        if area in ('general','branch','loop','compressed') and reason.startswith('Not yet'):
            if backend == 'unavailable-in-pyflow':
                reason = f'No pyflow/pygen_src/test/{gen}.py implementation; installed test requires another backend'
            elif name == 'riscv_loop_test':
                reason = 'Implemented loop stream emits srai zero,zero,none (seed 5382); GCC rejects non-absolute immediate; upstream subprogram callstack also incomplete'
            else:
                reason = 'Upstream profile enables subprograms: pyflow gen_callstack accesses self.callstack_gen without initializing it; random-test subclass also overrides num_of_sub_program to 5'
        r.update(area=area,gen_test=gen,description=v.get('description','').strip(),
            generator_options=opts,default_iterations=v.get('iterations',1),
            special_generation_logic='run.py: run_csr_test -> scripts/gen_csr_test.py' if name=='riscv_csr_test' else gen,
            csr_generation='csr' in name,mmu='mmu' in name or 'page_table' in name,
            privilege_modes=['S','U','M'] if area in ('mmu','privilege') else ['M'],
            exception_behavior=area in ('exception','mmu','privilege','csr'),
            directed_streams=directed,instruction_categories=[area],generator_backend=backend,
            rv32=any(name in ns for t,ns in targets.items() if t.startswith('rv32')),
            rv64=any(name in ns for t,ns in targets.items() if t.startswith('rv64')),
            required_extensions=['F','D'] if area=='fpu' else ['A'] if area=='atomic' else ['V'] if area=='vector' else ['B/Zbt (target-dependent)'] if area=='bitmanip' else ['I'],
            wally_compatibility='unvalidated',spike_compatibility='unvalidated',
            trace_compatibility='unsupported' if area in ('fpu','vector','csr','debug','interrupt') else 'unvalidated',
            signature_compatibility='optional',campaign_enabled=False,reason=reason)
    classes={}
    for path,source in files.items():
        if path.startswith(('test/','pygen/pygen_src/test/')):
            for name in re.findall(r'class\s+(\w+)\s*(?:\(|extends)',source):
                classes.setdefault(name,[]).append(path)
    for record in streams.values():
        name=record['name']
        record['purpose']=('load/store and address patterns' if any(x in name for x in ('load_store','mem_')) else
                           'loop control flow' if 'loop' in name else 'integer numeric corners' if 'numeric' in name else
                           'atomic/reservation patterns' if any(x in name for x in ('amo','lr_sc')) else
                           'jump/control flow' if 'jal' in name else 'instruction mixing/hazards')
        record['campaign_eligibility']='requires a validated test adapter; factory presence alone is insufficient'
    output=dict(generator_classes=classes,provenance={k:raw[k] for k in ('hostname','root','revision')},tests=tests,
                targets=targets,imports=imports,directed_streams=streams,
                other_mechanisms=['run.py --asm_tests','run.py --c_tests','run.py --steps gen/gcc_compile',
                                  'scripts/gen_csr_test.py','pygen/experimental (separate legacy backend)'])
    (DATA/'test_inventory.json').write_text(json.dumps(output,indent=2)+'\n')
    print(len(tests),'unique upstream tests;',len(streams),'stream classes')
if __name__=='__main__':build()
