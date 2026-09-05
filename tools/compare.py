"""Strict comparison in retirement order; no resynchronization or state coalescing."""
import argparse
from collections import deque
import json
from pathlib import Path

from .trace import completion_count, read_trace


def oracle_result(trace, signature):
    status = trace["status"]
    reason = trace.get("reason", status)
    if status == "PASS" and signature["status"] != "PASS":
        status = "INCONSISTENT_ORACLE"
        reason = "Trace passes but the secondary signature oracle does not"
    return {"status": status, "match": status == "PASS", "reason": reason,
            "trace": trace, "signature": signature,
            "first_mismatch": trace.get("first_mismatch")}


def compare_traces(wally_path, spike_path, evidence_dir=None, require_complete=False):
    paths = {"wally": Path(wally_path), "spike": Path(spike_path)}
    streams = {name: iter(read_trace(path)) for name, path in paths.items()}
    counts = {name: 0 for name in paths}
    expected = {}
    before = deque(maxlen=20)
    mismatch = None
    after = []
    index = 0

    def error(name, exc):
        return {"status": f"{name.upper()}_TRACE_ERROR", "match": False,
                "reason": str(exc), "matched_instructions": index}

    if require_complete:
        for name, path in paths.items():
            try:
                expected[name] = completion_count(path)
            except (OSError, ValueError) as exc:
                return error(name, exc)

    while True:
        pair = {}
        for name, stream in streams.items():
            try:
                pair[name] = next(stream, None)
                if pair[name] is not None:
                    counts[name] += 1
            except (OSError, ValueError) as exc:
                return error(name, exc)
        wally, spike = pair["wally"], pair["spike"]
        if wally is None and spike is None:
            break
        if mismatch is not None:
            if len(after) < 5:
                after.append({"index": index, **pair})
        else:
            reason = None
            if wally is None or spike is None:
                reason = f"Premature termination: {'Wally' if wally is None else 'Spike'} trace ended first"
            else:
                fields = ["order", "pc", "binary", "trap", "event", "rd", "rd_value"]
                if wally["mode"] and spike["mode"]:
                    fields.append("mode")
                for field in fields:
                    if wally[field] != spike[field]:
                        reason = f"{field} differs"
                        break
            if reason:
                mismatch = {"index": index, "reason": reason, **pair}
            else:
                before.append({"index": index, **pair})
        index += 1

    for name in paths:
        if counts[name] == 0:
            return error(name, "Trace contains no architectural events")
        if require_complete and counts[name] != expected[name]:
            return error(name, "Trace row count disagrees with completion marker")
    if mismatch is None:
        return {"status": "PASS", "match": True, "matched_instructions": index,
                "reason": "Architectural event traces match"}
    result = {"status": "TRACE_MISMATCH", "match": False,
              "matched_instructions": mismatch["index"], "first_mismatch": mismatch,
              "reason": mismatch["reason"], "context_before": list(before),
              "context_after": after}
    if evidence_dir is not None:
        directory = Path(evidence_dir)
        directory.mkdir(parents=True, exist_ok=True)
        (directory / "mismatch.json").write_text(json.dumps(result, indent=2) + "\n")
        (directory / "mismatch.txt").write_text(render_mismatch(result))
    return result


def render_mismatch(result):
    first = result["first_mismatch"]
    lines = [f"Matched instructions: {result['matched_instructions']}", "",
             "## FIRST ARCHITECTURAL DIVERGENCE", "",
             f"Instruction index: {first['index']} (zero-based)", first["reason"]]
    for name in ("spike", "wally"):
        row = first[name]
        lines += ["", name.capitalize() + ":"]
        if row is None:
            lines.append("<end of trace>")
        else:
            lines += [f"{key}: {row[key]}" for key in
                      ("order", "pc", "binary", "mode", "event", "rd", "rd_value", "instr")]
    for title, key in (("Previous instructions", "context_before"),
                       ("Following instructions", "context_after")):
        lines += ["", title + ":"]
        for pair in result[key]:
            lines.append(json.dumps(pair, sort_keys=True))
    return "\n".join(lines) + "\n"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("wally")
    parser.add_argument("spike")
    parser.add_argument("--evidence-dir", default=".")
    parser.add_argument("--require-complete", action="store_true")
    args = parser.parse_args()
    result = compare_traces(args.wally, args.spike, args.evidence_dir, args.require_complete)
    print(json.dumps(result, indent=2))
    return 0 if result["status"] == "PASS" else 1


if __name__ == "__main__":
    raise SystemExit(main())
