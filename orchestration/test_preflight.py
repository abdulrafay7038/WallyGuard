"""Controller-owned build, control, oracle and DUT execution contract."""
import hashlib
import json
from .toolchain import simulation_env, validate_spike
from .input_files import input_files
from pathlib import Path
import re
import shutil
import time
from .processes import run_command
from .result_classifier import Outcome, ReproducerResult, artifact_argv, classify, FAILURE, TOOL_ERROR, WATCHDOG

TRAP_VECTOR_TEMPLATE = '''# Direct-mode trap entry: low two address bits must be zero.
.balign 4
wallyguard_trap_entry:
    # Save/handle the trap here; avoid recursive traps.
'''


def saved_contract(test_dir: str) -> dict:
    path = under('reproducer.json', Path(test_dir).resolve())
    value = json.loads(path.read_text())
    if not isinstance(value, dict):
        raise ValueError('reproducer.json must contain a contract object')
    return value


def under(path: str, root: Path) -> Path:
    target = (root / path).resolve()
    if not target.is_relative_to(root.resolve()):
        raise ValueError(f'Artifact escapes test directory: {path}')
    return target


def _contains(path: Path, marker: str) -> bool:
    with path.open(errors='replace') as stream:
        return any(marker in line for line in stream)


def log_markers(path: Path) -> str:
    """Scan complete logs, retaining only bounded first evidence for each pattern."""
    found = {}
    patterns = {'watchdog': WATCHDOG, 'tool': TOOL_ERROR, 'failure': FAILURE,
                'incomplete': re.compile('halted without completing|wrote .* signature entries'),
                'selfcheck': re.compile(r'result \d+: adr = [0-9a-fA-F]+ sim \(D\$\) [0-9a-fA-F]+ signature = [0-9a-fA-F]+'),
                'success': re.compile(r'succeeded\.  Brilliant!!!')}
    with path.open(errors='replace') as stream:
        for line in stream:
            for key, pattern in patterns.items():
                if key not in found and pattern.search(line):
                    found[key] = line[:8192]
    return ''.join(found.values())


def _signature(path: Path) -> tuple[str, int]:
    """Strict normalized hexadecimal signatures, streamed to bound memory."""
    digest, count = hashlib.sha256(), 0
    with path.open() as stream:
        for line in stream:
            word = line.strip().lower()
            if not re.fullmatch(r'[0-9a-f]+', word):
                raise ValueError(f'Invalid signature word in {path}')
            digest.update(word.encode() + b'\n')
            count += 1
    if not count:
        raise ValueError('Empty signature is not architectural evidence')
    return digest.hexdigest(), count


def vector_metadata_errors(contract: dict, test_dir: Path) -> list[str]:
    """Check source/contract metadata before spending time on a build."""
    errors = []
    vectors = contract.get('trap_vectors', [])
    writes_vectors = False
    inferred_symbols = set()
    for source in input_files(test_dir, {'build', 'logs', 'controller', 'critic', 'fixer'}):
        if source.suffix.lower() not in {'.s', '.c'}:
            continue
        assembly = source.read_text(errors='replace')
        if re.search(r'\b(?:mtvec|stvec)\b', assembly):
            writes_vectors = True
        for match in re.finditer(r'\bla\s+(\w+),\s*([\w.$]+)[^\n]*\n(?:[^\n]*\n){0,5}?[^\n]*\bcsrw\s+(?:mtvec|stvec),\s*\1\b', assembly):
            inferred_symbols.add(match[2])
    if writes_vectors and not vectors:
        return ['Trap-vector test requires trap_vectors entries with built ELF and handler symbol']
    missing = inferred_symbols - {v.get('symbol') for v in vectors}
    if missing:
        errors.append(f'Trap handler symbols missing from metadata: {sorted(missing)}')
    return errors


def contract_errors(contract: dict, scratch: Path, test_dir: Path, env: dict) -> list[str]:
    """Cheap shared preflight for the agent tool and authoritative verifier."""
    errors = []
    if isinstance(contract, dict) and contract.get('contract_load_error'):
        return ['Cannot read saved reproducer.json: ' + str(contract['contract_load_error'])]
    if not isinstance(contract, dict) or contract.get('version') != 1 or contract.get('oracle') != 'spike':
        return ['Require version=1 controller-run Spike differential contract']
    try:
        artifact_argv(contract.get('build'), scratch, test_dir)
    except (ValueError, TypeError, OSError) as exc:
        errors.append(f'build: {exc}')
    vectors = contract.get('trap_vectors', [])
    if not isinstance(vectors, list) or any(not isinstance(v, dict) for v in vectors):
        errors.append('trap_vectors must be a list of ELF/symbol objects')
    else:
        for vector in vectors:
            try:
                elf = under(vector['elf'], test_dir)
                if not elf.is_relative_to(test_dir.resolve() / 'build'):
                    raise ValueError('Trap-vector ELF must be under test_dir/build')
                if not isinstance(vector['symbol'], str) or not re.fullmatch(r'[A-Za-z_.$][\w.$]*', vector['symbol']):
                    raise ValueError('Invalid trap-vector symbol')
            except (KeyError, ValueError, TypeError) as exc:
                errors.append(f'trap_vectors: {exc}')
        if not errors:
            errors.extend(vector_metadata_errors(contract, test_dir))
    signatures = set()
    for name in ('control', 'test'):
        try:
            spec = contract.get(name)
            if not isinstance(spec, dict):
                raise ValueError('Requires a control/test execution object')
            wally = artifact_argv(spec.get('wally'), scratch, test_dir)
            oracle = artifact_argv(spec.get('oracle'), scratch, test_dir)
            if (scratch / wally[0]).resolve() != (scratch / 'bin/wsim').resolve():
                raise ValueError('DUT command must directly execute this checkout bin/wsim')
            spike = env.get('WALLY_SPIKE') or shutil.which('spike', path=env.get('PATH', ''))
            if not spike or (scratch / oracle[0]).resolve() != Path(spike).resolve():
                raise ValueError('Oracle command must directly execute the configured Spike')
            if '--elf' not in wally or wally.index('--elf') + 1 == len(wally):
                raise ValueError('Wally command must specify the tested ELF with --elf')
            elf = (scratch / wally[wally.index('--elf') + 1]).resolve()
            if not elf.is_relative_to(test_dir.resolve() / 'build') or str(elf) not in oracle:
                raise ValueError('Wally and Spike must run the same ELF under test_dir/build')
            mode = spec.get('mode', 'signature')
            if mode not in ('signature', 'selfcheck'):
                raise ValueError('Unsupported comparison mode')
            keys = ('oracle_signature',) if mode == 'selfcheck' else ('oracle_signature', 'wally_signature')
            for key in keys:
                path = under(spec[key], test_dir)
                if not any(path.is_relative_to(test_dir.resolve() / folder) for folder in ('build', 'logs')):
                    raise ValueError('Signatures must be under test_dir/build or logs')
                if path in signatures:
                    raise ValueError('Each execution must use a distinct signature path')
                signatures.add(path)
            if mode == 'selfcheck':
                if '+signature=' + str(under(spec['oracle_signature'], test_dir)) not in oracle:
                    raise ValueError('Spike must emit the declared +signature path')
                if not any(arg in ('+signature-granularity=4', '+signature-granularity=8') for arg in oracle):
                    raise ValueError('Spike requires +signature-granularity=4 or 8 matching XLEN')
            elif not all(isinstance(spec.get(key), str) and spec[key].strip()
                         for key in ('wally_complete', 'oracle_complete')):
                raise ValueError('Signature mode requires actual Wally and Spike completion markers')
        except (ValueError, KeyError, TypeError, OSError) as exc:
            errors.append(f'{name}: {exc}')
    return errors


def vector_preflight(contract: dict, test_dir: Path, scratch: Path, directory: Path,
                     timeout: int, env: dict) -> list[str]:
    errors = vector_metadata_errors(contract, test_dir)
    vectors = contract.get('trap_vectors', [])
    for index, vector in enumerate(vectors):
        elf = under(vector['elf'], test_dir)
        symbol = vector['symbol']
        if not re.fullmatch(r'[A-Za-z_.$][\w.$]*', symbol):
            raise ValueError('Invalid trap-vector symbol')
        nm = shutil.which('riscv64-unknown-elf-nm', path=env['PATH'])
        if not nm:
            errors.append('Missing RISC-V nm for vector-address validation')
            continue
        result = run_command([nm, '-n', str(elf)], directory / f'vectors-{index}.log', timeout, env, scratch)
        symbols = re.findall(r'^([0-9a-fA-F]+)\s+\w\s+(\S+)\s*$', Path(result['log_path']).read_text(), re.M)
        addresses = [int(address, 16) for address, name in symbols if name == symbol]
        if result['returncode'] != 0 or len(addresses) != 1 or addresses[0] % 4:
            errors.append(f'Trap vector {symbol} must resolve to a 4-byte-aligned ELF address')
    return errors


def prepare_selfcheck_elf(root: Path, elf: Path, symbols: dict, width: int, execute, name: str) -> dict:
    """Rebuild runtime inputs explicitly; preserve every ELF symbol alias.

    CVW's testbench ignores $system(make)'s return code, and its objdump-based
    label extraction drops aliases such as selfcheck_record/begin_signature.
    Do the preparation before launching Wally so neither can silently pass.
    """
    outputs = {suffix: Path(str(elf) + suffix)
               for suffix in ('.memfile', '.objdump', '.objdump.addr', '.objdump.lab')}
    for path in outputs.values():
        if path.is_symlink():
            raise ValueError('ELF runtime outputs must not be symlinks: ' + str(path))
    for path in outputs.values():
        path.unlink(missing_ok=True)
    built = execute(name + '-elf-prepare', ['make', '-s', '-f', str(root / 'testbench/Makefile'),
                    str(outputs['.memfile']), str(outputs['.objdump']), str(outputs['.objdump.addr'])])
    if built['status'] != 'PASS' or TOOL_ERROR.search(log_markers(Path(built['log_path']))):
        return classify(built, build_ok=False).dict()
    if any(not outputs[suffix].is_file() or not outputs[suffix].stat().st_size
           for suffix in ('.memfile', '.objdump')):
        return ReproducerResult(Outcome.BUILD_FAILURE, 'ELF preparation did not produce memory/disassembly files').dict()
    rows = sorted(symbols.items(), key=lambda item: (item[1], item[0]))
    outputs['.objdump.lab'].write_text(''.join(label + '\n' for label, address in rows))
    outputs['.objdump.addr'].write_text(''.join(f'{address:0{width * 2}x}\n' for label, address in rows))
    return ReproducerResult(Outcome.MATCH, 'ELF runtime inputs prepared', passed=True).dict()


def run_reproducer(scratch: str, test_dir: str, contract: dict, log_path: str,
                   timeout: int) -> dict:
    started = time.monotonic()
    root, tests = Path(scratch).resolve(), Path(test_dir).resolve()
    directory = Path(log_path).parent / (Path(log_path).stem + '-evidence')
    directory.mkdir(parents=True, exist_ok=False)
    env = simulation_env(str(root))
    # Match the agent shell. Otherwise `$WALLY_TEST_DIR/build` becomes /build
    # when a valid saved build script runs under independent verification.
    env['WALLY_TEST_DIR'] = str(tests)
    steps, captured = {}, {}
    comparison_seconds = 0.0
    def capture(name: str, path: Path) -> None:
        target = directory / name
        shutil.copyfile(path, target)
        def digest(file):
            value = hashlib.sha256()
            with file.open('rb') as stream:
                for block in iter(lambda: stream.read(65536), b''):
                    value.update(block)
            return value.hexdigest()
        checksum = digest(target)
        if digest(path) != checksum:
            raise ValueError('Evidence changed during archival')
        captured[name] = dict(path=str(target), sha256=checksum)

    def execute(name: str, argv) -> dict:
        deadline = min(timeout, float(env.get('WALLY_ORACLE_TIMEOUT', '60'))) if name.endswith('-oracle') else timeout
        result = run_command(artifact_argv(argv, root, tests), directory / f'{name}.log', deadline, env, root)
        steps[name] = result
        return result
    def pair(spec: dict, name: str) -> dict:
        nonlocal comparison_seconds
        pair_started = time.monotonic()
        before = sum(step.get('duration_seconds', 0) for step in steps.values())
        try:
            return compare_pair(spec, name)
        finally:
            commands = sum(step.get('duration_seconds', 0) for step in steps.values()) - before
            comparison_seconds += max(0, time.monotonic() - pair_started - commands)

    def compare_pair(spec: dict, name: str) -> dict:
        # Agents choose test inputs, not the executable implementing the oracle.
        wally_args = artifact_argv(spec['wally'], root, tests)
        oracle_args = artifact_argv(spec['oracle'], root, tests)
        expected_spike = env['WALLY_SPIKE']
        if (root / wally_args[0]).resolve() != (root / 'bin/wsim').resolve():
            raise ValueError('DUT command must directly execute this checkout bin/wsim')
        if not expected_spike or (root / oracle_args[0]).resolve() != Path(expected_spike).resolve():
            raise ValueError('Oracle command must directly execute the configured Spike')
        if '--elf' not in wally_args:
            raise ValueError('Wally command must specify the tested ELF')
        elf = (root / wally_args[wally_args.index('--elf') + 1]).resolve()
        if not elf.is_file() or not elf.is_relative_to(tests / 'build'):
            raise ValueError('Test ELF must exist in test_dir/build')
        if str(elf) not in oracle_args:
            raise ValueError('Spike must run the same ELF as Wally')
        capture(name + '.elf', elf)
        if spec.get('mode') == 'selfcheck':
            # Native CVW CheckSelfCheck: independent Spike must run the identical
            # ELF successfully; an explicit expected/actual record is required.
            # A watchdog, generic abort or incomplete self-check is not promoted.
            nm = shutil.which('riscv64-unknown-elf-nm', path=env['PATH'])
            if not nm:
                raise ValueError('Self-check contract requires RISC-V nm')
            symbols_run = execute(name + '-symbols', [nm, '-n', str(elf)])
            symbols = dict((name, int(address, 16)) for address, name in re.findall(
                r'^([0-9a-fA-F]+)\s+\w\s+(\S+)\s*$', Path(symbols_run['log_path']).read_text(errors='replace'), re.M))
            with elf.open('rb') as stream:
                header = stream.read(20)
            if len(header) < 20 or header[:4] != b'\x7fELF' or header[4] not in (1, 2):
                raise ValueError('Invalid ELF for native self-check')
            width = 8 if header[4] == 2 else 4
            if symbols_run['status'] != 'PASS' or any(symbol not in symbols for symbol in
                    ('selfcheck_record', 'tohost', 'begin_signature', 'end_signature')):
                raise ValueError('Self-check ELF requires selfcheck_record/tohost/signature symbols')
            if symbols['selfcheck_record'] != symbols['begin_signature'] or symbols['end_signature'] < symbols['begin_signature'] + 5 * width:
                raise ValueError('Spike signature must include the same five-word selfcheck_record')
            signature = under(spec['oracle_signature'], tests)
            if not signature.is_relative_to(tests / 'build') and not signature.is_relative_to(tests / 'logs'):
                raise ValueError('Oracle signature must be a runtime output')
            if f'+signature={signature}' not in oracle_args or f'+signature-granularity={width}' not in oracle_args:
                raise ValueError('Spike must emit the controller-checked selfcheck signature and XLEN granularity')
            signature.unlink(missing_ok=True)
            oracle = execute(name + '-oracle', oracle_args)
            oracle_log = log_markers(Path(oracle['log_path']))
            if oracle['status'] != 'PASS' or FAILURE.search(oracle_log) or TOOL_ERROR.search(oracle_log):
                return classify(oracle, oracle_log=oracle_log, oracle_ok=False).dict()
            _signature(signature)
            capture(name + '-oracle.sig', signature)
            with signature.open() as stream:
                values = [stream.readline().strip() for _ in range(5)]
            if any(len(word) != width * 2 for word in values) or int(values[0], 16) != 1:
                return ReproducerResult(Outcome.ORACLE_FAILURE, 'Spike selfcheck_record did not pass').dict()
            prepared = prepare_selfcheck_elf(root, elf, symbols, width, execute, name)
            if not prepared['passed']:
                return prepared
            wally = execute(name + '-wally', wally_args)
            wally_log = log_markers(Path(wally['log_path']))
            if wally.get('timed_out') or WATCHDOG.search(wally_log):
                return classify(wally, wally_log).dict()
            if TOOL_ERROR.search(wally_log):
                return classify(wally, wally_log).dict()
            record = re.search(re.escape(str(elf)) + r' result \d+: adr = ([0-9a-fA-F]+) sim \(D\$\) ([0-9a-fA-F]+) signature = ([0-9a-fA-F]+)', wally_log)
            if record and int(record[2], 16) != int(record[3], 16) and wally['returncode'] in (0, 1, 134, -6):
                result = ReproducerResult(Outcome.MISMATCH_CONFIRMED,
                    'CVW completed self-check value mismatch; same ELF passed Spike', wally['returncode']).dict()
                result['first_mismatch'] = dict(address=record[1], wally=record[2], expected=record[3])
                result['fingerprint'] = result['first_mismatch']
                return result
            complete = str(elf) + ' succeeded.  Brilliant!!!' in wally_log
            return classify(wally, wally_log, oracle_log, complete=complete, equal=True if complete else None).dict()
        outputs = {key: under(spec[key], tests) for key in ('wally_signature', 'oracle_signature')}
        if outputs['wally_signature'] == outputs['oracle_signature']:
            raise ValueError('Wally and Spike must write independent signatures')
        for path in outputs.values():
            if not path.is_relative_to(tests / 'build') and not path.is_relative_to(tests / 'logs'):
                raise ValueError('Signatures must be runtime output under build/ or logs/')
            path.unlink(missing_ok=True)
        oracle = execute(name + '-oracle', spec['oracle'])
        oracle_log = log_markers(Path(oracle['log_path']))
        oracle_ok = oracle['status'] == 'PASS' and not FAILURE.search(oracle_log)
        if not oracle_ok:
            return classify(oracle, oracle_log=oracle_log, oracle_ok=False).dict()
        wally = execute(name + '-wally', spec['wally'])
        wally_log = log_markers(Path(wally['log_path']))
        complete = all(isinstance(spec.get(key), str) and spec[key] for key in ('wally_complete', 'oracle_complete'))
        complete = complete and _contains(Path(wally['log_path']), spec['wally_complete']) and _contains(Path(oracle['log_path']), spec['oracle_complete'])
        signatures_exist = all(path.is_file() for path in outputs.values())
        signatures = {key: _signature(path) for key, path in outputs.items()} if signatures_exist else {}
        equal = signatures['wally_signature'] == signatures['oracle_signature'] if signatures else None
        result = classify(wally, wally_log, oracle_log, oracle_ok=oracle_ok, complete=complete, equal=equal).dict()
        for key, path in outputs.items():
            if path.is_file():
                capture(name + '-' + key + '.sig', path)
        result['artifacts'] = {key: str(directory / (name + '-' + key + '.sig')) for key in outputs}
        result['fingerprint'] = signatures
        return result
    try:
        errors = contract_errors(contract, root, tests, env)
        if errors:
            raise ValueError('; '.join(errors))
        validate_spike(env)
        built = execute('build', contract['build'])
        if built['status'] != 'PASS' or TOOL_ERROR.search(log_markers(Path(built['log_path']))):
            result = classify(built, build_ok=False).dict()
        else:
            errors = vector_preflight(contract, tests, root, directory, timeout, env)
            if errors:
                raise ValueError('; '.join(errors))
            control = pair(contract['control'], 'control')
            if control['status'] != Outcome.MATCH:
                result = ReproducerResult(Outcome.TEST_INVALID,
                    'Positive/control test failed: ' + str(control['status']) + ': ' + control['reason']).dict()
                result['control'] = control
            else:
                result = pair(contract['test'], 'test')
                result['control'] = control
    except (ValueError, KeyError, IndexError, TypeError, OSError) as exc:
        result = ReproducerResult(Outcome.TEST_INVALID, str(exc)).dict()
    result.update(steps=steps, log_path=str(log_path), evidence_dir=str(directory), captured=captured,
                  duration_seconds=time.monotonic() - started)
    result['performance'] = dict(
        test_build_seconds=steps.get('build', {}).get('duration_seconds', 0),
        wally_build_and_simulation_seconds=sum(step.get('duration_seconds', 0) for name, step in steps.items() if name.endswith('-wally')),
        spike_seconds=sum(step.get('duration_seconds', 0) for name, step in steps.items() if name.endswith('-oracle')),
        comparison_and_evidence_seconds=comparison_seconds,
        command_cleanup_seconds=sum(step.get('cleanup_seconds', 0) for step in steps.values()),
        rtl_build_seconds=None, simulation_only_seconds=None)
    Path(log_path).write_text(json.dumps(result, indent=2) + '\n')
    return result
