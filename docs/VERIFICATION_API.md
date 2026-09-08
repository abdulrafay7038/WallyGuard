# WallyGuard verification API

Current three-state classification and automated qualification supersede the initial eligibility limits below. See [qualification commands](QUALIFICATION.md) and [current results](QUALIFICATION_RESULTS.md).

WallyGuard uses four independent experiment coordinates: **Wally configuration × test area × exact RISC-V-DV test × seed**. A seed alone is insufficient for reproduction. The generator executes on the GCP `generator:1` worker; it returns assembly, ELF **bytes**, log and metadata. The head materializes a local absolute ELF path. Local `wally:1` and `spike:1` run the same ELF concurrently, followed by deterministic `compare:1`. Traces stay on disk. No OpenCode, LLM, commercial simulator, shared storage or additional local simulator concurrency is involved.

## Commands

```bash
make list-configs
make list-areas
make list-riscv-dv-tests
make matrix > compatibility.json

make general CONFIG=rv64gc NUM_TESTS=100
make arithmetic CONFIG=rv32gc NUM_TESTS=100
make branch CONFIG=rv32imc NUM_TESTS=100
make test AREA=arithmetic CONFIG=rv64gc NUM_TESTS=2 DV_TEST=riscv_arithmetic_basic_test
make reproduce AREA=branch CONFIG=rv64gc SEED=5382
make general CONFIG=all NUM_TESTS=2
make all-areas CONFIG=all NUM_TESTS_PER_AREA=2
make campaign CONFIG=rv64gc NUM_TESTS=100
make campaign CONFIG=all NUM_TESTS=10
```

`CONFIG=all` runs N tests **per compatible configuration**, not N divided among configurations. `all-areas` runs N per compatible configuration/area pair. Finite all-config selection is required. Unsupported choices produce `SKIPPED_UNSUPPORTED` evidence and never substitute a different configuration or upstream test. Derivative exclusions are consolidated in `skipped.json`; the full matrix exposes every concrete test/configuration combination.

`make run` retains `RUN_ARGS`. New API targets accept `TEST_ARGS`, e.g. `TEST_ARGS="--sleep 0 --color always --stop-on-failure --wally-timeout 900"`. `SEED` is optional; absent seeds are chosen and persisted per generated test. Supplied seeds increment within each config/area campaign. `make reproduce` requires a single CONFIG and SEED. `DV_TEST` pins the exact test if reproducing an older registry selection.

Python exposes `--wally-config`, `--test-area`, `--riscv-dv-test`, `--all-areas`, `--num-tests-per-area`, `--campaign`, all three `--list-*` flags, and `--compatibility-matrix`. Add `--json` to listings. Listing commands do not connect to Ray. Existing `--once`, `--stop-on-failure`, simulator timeouts, `--preflight`, `--sleep`, `--existing-tests` and `--local` remain available.

## Supported campaign mappings

| Wally | XLEN | Spike ISA / GCC architecture | RISC-V-DV target | ABI | Areas |
|---|---:|---|---|---|---|
| rv64gc | 64 | rv64gc | rv64imafdc | lp64d | general, arithmetic, branch |
| rv32gc | 32 | rv32gc | rv32imafdc | ilp32d | general, arithmetic, branch |
| rv32imc | 32 | rv32imc_zicsr_zifencei | rv32imc | ilp32 | general, arithmetic, branch |

These ISA mappings select a subset of Wally's implemented extensions. They do not claim coverage of every B, crypto, cache-management or privileged extension in GC configurations. Base `rv64i`, `rv32i` and `rv32e` have no Zicsr: pyflow reads `mhartid` at startup and the passive tracer references the privileged hierarchy. They are disabled. Generated derivatives are discovered and inventoried, but have only capability-based subset mappings (where a matching target exists) and no complete qualification; their existence is not a campaign-support claim.

| Area | Eligible exact tests | Coverage |
|---|---|---|
| general | wallyguard_rand | Integer/M/compressed body with forward conditional branches |
| arithmetic | wallyguard_arithmetic, riscv_arithmetic_basic_test | ALU/M/compressed arithmetic; upstream numeric corner stream in the latter |
| branch | wallyguard_branch, wallyguard_jump | Forward conditional branches; installed JAL directed stream in the latter |

Custom `wallyguard_*` profiles are explicitly named adaptations of installed `riscv_instr_base_test`, not renamed claims that upstream stress profiles work. Each uses a bounded 200-instruction configuration, bare single-hart M-mode setup, and disabled FPU/vector/CSR/fence/subprogram paths. The generator may randomize the actual body length. The upstream arithmetic adaptation preserves its corner stream, reduces body size, and adjusts stream ratio to retain insertions; exact options are recorded.

Weighted campaign selection uses `CAMPAIGN_WEIGHTS` in `tools/test_profiles.py`: general 4, arithmetic 3, branch 3. Memory 2 and loop 2 are reserved weights but contribute **zero** while unsupported. The SHA256-based selection uses config/area/seed and sorted eligible exact tests; it does not use unrecorded randomness. Registry changes can alter selection, so keep the recorded exact test/options and generator revision for historical reproduction.

## Discovery and support gates

`tools/discover_remote.py` captured the installed GCP checkout at revision `b7a0b4b0b51346a3c64f159f81ea262d867c14a9`, including tracked filenames, target/base/custom testlists and imports, Python generator/target sources, directed stream classes, CSR script and source hashes. `tools/build_inventory.py` builds `tools/data/test_inventory.json`. It found **38 unique upstream test names**. There are no tracked standalone `.S` or `.c` tests in this checkout; run.py still exposes external `--asm_tests` and `--c_tests` entry points. `user_init.s` is a setup extension, not a campaign test. The experimental Python backend is separate and unqualified.

`tools/configs.py` discovers actual `config.vh` files along the include paths used by the Verilator Makefile, reads XLEN/extensions/privilege/MMU/FPU/C parameters, and applies explicit mappings. `tools/test_profiles.py` is the eligibility and deterministic-selection source of truth. `validated_combinations.json` records successful full-flow evidence for each enabled combination. Changing a configuration hash or profile fingerprint invalidates its qualification. Generator revision and target XLEN are checked on the worker.

Unsupported families remain listed:

- **Memory streams:** the installed `gen_load_store_instr` accumulates `allowed_instr` across accesses. It can retain compressed opcodes for invalid offsets and inappropriate access widths. RV32 seed 5382 produced `c.sw a5,-246(a5)` and GCC rejected it. An RV64 probe passed, but that does not make the implementation campaign-safe. No post-generation opcode substitution masks this defect.
- **Loop:** the installed stream emitted `srai zero,zero,none`; GCC rejected the non-absolute immediate. Its higher-level upstream profile also enables the incomplete subprogram path.
- **Upstream random/jump/subprogram stress:** `gen_callstack` uses `self.callstack_gen` without initializing it; several profiles also name streams missing from the Python factory. The random-test subclass overrides subprogram count to five. Custom bounded profiles do not claim equivalent subprogram/iTLB coverage.
- **CSR:** run.py has a special `run_csr_test → scripts/gen_csr_test.py --csr_file … --xlen …` path. It is inventoried, not replaced with a random test. CSR updates are diagnostic in the current trace, so CSR-focused campaigns are disabled.
- **MMU/privilege/PMP:** page-table generation includes TODO/pass paths; equivalent setup, translation and full trap transitions have not been established.
- **Exception/illegal/EBREAK:** basic retirement/trap directed tests remain; broader generator handlers are not qualified. They must not create false CPU-bug reports.
- **FPU/vector:** missing FPR/vector architectural comparison, irrespective of hardware ISA support.
- **Interrupt/debug:** no synchronized interrupt stimulus or equivalent debug driver; debug generation is unfinished.
- **Coverage tests:** trace consumers, not executable generators.

The machine inventory preserves all source variants, original options/iterations, import reachability, directed stream names, backend availability, RV32/RV64 target reachability and eligibility reasons. `make matrix` provides the full cross-product, including unsupported rows.

## Initialization, traces and signatures

The wrapper patches the **assembly before GCC**. `li x11, 0` immediately precedes `wallyguard_compare_start:`. Missing/duplicate markers or invalid initialization produce `INITIALIZATION_ERROR` and prevent compilation/execution. It verifies the assembly did not change during compilation and resolves the marker symbol from the resulting ELF. Metadata retains initialization validation, all four experiment coordinates, XLEN/ISA/target/ABI, exact commands/options, worker hostname, revision, seed, ELF SHA256 and comparison marker PC.

The installed pyflow GPR setup omits its randomly selected stack/thread registers. The thread register is **not always x11**. Qualified profiles now pass the installed `fix_sp=1` option so x2 receives the intended `user_stack_end` value and x11 can never be the stack pointer. `normalize_bare_setup` requires the known bare `init:` shape, preserves all existing `li`/`la` setup values, and initializes only the single omitted thread register to zero. It rejects ambiguous/incomplete or specialized setup instead of blindly zeroing it. The existing required x11-zero normalization then runs immediately before the marker. `initialization_audit` records which omitted register was filled. All 31 nonzero GPRs therefore have explicit initialization in the accepted bare setup. Historical validation results before this additional normalization remain on disk but do not qualify the new profile fingerprint.

The comparison still starts at the ELF entry point. **The current collectors do not filter setup at the comparison marker**: initialization remains in both traces. The marker is preserved and recorded, not used to hide mismatches. RV32 values are zero-padded into the existing 16-digit normalized schema; compressed instruction encodings remain intact. Only testbench ELF-header/width handling changed, not processor execution RTL. `DumpSignature` remains, including its RV64 upper-word output.

Primary comparison remains ordered PC/binary/event/trap/GPR effects, plus mode when available. CSR/memory fields are diagnostic, and there is no FPR/vector comparison. Signature checking is secondary and optional for generated tests. `NOT_AVAILABLE` is retained in JSON and suppressed on each generated-test console line. A simulation or generator failure is infrastructure, not a CPU bug.

## Evidence and resource bounds

Runs are arranged as `runs/session_<timestamp>/<config>_<area>/<number>_<config>_<area>_<exact-test>_seed_<seed>/`. Generated artifact IDs also include the session and all coordinates. Automatic mismatch archives preserve this hierarchy under `mismatch_results/`, preventing collisions between sessions and configurations.

Each run preserves `result.json`, logs, normalized traces, signatures when available, and first-mismatch context. Campaign JSON records per-test status; `matrix_summary.json` aggregates by config/area, exact test and configuration. `skipped.json` records exclusions. Local directed RV64GC tests run first for RV64GC; other configurations explicitly skip those incompatible RV64 binaries. An RV32 directed rebuild is not silently fabricated.

The existing lookahead remains bounded at one remote generation; no early local materialization or additional Wally/Spike execution is introduced. Strict stop-on-failure disables lookahead. No topology changes are required.
