# PR #1892 revision

The linked review requests removing the ineffective `Lx_ADR` terms and covering
loads and instruction fetches as well as stores. The RTL cleanup is prepared for
the PR; the expanded tests were run locally and will not be submitted. ACT work
is excluded as requested by the user.

## Deliverables

- `cvw/`: isolated checkout, branch `review/pr-1892-response`, based on PR head
  `519500de4a750485931090accc8df233a86307f8`, with the revision in its working tree.
- `pr-update.patch`: RTL-only follow-up patch against that PR head.
- `full-fix.patch`: complete RTL-only fix against the PR parent,
  `275695cdb` (full hash in `validation/manifest.json`).
- `PR-DESCRIPTION.md`: replacement PR description.
- `REVIEW-RESPONSE.md`: proposed response to the linked review.

The tests in `cvw/tests/custom/hptw-superpage/` remain local and untracked. Both
exported patches contain only `src/mmu/hptw.sv`. To prepare the follow-up commit,
stage that file explicitly:

```sh
cd cvw
git add src/mmu/hptw.sv
git commit -m "hptw: simplify superpage alignment check in LEAF"
```

The existing merged/conflicted checkout and historical confirmed-bug patch were
not edited. No GitHub comment, PR edit, or push was made.

## Results

Fresh Verilator 5.036 builds were made from the PR parent and the revised source.
The runner compiles 16 RV64 Sv39/Svadu tests and runs each ELF against both Spike
and Wally. Every baseline/fixed pair has an identical loaded memory image; the
ELF symbol string tables contain GCC's varying temporary assembly filenames.

| Cases | Spike | Baseline Wally | Revised Wally |
| --- | --- | --- | --- |
| Eight misaligned cases | 8 pass | 8 exact PTE mismatches, after correct cause/tval/epc checks | 8 pass |
| Eight aligned controls | 8 pass | 8 pass | 8 pass |

For load/fetch, baseline PTE `0x2000040F` becomes `0x2000044F`. For store,
`0x2000040F` or `0x2000044F` becomes `0x200004CF`. The revised walker preserves
the initial PTE in each fault case. Aligned controls verify that legitimate A/D
updates still occur and that the memory operation/target executes correctly.

- `validation/baseline/results.json` and `validation/fixed/results.json`: per-case outcomes.
- The corresponding `.wally.log` files include explicit success or expected/actual PTE values.
- `build-baseline.log` and `build-fixed.log`: final successful simulator builds.
- `lint.log`: `rv32gc` and `rv64gc` pass the repository's Verilator lint function.
- Ruff 0.12.4 check and Python syntax compilation pass for the runner.
- `git diff --check` passes; both exported patches pass forward application checks
  against their respective base trees using temporary Git indexes.
- `validation/manifest.json`: source and simulator SHA-256 hashes plus test outcomes.

## Reproduction

See `cvw/tests/custom/hptw-superpage/README.md` for portable build/run commands.
The fresh local simulator binaries are:

```text
baseline/sim/verilator/wkdir/rv64gc_testbench_review-baseline/Vtestbench
cvw/sim/verilator/wkdir/rv64gc_testbench_review-fixed/Vtestbench
```

From `cvw/`, with the RISC-V toolchain on PATH, the validation commands were:

```sh
python3 tests/custom/hptw-superpage/run.py \
  --sim sim/verilator/wkdir/rv64gc_testbench_review-fixed/Vtestbench \
  --out ../validation/fixed
python3 tests/custom/hptw-superpage/run.py \
  --sim ../baseline/sim/verilator/wkdir/rv64gc_testbench_review-baseline/Vtestbench \
  --expect-bug --out ../validation/baseline
```

Only directed Sv39 execution and RV32/RV64 lint were performed. Full regression,
ACT coverage, dynamic Sv32/Sv48/Sv57, AMOs, and cache-block operations are not
claimed. RTL analysis shows the shared gate also covers those access paths/page
sizes, but that does not substitute for dynamic coverage.
