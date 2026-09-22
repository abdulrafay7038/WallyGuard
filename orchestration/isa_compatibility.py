"""Cheap checks for incompatible XLEN and floating-point execution models.

This is deliberately not a complete ISA equivalence check. Tests and review must
still establish matching privilege, optional extensions and implementation choices.
"""
from pathlib import Path
import re


def check_isa_compatibility(wally: list[str], oracle: list[str], root: Path) -> None:
    """Reject ambiguous or incompatible configurations before executing a test."""
    if len(wally) < 2 or not re.fullmatch(r'[\w-]+', wally[1]):
        raise ValueError('Wally command requires an explicit CONFIG immediately after bin/wsim')
    config = wally[1]
    # These can change elaboration independently of the named config. Do not
    # certify a static comparison that silently ignores such overrides.
    if any(arg in ('-p', '-d', '--params', '--define') or
           arg.startswith(('--params=', '--define=')) or
           (arg.startswith(('-p', '-d')) and not arg.startswith('--'))
           for arg in wally[2:]):
        raise ValueError('ISA preflight cannot validate Wally parameter/define overrides')
    paths = [root / 'config' / config / 'config.vh',
             root / 'config' / 'deriv' / config / 'config.vh']
    path = next((p for p in paths if p.is_file()), None)
    if path is None:
        raise ValueError(f'Cannot read Wally configuration {config}')
    text = re.sub(r'/\*.*?\*/|//[^\n]*', '', path.read_text(), flags=re.S)
    values = {}
    for key in ('XLEN', 'F_SUPPORTED', 'D_SUPPORTED', 'ZFINX_SUPPORTED'):
        matches = re.findall(r'\blocalparam\s+(?:logic\s+)?' + key + r'\s*=\s*([^;]+);', text)
        literal = matches[0].strip().replace('_', '') if len(matches) == 1 else ''
        if re.fullmatch(r'\d+', literal):
            values[key] = int(literal)
        elif match := re.fullmatch(r"\d+'([bdh])([0-9a-fA-F]+)", literal):
            try:
                values[key] = int(match[2], {'b': 2, 'd': 10, 'h': 16}[match[1]])
            except ValueError:
                pass
        if key not in values or values[key] not in ((32, 64) if key == 'XLEN' else (0, 1)):
            raise ValueError(f'ISA preflight needs a literal {key} in {path}; configuration cannot be resolved')

    # Stop at the ELF: options after it belong to the guest, not Spike.
    elf = wally[wally.index('--elf') + 1]
    args = oracle[1:oracle.index(elf)]
    isa_values = []
    for i, arg in enumerate(args):
        if arg == '--isa':
            isa_values.append(args[i + 1] if i + 1 < len(args) else '')
        elif arg.startswith('--isa='):
            isa_values.append(arg.split('=', 1)[1])
    if len(isa_values) != 1:
        raise ValueError('Spike requires exactly one explicit --isa before the ELF')
    isa = isa_values[0].lower()
    match = re.fullmatch(r'rv(32|64)([a-z0-9_]+)', isa)
    if not match:
        raise ValueError('Spike --isa must explicitly select RV32 or RV64 and its extensions')
    tokens = match[2].split('_')
    # Single-letter extensions may have version suffixes (i2p1m2p0...), while
    # multi-letter extensions are separate tokens. G includes both F and D.
    if not re.fullmatch(r'(?:[a-z](?:\d+(?:p\d+)?)?)+', tokens[0]):
        raise ValueError('Cannot resolve Spike base ISA extensions')
    letters = set(re.findall(r'([a-z])(?:\d+(?:p\d+)?)?', tokens[0]))
    letters.update(t[0] for t in tokens[1:] if re.fullmatch(r'[a-z](?:\d+(?:p\d+)?)?', t))
    fp_in_x = any(re.fullmatch(r'z(?:finx|dinx|hinx|hinxmin)(?:\d+(?:p\d+)?)?', t)
                  for t in tokens[1:])
    expected = {'XLEN': int(match[1]), 'F_SUPPORTED': int(bool(letters & {'f', 'g'})),
                'D_SUPPORTED': int(bool(letters & {'d', 'g'})), 'ZFINX_SUPPORTED': int(fp_in_x)}
    differences = [f'{key}: Wally={values[key]}, Spike={value}'
                   for key, value in expected.items() if values[key] != value]
    if differences:
        raise ValueError(f'Incompatible Wally {config} / Spike {isa}: ' + '; '.join(differences) +
                         '. Match the tested architecture; do not change oracle extensions to force a mismatch.')
