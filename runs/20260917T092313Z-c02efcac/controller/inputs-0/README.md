# PMP Boundary Crossing Bug Reproducer

## Configuration
- Device Under Test: Wally
- Architecture: rv64gc (PMP_ENTRIES = 16, PMP_G = 4)
- Compiler: GCC 15.2.0 (riscv64-unknown-elf-gcc)
- Oracle: Spike 1.1.1-dev

## Test Suite
Three assembly tests are provided to demonstrate the PMP checker issue:
1. `test_pmp_control.S` (Positive Control): Executes a 4-byte load entirely within a permitted PMP region.
2. `test_pmp_load_cross.S` (Load Crossing): Executes an 8-byte load that starts in a permitted PMP region but spans across the boundary into a forbidden region.
3. `test_pmp_store_cross.S` (Store Crossing): Executes an 8-byte store that starts in a permitted PMP region but spans across the boundary into a forbidden region.

## Execution Command
To run the reproducer on the worker node, use:
```bash
$TEST_DIR/reproducer.sh
```
This script rebuilds the tests, executes them on Spike (oracle), checks if the RTL has been modified, conditionally rebuilds the Verilator simulation model (`Vtestbench`), and runs the tests on the DUT.

## Expected vs Observed Results
- **Spike (Expected):** Spike correctly enforces boundary checks. The `test_pmp_load_cross.S` test generates a Load Access Fault (cause 5) and `test_pmp_store_cross.S` generates a Store/AMO Access Fault (cause 7), which are cleanly caught by the trap handler.
- **Wally DUT (Observed):** Wally's `pmpchecker.sv` completely ignores the memory access `Size`, verifying only the base `PhysicalAddress`. Because the base address of the crossing accesses is within the permitted PMP region, Wally silently allows the multi-byte accesses to span into the forbidden region. No traps are generated, and the tests incorrectly fall through to the failure loop, triggering a Watchdog Time Out (recorded as `FAILURE: Watch Dog Time Out triggered. Instruction at PC 0000000000000000 trapped 100 times in a row`).

The script verifies this divergence. It exits with code `1` (indicating successful mismatch) on unpatched RTL, and exits with code `0` (indicating tests pass cleanly) on correctly patched RTL.
