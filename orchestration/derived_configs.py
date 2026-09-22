"""Prepare generated configurations before agents take guarded snapshots."""
import hashlib
import os
from pathlib import Path
import re
import shutil
import subprocess
import tempfile

from .processes import run_command


def _files(directory: Path) -> dict[str, str]:
    if directory.is_symlink():
        raise ValueError(f'Configuration directory must not be a symlink: {directory}')
    result = {}
    if directory.exists():
        for path in sorted(directory.rglob('*')):
            if path.is_symlink():
                raise ValueError(f'Configuration inputs/outputs must not be symlinks: {path}')
            if path.is_file():
                result[str(path.relative_to(directory))] = hashlib.sha256(path.read_bytes()).hexdigest()
    return result


def prepare_derived_configs(root: Path, cached: dict | None = None) -> dict:
    """Caller holds the workspace lock, with no active agent.

    Cache keys cover the generator, tracked config inputs and every output.
    Changed inputs regenerate rather than trusting copied build artifacts.
    """
    root = root.resolve()
    if not (root/'bin/derivgen.pl').is_file() or not (root/'config/derivlist.txt').is_file():
        raise ValueError('Wally checkout is missing derivgen.pl or config/derivlist.txt')
    names = subprocess.run(['git', '-C', str(root), 'ls-files', '-z', '--', 'bin/derivgen.pl', 'config/'],
                           capture_output=True, text=True, check=True, timeout=30).stdout.split('\0')
    inputs = {}
    for name in filter(None, names):
        if name.startswith('config/deriv/'):
            raise ValueError('Refusing to replace tracked derived configurations: ' + name)
        path = root / name
        if any(root.joinpath(*Path(name).parts[:i]).is_symlink()
               for i in range(1, len(Path(name).parts) + 1)):
            raise ValueError('Configuration inputs must not use symlinks: ' + name)
        inputs[name] = hashlib.sha256(path.read_bytes()).hexdigest()
    if not {'bin/derivgen.pl', 'config/derivlist.txt'}.issubset(inputs):
        raise ValueError('Configuration generator and derivlist must be tracked baseline inputs')
    destination = root / 'config/deriv'
    outputs = _files(destination)
    if cached and cached.get('inputs') == inputs and cached.get('outputs') == outputs and outputs:
        return dict(cached, regenerated=False)

    # derivgen removes its entire output directory. It only ever sees this
    # private staging copy, never the original checkout or existing outputs.
    with tempfile.TemporaryDirectory(prefix='wallyguard-config-') as temporary:
        stage = Path(temporary)
        for name in inputs:
            target = stage / name
            target.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(root / name, target)
        log = root.parent / (root.name + '-derived-configs.log')
        result = run_command(['perl', str(stage/'bin/derivgen.pl')], log, 120,
                             dict(os.environ, WALLY=str(stage)), stage)
        if result['status'] != 'PASS' or 'Unable to find ' in log.read_text(errors='replace'):
            raise ValueError(f'Derived configuration generation failed; see {log}')
        generated = stage / 'config/deriv'
        generated_files = _files(generated)
        expected = re.findall(r'^\s*deriv\s+(\S+)', (stage/'config/derivlist.txt').read_text(), re.M)
        if not expected or any(f'{name}/config.vh' not in generated_files for name in expected):
            raise ValueError(f'Derived configuration generation is incomplete; see {log}')
        # Stage installation on the same filesystem; roll back a failed rename.
        with tempfile.TemporaryDirectory(prefix='.derived-configs-', dir=root.parent) as installation:
            pending, previous = Path(installation)/'new', Path(installation)/'old'
            shutil.copytree(generated, pending)
            had_previous = destination.exists()
            if had_previous:
                destination.rename(previous)
            try:
                pending.rename(destination)
            except OSError:
                if had_previous:
                    previous.rename(destination)
                raise
        return dict(inputs=inputs, outputs=generated_files, regenerated=True,
                    generation_seconds=result['duration_seconds'], log_path=str(log))
