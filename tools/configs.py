"""Explicit simulator/target mappings, checked against the local Wally config files."""
import hashlib
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
# ISA strings describe the selected generator subset, not every Wally extension.
MAPPINGS = {
    'rv64gc': (64, 'rv64gc', 'rv64imafdc', 'lp64d'),
    'rv32gc': (32, 'rv32gc', 'rv32imafdc', 'ilp32d'),
    'rv32imc': (32, 'rv32imc_zicsr_zifencei', 'rv32imc', 'ilp32'),
    'rv64i': (64, 'rv64i', None, 'lp64'),
    'rv32i': (32, 'rv32i', 'rv32i', 'ilp32'),
    'rv32e': (32, 'rv32e', None, 'ilp32e'),
}

def discover_configs():
    records = {}
    paths = sorted((ROOT/'cvw/config').glob('*/config.vh'))
    paths += sorted((ROOT/'cvw/config/deriv').glob('*/config.vh'))
    for path in paths:
        name = path.parent.name
        text = path.read_text()
        xlen_match = re.search(r'localparam XLEN\s*=\s*32\x27d(32|64)', text)
        if not xlen_match:
            continue
        xlen = int(xlen_match[1])
        flags = dict(re.findall(r'localparam logic (\w+)_SUPPORTED\s*=\s*([01])\s*;', text))
        extensions = sorted({'e' if flags.get('E')=='1' else 'i'} | {k.lower() for k,v in flags.items() if v=='1' and (k.startswith(('Z','SV','SS')) or k in ('M','F','D','Q'))})
        mapping = MAPPINGS.get(name)
        reason = None
        derivative = path.parent.parent.name == 'deriv'
        if mapping is None:
            # Match *capabilities*, never a derivative's name, to a known target
            # subset. This supplies inspection mappings, not campaign eligibility.
            if all(flags.get(k)=='1' for k in ('M','ZCA','F','D','ZAAMO','ZALRSC','ZICSR','ZIFENCEI')):
                mapping=MAPPINGS[f'rv{xlen}gc']
            elif all(flags.get(k)=='1' for k in ('M','ZCA','ZICSR')):
                isa=f'rv{xlen}imc_zicsr' + ('_zifencei' if flags.get('ZIFENCEI')=='1' else '')
                mapping=(xlen,isa,f'rv{xlen}imc','ilp32' if xlen==32 else 'lp64')
            else:
                mapping=(xlen,f"rv{xlen}{'e' if flags.get('E')=='1' else 'i'}",None,
                         'ilp32e' if flags.get('E')=='1' else 'ilp32' if xlen==32 else 'lp64')
            if not mapping[2]:
                reason = 'No installed pyflow target matches the required ISA subset'
        if flags.get('ZICSR') != '1':
            reason = 'No Zicsr: pyflow startup reads mhartid; passive RVVI tracer references privileged CSR hierarchy'
        records[name] = dict(wally_config=name,xlen=xlen,derivative=derivative,
            spike_isa=mapping[1] if mapping else None,
            riscv_dv_target=mapping[2] if mapping else None,mabi=mapping[3] if mapping else None,
            extensions=extensions, privilege_modes=['M']+[m for m in ('S','U') if flags.get(m)=='1'],
            mmu=any(flags.get(k)=='1' for k in ('SV32','SV39','SV48')),
            translation_modes=[k.lower() for k in ('SV32','SV39','SV48') if flags.get(k)=='1'], fpu=flags.get('F')=='1', compressed=flags.get('ZCA')=='1',
            config_file=str(path.relative_to(ROOT)), config_sha256=hashlib.sha256(text.encode()).hexdigest(),
            candidate=reason is None, reason=reason,
            status='UNSUPPORTED' if reason else 'UNQUALIFIED',
            verilator='unvalidated', wally_trace='unvalidated', spike_trace='unvalidated')
    return records

WALLY_CONFIGS = discover_configs()
