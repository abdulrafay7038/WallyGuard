"""Select the simulation host's RISC-V tools independently of Ray's PATH."""
import os
from pathlib import Path
import shutil
import subprocess


def simulation_env(scratch: str) -> dict:
    env = dict(os.environ, WALLY=str(scratch))
    explicit = env.get('WALLY_SPIKE')
    if explicit:
        if not Path(explicit).is_absolute():
            raise ValueError('WALLY_SPIKE must be an absolute executable path')
        tool_bin = Path(explicit).parent
    else:
        roots = ([Path(env['RISCV'])] if env.get('RISCV') else [])
        roots += [Path.home() / 'riscv', Path('/opt/riscv')]
        tool_bin = next((root / 'bin' for root in roots if (root / 'bin/spike').is_file()), None)
    # /usr/bin/spike may be an unrelated secrets CLI. Bare tool calls and the
    # absolute oracle contract must select the same simulator.
    # Wally's elf2hex takes ELF/output arguments; the toolchain's same-named
    # program takes width/depth and is incompatible with testbench/Makefile.
    prefixes = [str(Path(scratch) / 'bin')] + ([str(tool_bin)] if tool_bin else [])
    env['PATH'] = os.pathsep.join(prefixes + [env.get('PATH', '')])
    oracle_path = os.pathsep.join(([str(tool_bin)] if tool_bin else []) + [env['PATH']])
    env['WALLY_SPIKE'] = explicit or shutil.which('spike', path=oracle_path) or ''
    return env


def validate_spike(env: dict) -> str:
    executable = env.get('WALLY_SPIKE')
    if not executable:
        raise ValueError('RISC-V Spike missing; set WALLY_SPIKE to its absolute path')
    try:
        result = subprocess.run([executable, '--help'], env=env,
                                stdin=subprocess.DEVNULL, capture_output=True,
                                text=True, timeout=5)
    except (OSError, subprocess.TimeoutExpired) as exc:
        raise ValueError(f'Cannot identify RISC-V Spike at {executable}; set WALLY_SPIKE') from exc
    if 'Spike RISC-V ISA Simulator' not in result.stdout + result.stderr:
        raise ValueError(f'{executable} is not identified as the RISC-V ISA simulator; set WALLY_SPIKE')
    return executable
