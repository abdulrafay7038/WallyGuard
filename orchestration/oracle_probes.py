"""Small sequential oracle batches for falsifying hypotheses, never bug proof."""
import json
from pathlib import Path
import re

from .processes import run_command


def validate_cases(cases_json: str, test_dir: str) -> list[dict]:
    cases = json.loads(cases_json)
    if not isinstance(cases, list) or not 1 <= len(cases) <= 8:
        raise ValueError('Provide 1–8 cases')
    root = Path(test_dir).resolve()
    identifiers = set()
    result = []
    for case in cases:
        if not isinstance(case, dict):
            raise ValueError('Each case must be an object')
        ident = case.get('id', '')
        if not isinstance(ident, str) or not re.fullmatch(r'[A-Za-z0-9_-]{1,64}', ident) or ident in identifiers:
            raise ValueError('Case IDs must be unique simple names')
        identifiers.add(ident)
        isa = case.get('isa')
        if not isinstance(isa, str) or not re.fullmatch(r'rv(?:32|64)[A-Za-z0-9_]+', isa):
            raise ValueError('Each case needs an explicit RISC-V ISA')
        if not isinstance(case.get('elf'), str):
            raise ValueError('Each case needs an ELF path')
        elf = (root / case['elf']).resolve()
        if not elf.is_relative_to(root) or not elf.is_file():
            raise ValueError('ELF must be an existing file inside test_dir')
        # Restrict overrides to parameters used by current hypotheses. Tool
        # output/signature paths and ELF/ISA selection remain controller-owned.
        args = case.get('args', [])
        if not isinstance(args, list) or any(not isinstance(arg, str) or not re.fullmatch(
                r'--(?:pmpgranularity|pmpregions)=\d+', arg) for arg in args):
            raise ValueError('Optional args support only --pmpgranularity=N and --pmpregions=N')
        result.append(dict(id=ident, isa=isa, elf=str(elf), args=args))
    return result


def run_batch(cases: list[dict], directory: Path, env: dict, cancel_event=None) -> dict:
    directory.mkdir(parents=True, exist_ok=False)
    observations = []
    for case in cases:
        if cancel_event is not None and cancel_event.is_set():
            break
        signature = directory / (case['id'] + '.sig')
        command = [env['WALLY_SPIKE'], '--isa=' + case['isa'], *case['args'],
                   '+signature=' + str(signature), '+signature-granularity=8', case['elf']]
        result = run_command(command, directory / (case['id'] + '.log'), 10,
                             env=env, cwd=directory, cancel_event=cancel_event)
        observations.append(dict(id=case['id'], command=command,
                                 status=result['status'], returncode=result['returncode'],
                                 timed_out=result['timed_out'], log_path=result['log_path'],
                                 signature_path=str(signature) if signature.is_file() else None))
    report = dict(status='PROBES_COMPLETE' if len(observations) == len(cases) else 'PROBES_CANCELLED',
                  observations=observations,
                  note='Oracle observations only. Exit zero does not establish assertion correctness, '
                       'DUT behavior, or a verified mismatch. Inspect signatures and logs.')
    (directory / 'results.json').write_text(json.dumps(report, indent=2) + '\n')
    return report
