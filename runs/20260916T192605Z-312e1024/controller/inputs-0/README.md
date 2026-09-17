# Bug Reproducer: Missing Data Hazard Detection and Forwarding for amocas Register-Pair High Destination (rd+1)

## Configuration
- Configuration: `rv64gc` (`ZACAS_SUPPORTED = 1`, `ZAAMO_SUPPORTED = 1`)
- ISA/ABI: `rv64gc_zacas` / `lp64d`
- Compiler: `/home/rafay/riscv/bin/riscv64-unknown-elf-gcc` (GCC 15.2.0)
- Oracle: `/home/rafay/riscv/bin/spike` (Spike 1.1.1-dev)
- Simulator: Verilator 5.036
- Seed: N/A (Deterministic assembly test)

## Expected vs Observed Results
- **Expected**: An instruction immediately consuming `rd+1` (high half of the register pair) after an `amocas.q` instruction should stall or receive the correct forwarded value, executing cleanly.
- **Observed**: The instruction does not stall and receives no forwarded data, reading stale register data from `regfile.sv`. The DUT branching fails and trips the testbench watchdog assertion (exit code 134 or logs containing "twice in a row" / "Watch Dog Time Out").

## Exact Commands

```bash
# Set environment
export WALLY="/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared"
export TEST_DIR="/home/rafay/miniconda3/WallyGuard2/runs/20260916T192605Z-312e1024"
cd $WALLY

# Build
/home/rafay/riscv/bin/riscv64-unknown-elf-gcc -march=rv64gc_zacas -mabi=lp64d -nostdlib -nostartfiles -T tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_zacas_rd1_hazard.S -o $TEST_DIR/build/test_zacas_rd1_hazard.elf

# Run Spike (Oracle)
timeout 5s /home/rafay/riscv/bin/spike --isa=rv64gc_zacas $TEST_DIR/build/test_zacas_rd1_hazard.elf

# Build & Run Wally
make -C sim/verilator compile WALLYCONF=rv64gc TESTBENCH=testbench
./sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_zacas_rd1_hazard.elf
```
