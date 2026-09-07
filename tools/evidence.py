"""Collect completed mismatch evidence on the head without altering originals."""
import csv
import hashlib
import io
import json
from pathlib import Path
import shutil
import tempfile


def atomic_text(path, text):
    temporary = path.with_suffix(path.suffix + ".tmp")
    temporary.write_text(text)
    temporary.replace(path)


def sha256(path):
    digest = hashlib.sha256()
    with path.open("rb") as handle:
        for chunk in iter(lambda: handle.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def collect_mismatch(directory, elf, root, generation=None):
    directory, elf, root = Path(directory), Path(elf), Path(root)
    result = json.loads((directory / "result.json").read_text())
    if result["trace_comparison"]["status"] != "TRACE_MISMATCH":
        return None
    collection = root.resolve() / directory.parent.name
    collection.mkdir(parents=True, exist_ok=True)
    target = collection / directory.name
    sources = {p.name: p for p in directory.iterdir() if p.is_file() and not p.name.endswith(".tmp")}
    sources["test.elf"] = elf
    if generation is not None:
        for name in ("test.S", "generation.log", "metadata.json", "elf_inspection.log"):
            source = elf.parent / name
            if source.is_file():
                sources[name] = source
        if "test.S" not in sources:
            raise FileNotFoundError(f"Generated assembly missing beside {elf}")
    else:
        # Directed sources may live beside the ELF or under directed/trace/.
        candidates = sorted({p for p in elf.parent.rglob("*")
                             if p.is_file() and p.stem == elf.stem and p.suffix in (".S", ".s")})
        if len(candidates) == 1:
            sources["test.S"] = candidates[0]
    first = result["trace_comparison"]["first_mismatch"]
    wally, spike = first.get("wally") or {}, first.get("spike") or {}
    entry = dict(run=directory.name, seed=generation.get("seed") if generation else None,
                 test=elf.name, matched_instructions=result["trace_comparison"]["matched_instructions"],
                 reason=first["reason"], pc=spike.get("pc", wally.get("pc", "")),
                 binary=spike.get("binary", wally.get("binary", "")),
                 instr=spike.get("instr") or wally.get("instr", ""),
                 wally_rd=wally.get("rd", ""), wally_rd_value=wally.get("rd_value", ""),
                 spike_rd=spike.get("rd", ""), spike_rd_value=spike.get("rd_value", ""),
                 assembly=f"{directory.name}/test.S" if "test.S" in sources else "",
                 result=f"{directory.name}/result.json", mismatch=f"{directory.name}/mismatch.txt")
    with tempfile.TemporaryDirectory(prefix=".collect_", dir=collection) as temporary:
        staged = Path(temporary) / "run"
        staged.mkdir()
        files = []
        for name, source in sorted(sources.items()):
            shutil.copy2(source, staged / name)
            digest = sha256(source)
            if sha256(staged / name) != digest:
                raise OSError(f"Mismatch evidence copy verification failed: {source}")
            files.append(dict(source=str(source.resolve()), copy=name, sha256=digest))
        (staged / "collection.json").write_text(json.dumps(dict(entry=entry, files=files), indent=2) + "\n")
        if target.exists():
            raise FileExistsError(f"Mismatch collection already exists: {target}")
        staged.rename(target)
    # Rebuild from completed collections; staging directories are never indexed.
    entries = [json.loads(p.read_text())["entry"] for p in sorted(collection.glob("*/collection.json"))
               if not p.parent.name.startswith(".")]
    output = io.StringIO()
    writer = csv.DictWriter(output, fieldnames=list(entry))
    writer.writeheader()
    writer.writerows(entries)
    atomic_text(collection / "index.csv", output.getvalue())
    atomic_text(collection / "seeds.txt", "".join(f"{e['seed']}\n" for e in entries if e["seed"] is not None))
    atomic_text(collection / "README.md", "# Automatically collected trace mismatches\n\n"
                "See index.csv for first divergences and seeds.txt for generated seeds.\n"
                "Each run contains copied results, traces, logs, ELF, and available assembly.\n"
                "collection.json records source paths and SHA256 hashes. Original files remain unchanged.\n"
                "JSON/log paths still refer to originals. A trace mismatch is not a confirmed CPU bug.\n")
    return str(target)
