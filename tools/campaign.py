"""Head-side generation campaign. Remote artifacts arrive only through Ray results."""
from datetime import datetime, timezone
import json
import os
from pathlib import Path
import secrets
import subprocess
import time

from chia.base.ChiaFunction import get, chia_cancel as cancel
from .generator import generate_riscv_dv_test, materialize_generated_test
from . import console


def write_json(path, data):
    temporary = path.with_suffix(path.suffix + ".tmp")
    temporary.write_text(json.dumps(data, indent=2) + "\n")
    temporary.replace(path)


def inspect_local_elf(elf, directory):
    readelf = Path(os.environ.get("RISCV", "/home/rafay/riscv")) / "bin/riscv64-unknown-elf-readelf"
    with (directory / "elf_inspection.log").open("w") as log:
        for command in (["file", str(elf)], [str(readelf), "-h", str(elf)]):
            log.write(f"Command: {command!r}\n")
            log.flush()
            subprocess.run(command, stdout=log, stderr=subprocess.STDOUT, check=True, timeout=30)


def run_campaign(args, session, execute, save, display):
    # Ship this small generator implementation by value with the CHIA task.
    # The remote worker does not need the head's tools/ package or checkout.
    import ray.cloudpickle
    from . import generator
    ray.cloudpickle.register_pickle_by_value(generator)
    limit = 1 if args.preflight or args.once else args.num_tests
    summary = dict(attempted=0, generation_success=0, wally_success=0, spike_success=0,
                   trace_pass=0, trace_mismatch=0, infrastructure_generator_errors=0,
                   evidence_errors=0, directed=getattr(args, "directed_summary", None), results=[])
    from .test_profiles import resolve_selection
    used_seeds = set()
    failed = False
    # One remote lookahead only. Strict-stop runs never generate unused tests.
    prefetch = not args.preflight and not args.stop_on_failure
    summary["generation_lookahead"] = int(prefetch and limit != 1)
    pending = current = None

    def submit(number, ahead=False):
        seed = ((args.seed + number - 1) % 2**31) if args.seed is not None else secrets.randbelow(2**31)
        while args.seed is None and seed in used_seeds:
            seed = secrets.randbelow(2**31)
        used_seeds.add(seed)
        selection = resolve_selection(getattr(args,"wally_config","rv64gc"),
                                      getattr(args,"test_area","general"),seed,
                                      getattr(args,"riscv_dv_test",None))
        directory = session / f"{number:06d}_{selection['wally_config']}_{selection['test_area']}_{selection['riscv_dv_test']}_seed_{seed}"
        directory.mkdir()
        campaign_id = next((p.name for p in (session, *session.parents) if p.name.startswith("session_")), session.name)
        test_id = f"{campaign_id.removeprefix('session_')}_{directory.name.rsplit('_seed_', 1)[0]}"
        request = dict(**selection, test_id=test_id, seed=seed, prefetched=ahead,
                       requested_at=datetime.now(timezone.utc).isoformat())
        write_json(directory / "request.json", request)
        console.progress(number, f"{selection['wally_config']}/{selection['test_area']}/{selection['riscv_dv_test']} seed {seed}", "generating remotely (next test)" if ahead else "generating")
        task = dict(seed=seed, directory=directory, test_id=test_id, request=request, ref=None, error=None)
        try:
            task["ref"] = generate_riscv_dv_test.chia_remote(seed, selection=selection)
        except Exception as exc:
            task["error"] = f"{type(exc).__name__}: {exc}"
        return task

    try:
        while limit is None or summary["attempted"] < limit:
            number = summary["attempted"] + 1
            current = pending if pending is not None else submit(number)
            pending = None
            seed, directory, test_id = current["seed"], current["directory"], current["test_id"]
            summary["attempted"] = number
            try:
                if current["error"]:
                    raise RuntimeError(current["error"])
                generated = get(current["ref"])
            except Exception as exc:
                generated = dict(success=False, status="GENERATOR_ERROR", seed=seed,
                                 generation_log=f"CHIA generation task failed: {exc}\n",
                                 error=f"{type(exc).__name__}: {exc}", generator_command=[],
                                 generation_timestamp=datetime.now(timezone.utc).isoformat())
            # Validate the handoff against the requested coordinates, not just
            # the remote payload's own XLEN claim. Preserve these on failures too.
            for key in ("wally_config","xlen","spike_isa","riscv_dv_target","test_area","riscv_dv_test","seed"):
                expected=current["request"].get(key)
                if generated.get("success") and key in generated and generated[key] != expected:
                    generated.update(success=False,status="GENERATOR_ERROR",
                                     error=f"Generator metadata disagrees with request: {key}")
                generated[key]=expected
            # Drop the resolved Ray reference too; it otherwise pins the payload.
            current["ref"] = None
            try:
                elf, artifact_dir, metadata = materialize_generated_test(generated, test_id, args.generated_dir)
            except (OSError, ValueError, KeyError, TypeError) as exc:
                # Even a local disk/materialization failure gets a run result.
                elf, artifact_dir = None, directory
                metadata = dict(success=False, status="GENERATOR_ERROR", seed=seed,
                                test_id=test_id, error=f"Materialization failed: {exc}")
                (directory / "generation.log").write_text(generated.get("generation_log", ""))
            # Release ELF/log payload before dispatching simulator tasks.
            del generated
            metadata.update({k:current["request"].get(k) for k in ("wally_config","xlen","spike_isa","riscv_dv_target","test_area","riscv_dv_test")})
            metadata["artifact_directory"] = str(artifact_dir)
            if elf is None:
                failure_status = metadata.get("status", "GENERATOR_ERROR")
                result = dict(**{k:metadata.get(k) for k in ("wally_config","xlen","spike_isa","riscv_dv_target","test_area","riscv_dv_test","seed")},status=failure_status,generator_status=failure_status,infrastructure_status=failure_status,generation=metadata)
                write_json(directory / "result.json", result)
                console.progress(number, f"seed {seed}", console.paint(failure_status, "1;33"))
                print(f"  {metadata.get('error')}\n  Evidence: {artifact_dir}", flush=True)
            else:
                summary["generation_success"] += 1
                if prefetch and (limit is None or number < limit):
                    pending = submit(number + 1, ahead=True)
                # Do not get/materialize the lookahead until this execute/save
                # finishes. Local simulator concurrency and disk work are unchanged.
                try:
                    if args.preflight:
                        inspect_local_elf(elf, artifact_dir)
                    wally, spike, comparison = execute(elf, directory, args, preflight=args.preflight)
                    for name, runner in (("wally", wally), ("spike", spike)):
                        if runner["returncode"] == 0 and not runner["timed_out"] and not runner["error"] and runner["trace_created"]:
                            summary[f"{name}_success"] += 1
                    save(directory, elf, wally, spike, comparison, generation=metadata)
                    summary["evidence_errors"] += bool(comparison.get("collection_error"))
                    display(number, elf, comparison, directory)
                    result = comparison
                except Exception as exc:
                    result = dict(status="INFRASTRUCTURE_ERROR", generation=metadata,
                                  error=f"{type(exc).__name__}: {exc}")
                    write_json(directory / "result.json", result)
                    console.progress(number, f"seed {seed}", console.paint("INFRASTRUCTURE_ERROR", "1;33"))
                    print(f"  {result['error']}\n  Evidence: {directory}", flush=True)
            status = result["status"]
            trace_status = result.get("trace", {}).get("status")
            summary["trace_pass"] += trace_status == "PASS"
            summary["trace_mismatch"] += trace_status == "TRACE_MISMATCH"
            summary["infrastructure_generator_errors"] += status not in ("PASS", "TRACE_MISMATCH")
            summary["results"].append(dict(**{k:metadata.get(k) for k in ("wally_config","test_area","riscv_dv_test")},test_id=test_id, seed=seed, status=status,
                                           result_path=str(directory / "result.json")))
            failed |= status != "PASS"
            write_json(session / "campaign.json", summary)
            if number % 25 == 0:
                console.counts(summary)
            if args.stop_on_failure and status != "PASS":
                console.counts(summary, final=True)
                return 1
            if limit is None or number < limit:
                time.sleep(args.sleep)
    except KeyboardInterrupt:
        summary["interrupted"] = True
        write_json(session / "campaign.json", summary)
        console.counts(summary, final=True)
        return 130
    finally:
        for task in (current, pending):
            if task is None or task["ref"] is None:
                continue
            cancellation = dict(seed=task["seed"], test_id=task["test_id"], status="CANCEL_REQUESTED")
            try:
                cancel(task["ref"], force=False)
            except Exception as exc:
                cancellation.update(status="CANCEL_ERROR", error=str(exc))
                print(f"Generation cancellation error for seed {task['seed']}: {exc}", flush=True)
            write_json(task["directory"] / "request.json", {**task["request"], **cancellation})
            summary.setdefault("unconsumed_generation", []).append(cancellation)
            task["ref"] = None
        write_json(session / "campaign.json", summary)
    console.counts(summary, final=True)
    return int(failed)
