"""Remote RISC-V-DV generation and explicit byte-based artifact handoff."""
from datetime import datetime, timezone
import hashlib
import json
from pathlib import Path
import re

from chia.base.ChiaFunction import ChiaFunction
from . import test_profiles
from . import qualification_state
from .test_profiles import resolve_selection
import ray.cloudpickle
# A direct remote call with area/config arguments must not import head-only files.
# Carry the resolver and its registry values with the task, just like this wrapper.
ray.cloudpickle.register_pickle_by_value(test_profiles)
ray.cloudpickle.register_pickle_by_value(qualification_state)


class InitializationError(ValueError):
    """Assembly cannot establish the required state before the random body."""


COMPARE_MARKER = "wallyguard_compare_start"


def prepare_comparison_marker(assembly):
    """Adapt bare pyflow's main label; retain an existing comparison marker."""
    if re.search(rf"(?m)^\s*{COMPARE_MARKER}:", assembly):
        return assembly
    mains = list(re.finditer(r"(?m)^[ \t]*main:[ \t]*(.*)$", assembly))
    if len(mains) != 1:
        raise InitializationError("Expected one main: boundary for wallyguard_compare_start")
    main = mains[0]
    return (assembly[:main.start()] + "main:\n.globl " + COMPARE_MARKER + "\n" +
            COMPARE_MARKER + ":\n                  " + main[1] + assembly[main.end():])


def validate_initialization(assembly):
    # Examine actual assembly lines, not marker/initialization text in comments.
    code = [line.split("#", 1)[0].strip() for line in assembly.splitlines()]
    markers = [i for i, line in enumerate(code) if line == COMPARE_MARKER + ":"]
    if len(markers) != 1:
        raise InitializationError("Expected exactly one wallyguard_compare_start: label")
    before = [line for line in code[:markers[0]] if line]
    if not before or not re.fullmatch(r"li\s+x11\s*,\s*(?:0|0x0)", before[-1]):
        raise InitializationError("li x11, 0 must immediately precede wallyguard_compare_start:")
    return {"x11": "0x0", "validated": True}


def normalize_initialization(assembly):
    marker = list(re.finditer(rf"(?m)^[ \t]*{COMPARE_MARKER}:[ \t]*(?:#.*)?$", assembly))
    if len(marker) != 1:
        raise InitializationError("Missing or duplicate wallyguard_compare_start: label")
    # Idempotent for already normalized inputs. Otherwise insert after setup,
    # directly before the comparison label, never after the random body starts.
    try:
        validate_initialization(assembly)
        return assembly
    except InitializationError:
        position = marker[0].start()
        patched = assembly[:position] + "                  li x11, 0\n" + assembly[position:]
        validate_initialization(patched)
        return patched


def normalize_bare_setup(assembly):
    """Initialize only the GPR omitted by bare pyflow; preserve its stack value.

    Qualified profiles use fix_sp=1. Requiring the known initialization shape
    prevents this adapter from overwriting a specialized test's setup.
    """
    markers=list(re.finditer(rf"(?m)^[ \t]*{COMPARE_MARKER}:",assembly))
    starts=list(re.finditer(r"(?m)^[ \t]*init:[ \t]*$",assembly))
    if len(markers)!=1 or len(starts)!=1 or starts[0].start()>=markers[0].start():
        raise InitializationError("Expected the qualified bare pyflow init: section")
    setup=assembly[starts[0].end():markers[0].start()]
    stacks=re.findall(r"(?m)^\s*la\s+x(\d+)\s*,\s*(?:h0_)?user_stack_end\s*$",setup)
    if stacks!=['2']:
        raise InitializationError("Bare pyflow stack must be x2 (fix_sp=1); never zero an intentional stack pointer")
    initialized={int(r) for r in re.findall(r"(?m)^\s*(?:li|la)\s+x(\d+)\s*,",setup)}
    missing=set(range(1,32))-initialized
    if len(missing)>1:
        raise InitializationError(f"Unexpected bare setup: uninitialized GPRs {sorted(missing)}")
    additions=''.join(f"                  li x{reg}, 0\n" for reg in sorted(missing))
    patched=assembly[:markers[0].start()]+additions+assembly[markers[0].start():]
    return patched,dict(stack_register='x2',zeroed_uninitialized_gprs=[f'x{r}' for r in sorted(missing)],
                        initialized_gprs=[f'x{r}' for r in range(1,32)],validated=True)


def validate_elf(data, xlen=None):
    """Reject object files, other architectures, and path-shaped payloads."""
    if not isinstance(data, bytes) or len(data) < 64 or (data[:4] != b"\x7fELF" or data[4] not in (1, 2) or data[5] != 1):
        raise ValueError("Expected little-endian ELF32/ELF64 bytes")
    if xlen is not None and data[4] != {32: 1, 64: 2}[xlen]:
        raise ValueError("ELF class does not match selected Wally XLEN")
    if int.from_bytes(data[16:18], "little") != 2 or int.from_bytes(data[18:20], "little") != 243:
        raise ValueError("Expected an executable RISC-V ELF, not a relocatable object")


def select_generator_python(root, env):
    """Select an installed pyflow environment without changing Ray's Python."""
    import subprocess
    import sys
    explicit = env.get("RISCV_DV_PYTHON")
    envs = Path(sys.executable).parents[2]
    candidates = [Path(explicit)] if explicit else [
        envs / "riscv-dv-py311/bin/python", envs / "riscv-dv-env/bin/python",
        root / ".venv/bin/python", root / "venv/bin/python", Path(sys.executable)]
    checks = []
    for candidate in candidates:
        if not candidate.is_file():
            continue
        check = subprocess.run([str(candidate), "-c",
            "import sys,vsc,yaml,bitstring,pyboolector; assert callable(yaml.safe_load); print(sys.version)"],
            cwd="/tmp", env=env, capture_output=True, text=True, timeout=30)
        checks.append(dict(python=str(candidate), returncode=check.returncode,
                           output=check.stdout + check.stderr))
        if check.returncode == 0:
            return str(candidate), checks
    raise ValueError("No installed Python with pyflow dependencies; set RISCV_DV_PYTHON. " + json.dumps(checks))


@ChiaFunction(resources={"generator": 1}, max_retries=0)
def generate_riscv_dv_test(seed: int, test_area="general", wally_config="rv64gc",
                           riscv_dv_test=None, selection=None) -> dict:
    # Imports happen on the generator worker. No head filesystem paths are used.
    import os
    import shlex
    import shutil
    import signal
    import socket
    import subprocess
    import sys
    import tempfile
    import time
    import traceback

    result = dict(success=False, status="GENERATOR_ERROR", seed=seed,
                  assembly_text="", elf_bytes=b"", elf_original_name=None,
                  generation_log="", generator_command=[], error=None,
                  compiler_command=[], initialization={"x11": "0x0", "validated": False},
                  hostname=socket.gethostname(),
                  generation_timestamp=datetime.now(timezone.utc).isoformat())
    result.update({key:value for key,value in (selection or dict(wally_config=wally_config, test_area=test_area, riscv_dv_test=riscv_dv_test)).items() if key!='status'})
    started = time.monotonic()
    with tempfile.TemporaryDirectory(prefix=f"wallyguard_seed_{seed}_") as temporary:
        work = Path(temporary)
        log = work / "generation.log"
        try:
            if not isinstance(seed, int) or not 0 <= seed < 2**31:
                raise ValueError("seed must be an integer in [0, 2**31)")
            root = Path(os.environ["RISCV_DV_ROOT"]).resolve()
            if not (root / "run.py").is_file():
                raise ValueError(f"RISCV_DV_ROOT/run.py missing: {root}")
            env = os.environ.copy()
            env["PYTHONUNBUFFERED"] = "1"
            env["PYTHONHASHSEED"] = str(seed)
            env["PYTHONPATH"] = str(root / "pygen") + os.pathsep + env.get("PYTHONPATH", "")
            # Ray's Python and pyflow's Python can be separate environments.
            # Prefer the installed generator venv; do not install dependencies.
            python, checks = select_generator_python(root, env)
            result["python_environment_checks"] = checks
            # run.py's pyflow command invokes python3 through PATH.
            env["PATH"] = str(Path(python).parent) + os.pathsep + env.get("PATH", "")
            for variable, executable in (("RISCV_GCC", "riscv64-unknown-elf-gcc"),
                                         ("RISCV_OBJCOPY", "riscv64-unknown-elf-objcopy")):
                tool = env.get(variable) or shutil.which(executable, path=env["PATH"])
                if not tool and env.get("RISCV"):
                    candidate = Path(env["RISCV"]) / "bin" / executable
                    tool = str(candidate) if candidate.is_file() else None
                if not tool:
                    raise ValueError(f"Set {variable} or install {executable} on the generator worker")
                env[variable] = tool
            if selection is None:
                selection = resolve_selection(wally_config, test_area, seed, riscv_dv_test)
            result.update({key:value for key,value in selection.items() if key!='status'})
            result['compatibility_status']=selection.get('status')
            if not selection["campaign_enabled"]:
                result["status"] = "SKIPPED_UNSUPPORTED"
                raise ValueError(selection["reason"])
            # pyflow calls this ISA spelling rv64imafdc, equivalent to RV64GC.
            # Start with integer/compressed M-mode instructions: FP/CSR state is
            # outside the existing comparator's primary coverage.
            revision = subprocess.check_output(["git", "rev-parse", "HEAD"], cwd=root, text=True).strip() if (root / ".git").exists() else None
            result["installed_riscv_dv_revision"] = revision
            if revision and selection.get("riscv_dv_revision") and revision != selection["riscv_dv_revision"]:
                raise ValueError("Installed RISC-V-DV revision changed; refresh inventory and requalify profiles")
            setting = root / "pygen/pygen_src/target" / selection["riscv_dv_target"] / "riscv_core_setting.py"
            if not setting.is_file():
                raise ValueError(f"Installed pyflow target setting is missing: {setting.name}")
            if setting.is_file():
                target_text = setting.read_text()
                xlen = re.search(r"(?m)^XLEN\s*=\s*(32|64)\s*$", target_text)
                if not xlen or int(xlen[1]) != selection["xlen"]:
                    raise ValueError("Installed pyflow target XLEN disagrees with selected Wally configuration")
                result["target_setting_sha256"] = hashlib.sha256(target_text.encode()).hexdigest()
            profile = selection["generator_options"]
            testlist = work / "testlist.yaml"
            testlist.write_text(json.dumps([dict(
                test=selection["riscv_dv_test"], gen_test=selection["gen_test"], iterations=1,
                gen_opts=" ".join(f"+{key}={value}" for key, value in profile.items()))]))
            timeout = int(selection.get('generation_timeout',env.get("RISCV_DV_TIMEOUT", "600")))
            command = [python, str(root / "run.py"),
                       "--target", selection["riscv_dv_target"], "--isa", selection["spike_isa"], "--mabi", selection["mabi"],
                       "--simulator", "pyflow", "--steps", "gen",
                       "--testlist", str(testlist), "--test", selection["riscv_dv_test"],
                       "--iterations", "1", "--seed", str(seed), "--gen_timeout", str(timeout),
                       f"--gcc_opts=-march={selection['spike_isa']} -mabi={selection['mabi']} -save-temps=obj -Wl,--build-id=none",
                       "--output", str(work / "output"), "--noclean", "--verbose"]
            result.update(generator_command=command, generator_profile=profile,
                          compiler=env["RISCV_GCC"], testlist_text=testlist.read_text())
            def run_step(step_command):
                with log.open("a", buffering=1) as handle:
                    handle.write(f"Host: {result['hostname']}\nCommand: {shlex.join(step_command)}\n")
                    handle.flush()
                    process = subprocess.Popen(step_command, cwd=root, env=env, stdout=handle,
                                               stderr=subprocess.STDOUT, start_new_session=True)
                    try:
                        code = process.wait(timeout=timeout + 60)
                    except subprocess.TimeoutExpired:
                        os.killpg(process.pid, signal.SIGKILL)
                        process.wait()
                        raise TimeoutError(f"RISC-V-DV step exceeded {timeout + 60}s")
                    except BaseException:
                        # Cooperative Ray cancellation raises KeyboardInterrupt.
                        # Stop our child process group before releasing generator:1.
                        try:
                            os.killpg(process.pid, signal.SIGKILL)
                        except ProcessLookupError:
                            pass
                        process.wait()
                        raise
                result["returncode"] = code
                if code:
                    raise RuntimeError(f"RISC-V-DV exited with code {code}")

            run_step(command)
            sources = sorted((work / "output").rglob("*.S"))
            if len(sources) == 1:
                result["assembly_text"] = sources[0].read_text()
            if len(sources) != 1:
                raise InitializationError(f"Expected exactly one assembly test, found {len(sources)}")
            prepared = prepare_comparison_marker(result["assembly_text"])
            prepared, result["initialization_audit"] = normalize_bare_setup(prepared)
            patched = normalize_initialization(prepared)
            sources[0].write_text(patched)
            result["assembly_text"] = sources[0].read_text()
            result["initialization"] = validate_initialization(result["assembly_text"])
            with log.open("a") as handle:
                handle.write("WallyGuard initialization validated: li x11, 0 before wallyguard_compare_start\n")
            compile_command = command.copy()
            compile_command[compile_command.index("--steps") + 1] = "gcc_compile"
            result["compiler_command"] = compile_command
            run_step(compile_command)
            if sources[0].read_text() != patched:
                raise InitializationError("Compiler step changed the validated assembly")
            candidates = []
            for path in (work / "output").rglob("*"):
                if path.suffix in (".o", ".elf") and path.is_file():
                    data = path.read_bytes()
                    try:
                        validate_elf(data, selection["xlen"])
                    except ValueError:
                        # -save-temps keeps relocatable assembler intermediates;
                        # only the linked executable is a transferable test.
                        continue
                    candidates.append((path, data))
            if len(candidates) != 1:
                raise ValueError(f"Expected exactly one executable ELF, found {len(candidates)}")
            path, data = candidates[0]
            nm = str(Path(env["RISCV_GCC"]).with_name("riscv64-unknown-elf-nm"))
            symbols = subprocess.check_output([nm, str(path)], text=True)
            marker = re.search(r"(?m)^([0-9a-fA-F]+)\s+\w\s+wallyguard_compare_start$", symbols)
            if not marker:
                raise InitializationError("Compiled ELF is missing wallyguard_compare_start")
            result["compare_start_pc"] = f"{int(marker[1], 16):016x}"
            result["x11_normalization"] = dict(value="0x0", validated=True)
            result.update(success=True, status="PASS", elf_bytes=data, elf_original_name=path.name)
        except Exception as exc:
            if isinstance(exc, InitializationError):
                result["status"] = "INITIALIZATION_ERROR"
                result["initialization"]["validated"] = False
            result["error"] = f"{type(exc).__name__}: {exc}"
            with log.open("a") as handle:
                handle.write(traceback.format_exc())
        finally:
            if not result["assembly_text"]:
                partial_sources = sorted((work / "output").rglob("*.S"))
                if len(partial_sources) == 1:
                    result["assembly_text"] = partial_sources[0].read_text(errors="replace")
            # Preserve child logs even if run.py reports only a summary or fails.
            pieces = [log.read_text(errors="replace") if log.exists() else ""]
            for child in sorted((work / "output").rglob("*.log")):
                pieces.append(f"\n--- {child.relative_to(work)} ---\n" + child.read_text(errors="replace"))
            result["generation_log"] = "\n".join(pieces)
            result["duration_seconds"] = time.monotonic() - started
    return result


def materialize_generated_test(generated, test_id, destination):
    """Persist the Ray result on the head, returning a LOCAL absolute ELF path."""
    directory = Path(destination).resolve() / f"test_{test_id}_seed_{generated['seed']}"
    directory.mkdir(parents=True, exist_ok=False)
    (directory / "generation.log").write_text(generated.get("generation_log", ""))
    (directory / "test.S").write_text(generated.get("assembly_text", ""))
    metadata = {key: value for key, value in generated.items()
                if key not in ("elf_bytes", "assembly_text", "generation_log")}
    metadata.update(test_id=test_id, elf_sha256=None,
                    materialization_timestamp=datetime.now(timezone.utc).isoformat())
    elf = directory / "test.elf"
    if generated.get("success"):
        try:
            data = generated["elf_bytes"]
            validate_elf(data, generated.get("xlen"))
            temporary = directory / "test.elf.tmp"
            temporary.write_bytes(data)
            temporary.replace(elf)
            metadata["elf_sha256"] = hashlib.sha256(data).hexdigest()
            metadata["local_elf_path"] = str(elf)
        except (KeyError, ValueError, OSError) as exc:
            metadata.update(success=False, status="GENERATOR_ERROR", error=str(exc))
    (directory / "metadata.json").write_text(json.dumps(metadata, indent=2) + "\n")
    return (elf if metadata["success"] else None), directory, metadata
