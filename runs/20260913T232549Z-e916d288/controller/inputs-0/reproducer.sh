#!/bin/bash
set -e
TEST_DIR="/home/abdul/miniconda3/WallyGuard2/runs/20260913T232549Z-e916d288"
mkdir -p "$TEST_DIR/build" "$TEST_DIR/logs"

# Recompile tests into $TEST_DIR/build
riscv64-unknown-elf-gcc -march=rv64gc_zicbom -mabi=lp64d -nostdlib -nostartfiles -T tests/riscof/spike/env/link.ld "$TEST_DIR/tests/test_cbo_cbie.S" -o "$TEST_DIR/build/test_cbo_cbie.elf" > "$TEST_DIR/logs/gcc_bug.log" 2>&1 || exit 2
riscv64-unknown-elf-gcc -march=rv64gc_zicbom -mabi=lp64d -nostdlib -nostartfiles -T tests/riscof/spike/env/link.ld "$TEST_DIR/tests/test_cbo_flush_control.S" -o "$TEST_DIR/build/test_cbo_flush_control.elf" > "$TEST_DIR/logs/gcc_control.log" 2>&1 || exit 2

# Rebuild DUT against $WALLY/src
make -C sim/verilator WALLYCONF=rv64gc TESTBENCH=testbench > "$TEST_DIR/logs/make.log" 2>&1 || exit 2

# Run positive control (must pass with exit 0)
./sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile="$TEST_DIR/build/test_cbo_flush_control.elf" > "$TEST_DIR/logs/wally_control.log" 2>&1 || exit 2

# Run reproducer test
set +e
./sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile="$TEST_DIR/build/test_cbo_cbie.elf" > "$TEST_DIR/logs/wally_bug.log" 2>&1
RET=$?
set -e

if [ $RET -eq 134 ] || grep -q "twice in a row" "$TEST_DIR/logs/wally_bug.log"; then
    echo "Bug reproduced: cbo.inval failed to invalidate cache line under CBIE=01 (abort 134)"
    exit 1
elif [ $RET -eq 0 ]; then
    echo "DUT behavior correct: cbo.inval properly flushed/invalidated cache line"
    exit 0
else
    echo "Unexpected exit code: $RET"
    exit 2
fi
