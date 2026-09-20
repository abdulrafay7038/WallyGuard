# Bug Reproducer: PMP Boundary Crossing in Machine Mode (src/mmu/pmpchecker.sv)

## Configuration
Target: rv64gc
ISA/ABI: rv64gc, lp64d

## Bug Description
In `src/mmu/pmpchecker.sv`, multi-byte accesses spanning PMP entries are checked via `pmpadrdecs_end`. However, the gating signal `EnforcePMP` relies solely on `MatchingL` (the start address's lock bit). If an access begins in an unlocked PMP region (L=0) but crosses into a locked region (L=1), `EnforcePMP` evaluates to 0 in Machine mode, completely disabling PMP access fault checking and allowing forbidden reads/writes.

## Expected Results (Spike Oracle)
- The 4-byte positive control store correctly executes without trapping.
- The 8-byte boundary-crossing store into a locked read-only region correctly triggers a Store/AMO Access Fault (`mcause=7`) and branches to `wg_pass` via the trap handler.

## Observed Results (Wally DUT)
- The 4-byte positive control store executes without trapping, matching Spike.
- The 8-byte boundary-crossing store silently succeeds without triggering an access fault, bypassing PMP locks and falling through to `wg_fail` (mismatch).

## Executing the Test
```bash
# Set environment
export WALLY=/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared
export PATH=$WALLY/bin:$PATH
export TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260920T041307Z-f2caada9

# Build binaries
bash $TEST_DIR/build_reproducer.sh

# Run Wally (DUT)
$WALLY/bin/wsim rv64gc --sim verilator --elf $TEST_DIR/build/test.elf

# Run Spike (Oracle)
$WALLY_SPIKE -m0x80000000:0x100000 --pc=0x80000000 --isa=rv64gc +signature=$TEST_DIR/build/test.sig +signature-granularity=8 $TEST_DIR/build/test.elf
```
