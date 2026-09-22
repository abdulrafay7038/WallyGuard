"""Submit local controller sources and check their digest before starting Ray work."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import runpy
import subprocess


ENV_KEYS = (
    'WALLY_PATH', 'WALLY_SPIKE', 'WALLY_RUN_REGRESSION', 'WALLY_DIRECTED_COMMAND',
    'WALLY_REGRESSION_COMMAND', 'WALLY_REGRESSION_TIMEOUT', 'WALLY_REPRODUCER_TIMEOUT',
    'WALLY_ORACLE_TIMEOUT', 'WALLY_COMMAND_TIMEOUT', 'WALLY_AGENT_TIMEOUT',
    'WALLY_BASELINE_RUNS', 'WALLY_LLM_CONCURRENCY', 'WALLY_ISA_DOCS',
    'GOOGLE_CLOUD_PROJECT', 'WALLY_PROFILE', 'WALLY_PROFILE_DIR',
    'CHIA_ARCHITECT_MODEL', 'CHIA_TESTER_MODEL', 'CHIA_CRITIC_MODEL', 'CHIA_FIXER_MODEL',
)
EXCLUDES = ['cvw/', 'runs/', 'reviews/', 'wally-worktrees/', 'confirmed-bugs/',
            'candidate-bugs/', '.git/', '__pycache__/', '*.pyc', 'mineforge3/']


def source_digest(root: Path) -> str:
    """Include executable controller sources and test templates, not run artifacts."""
    paths = [root / 'loop.py', *sorted((root / 'orchestration').rglob('*.py')),
             *sorted((root / 'orchestration/templates').rglob('*'))]
    files = {}
    for path in paths:
        if path.is_dir() or '__pycache__' in path.parts:
            continue
        files[path.relative_to(root).as_posix()] = hashlib.sha256(path.read_bytes()).hexdigest()
    return hashlib.sha256(json.dumps(files, sort_keys=True).encode()).hexdigest()


def submission_command(root: Path, address: str, environ: dict) -> tuple[list[str], str]:
    digest = source_digest(root)
    runtime = dict(working_dir=str(root), excludes=EXCLUDES,
                   env_vars={key: environ[key] for key in ENV_KEYS if key in environ})
    command = ['chia', 'job', 'submit', '--address', address,
               '--runtime-env-json', json.dumps(runtime), '--',
               'python', '-B', '-m', 'orchestration.submission', '--verify', digest]
    return command, digest


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--address', default='http://127.0.0.1:8265')
    parser.add_argument('--dry-run', action='store_true', help='Show the submission without starting a job')
    parser.add_argument('--verify', metavar='SHA256', help=argparse.SUPPRESS)
    args = parser.parse_args(argv)
    if args.verify:
        actual = source_digest(Path.cwd())
        if actual != args.verify:
            raise SystemExit(f'Controller source mismatch: expected {args.verify}, received {actual}. '
                             'No campaign started. Submit again from the intended checkout.')
        print(f'Controller source verified: {actual}', flush=True)
        os.environ['WALLYGUARD_CONTROLLER_SHA256'] = actual
        runpy.run_path('loop.py', run_name='__main__')
        return 0
    root = Path(__file__).resolve().parents[1]
    command, digest = submission_command(root, args.address, os.environ)
    print(f'Submitting controller from {root}; SHA256={digest}', flush=True)
    if args.dry_run:
        # JSON preserves exact argument boundaries without pretending to shell-escape.
        print(json.dumps(command, indent=2))
        return 0
    return subprocess.run(command, cwd=root).returncode


if __name__ == '__main__':
    raise SystemExit(main())
