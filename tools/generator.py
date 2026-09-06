"""Remote RISC-V-DV generation and explicit byte-based artifact handoff."""
from datetime import datetime, timezone
import hashlib
import json
from pathlib import Path

from chia.base.ChiaFunction import ChiaFunction


def validate_elf(data):
    """Reject object files, other architectures, and path-shaped payloads."""
    if not isinstance(data, bytes) or len(data) < 64 or data[:6] != b"\x7fELF\x02\x01":
        raise ValueError("Expected little-endian ELF64 bytes")
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
def generate_riscv_dv_test(seed: int) -> dict:
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
                  hostname=socket.gethostname(),
                  generation_timestamp=datetime.now(timezone.utc).isoformat())
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
            # pyflow calls this ISA spelling rv64imafdc, equivalent to RV64GC.
            # Start with integer/compressed M-mode instructions: FP/CSR state is
            # outside the existing comparator's primary coverage.
            profile = {
                "instr_cnt": 200, "num_of_sub_program": 0, "boot_mode": "m",
                "bare_program_mode": 1, "num_of_harts": 1,
                "no_csr_instr": 1, "no_ebreak": 1, "no_dret": 1, "no_wfi": 1,
                "enable_floating_point": 0, "enable_vector_extension": 0,
                # This pyflow version appends the SYNCH list as one element
                # when fences are enabled (unhashable list in get_rand_instr).
                "no_directed_instr": 1, "no_fence": 1,
            }
            testlist = work / "testlist.yaml"
            # JSON is a YAML subset; avoid another dependency in this adapter.
            testlist.write_text(json.dumps([dict(
                test="wallyguard_rand", gen_test="riscv_instr_base_test", iterations=1,
                gen_opts=" ".join(f"+{key}={value}" for key, value in profile.items()))]))
            timeout = int(env.get("RISCV_DV_TIMEOUT", "600"))
            command = [python, str(root / "run.py"),
                       "--target", "rv64imafdc", "--isa", "rv64gc", "--mabi", "lp64d",
                       "--simulator", "pyflow", "--steps", "gen,gcc_compile",
                       "--testlist", str(testlist), "--test", "wallyguard_rand",
                       "--iterations", "1", "--seed", str(seed), "--gen_timeout", str(timeout),
                       "--gcc_opts=-march=rv64gc -mabi=lp64d -save-temps=obj -Wl,--build-id=none",
                       "--output", str(work / "output"), "--verbose"]
            result.update(generator_command=command, generator_profile=profile,
                          compiler=env["RISCV_GCC"], testlist_text=testlist.read_text())
            with log.open("w", buffering=1) as handle:
                handle.write(f"Host: {result['hostname']}\nCommand: {shlex.join(command)}\n")
                handle.flush()
                process = subprocess.Popen(command, cwd=root, env=env, stdout=handle,
                                           stderr=subprocess.STDOUT, start_new_session=True)
                try:
                    code = process.wait(timeout=timeout + 60)
                except subprocess.TimeoutExpired:
                    os.killpg(process.pid, signal.SIGKILL)
                    process.wait()
                    raise TimeoutError(f"Generation/compilation exceeded {timeout + 60}s")
            result["returncode"] = code
            sources = sorted((work / "output").rglob("*.S"))
            if len(sources) == 1:
                result["assembly_text"] = sources[0].read_text()
            if code:
                raise RuntimeError(f"RISC-V-DV exited with code {code}")
            if len(sources) != 1:
                raise ValueError(f"Expected exactly one assembly test, found {len(sources)}")
            candidates = []
            for path in (work / "output").rglob("*"):
                if path.suffix in (".o", ".elf") and path.is_file():
                    data = path.read_bytes()
                    try:
                        validate_elf(data)
                    except ValueError:
                        # -save-temps keeps relocatable assembler intermediates;
                        # only the linked executable is a transferable test.
                        continue
                    candidates.append((path, data))
            if len(candidates) != 1:
                raise ValueError(f"Expected exactly one executable ELF, found {len(candidates)}")
            path, data = candidates[0]
            result.update(success=True, status="PASS", elf_bytes=data, elf_original_name=path.name)
        except Exception as exc:
            result["error"] = f"{type(exc).__name__}: {exc}"
            with log.open("a") as handle:
                handle.write(traceback.format_exc())
        finally:
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
            validate_elf(data)
            temporary = directory / "test.elf.tmp"
            temporary.write_bytes(data)
            temporary.replace(elf)
            metadata["elf_sha256"] = hashlib.sha256(data).hexdigest()
            metadata["local_elf_path"] = str(elf)
        except (KeyError, ValueError, OSError) as exc:
            metadata.update(success=False, status="GENERATOR_ERROR", error=str(exc))
    (directory / "metadata.json").write_text(json.dumps(metadata, indent=2) + "\n")
    return (elf if metadata["success"] else None), directory, metadata
