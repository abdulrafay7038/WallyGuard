"""Shared RV64 CSV schema. Orders are decimal; architectural values are hex."""
import csv
from pathlib import Path

FIELDS = ["order", "pc", "binary", "mode", "trap", "rd", "rd_value",
          "instr", "csr", "mem_addr", "mem_rdata", "mem_wdata",
          "mem_rmask", "mem_wmask", "event"]
REQUIRED = FIELDS[:7]


def hex_value(value, width):
    number = int(str(value), 16)
    if not 0 <= number < 1 << (4 * width):
        raise ValueError(f"Value outside {width * 4}-bit range: {value}")
    return f"{number:0{width}x}"


def normalize(row):
    if any(row.get(key) is None for key in REQUIRED):
        raise ValueError("Missing required CSV field")
    result = {key: str(row.get(key, "") if row.get(key) is not None else "").strip() for key in FIELDS}
    result["order"] = int(result["order"])
    if result["order"] < 0:
        raise ValueError("Negative retirement order")
    result["pc"] = hex_value(result["pc"], 16)
    bits = int(hex_value(result["binary"], 8), 16)
    if bits & 3 != 3:
        bits &= 0xffff
    result["binary"] = f"{bits:08x}"
    if result["trap"] not in ("0", "1"):
        raise ValueError("trap must be 0 or 1")
    if result["mode"]:
        result["mode"] = hex_value(result["mode"], 1)
        if result["mode"] not in ("0", "1", "3"):
            raise ValueError("Unsupported privilege mode")
    rd = result["rd"].lower()
    reg = int(rd.removeprefix("x")) if rd else 0
    if not 0 <= reg <= 31:
        raise ValueError("Invalid GPR destination")
    result["rd"] = f"x{reg}" if reg else ""
    result["rd_value"] = hex_value(result["rd_value"], 16) if reg else ""
    result["event"] = result["event"] or ("exception" if result["trap"] == "1" else "retire")
    if result["event"] not in ("retire", "exception", "interrupt"):
        raise ValueError("Unknown architectural event")
    if (result["event"] == "retire") != (result["trap"] == "0"):
        raise ValueError("Inconsistent event/trap fields")
    for field, width in (("mem_addr", 16), ("mem_rdata", 16), ("mem_wdata", 16),
                         ("mem_rmask", 2), ("mem_wmask", 2)):
        if result[field]:
            result[field] = hex_value(result[field], width)
    return result


def read_trace(path):
    with Path(path).open(newline="") as handle:
        reader = csv.DictReader(handle)
        if not reader.fieldnames or not set(REQUIRED) <= set(reader.fieldnames):
            raise ValueError("Missing trace header")
        previous = None
        for line, raw in enumerate(reader, 2):
            try:
                if None in raw:
                    raise ValueError("Extra CSV columns")
                row = normalize(raw)
                if previous is not None and row["order"] <= previous:
                    raise ValueError("Non-monotonic retirement order")
                previous = row["order"]
            except (ValueError, TypeError) as exc:
                raise ValueError(f"{path}:{line}: {exc}") from exc
            yield row


def write_trace(path, rows):
    with Path(path).open("w", newline="") as handle:
        writer = csv.DictWriter(handle, fieldnames=FIELDS)
        writer.writeheader()
        for row in rows:
            writer.writerow(normalize(row))
            handle.flush()


def completion_count(path):
    marker = Path(str(path) + ".complete").read_text().strip()
    if not marker:
        raise ValueError("Trace did not reach its terminal architectural event (empty completion marker)")
    count = int(marker)
    if count <= 0:
        raise ValueError("Empty completed trace")
    return count
