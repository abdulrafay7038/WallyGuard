# Configuration and test qualification

WallyGuard separates three states for each configuration and for every exact **configuration × area × RISC-V-DV test** combination:

- **SUPPORTED:** the complete generation, pre-GCC initialization, ELF transfer, Verilator, Spike and architectural comparison smoke has passed with current evidence.
- **UNQUALIFIED:** capability-compatible, but no current successful qualification. This also includes unresolved divergences, timeouts, unavailable resources and other failures that require inspection.
- **UNSUPPORTED:** a concrete technical blocker is recorded. Missing qualification alone is never such a blocker.

A successful configuration smoke qualifies that configuration and its actual smoke profile. Other test families on that configuration remain independently unqualified. `CONFIG=all` runs every currently supported configuration, with only the requested area's qualified profiles. Other configurations and combinations appear in skip evidence with distinct `SKIPPED_UNQUALIFIED` and `SKIPPED_UNSUPPORTED` states.

## Commands

```bash
make list-configs
make list-areas
make list-riscv-dv-tests
make matrix > compatibility.json

make qualify-config CONFIG=nocache_rv64gc
make qualify-configs
make qualify-tests CONFIG=rv64gc
make qualify-tests CONFIG=all
```

`qualify-configs` attempts every capability-compatible, unqualified configuration. `qualify-tests CONFIG=all` considers all discovered test definitions and adapters on every supported configuration. To qualify test families on an unqualified configuration, name it explicitly. Concrete configuration startup/mapping blockers are reported without dispatching an incompatible ELF.

Qualification commands use the existing CHIA head/dashboard and resources. They do not bring up or modify the cluster. The driver permits only one qualification command at a time. Each attempt generates remotely, returns assembly/log/ELF bytes, materializes locally, dispatches Wally and Spike concurrently through their existing resource slots, and invokes the deterministic compare task. Configuration builds and tests proceed sequentially; qualifying hundreds of derivatives may take many hours.

Bound or repeat work explicitly:

```bash
make qualify-configs QUALIFY_ARGS="--limit 5"
make qualify-config CONFIG=nocache_rv64gc QUALIFY_ARGS="--force --wally-timeout 1800"
make qualify-tests CONFIG=rv64gc QUALIFY_ARGS="--test wallyguard_compressed --test wallyguard_fence"
make qualify-tests CONFIG=rv64gc QUALIFY_ARGS="--generator-timeout 120 --spike-timeout 120"
```

The Python entry point supports `--plan` for local inspection without Ray:

```bash
python -m tools.qualify configs --plan
python -m tools.qualify tests --config rv64gc --plan
```

`--limit` bounds new attempts; it does not classify the rest as unsupported. `--force` repeats existing evidence. Successful and concrete-blocker evidence is reused; unresolved infrastructure failures may be retried on the next invocation. A qualification command returns nonzero if any attempt is not supported; this means the qualification was incomplete or found blockers, not that a CPU bug was proved.

## Evidence and cache invalidation

Each command writes `runs/qualification_<timestamp>/plan.json`, a continuously updated `summary.json`, and one directory per configuration/test. Each attempted flow retains generated assembly, ELF when compilation succeeds, generation logs, runner logs, traces, `result.json` and `qualification.json`. First-divergence evidence uses the unchanged comparator.

`tools/data/validated_combinations.json` stores successful proofs. `tools/data/qualification_attempts.json` stores categorized attempts, including failures. Both refer to complete on-disk evidence and are updated atomically. Evidence is keyed by configuration content, exact adapter/options and RISC-V-DV revision, and a hash of relevant Wally RTL, testbench, simulator build and WallyGuard execution/trace code. Dirty source changes invalidate the cache without requiring a Git commit. Legacy proofs without an execution-source fingerprint need requalification.

The head computes the execution fingerprint and serializes it with the selection. The remote generator never needs the head's filesystem. Initialization remains before compilation, including the existing stack preservation, omitted-thread-register initialization, and `li x11, 0` before `wallyguard_compare_start:`.

Failure classification distinguishes infrastructure limitations, ISA mapping errors, RISC-V-DV incompatibilities, trace hierarchy assumptions and unresolved simulation failures. A trace mismatch stays unqualified until inspected; a timeout is not an architectural bug or proof of unsupported hardware. A generator defect in one smoke profile does not automatically ban the whole configuration.

## Test-family probes

All 38 upstream names remain in the inventory. Qualification probes preserve their exact installed `gen_test` and options; a blocked upstream stress test is never silently replaced by a custom bare test. A diagnostic execution can investigate a known-blocked definition, but a passing integer trace cannot override a missing FPR/vector/CSR oracle or unsynchronized interrupt/debug stimulus.

Additional explicit candidates include compressed instruction generation, single-hart fences, the installed loop stream, and byte load/store random, hazard and back-to-back streams. The byte-memory adapters use existing pyflow options that restrict the broken multi-width selector to LB/LBU/SB. They claim byte access coverage only; the original unrestricted memory profile retains its blocker. No upstream source or generated instruction binary is patched.

Compressed, fence and memory candidates must retire actual instructions from their requested family before promotion; an otherwise passing empty stimulus is insufficient. Available signatures remain secondary. See the current listings and generated qualification report for actual support rather than assuming all candidates have passed.

## Build storage

Qualification stops at a configurable free-space reserve (`--min-free-gb`, default 2 GiB). It records remaining candidates in `deferred.json` as unqualified infrastructure work. It never deletes test evidence to make room.

For simulator build directories newly created by a qualification attempt, the driver releases generated `.gch`, `.o` and `.a` files after simulation and comparison. It retains the executable, generated C++/headers and diagnostics. Cleanup takes the same build lock as `wsim` and leaves busy builds untouched. Existing simulator directories are not automatically cleaned. Every deletion is recorded in `build_cleanup.json`. `wsim` reuses the retained executable without needing these intermediates; a later source change can regenerate them normally.

The first derivative sweep passed 51 of 53 attempted configuration smokes before reaching its reserve. The two failures were inspected: an invalid SVADU/virtual-memory combination and a reset into an unpopulated boot ROM. Those are concrete configuration/startup blockers, not inferred CPU bugs. The remaining candidates were deferred, then resumed after reclaiming only disposable outputs from that sweep.

## Local results and source control

Qualification caches and generated reports are local artifacts, excluded from Git along with `generated_tests/`, `runs/` and `mismatch_results/`. A fresh checkout starts without local proofs and must qualify candidates before campaign use. `make qualify-configs` and `make qualify-tests` refresh the reports when they finish; `python -m tools.qualification_report` refreshes reports from existing local evidence. The installed-test inventory and its discovery/build tools remain versioned so mappings can be audited and refreshed.
