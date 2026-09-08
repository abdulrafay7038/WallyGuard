# RISC-V-DV generation through CHIA

For the multi-configuration API and current eligibility, see [VERIFICATION_API.md](../docs/VERIFICATION_API.md). The historical runs below predate the full bare-GPR initialization audit; current profiles use `fix_sp=1` and initialize the omitted thread register before the comparison marker.

The default distributed loop runs every `tests/*.elf` once, then generates a
fresh test on `generator: 1` for each iteration. Wally, Spike, and comparison retain `wally: 1`, `spike: 1`, and
`compare: 1` on the CVW worker. No OpenCode task is invoked.

## Commands

Start with one compatibility check, then ten tests:

```bash
make run RUN_ARGS="--preflight --seed 100 --stop-on-failure"
make run RUN_ARGS="--num-tests 10 --seed 101"
```

After the directed sweep, preflight runs `file` and `riscv64-unknown-elf-readelf -h` on the local ELF,
then Spike, then Wally. Check its `result.json` and both complete traces before
starting the ten-test campaign. Normal campaign iterations dispatch both
simulators before waiting for either result.

Normal campaigns also keep one remote generation in flight for the next test
while the current ELF executes and is compared. The head holds its Ray reference
and fetches/materializes that payload only after current local work completes.
There is no local generator, additional local simulator, or unbounded queue.
Resource requirements remain `generator: 1`, `wally: 1`, `spike: 1`, `compare: 1`.
`--stop-on-failure` disables lookahead so no unused test is generated; preflight
and single-test runs also stay sequential. The default sleep remains unchanged.

Each prefetched seed is persisted in its request.json before dispatch. Generation
failures are consumed and reported in seed order. Interruption requests cooperative
cancellation of unconsumed generation and records its seed/status in campaign.json;
the generator cleans up its child process group when cancelled. Local concurrency
stays unchanged, although reducing idle time can increase average CPU utilization.
Ray may retain one additional pending result; full architectural traces are never
included in that result.

```bash
# Continuous generation, one new random seed per test
make run RUN_ARGS=""

# One new generated test (the Makefile currently defaults to --once)
make run

# Preserve the old tests/*.elf sweep
make run RUN_ARGS="--existing-tests --once"

# Existing ELF tests locally, without the cluster
python wally_loop.py --local --once
```

`--seed N` starts with N, followed by N+1, N+2, modulo 2^31. Without a seed,
each iteration chooses a new seed and records it before submitting generation.
`--num-tests N` counts generated attempts, including failures, in addition to the
initial directed sweep. `--once` means that sweep plus one generated test, or one
sweep in existing-test mode. `--existing-tests`, `--test-dir`, and `--local`
retain their existing ELF-only behavior. Directed results are stored in
`directed_<index>_<test>/` and `directed.json`, and included in `campaign.json`.
A directed failure stops before generation with `--stop-on-failure`; otherwise
generation continues and the final exit code still reports the failure.
`--stop-on-failure`,
`--sleep`, `--wally-timeout`, and `--spike-timeout` remain available. A completed
generation campaign exits nonzero if any attempt failed, even when it continued
to collect the remaining results.

## Remote generator requirements

The generator worker must already have:

- `RISCV_DV_ROOT` pointing to the installed checkout containing `run.py`.
- An installed Python interpreter with the open-source pyflow dependencies.
  This can differ from Ray's interpreter. Set `RISCV_DV_PYTHON` to its absolute
  path, or let the adapter probe the sibling Conda environments
  `riscv-dv-py311` and `riscv-dv-env`, checkout `.venv`/`venv`, then Ray's Python.
  Each candidate must import PyVSC, PyYAML, bitstring, and pyboolector.
- `RISCV_GCC` and `RISCV_OBJCOPY`, or the corresponding `riscv64-unknown-elf-*`
  tools on PATH (also searched under `$RISCV/bin`).
- An advertised CHIA resource `generator: 1`.

Nothing is installed automatically. The generator implementation is serialized
by value with the CHIA task, so this worker does not need the head's `tools/`
package. Only standard-library imports run outside RISC-V-DV on that worker.

The command is built from the worker's installed paths:

```text
<python> <RISCV_DV_ROOT>/run.py
  --target rv64imafdc --isa rv64gc --mabi lp64d
  --simulator pyflow --steps gen
  --testlist <temporary>/testlist.yaml --test wallyguard_rand
  --iterations 1 --seed <seed> --gen_timeout 600
  '--gcc_opts=-march=rv64gc -mabi=lp64d -save-temps=obj -Wl,--build-id=none'
  --output <temporary>/output --noclean --verbose
```

The wrapper then normalizes the generated assembly, validates it, and calls the
same command with `--steps gcc_compile`. Metadata retains `generator_command`
and the separate `compiler_command`. GCC is never invoked before normalization
passes. Both phases' logs are retained.

### Deterministic x11 initialization

Bare pyflow output in this workspace uses `main:` for the beginning of the random
body and previously had no comparison label. The wrapper adds the global
`wallyguard_compare_start:` label at that boundary, preserving the first random
instruction even when it shares the `main:` line. If the label already exists,
its position is retained. The wrapper then inserts:

```asm
main:
.globl wallyguard_compare_start
                  li x11, 0
wallyguard_compare_start:
                  # original randomized body
```

`normalize_initialization()` requires exactly one comparison marker.
`validate_initialization()` requires that the last non-comment, nonblank line
before that marker is `li x11, 0`. The assembly is written and read back for
validation before GCC runs. Missing/ambiguous body boundaries, missing/duplicate
markers, or failed validation return `INITIALIZATION_ERROR`, with no transferable
ELF and no simulation. The campaign preserves this status and the seed/logs.
Successful metadata records `initialization: {"x11": "0x0", "validated": true}`.

The marker names the randomized-body boundary; the existing trace collectors
still begin at the ELF entry, so the initialization instruction is itself compared.
No comparator field is masked and no seed is specially handled. The wrapper,
not upstream RISC-V-DV or processor RTL, owns this normalization.

Verified on 2026-09-07: fresh seed 1705 passed preflight on
`chia-default-gcp-worker2-0`, with 122 matching events. Both traces record the
inserted compressed `li x11, 0` at order 58, PC `800000b6`, encoding `00004581`;
the marker is at `800000b8`. All six directed tests and signatures also passed.
All 46 previously failing seeds were then generated afresh on that worker,
transferred as ELF bytes, and run through the existing CHIA tasks: 46 trace
passes, zero mismatches/errors, and 46 matching initialization-event checks.
Per-seed evidence is indexed in `runs/x11_regression_20260907/results.csv`, with
counts in `summary.json` and `validation.json`. Both CHIA jobs finished
`SUCCEEDED`. Independently patching/recompiling the archived assemblies also
produced 46/46 local passes. Twenty-two unit tests passed, including failure
classification and proof that invalid initialization never invokes compilation.

This normalizes x11 only. It does not establish an initialization contract for
every GPR/CSR or broaden FP, privilege, interrupt, and memory coverage. Those
remain separate concerns when the generator profile expands.

`rv64imafdc` is the pyflow target spelling for the RV64GC extension set. Explicit
GCC options retain RV64GC/lp64d even in run.py versions that override the ISA/ABI
arguments when loading a predefined target. The
initial profile requests 200 random integer/compressed instructions in a
single-hart bare M-mode program. It disables random CSR accesses, floating
point, vectors, debug returns, EBREAK, WFI, fences, and directed instruction streams.
This keeps the first handoff tests within the current comparator's coverage.
The exact profile and testlist text are persisted in metadata. The worker's
`RISCV_DV_TIMEOUT` environment variable overrides the 600-second generation
timeout; the entire subprocess group is killed after that plus 60 seconds.

The installed pyflow implementation uses `append` instead of `extend` for the
SYNCH category when `no_fence=0`, creating a nested list in its instruction
choices. Some seeds then fail with `TypeError: unhashable type: 'list'`.
The initial profile uses the supported `no_fence=1` option to avoid that bug;
it does not patch the installed generator or reduce coverage silently after
a seed fails. `no_csr_instr=1` also avoids its analogous CSR category path.

`-save-temps=obj` gives assembler intermediates stable filenames, removing
GCC's random temporary-object filename from the ELF symbol table. The adapter
ignores relocatable intermediate `.o` files and returns only the linked ELF.
This preserves useful symbols while allowing byte-identical regeneration.

## Artifact handoff

`generate_riscv_dv_test(seed)` returns bytes, assembly text, seed, original ELF
name, hostname, command, timestamp, complete captured logs, and error metadata.
Files named `.o` must actually have an ELF64 little-endian RISC-V executable
header; relocatable objects are not returned. Exactly one assembly file and one
executable are accepted. Its temporary remote directory is cleaned afterward.

The head writes:

```text
generated_tests/test_<session-and-test-id>_seed_<seed>/
  test.S
  test.elf
  generation.log
  metadata.json
  elf_inspection.log  # preflight only
```

Metadata includes the ELF SHA256, original filename, remote hostname, command,
seed, and generation/materialization timestamps. A failed generator still
gets logs and metadata, but no usable ELF. The simulator tasks receive only
the newly materialized **local absolute path**. The generator never returns a
remote path as an artifact. There are no NFS, SCP, rsync, or cloud-storage steps.

Each run retains the existing trace/signature evidence under
`runs/session_<timestamp>/<index>_seed_<seed>/`, plus `request.json` and
generation metadata in `result.json`. The session's `campaign.json` records
every attempted seed and generation/simulator/trace/error counts. Trace files
remain on the CVW/head filesystem; they are not included in task results.

## Signatures and compatibility

Console output has separate directed and RISC-V-DV phases, concise result lines,
and campaign counts every 25 generated tests and at completion. Generated tests
with absent signatures omit the routine `SIGNATURE NOT_AVAILABLE` console message;
the status remains in result JSON. Signature passes and failures remain visible.
Colors default to automatic terminal detection; use `--color always` through
CHIA logs, or `--color never` for plain output. No cursor-control animations are used.

Every trace mismatch is copied on the head into
`mismatch_results/<session>/<run>/`, including result/mismatch reports, complete
traces, logs, available signatures, original ELF, assembly, and generation metadata.
`index.csv` and `seeds.txt` update after each collection. SHA256 hashes and original
paths are recorded in each `collection.json`; originals are preserved. Directed
assembly is included when a unique matching `.S`/`.s` source exists under the test
directory. Use `--mismatch-dir` to override the collection root. Collection errors
are printed and recorded without replacing the architectural comparison result.

An absent or empty simulator signature yields `NOT_AVAILABLE`. A passing trace
with that status passes overall. When both signatures exist, the original
comparison still applies, including `INCONSISTENT_ORACLE` for a signature
mismatch after a trace pass. Malformed/missing traces or failed simulators
remain errors and cannot become architectural PASS through optional signatures.

The pyflow bare-program option uses its existing `test_done`/`write_tohost`
path. No custom signature labels or processor RTL changes are required by this
adapter. Actual termination and target compatibility must be established by
the preflight on the installed worker version; unit tests alone do not establish
this. The comparator still has its existing FP/CSR/memory/interrupt limitations,
and jump-to-self remains a terminal boundary. Seeds select generation; identical
ELF reproduction also depends on the installed generator, solver, and compiler
versions. Preserve ELF bytes and their hashes as the authoritative reproducer.

## Local checks

```bash
python -m unittest discover -s tests -p 'test_*.py' -v
python wally_loop.py --local --once --stop-on-failure
```

The unit tests exercise byte transfer, failure logs, ELF validation, exact step
selection, optional signatures, seed progression, failure counts, and stopping.

## Verified cluster run (2026-09-06)

Generation ran on `chia-default-gcp-worker2-0` using the installed
`/home/rafay/miniconda3/envs/riscv-dv-py311/bin/python`. Ray's separate
`chia_env` did not have the pyflow dependencies.

The previously failing seed `1729667639` passed preflight after enabling the
`no_fence=1` profile option: both simulators exited successfully and matched
171 architectural events. Evidence is in
`runs/session_20260906_224436_386595/000001_seed_1729667639/result.json`.
Its locally materialized ELF, exact command, remote hostname, and `file`/readelf
output are in
`generated_tests/test_20260906_224436_386595_000001_seed_1729667639/`.

The subsequent seeds 101 through 110 produced 10 generation successes,
10 Wally successes, 10 Spike successes, and 10 trace passes, with zero trace
mismatches or infrastructure/generator errors. See
`runs/session_20260906_224537_264023/campaign.json`. Both non-empty trace files
and increasing retirement order were checked for every test. Signatures were
`NOT_AVAILABLE`, as expected for this bare pyflow profile. The earlier campaign
had two passes and eight generation errors; the corrected run re-tested all ten
seeds without skipping failures.

Regenerating seed `1729667639` with the same installed tools produced identical
assembly and ELF bytes, with ELF SHA256
`fdd2082f8260a0bbff385ebc871d36b1ecbbd5e5db44e7d4c813caac597d1ad1`.
The preflight, ten-test campaign, and repeat-generation CHIA jobs all finished
with status `SUCCEEDED`. Eleven local unit tests passed.
