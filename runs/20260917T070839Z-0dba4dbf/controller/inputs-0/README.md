# Bug Reproducer: Physical Memory Protection (PMP) Boundary Crossing

## Defect Summary
In CORE-V Wally's MMU, the physical memory protection address decoder (`src/mmu/pmpadrdec.sv`) and checker (`src/mmu/pmpchecker.sv`) accept the `Size` of a memory access (e.g. byte, halfword, word, doubleword) but completely ignore it during evaluation. They only match the lowest byte (`PhysicalAddress` byte 0) against the PMP regions. If a multi-byte memory access (e.g., an 8-byte `ld` or `sd`) starts in an allowed PMP region but spans across the boundary into a forbidden PMP region, Wally's MMU fails to detect the access to the forbidden region, incorrectly permitting the access.

This violates the RISC-V Privileged Architecture specification (v20211203, Section 3.7.1), which mandates that "an access succeeds only if all bytes of the access are permitted by the matching PMP entry" and "if a data access spans multiple PMP entries... an access fault must be raised if any of the accessed bytes are not permitted."

## Test Configuration
- **Architecture**: `rv64gc`
- **Compiler**: `riscv64-unknown-elf-gcc` (GCC 15.2.0)
- **Spike**: Spike 1.1.1-dev
- **Wally DUT Simulator**: Verilator 5.036
- **Base Commit**: 97c449edc6c76091be66ce459365d7f77de315aa

## Reproducer Suite
1. **Positive Control (`test_pmp_control.S`)**: Maps PMP1 to `[buffer, buffer+4)` with R/W/L permissions. Executes a 4-byte `lw` at `buffer`. Passes on both Spike and Wally DUT.
2. **Bug Reproducer - Load (`test_pmp_load_cross.S`)**: Identical PMP setup. Executes an 8-byte `ld` at `buffer`. Bytes 0-3 are in PMP1 (allowed), but bytes 4-7 are in PMP2 (forbidden). Spike raises a Load Access Fault (cause 5) and traps cleanly to the handler. Wally DUT fails to raise the fault, silently executes the illegal access, and falls through to a Watchdog Time Out failure.
3. **Bug Reproducer - Store (`test_pmp_store_cross.S`)**: Same setup, executes an 8-byte `sd` at `buffer`. Spike raises a Store/AMO Access Fault (cause 7). Wally DUT fails to raise the fault and falls through to a Watchdog Time Out failure.

## Execution
Run the automated reproducer script:
```bash
./reproducer.sh
```
This script will compile the tests, execute them on Spike as the oracle, and run them on the Wally DUT using `Vtestbench`. The script expects the DUT to fail on the boundary-crossing tests and exits with code 1 upon confirming the bug.
