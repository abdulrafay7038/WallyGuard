# PMP Boundary Crossing Bug Reproducer

## Configuration
- Architecture: `rv64gc`
- ABI: `lp64d`
- Privilege Modes: M-mode
- Simulator: Spike (Oracle) and Wally DUT (Verilator)

## Bug Description
The RISC-V Privileged Architecture (v20211203, Section 3.7.1) mandates that for multi-byte data accesses, every byte must be checked against PMP permissions. If an access crosses a boundary from a permitted region into a forbidden region, an Access Fault must be raised. 

In Wally's MMU (`src/mmu/pmpchecker.sv` and `src/mmu/pmpadrdec.sv`), the `Size` of the access is ignored during address matching. The PMP logic only validates the base `PhysicalAddress`. Consequently, an 8-byte load (`ld`) or store (`sd`) that starts in a valid region but crosses into an invalid region will silently succeed on Wally without raising a fault.

## Expected vs Observed Results
- **Expected (Spike):** Both the 8-byte load and 8-byte store that cross into the forbidden PMP region raise a Load Access Fault (cause 5) and Store/AMO Access Fault (cause 7), respectively. The trap handler correctly catches these and exits cleanly.
- **Observed (Wally DUT):** The accesses fail to raise an exception. Execution falls through the expected trap logic into a failure handler that deliberately livelocks at PC 0, triggering a Verilator Watchdog Time Out (aborting execution).

## Exact Commands
To reproduce, run the automated script:
```bash
./reproducer.sh
```
This script will:
1. Compile the assembly tests (`test_pmp_control.S`, `test_pmp_load_cross.S`, `test_pmp_store_cross.S`) using GCC.
2. Convert the ELFs to Verilator memfiles via `elf2hex`.
3. Run the tests on Spike (expecting clean exit 0).
4. Run the tests on Wally DUT.
5. Exit 1 upon confirming the bug (Spike passes, Wally DUT fails).
