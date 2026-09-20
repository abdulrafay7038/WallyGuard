"""Seed a standard native-selfcheck harness without inventing test assertions."""
import json
from pathlib import Path
import shutil
from .toolchain import simulation_env


def seed_harness(scratch: str, test_dir: str) -> None:
    root, tests = Path(scratch).resolve(), Path(test_dir).resolve()
    env = simulation_env(str(root))
    (tests / 'tests').mkdir(parents=True, exist_ok=True)
    for source, target in [('selfcheck.h', 'tests/selfcheck.h'),
                           ('template.S.example', 'tests/template.S.example'),
                           ('build_reproducer.sh', 'build_reproducer.sh')]:
        destination = tests / target
        if not destination.exists():
            shutil.copyfile(Path(__file__).parent / 'templates' / source, destination)
    contract = {'version': 1, 'oracle': 'spike',
                'build': ['bash', str(tests / 'build_reproducer.sh')], 'trap_vectors': []}
    for name in ('control', 'test'):
        elf = tests / 'build' / (name + '.elf')
        signature = tests / 'logs' / (name + '-spike.sig')
        contract[name] = {
            'mode': 'selfcheck',
            'wally': [str(root / 'bin/wsim'), 'rv64gc', '--sim', 'verilator', '--elf', str(elf)],
            'oracle': [env['WALLY_SPIKE'] or 'spike', '--isa=rv64gc',
                       '+signature=' + str(signature), '+signature-granularity=8', str(elf)],
            'oracle_signature': str(signature.relative_to(tests)),
        }
        contract['trap_vectors'].append({'elf': str(elf.relative_to(tests)), 'symbol': 'trap_handler'})
    path = tests / 'reproducer.json'
    if not path.exists():
        path.write_text(json.dumps(contract, indent=2) + '\n')
