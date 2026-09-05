from __future__ import annotations

import argparse
import json
import os
from pathlib import Path
import shlex
import shutil
import signal
import subprocess
import time
from datetime import datetime

from chia.base.ChiaFunction import ChiaFunction, get
from tools.compare import compare_traces, oracle_result
from tools.spike import normalize_spike

PROJECT_ROOT = Path(__file__).resolve().parent
DEFAULT_TEST_DIR = PROJECT_ROOT / "tests"
DEFAULT_RUN_DIR = PROJECT_ROOT / "runs"
WALLY_CONFIG = "rv64gc"


def normalize_signature(signature: str) -> list[str]:
    return [line.strip().lower() for line in signature.splitlines() if line.strip()]


def nonempty(path: Path) -> bool:
    return path.is_file() and path.stat().st_size > 0


def run_simulator(runner, command, log, trace, signature, timeout_seconds, env,
                  raw_log=None, normalize=None):
    """Stream subprocess output to disk; return only small, JSON-safe metadata."""
    started = datetime.now().astimezone().isoformat()
    start = time.monotonic()
    returncode, timed_out, error = -1, False, None
    log.parent.mkdir(parents=True, exist_ok=True)
    signature.parent.mkdir(parents=True, exist_ok=True)
    for stale in (trace, signature, Path(str(trace) + ".complete")):
        stale.unlink(missing_ok=True)
    if raw_log is not None:
        raw_log.unlink(missing_ok=True)
    # stdbuf also reaches wsim's simulator child, keeping redirected diagnostics
    # line-buffered. Neither stdout nor a trace is accumulated in Python/Ray.
    if shutil.which("stdbuf"):
        command = [shutil.which("stdbuf"), "-oL", "-eL", *command]
    with log.open("w", buffering=1) as handle:
        handle.write(f"Started: {started}\nCommand: {shlex.join(command)}\n\n")
        handle.flush()
        try:
            process = subprocess.Popen(command, stdout=handle, stderr=subprocess.STDOUT,
                                       cwd=PROJECT_ROOT, env=env, start_new_session=True)
            try:
                returncode = process.wait(timeout=timeout_seconds)
            except subprocess.TimeoutExpired:
                timed_out, error = True, f"timeout after {timeout_seconds} seconds"
                # wsim launches make/simulator children. Stop the whole owned
                # process group so a timed-out task cannot keep writing evidence.
                try:
                    os.killpg(process.pid, signal.SIGTERM)
                except ProcessLookupError:
                    pass
                try:
                    process.wait(timeout=2)
                except subprocess.TimeoutExpired:
                    pass
                try:
                    os.killpg(process.pid, signal.SIGKILL)
                except ProcessLookupError:
                    pass
                process.wait()
                returncode = -1
            if returncode != 0 and not error:
                error = f"simulator exited with code {returncode}"
            if returncode == 0 and normalize is not None:
                normalize()
        except Exception as exc:
            error = f"{type(exc).__name__}: {exc}"
        finished = datetime.now().astimezone().isoformat()
        handle.write(f"\nFinished: {finished}\nReturn code: {returncode}\n")
        if error:
            handle.write(f"ERROR: {error}\n")
    return {
        "runner": runner, "command": command, "returncode": returncode,
        "timed_out": timed_out, "duration_seconds": time.monotonic() - start,
        "started_at": started, "finished_at": finished,
        "log_path": str(raw_log if raw_log is not None else log),
        "runner_log_path": str(log), "trace_path": str(trace),
        "signature_path": str(signature), "trace_created": nonempty(trace),
        "signature_created": nonempty(signature), "error": error,
    }


@ChiaFunction(resources={"wally": 1})
def run_wally(elf_path: str, log_path: str, signature_path: str,
              config: str = "rv64gc", timeout_seconds: int = 900) -> dict:
    elf, log, signature = map(lambda value: Path(value).resolve(),
                              (elf_path, log_path, signature_path))
    trace = log.parent / "wally_trace.csv"
    command = [str(PROJECT_ROOT / "cvw/bin/wsim"), config, "--sim", "verilator",
               "--elf", str(elf), "--args", f"+trace_file={trace} +signature_file={signature}"]
    env = {**os.environ, "PYTHONUNBUFFERED": "1", "WALLY": str(PROJECT_ROOT / "cvw"),
           "PATH": str(PROJECT_ROOT / "cvw/bin") + os.pathsep + os.environ.get("PATH", "")}
    return run_simulator("wally", command, log, trace, signature, timeout_seconds, env)


@ChiaFunction(resources={"spike": 1})
def run_spike(elf_path: str, log_path: str, signature_path: str,
              config: str = "rv64gc", timeout_seconds: int = 120) -> dict:
    elf, log, signature = map(lambda value: Path(value).resolve(),
                              (elf_path, log_path, signature_path))
    trace = log.parent / "spike_trace.csv"
    installed = Path(os.environ.get("RISCV", "/home/rafay/riscv")) / "bin/spike"
    spike = str(installed) if installed.is_file() else (shutil.which("spike") or "spike")
    command = [spike, f"--isa={config}", "-l", "--log-commits", f"--log={log}",
               f"+signature={signature}", "+signature-granularity=4", str(elf)]
    return run_simulator("spike", command, log.parent / "spike_runner.log", trace,
                         signature, timeout_seconds, os.environ.copy(), raw_log=log,
                         normalize=lambda: normalize_spike(log, trace, elf))


def compare_signatures(
    wally_signature: str,
    spike_signature: str,
) -> dict:

    wally = normalize_signature(wally_signature)
    spike = normalize_signature(spike_signature)

    if not wally:
        return {
            "status": "COMPARE_ERROR",
            "match": False,
            "reason": "Wally signature is empty",
        }

    if not spike:
        return {
            "status": "COMPARE_ERROR",
            "match": False,
            "reason": "Spike signature is empty",
        }

    if wally == spike:
        return {
            "status": "PASS",
            "match": True,
            "reason": "Architectural signatures match",
            "entries": len(wally),
        }

    max_length = max(
        len(wally),
        len(spike),
    )

    first_mismatch = None

    for index in range(max_length):

        if index < len(wally):
            wally_value = wally[index]
        else:
            wally_value = "<missing>"

        if index < len(spike):
            spike_value = spike[index]
        else:
            spike_value = "<missing>"

        if wally_value != spike_value:

            first_mismatch = {
                "index": index,
                "wally": wally_value,
                "spike": spike_value,
            }

            break

    return {
        "status": "MISMATCH",
        "match": False,
        "reason": "Architectural signature mismatch",
        "wally_entries": len(wally),
        "spike_entries": len(spike),
        "first_mismatch": first_mismatch,
    }


def runner_errors(wally, spike):
    for name, runner in (("WALLY", wally), ("SPIKE", spike)):
        if runner["timed_out"] or runner["returncode"] != 0 or runner["error"]:
            return {"status": f"{name}_TRACE_ERROR", "match": False,
                    "reason": runner["error"] or f"{name} simulation failed",
                    "matched_instructions": 0, "first_mismatch": None}
    return None


@ChiaFunction(resources={"compare": 1})
def compare_architectural_traces(wally_trace_path: str, spike_trace_path: str,
                                 wally_signature_path: str, spike_signature_path: str,
                                 run_directory: str, simulation_error: dict | None = None) -> dict:
    """Read artifacts on the compare worker; return only bounded comparison evidence."""
    directory = Path(run_directory)
    for name in ("mismatch.json", "mismatch.txt"):
        (directory / name).unlink(missing_ok=True)
    trace = simulation_error or compare_traces(
        wally_trace_path, spike_trace_path, directory, require_complete=True)
    trace.setdefault("matched_instructions", 0)
    trace.setdefault("first_mismatch", None)
    try:
        signature = compare_signatures(Path(wally_signature_path).read_text(),
                                       Path(spike_signature_path).read_text())
    except (OSError, UnicodeError) as exc:
        signature = {"status": "COMPARE_ERROR", "match": False, "reason": str(exc)}
    return oracle_result(trace, signature)


def comparison_args(wally, spike, run_directory):
    return (wally["trace_path"], spike["trace_path"],
            wally["signature_path"], spike["signature_path"],
            str(run_directory), runner_errors(wally, spike))


def classify_and_compare(wally: dict, spike: dict) -> dict:
    return get(compare_architectural_traces.chia_remote(
        *comparison_args(wally, spike, Path(wally["trace_path"]).parent)))


def save_summary(run_directory: Path, elf: Path, wally: dict, spike: dict, comparison: dict):
    mismatch = comparison["trace"]["status"] == "TRACE_MISMATCH"
    summary = {
        "timestamp": datetime.now().astimezone().isoformat(), "test": str(elf),
        "configuration": WALLY_CONFIG, "status": comparison["status"],
        "wally": wally, "spike": spike,
        "trace_comparison": comparison["trace"],
        "signature_comparison": comparison["signature"],
        "evidence": {
            "wally_log": wally["log_path"], "spike_log": spike["log_path"],
            "wally_trace": wally["trace_path"], "spike_trace": spike["trace_path"],
            "wally_signature": wally["signature_path"], "spike_signature": spike["signature_path"],
            "mismatch_json": str(run_directory / "mismatch.json") if mismatch else None,
            "mismatch_text": str(run_directory / "mismatch.txt") if mismatch else None,
        },
    }
    temporary = run_directory / "result.json.tmp"
    temporary.write_text(json.dumps(summary, indent=2) + "\n")
    temporary.replace(run_directory / "result.json")


def print_result(run_number: int, elf: Path, comparison: dict, run_directory: Path):
    trace, signature = comparison["trace"], comparison["signature"]
    print(f"[{run_number:06d}] {elf.name}", flush=True)
    if trace["status"] == "PASS":
        print(f"TRACE PASS: {trace['matched_instructions']} matched retired instructions", flush=True)
    elif trace["status"] == "TRACE_MISMATCH":
        first = trace["first_mismatch"]
        row = first["spike"] or first["wally"]
        print(f"!!! TRACE MISMATCH after {trace['matched_instructions']} matching instructions", flush=True)
        print(f"     First divergence (index {first['index']}): {first['reason']}\n"
              f"     PC     : {row['pc']}\n     binary : {row['binary']}", flush=True)
        for name in ("spike", "wally"):
            event = first[name]
            effect = f"rd={event['rd'] or '-'} value={event['rd_value'] or '-'}" if event else "<end of trace>"
            print(f"     {name.capitalize()}: {effect}", flush=True)
        print(f"     Evidence: {run_directory / 'mismatch.txt'}", flush=True)
    else:
        print(f"{trace['status']}: infrastructure/simulation error: {trace['reason']}", flush=True)
    print(f"SIGNATURE {signature['status']}", flush=True)
    if comparison["status"] == "INCONSISTENT_ORACLE":
        print(f"INCONSISTENT_ORACLE: {comparison['reason']}", flush=True)
    if comparison["status"] != "PASS":
        print(f"Result: {run_directory / 'result.json'}", flush=True)


def main():
    parser = argparse.ArgumentParser(description="WallyGuard CHIA architectural trace loop")
    parser.add_argument("--test-dir", type=Path, default=DEFAULT_TEST_DIR)
    parser.add_argument("--run-dir", type=Path, default=DEFAULT_RUN_DIR)
    parser.add_argument("--sleep", type=float, default=1.0, help="Seconds between complete sweeps")
    parser.add_argument("--once", action="store_true")
    parser.add_argument("--stop-on-failure", action="store_true")
    parser.add_argument("--wally-timeout", type=int, default=900)
    parser.add_argument("--spike-timeout", type=int, default=120)
    parser.add_argument("--local", action="store_true",
                        help="Explicit local test: run the same task implementations without Ray")
    args = parser.parse_args()
    if not args.local:
        import ray
        if not ray.is_initialized():
            try:
                ray.init(address="auto", ignore_reinit_error=True,
                         runtime_env={"env_vars": {
                             "PYTHONPATH": str(PROJECT_ROOT) + os.pathsep + os.environ.get("PYTHONPATH", "")}})
            except ConnectionError as exc:
                parser.exit(2, f"Existing CHIA cluster unavailable: {exc}\n"
                            "Set RAY_ADDRESS to the existing head, or use --local for a local test.\n")
        missing = [name for name in ("wally", "spike", "compare")
                   if ray.cluster_resources().get(name, 0) < 1]
        if missing:
            parser.exit(2, f"Existing cluster is missing WallyGuard resources: {missing}\n")
    session_directory = args.run_dir.resolve() / datetime.now().strftime("session_%Y%m%d_%H%M%S_%f")
    session_directory.mkdir(parents=True)
    print(f"WallyGuard {'local task test' if args.local else 'CHIA loop'}\n"
          f"Evidence: {session_directory}", flush=True)
    run_number = 0
    try:
        while True:
            tests = sorted(args.test_dir.resolve().glob("*.elf"))
            if not tests:
                print("No ELF tests found.", flush=True)
                if args.once:
                    return 1
            for elf in tests:
                run_number += 1
                directory = session_directory / f"{run_number:06d}_{elf.stem}"
                directory.mkdir()
                wally_args = (str(elf), str(directory / "wally.log"),
                              str(directory / "wally.signature"), WALLY_CONFIG, args.wally_timeout)
                spike_args = (str(elf), str(directory / "spike.log"),
                              str(directory / "spike.signature"), WALLY_CONFIG, args.spike_timeout)
                print(f"[{run_number:06d}] Dispatching {elf.name}", flush=True)
                if args.local:
                    from concurrent.futures import ThreadPoolExecutor
                    from inspect import unwrap
                    with ThreadPoolExecutor(max_workers=2) as pool:
                        wally_ref = pool.submit(unwrap(run_wally), *wally_args)
                        spike_ref = pool.submit(unwrap(run_spike), *spike_args)
                        wally, spike = wally_ref.result(), spike_ref.result()
                    comparison = unwrap(compare_architectural_traces)(
                        *comparison_args(wally, spike, directory))
                else:
                    # Both tasks are submitted before waiting; artifacts remain
                    # on disk and only metadata passes through Ray.
                    wally_ref = run_wally.chia_remote(*wally_args)
                    spike_ref = run_spike.chia_remote(*spike_args)
                    wally, spike = get([wally_ref, spike_ref])
                    comparison = classify_and_compare(wally, spike)
                save_summary(directory, elf, wally, spike, comparison)
                print_result(run_number, elf, comparison, directory)
                if args.stop_on_failure and comparison["status"] != "PASS":
                    print("Stopping because --stop-on-failure was set.", flush=True)
                    return 1
            if args.once:
                return 0
            time.sleep(args.sleep)
    except KeyboardInterrupt:
        print("WallyGuard loop interrupted.", flush=True)
        return 130


if __name__ == "__main__":
    raise SystemExit(main())
