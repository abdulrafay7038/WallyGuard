# Reproducer for Address Decoding Indexing Bug in mhpmevent CSR Writes

## Configuration
- **Core**: Wally RISC-V RV64GC (standard configuration `rv64gc`)
- **ISA / ABI**: `rv64gc` / `lp64d`
- **Compiler**: `/home/rafay/riscv/bin/riscv64-unknown-elf-gcc`
- **Simulator**: Verilator 5.036
- **Linker Script**: `$WALLY/tests/riscof/spike/env/link.ld`
- **Seed**: N/A (Directed assembly tests without randomization)

## Defect Summary
In `src/privileged/csrc.sv`, the address decoding logic for `mhpmevent` CSRs incorrectly offsets the target address by adding the loop index `i` (which starts at 3 for `mhpmevent3`) to the base address `0x323`. This maps `mhpmevent3` to `0x326` instead of `0x323`, violating the RISC-V Privileged Architecture Specification (Section 3.1.11, Table 3.5).

## Exact Commands

```bash
# Set variables
TEST_DIR="/home/rafay/miniconda3/WallyGuard2/runs/20260916T170128Z-3da417b7"
WALLY="/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared"

# Compile
/home/rafay/riscv/bin/riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_mhpmevent_write.S -o $TEST_DIR/build/test_mhpmevent_write.elf
/home/rafay/riscv/bin/riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_mhpmevent_cross.S -o $TEST_DIR/build/test_mhpmevent_cross.elf

# Run on Simulator
cd $WALLY
./sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_mhpmevent_write.elf > $TEST_DIR/logs/wally.log 2>&1
./sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_mhpmevent_cross.elf > $TEST_DIR/logs/cross.log 2>&1
```

## Expected Results
- `test_mhpmevent_write.elf`: Writing `0x55` to CSR `0x323` and reading it back should yield `0x55`, progressing to the `pass` self-loop.
- `test_mhpmevent_cross.elf`: Writing `0xAA` to CSR `0x326` should *not* overwrite `mhpmevent3` at CSR `0x323`, and reading `0x323` should not return `0xAA`.

## Observed Results
- `test_mhpmevent_write.elf`: Reading from CSR `0x323` yields `0x0`, causing a branch to `fail` which jumps to address `0x0`, triggering an illegal fetch and a "Watch Dog Time Out" from the testbench.
- `test_mhpmevent_cross.elf`: Reading from CSR `0x323` yields `0xAA` (which was written to `0x326`), proving the address collision, causing a branch to `fail` and triggering a "Watch Dog Time Out".
