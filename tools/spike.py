"""Adapter around the bundled riscv-dv Spike tokenizer.

Reuse CORE_RE, RD_RE and read_spike_instr. Its upstream read_spike_trace FSM
cannot be used unchanged: it drops ECALL and assumes a fixed boot trampoline.
Commit headers (including no-GPR and repeated-PC commits) drive this adapter.
"""
import argparse
import importlib
import os
from pathlib import Path
import re
import subprocess
import sys

from .trace import FIELDS, normalize, write_trace

ROOT = Path(__file__).resolve().parents[1]
COMMIT = re.compile(r"core\s+(?P<hart>\d+):\s+(?P<mode>[013])\s+0x(?P<pc>[a-f0-9]+)\s+\(0x(?P<bits>[a-f0-9]+)\)(?P<effects>.*)$")
MEMORY = re.compile(r"\bmem 0x([a-f0-9]+)(?: 0x([a-f0-9]+))?")
TRAP = re.compile(r"\btrap_([a-z0-9_]+)")


def dv_parser():
    scripts = ROOT / "cvw/addins/riscv-dv/scripts"
    if not (scripts / "spike_log_to_trace_csv.py").is_file():
        raise ValueError(f"Bundled riscv-dv parser missing: {scripts}")
    sys.path.insert(0, str(scripts))
    try:
        return importlib.import_module("spike_log_to_trace_csv")
    finally:
        sys.path.remove(str(scripts))


def elf_metadata(path):
    with Path(path).open("rb") as handle:
        header = handle.read(64)
    if header[:6] != b"\x7fELF\x02\x01" or len(header) != 64:
        raise ValueError("WallyGuard v1 requires little-endian ELF64")
    entry = int.from_bytes(header[24:32], "little")
    nm = Path(os.environ.get("RISCV", "/home/rafay/riscv")) / "bin/riscv64-unknown-elf-nm"
    output = subprocess.check_output([str(nm), "--defined-only", str(path)], text=True)
    tohost = None
    for line in output.splitlines():
        fields = line.split()
        if len(fields) == 3 and fields[2] == "tohost":
            tohost = int(fields[0], 16)
    return entry, tohost


def spike_rows(raw_path, entry, tohost):
    dv = dv_parser()
    assembly = {}
    pending = None
    started = False
    order = 0
    with Path(raw_path).open() as handle:
        for line_number, line in enumerate(handle, 1):
            decoded = dv.CORE_RE.match(line.rstrip())
            if decoded:
                instr = dv.read_spike_instr(decoded, full_trace=False)
                key = (int(instr.pc, 16), int(instr.binary, 16))
                assembly[key] = instr.instr_str
                pending = key
                continue
            commit = COMMIT.fullmatch(line.strip())
            if commit:
                if commit["hart"] != "0":
                    raise ValueError("Only single-hart traces are supported")
                pc, bits = int(commit["pc"], 16), int(commit["bits"], 16)
                if not started:
                    if pc != entry:
                        continue
                    started = True
                row = dict.fromkeys(FIELDS, "")
                row.update(order=order, pc=f"{pc:016x}", binary=f"{bits:08x}",
                           mode=commit["mode"], trap="0", event="retire",
                           instr=assembly.get((pc, bits), ""))
                reg = dv.RD_RE.match(line.strip())
                if reg:
                    destination = reg["reg"].replace(" ", "")
                    if destination.startswith("x"):
                        row.update(rd=destination, rd_value=reg["val"])
                    if reg["csr"] and reg["csr"].startswith("c"):
                        row["csr"] = f"{reg['csr']}:{reg['csr_val']}"
                memory = MEMORY.search(commit["effects"])
                if memory:
                    row["mem_addr"] = memory[1]
                    if memory[2]:
                        row["mem_wdata"] = memory[2]
                yield normalize(row)
                order += 1
                pending = None
                if (memory and memory[2] and tohost is not None and int(memory[1], 16) == tohost) or bits in (0x6f, 0xa001):
                    return
                continue
            trap = TRAP.search(line)
            if trap:
                if pending is None:
                    raise ValueError(f"Trap without instruction at raw line {line_number}")
                pc, bits = pending
                if not started and pc == entry:
                    started = True
                if started:
                    row = dict.fromkeys(FIELDS, "")
                    row.update(order=order, pc=f"{pc:016x}", binary=f"{bits:08x}",
                               trap="1", event="interrupt" if "interrupt" in trap[1] else "exception",
                               instr=assembly.get(pending, ""))
                    yield normalize(row)
                    order += 1
                pending = None
            elif re.match(r"core\s+\d+:\s+[0-9]\s+0x", line):
                raise ValueError(f"Unrecognized Spike commit at line {line_number}")
    raise ValueError("Spike trace ended before a committed tohost store/self-loop boundary")


def normalize_spike(raw_path, output_path, elf_path):
    entry, tohost = elf_metadata(elf_path)
    count = 0

    def counted():
        nonlocal count
        for row in spike_rows(raw_path, entry, tohost):
            count += 1
            yield row

    marker = Path(str(output_path) + ".complete")
    marker.unlink(missing_ok=True)
    write_trace(output_path, counted())
    if not count:
        raise ValueError("Spike produced no architectural events")
    marker.write_text(f"{count}\n")
    return count


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("raw_log")
    parser.add_argument("csv")
    parser.add_argument("elf")
    args = parser.parse_args()
    print(f"Normalized {normalize_spike(args.raw_log, args.csv, args.elf)} Spike events")
