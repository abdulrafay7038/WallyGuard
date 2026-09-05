"""Run the real CHIA runner functions locally for a reproducible add_test smoke test."""
import argparse
from datetime import datetime
from inspect import unwrap
import json
from pathlib import Path

import wally_loop as loop
from .trace import read_trace


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--output", type=Path, default=loop.DEFAULT_RUN_DIR /
                        datetime.now().strftime("trace_smoke_%Y%m%d_%H%M%S"))
    parser.add_argument("--elf", type=Path, default=loop.DEFAULT_TEST_DIR / "add_test.elf")
    args = parser.parse_args()
    directory = args.output.resolve()
    directory.mkdir(parents=True, exist_ok=True)
    elf = args.elf.resolve()
    # Bypass only the decorator's profiling/dispatch layer. Calling the wrapper
    # even locally initializes Ray through the CHIA profiler.
    wally = unwrap(loop.run_wally)(str(elf), str(directory / "wally.log"),
                           str(directory / "wally.signature"))
    spike = unwrap(loop.run_spike)(str(elf), str(directory / "spike.log"),
                           str(directory / "spike.signature"))
    result = unwrap(loop.compare_architectural_traces)(
        *loop.comparison_args(wally, spike, directory))
    loop.save_summary(directory, elf, wally, spike, result)
    print(json.dumps(result, indent=2))
    print(f"Evidence: {directory}")
    if result["status"] != "PASS":
        return 1
    for name in ("wally", "spike"):
        rows = list(read_trace(directory / f"{name}_trace.csv"))
        if elf == (loop.DEFAULT_TEST_DIR / "add_test.elf").resolve():
            assert any(row["binary"] == "006283b3" and row["rd"] == "x7" and
                       row["rd_value"] == "000000000000000c" for row in rows)
            print(f"{name}: {len(rows)} events; monotonic order; add x7 = 12 verified")
        else:
            print(f"{name}: {len(rows)} events; monotonic order")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
