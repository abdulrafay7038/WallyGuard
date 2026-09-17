# Bug Reproducer: Missing Data Hazard Detection and Forwarding for amocas Register-Pair High Destination (rd+1)

## Configuration
- Target Configuration: `rv64gc`
- `ZACAS_SUPPORTED = 1`, `ZAAMO_SUPPORTED = 1`, `XLEN = 64`

## Issue Description
In Wally's Zacas implementation, register-pair amocas instructions (`amocas.d`/`amocas.q`) load a 2*XLEN-bit value from memory into a register pair `rd` (low half) and `rd+1` (high half). However, hazard detection and forwarding logic in `src/ieu/controller.sv` and `src/ieu/datapath.sv` strictly checks the 5-bit base destination `rd` and completely fails to track or forward data for `rd+1`.
An instruction reading `rd+1` immediately after `amocas` does not stall in Decode and does not receive forwarded data, causing it to read the stale uncommitted register value from `regfile.sv`.

## Tools
- Compiler: `/home/rafay/riscv/bin/riscv64-unknown-elf-gcc`
- Simulator (Oracle): `/home/rafay/riscv/bin/spike`
- DUT (Wally): Pre-compiled Verilator binary `sim/verilator/wkdir/rv64gc_testbench/Vtestbench`

## Exact Commands & Expected vs Observed Results
The `reproducer.sh` script automates compilation and testing:
1. `test_zacas_rd1_control.S` (with 3 NOPs to flush pipeline):
   - Spike: Exit 0 (Pass)
   - Wally DUT: Exit 0 (Pass)
2. `test_zacas_rd0_hazard.S` (immediate dependency on `rd`):
   - Spike: Exit 0 (Pass)
   - Wally DUT: Exit 0 (Pass)
3. `test_zacas_rd1_hazard.S` (immediate dependency on `rd+1`):
   - Spike: Exit 0 (Pass - Oracle successfully executes atomic load and subsequent data consumption)
   - Wally DUT: Fails and triggers watchdog abort / Assertion failed. It incorrectly consumes a stale register value for `rd+1`. The script logs the error and exits with `1` to confirm the mismatch.
