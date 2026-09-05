# Architectural trace collection (v1)

This path uses **Verilator and Wally's existing `wallyTracer`/`rvviTrace`**.
No ImperasDV, commercial simulator, processor RTL changes or random generation
are involved. Trace comparison is deterministic Python.

## Run

From the WallyGuard project root, use the existing `chia_env` and Wally tool
environment (`RISCV`, `WALLY`, and the tool `PATH` as configured by `cvw/setup.sh`).

```bash
python -m unittest discover -s tests -p 'test_*.py' -v
python -m wallyguard.smoke
```

The smoke command calls the same runner implementations locally, unwrapping
CHIA's dispatch/profiling decorators so it does not start Ray. It runs
`tests/add_test.elf`, saves `result.json`, checks both
oracles, checks monotonic trace order and verifies `add x7 = 12` in both traces.
Each invocation gets a fresh `runs/trace_smoke_<timestamp>/` evidence directory.

The directed regression also checks a load/use stall, taken-branch flushing,
repeated PCs, ECALL and MRET:

```bash
mkdir -p runs/trace_regression
"$RISCV/bin/riscv64-unknown-elf-gcc" -march=rv64gc -mabi=lp64d \
  -nostdlib -nostartfiles -T tests/link.ld tests/trace/retirement.S \
  -o runs/trace_regression/retirement.elf
python -m wallyguard.smoke --elf runs/trace_regression/retirement.elf \
  --output runs/trace_regression
```

Verified locally with Verilator 5.036 and the installed Wally Spike:
Architectural collector unit tests pass; `add_test.elf` matches 11 events and both signature words;
the directed regression matches 34 events and both signature words. A changed
GPR result is detected at the changed row, and a normal no-trace `wsim` run
still produces its original signature without trace artifacts.

The existing distributed loop remains:

```bash
python wally_loop.py --once --stop-on-failure
```

It uses the existing `wally`, `spike`, and `compare` CHIA resources. Evidence
paths assume the current shared local workspace; remote workers need access to
those same paths. `spike.log` is now the unmodified raw commit log; subprocess
headers, stderr and exit status are in `spike_runner.log`.

Manual simulator commands (create the output directory first):

```bash
mkdir -p "$PWD/runs/manual_trace"
wsim rv64gc --sim verilator --elf "$PWD/tests/add_test.elf" \
  --args "+trace_file=$PWD/runs/manual_trace/wally_trace.csv +signature_file=$PWD/runs/manual_trace/wally.signature"

"$RISCV/bin/spike" --isa=rv64gc -l --log-commits \
  --log="$PWD/runs/manual_trace/spike.log" \
  +signature="$PWD/runs/manual_trace/spike.signature" \
  +signature-granularity=4 "$PWD/tests/add_test.elf"

python -m wallyguard.spike runs/manual_trace/spike.log \
  runs/manual_trace/spike_trace.csv tests/add_test.elf
python -m wallyguard.compare runs/manual_trace/wally_trace.csv \
  runs/manual_trace/spike_trace.csv --require-complete \
  --evidence-dir runs/manual_trace
```

`wsim` automatically adds `+define+WALLYGUARD_TRACE` when `+trace_file=` is
present. This gets a separate cached build. **Do not add `--rvvi` or
`--lockstep`.** Without the plusarg, the normal build/termination path is used.
In the passive build the original tracer cannot terminate simulation. Trace
mode waits for the terminal RVVI event before starting the existing
cache-flush/validation/`DumpSignature` flow. The legacy M-stage end detector
could otherwise finish while the tohost store was still stalled.

## Format and comparison

Both CSVs have these columns:

```text
order,pc,binary,mode,trap,rd,rd_value,instr,csr,mem_addr,mem_rdata,mem_wdata,mem_rmask,mem_wmask,event
```

- `order`: decimal event sequence, starting at zero at ELF entry.
- `pc` and integer values: 16-digit lowercase hex, no `0x`.
- `binary`: 8-digit lowercase hex; compressed encodings are zero extended.
- `mode`: execution privilege before a trap/return transition, if known.
- `trap`: `0` or `1`; `event`: `retire`, `exception`, or `interrupt`.
- `rd`: `x1` through `x31`, or empty; `rd_value` is empty without a GPR effect.
- `instr`: actual Spike disassembly if available; Wally leaves it empty.
- Optional memory values are diagnostic. Masks are relative to the access
  address, one bit per byte. Wally load data is the LSU's extended result.
- Empty optional fields mean unavailable, not zero. Wally's `csr` is a
  semicolon-separated list of RVVI CSR changes (`address:value`), including
  counters. Spike's CSR token coverage is partial. CSR is diagnostic in v1.

Rows start at the ELF64 entry point and end **including** the first committed
store to the ELF's `tohost` symbol, or an unconditional jump-to-self (`jal x0,0`
or `c.j 0`). This explicit test-completion convention excludes boot trampolines
and host-service terminal-loop repetitions. Programs using a self-loop as a
nonterminal construct are outside this v1 convention. Wally obtains `tohost`
from its existing symbol map; Spike normalization uses the installed RISC-V nm.

Each collector writes a `.csv.complete` sidecar with the row count after seeing
the terminal event. The CHIA comparator requires it and validates the count.
Runner failures, empty/malformed CSVs, invalid orders and missing completion
produce `WALLY_TRACE_ERROR` or `SPIKE_TRACE_ERROR`. Runners remove stale CSVs and
markers before starting. Use fresh directories for manual runs too.

The comparator pairs rows by sequence, without skipping instructions or trying
to resynchronize after a mismatch. It compares order, PC, binary, trap/event,
GPR destination/value, and mode when both sides report it. Repeated PCs and
same-value GPR writes are retained; x0 writes normalize to no GPR effect.
Optional disassembly, CSR and memory fields do not decide PASS.

`TRACE_MISMATCH` writes `mismatch.json` and `mismatch.txt`: zero-based first
mismatch index, matched count, both rows, up to 20 preceding pairs and 5
following pairs. A valid trace ending earlier than its peer is a mismatch.

`result.json` reports `trace_comparison` and `signature_comparison` independently. Trace is primary.
If trace passes and the signature oracle does not, overall status is
`INCONSISTENT_ORACLE`. The existing signature comparator is retained.

## Scope and limitations

- Single-hart little-endian RV64, initially validated with `rv64gc`.
- The bundled riscv-dv `CORE_RE`, `RD_RE`, and `read_spike_instr` parse Spike
  instruction/register records. The adapter replaces only its stream control:
  the stock converter skips no-write instructions, assumes PC `0x1010` ends
  boot, and terminates at ECALL. No dependencies are installed automatically.
- Trap rows are separate events, not successful instruction retirements.
  Spike trap rows may have unknown mode; trap causes/tval are not compared.
  Asynchronous interrupt synchronization is outside v1.
- GPR effects are compared. FP/vector effects, complete CSR semantics, atomics,
  and virtual-memory effects need additional comparison support. Integer
  memory observations are diagnostic only; a store-only bug can therefore
  escape the primary trace comparison and be caught by the signature oracle.
- The passive build excludes unused VM coverage probes that this Verilator
  configuration cannot elaborate. This does not affect retirement observation.
- Wally's existing symbol map uses 32-bit integer addresses; `tohost` boundary
  detection inherits that limitation. Addresses are unsigned before extension.
- Test ELFs should preserve Wally's existing signature-label convention,
  including storage after `end_signature` (as in `sig_end_canary` in the sample
  tests), so its objdump-based symbol extraction can locate the endpoint.

Important code paths: `wsim.prepSim` -> `testbench.rvvi` / passive
`wallyTracer` -> `wallyGuardTrace.emit`; `run_spike` -> `normalize_spike`;
`compare_architectural_traces` -> `compare_traces`; `classify_and_compare` ->
`oracle_result` -> `save_summary`.


## CHIA loop integration

The topology and YAML files are unchanged. `run_wally` requests `wally: 1`,
`run_spike` requests `spike: 1`, and `compare_architectural_traces` requests
`compare: 1`. Both simulator tasks are dispatched before `get([wally_ref,
spike_ref])`. There is no OpenCode/LLM dispatch.

Each runner returns metadata only: return code, timeout/error, duration,
start/end timestamps, absolute log/trace/signature paths and file-created flags.
Neither trace contents nor signature contents are returned through Ray. The
compare task receives four file paths, the run directory and any simulator
failure metadata. It reads files on the compare worker, performs primary trace
comparison and secondary signature comparison, and returns bounded mismatch
context. Full traces remain on disk.

Output directories are `runs/session_<timestamp>/<six-digit-run>_<test>/`.
`result.json` contains `test`, overall `status`, complete `wally`/`spike`
metadata, `trace_comparison`, `signature_comparison`, and an `evidence` path map.
Mismatch paths are null unless a trace mismatch was found. Any stale mismatch
reports in a reused comparison directory are removed before comparison.
The `.csv.complete` markers and `spike_runner.log` remain additional support
artifacts. `spike.log` itself is the raw Spike commit log.

Output goes directly to open disk files while subprocesses run. Wally
subprocess diagnostics are line-buffered when `stdbuf` is available; trace rows
are explicitly flushed by the collector. Timeouts stop the owned process group,
including wsim's simulator child. A crash, timeout, missing or malformed trace
is an infrastructure/simulation error, never labeled an architectural bug.

Normal direct-driver use still targets the existing cluster:

```bash
python wally_loop.py --once
```

When automatic discovery is unavailable, point at the existing head. On the
machine inspected for this integration the address was `10.212.0.2`:

```bash
RAY_ADDRESS=10.212.0.2:6379 python wally_loop.py --once
chia job submit --address http://10.212.0.2:8265 \
  --submission-id WALLYGUARD_TRACE_VERIFY_20260905 \
  -- python "$PWD/wally_loop.py" --once
```

The second command follows this project's established `chia job submit
--submission-id ... -- python "$PWD/wally_loop.py"` pattern. Use a fresh
submission ID for subsequent jobs. It does not upload the large workspace;
workers must see this shared checkout and the evidence paths. The driver sets
its project path in Ray's task environment so workers can import `wallyguard`.
No new cluster is automatically started if the existing one is unavailable.

An explicit local test runs the same implementations concurrently without Ray:

```bash
python wally_loop.py --once --local
python -m unittest discover -s tests -p 'test_*.py' -v
```

`--once`, `--stop-on-failure`, `--sleep`, `--wally-timeout` and
`--spike-timeout` remain supported. PASS and failures continue to the next ELF
unless `--stop-on-failure` is set. A stop-on-failure exit is nonzero. A trace
PASS with a failing secondary oracle is `INCONSISTENT_ORACLE`.

Integration validation: the explicit local loop produced trace PASS (11 events)
and signature PASS for `add_test.elf`. Runner timestamps overlap; metadata was
1171 and 1162 JSON bytes, with no embedded trace/signature bodies. A copied
trace with x7 changed from 12 to 13 produced `TRACE_MISMATCH` at index 2 and
preserved signature PASS. Tests cover live log visibility, metadata-only
returns, dispatch-before-get, result schema, crash classification and stale
mismatch cleanup. Live `chia job submit` was attempted but could not be
verified: no Ray head/dashboard was listening on this machine's 6379/8265 ports.
The existing cluster must be running to complete that verification.
