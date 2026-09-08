"""Versioned qualification evidence; missing evidence is never incompatibility."""
import hashlib
import json
import re
from pathlib import Path
from .configs import ROOT, WALLY_CONFIGS

DATA = Path(__file__).parent / 'data'
ATTEMPTS_FILE = DATA / 'qualification_attempts.json'

def _compute_implementation_fingerprint():
    """Hash execution inputs, including dirty RTL; no dependence on Git cleanliness.

    Reports, evidence and registry eligibility records are deliberately excluded.
    Config contents and adapter options are independently hashed in each selection.
    """
    paths = set()
    for directory in ('cvw/src', 'cvw/testbench', 'cvw/config/shared',
                      'cvw/sim/verilator', 'cvw/addins/riscv-arch-test-cvw/framework/src/act/fcov'):
        for path in (ROOT / directory).rglob('*'):
            if path.is_file() and not any(p in ('wkdir', 'logs', '__pycache__') for p in path.parts) and path.suffix in ('.sv', '.vh', '.c', '.h'):
                paths.add(path)
    paths.update(ROOT / name for name in ('cvw/bin/wsim','cvw/sim/verilator/Makefile',
        'wally_loop.py','tools/configs.py','tools/generator.py','tools/spike.py','tools/trace.py','tools/compare.py'))
    digest = hashlib.sha256()
    for path in sorted(paths):
        if path.is_file():
            digest.update(str(path.relative_to(ROOT)).encode());digest.update(path.read_bytes())
    return digest.hexdigest()


# Captured on the head and serialized by value alongside the resolver. The
# generator VM cannot hash head-only Wally sources on its separate filesystem.
IMPLEMENTATION_FINGERPRINT = _compute_implementation_fingerprint()


def implementation_fingerprint():
    return IMPLEMENTATION_FINGERPRINT


def load_attempts():
    return json.loads(ATTEMPTS_FILE.read_text()) if ATTEMPTS_FILE.exists() else {}


def evidence_current(proof, config_hash, profile_hash):
    return bool(proof and proof.get('config_sha256') == config_hash
                and proof.get('profile_fingerprint') == profile_hash
                and proof.get('implementation_fingerprint') == implementation_fingerprint())


def atomic_json(path, data):
    path = Path(path);path.parent.mkdir(parents=True, exist_ok=True)
    temporary = path.with_suffix(path.suffix + '.tmp')
    temporary.write_text(json.dumps(data, indent=2) + '\n');temporary.replace(path)


def classify_failure(result, log=''):
    """Conservative evidence rules. Unknown failures need inspection, not a ban."""
    status = result.get('status', 'ERROR')
    error=str(result.get('error', '')).lower()
    lower = error + '\n' + log.lower()
    if result.get('timed_out') or 'timeout' in error or re.search(r'timed out|timeoutexpired|timeout after|step exceeded', lower) or any(s in lower for s in ('no space left', 'out of memory', 'killed signal', 'connection refused', 'no installed python', 'no module named', 'resource temporarily unavailable', 'command not found')):
        return 'UNQUALIFIED', 'infrastructure limitation'
    if 'cannot find -l' in lower or re.search(r'fatal error: .*no such file',lower):
        return 'UNQUALIFIED', 'infrastructure limitation'
    if any(s in lower for s in ('unsupported isa', 'unsupported extension', 'target xlen disagrees', 'requires the', 'target setting is missing')):
        return 'UNSUPPORTED', 'bad ISA mapping'
    diagnostic_lines='\n'.join(line for line in lower.splitlines() if '%error' in line)
    if any(s in diagnostic_lines for s in ('dotted reference', 'cannot find', "can't find", 'pin not found')):
        return 'UNSUPPORTED', 'trace hierarchy assumption' if any(s in diagnostic_lines for s in ('wallytracer', 'wallyguardtrace', 'rvvi')) else 'configuration compilation failure'
    if '%fatal: riscvassertions.sv:' in lower:
        return 'UNSUPPORTED', 'configuration constraint violation'
    if configuration_startup_blocker(result, log):
        return 'UNSUPPORTED', 'generator startup incompatibility'
    if status in ('GENERATOR_ERROR', 'INITIALIZATION_ERROR'):
        if any(s in lower for s in ('cannot create object', 'callstack_gen', 'illegal operands', 'unrecognized opcode', 'non-absolute expression', 'requires absolute expression', 'unrecognized arguments', 'has no attribute', 'keyerror:', 'nameerror:', 'expected one main:', 'expected the qualified bare', 'stack must be x2')):
            return 'UNSUPPORTED', 'RISC-V-DV incompatibility'
        return 'UNQUALIFIED', 'RISC-V-DV failure requiring inspection'
    if status == 'TRACE_MISMATCH':
        return 'UNQUALIFIED', 'architectural divergence requiring inspection'
    return 'UNQUALIFIED', 'genuine simulation failure requiring inspection'


def configuration_startup_blocker(result, log):
    """Recognize the observed unpopulated boot-ROM path, not arbitrary crashes."""
    cfg=WALLY_CONFIGS.get(result.get('wally_config'))
    if not cfg or not re.search(r'from address 0x0+ twice',log):return None
    source=(ROOT/cfg['config_file']).read_text()
    reset=re.search(r"RESET_VECTOR\s*=\s*\d+'h([0-9a-fA-F_]+)",source)
    rom=re.search(r'BOOTROM_SUPPORTED\s*=\s*1\s*;',source)
    preload=re.search(r"BOOTROM_PRELOAD\s*=\s*1'b0\s*;",source)
    if reset and rom and preload:
        return ('RESET_VECTOR=0x'+reset[1]+' selects an unpopulated boot ROM (BOOTROM_PRELOAD=0); '
                'the current bare --elf testbench path populates RAM only, then execution traps to zero. '
                'A boot-ROM startup adapter is required.')
    return None
