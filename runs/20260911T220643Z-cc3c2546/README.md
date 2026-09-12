# CORE-V Wally Bug Report: Illegal Hardware Page Table Update on `cbo.zero`

## Bug Description
In `src/mmu/hptw.sv`, missing Cache Management Operation (CMO) permission checks cause the Hardware Page Table Walker (HPTW) to illegally update `PTE.D=1` and `PTE.A=1` in memory when `cbo.zero` is executed on a read-only page (`PTE.W=0`) with `menvcfg.ADUE=1`. Because `cbo.zero` is decoded with `MemRWD = 2'b00`, `WriteAccess` is 0. The HPTW fails to check `CMOpM[3]` (which indicates `cbo.zero`) when determining `InvalidWrite`. As a result, the HPTW falsely assumes the access is legal, updates the PTE in RAM, and then subsequently the DTLB catches the invalid operation and raises a Store/AMO Page Fault (Cause 15). The hardware update to a read-only page prior to trapping violates the RISC-V Privileged Architecture Specification.

## Configuration & Environment
- **Target Configuration**: `WALLYCONF=rv64gc`
- **ISA / ABI**: `rv64gc_zicboz_svadu` / `lp64d`
- **Simulator**: Verilator
- **Oracle**: Spike `1.1.1-dev`

## Test Cases
Four directed assembly tests were constructed:
- **Test A (Bug Trigger)**: `cbo.zero` on Read-Only page (`PTE.W=0`) with `ADUE=1`. Trap handler verifies that `PTE.A` and `PTE.D` were **not** modified in memory.
- **Test B (Positive Control 1)**: `cbo.zero` on Writable page (`PTE.W=1`) with `ADUE=1`. Normal operation, PTE successfully updated.
- **Test C (Positive Control 2)**: Normal store `sd` on Read-Only page (`PTE.W=0`) with `ADUE=1`. Traps properly without modifying PTE.
- **Test D (Positive Control 3)**: `cbo.zero` on Read-Only page with `ADUE=0`. Traps properly without modifying PTE (hardware updates disabled).

## Expected vs. Observed Results
- **Expected Results (Spike)**: All tests pass (exit code 0). On Test A, Spike correctly traps with Cause 15 *without* modifying the PTE in memory.
- **Observed Results (Verilator)**: Tests B, C, and D pass (exit code 0). Test A fails (exit code 134), as the trap handler observes that `PTE.A` and `PTE.D` have been illegally modified by hardware.

## Exact Commands to Reproduce

1. Prepare the worktree and build the DUT:
```bash
git submodule update --init addins/verilog-ethernet
cp -a /home/abdul/miniconda3/WallyGuard/cvw/config/deriv ./config/
make -C sim/verilator compile WALLYCONF=rv64gc TESTBENCH=testbench
```

2. Run the reproducer script:
```bash
./tester_llm/20260911T220643Z-cc3c2546/reproducer.sh
```
The script will exit with code 1, indicating successful reproduction of the bug.
