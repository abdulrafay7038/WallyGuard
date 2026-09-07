"""Small line-oriented console renderer, also readable in Ray job logs."""
import os
import sys

COLOR = "auto"


def paint(text, code):
    enabled = COLOR == "always" or (COLOR == "auto" and sys.stdout.isatty() and "NO_COLOR" not in os.environ)
    return f"\033[{code}m{text}\033[0m" if enabled else text


def phase(title):
    print("\n" + paint(f"--- {title} ---", "1;36"), flush=True)


def progress(number, label, action, phase_name="DV"):
    print(f"[{phase_name} {number:06d}] {label} | {action}", flush=True)


def counts(summary, final=False):
    label = "RISC-V-DV summary" if final else "Progress"
    print(f"{label}: {summary['attempted']} tests | "
          f"{summary['trace_pass']} trace passes | {summary['trace_mismatch']} mismatches | "
          f"{summary['infrastructure_generator_errors']} errors | "
          f"{summary.get('evidence_errors', 0)} collection errors", flush=True)
