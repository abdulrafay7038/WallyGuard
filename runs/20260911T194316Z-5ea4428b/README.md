# CORE-V Wally Bug Reproducer: Illegal Hardware PTE.A Update on Supervisor Fetch from User Page

## Bug Description
Under the RISC-V Privileged Architecture Specification, an instruction fetch from a user-mode page (`PTE.U=1`) while executing in Supervisor mode must immediately halt translation and raise an Instruction Page Fault (Cause 12), regardless of `sstatus.SUM`. When `menvcfg.ADUE=1`, hardware updates to the A and D bits must only occur if the access privilege checks pass.

CORE-V Wally's HPTW incorrectly bypasses this privilege check during an ITLB walk (`DTLBWalk == 0`) due to a logical flaw in `ImproperPrivilege` logic in `src/mmu/hptw.sv`. Consequently, S-mode fetches to `PTE.U=1` pages incorrectly trigger a hardware page table update (`PTE.A=1` is written to RAM) before the fault is taken.

## Test Environment
- **Configuration**: `rv64gc`
- **ISA/ABI**: `rv64gc_svadu` / `lp64d`
- **Seed**: N/A (Directed test, 100% deterministic assembly)

## Provided Files
- `test_a.S`: Directed test triggering the bug (S-mode fetch from U-mode page with ADUE=1). Asserts `PTE.A` is 0.
- `test_b.S`: Positive control 1 (Legal S-mode fetch from S-mode page). Asserts `PTE.A` is 1.
- `test_c.S`: Positive control 2 (S-mode load from U-mode page with SUM=0). Asserts `PTE.A` is 0.
- `test_d.S`: Positive control 3 (Hardware ADUE disabled). Asserts `PTE.A` is 0.
- `reproducer.sh`: Script to compile and run tests against Spike and Verilator.

## How to Reproduce
1. Execute `reproducer.sh` from the top of the worktree:
```bash
./tester_llm/20260911T194316Z-5ea4428b/reproducer.sh
```

## Expected vs Observed Results
- **Spike (Expected)**: Spike exits `0` on all tests. Translation appropriately stops at Step 8; memory is not modified.
- **Wally (Observed)**: Verilator exits `0` on positive controls (tests B, C, D) but aborts with exit code `134` (Assertion failure triggered by `$fatal(1)` upon `j fail`) for Test A. The page table in RAM improperly has `PTE.A=1`.
