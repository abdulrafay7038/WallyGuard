# Reproducer: Missing Extension Gating on cbo.clean and cbo.flush

## Configuration & Environment
- **Configuration**: `nodcache_rv64gc` (P.ZICBOM_SUPPORTED = 0)
- **ISA / ABI**: `rv64gc` / `lp64d`
- **Compiler**: `riscv64-unknown-elf-gcc`
- **Oracle**: Spike (`/opt/riscv/bin/spike --isa=rv64gc`)
- **DUT**: Wally (`sim/verilator/wkdir/nodcache_rv64gc_testbench/Vtestbench`)

## Tests
Four directed assembly tests were built:
- `test_a.S`: Tests `cbo.clean (a0)` in M-mode.
- `test_b.S`: Tests `cbo.flush (a0)` in M-mode.
- `test_c.S`: Tests `cbo.inval (a0)` in M-mode (Control).
- `test_d.S`: Smoke test for basic ALU / branching.

In `test_a` and `test_b`, Zicbom is not supported, so these instructions MUST raise an Illegal Instruction exception (Cause 2). 

## Exact Commands to Reproduce
Run the reproducer script from the Wally worktree root:
```bash
./tester_llm/20260912T210944Z-fd08ec05/reproducer.sh
```
This script handles dependency linking, builds the DUT with `make -C sim/verilator compile WALLYCONF=nodcache_rv64gc TESTBENCH=testbench`, compiles the tests, and runs both Spike and the DUT.

## Expected Results
Spike correctly raises Cause 2 (Illegal Instruction) for all Zicbom instructions (`cbo.clean`, `cbo.flush`, `cbo.inval`) because `--isa=rv64gc` does not include Zicbom.
The tests are designed to exit cleanly (0) if the trap occurs. If they do not trap, they execute a deliberate livelock (`jr zero`) which triggers Verilator's watchdog timeout (considered a FAILURE).

## Observed Results
- **Spike**: All tests pass (trap as expected).
- **DUT `test_c`**: Passes (traps as expected, properly gated by `P.ZICBOM_SUPPORTED` for `12'd0`).
- **DUT `test_d`**: Passes (smoke test).
- **DUT `test_a` (cbo.clean)**: Fails with Watch Dog Time Out. The instruction executed without trapping.
- **DUT `test_b` (cbo.flush)**: Fails with Watch Dog Time Out. The instruction executed without trapping.

This confirms the operator precedence bug in `src/ieu/controller.sv` leaves `cbo.clean` and `cbo.flush` ungated by `P.ZICBOM_SUPPORTED`.
