# Bug Reproducer: Missing Data Hazard Detection for amocas register-pair high destination

## Overview
This reproducer validates a bug in Wally's implementation of the Zacas extension where pipeline hazard logic ignores `rd+1` for `amocas` instructions (specifically `amocas.d` and `amocas.q`). When `amocas` loads a register pair `rd` and `rd+1`, the hazard detection logic in `src/ieu/controller.sv` and datapath in `src/ieu/datapath.sv` only check/forward the `rd` destination, causing immediate dependent instructions reading `rd+1` to receive stale data from the uncommitted register file.

## Configuration
- ISA: `rv64gc_zacas`
- Architecture: RV64 (tests `amocas.q` reading 16 bytes into `rd` and `rd+1`)
- Toolchain: `/home/rafay/riscv/bin/riscv64-unknown-elf-gcc`
- Oracle: `/home/rafay/riscv/bin/spike`
- DUT: Verilator testbench `sim/verilator/wkdir/rv64gc_testbench/Vtestbench`

## Scripts and Tests
- `tests/test_zacas_rd1_hazard.S`: Reproducer triggering the data hazard by immediately reading `rd+1` (`a3`) after `amocas.q` writes to `a2:a3`.
- `tests/test_zacas_rd1_control.S`: Positive control identical to the reproducer but with three `nop`s inserted after `amocas.q` to allow writeback completion.
- `tests/test_zacas_rd0_hazard.S`: Negative control triggering a hazard on `rd` (`a2`), validating the base destination is correctly stalled/forwarded.

## Expected Results (Spike)
Spike cleanly executes all three tests as legal data hazards should be resolved correctly via stalling/forwarding, leading to exit 0.

## Observed Results (Wally)
Wally passes both controls but fails the `test_zacas_rd1_hazard.S` case due to reading the un-updated, stale register `a3` value, triggering a watchdog timeout failure handler resulting in exit code 134.
