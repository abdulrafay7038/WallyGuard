#!/bin/bash
WALLY=/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared
TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260916T210911Z-f0168800

mkdir -p $TEST_DIR/build $TEST_DIR/logs

cd $WALLY

GCC=/home/rafay/riscv/bin/riscv64-unknown-elf-gcc
SPIKE=/home/rafay/riscv/bin/spike
VTESTBENCH=$WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench

if [ ! -x "$VTESTBENCH" ]; then
    make -C sim/verilator compile WALLYCONF=rv64gc TESTBENCH=testbench || exit 2
fi

# Build tests
$GCC -march=rv64gc_zacas -mabi=lp64d -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_zacas_rd1_hazard.S -o $TEST_DIR/build/test_zacas_rd1_hazard.elf || exit 2
$GCC -march=rv64gc_zacas -mabi=lp64d -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_zacas_rd1_control.S -o $TEST_DIR/build/test_zacas_rd1_control.elf || exit 2
$GCC -march=rv64gc_zacas -mabi=lp64d -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_zacas_rd0_hazard.S -o $TEST_DIR/build/test_zacas_rd0_hazard.elf || exit 2

# Run Spike
timeout 5s $SPIKE --isa=rv64gc_zacas $TEST_DIR/build/test_zacas_rd1_control.elf || exit 2
timeout 5s $SPIKE --isa=rv64gc_zacas $TEST_DIR/build/test_zacas_rd0_hazard.elf || exit 2
timeout 5s $SPIKE --isa=rv64gc_zacas $TEST_DIR/build/test_zacas_rd1_hazard.elf || exit 2

# Run Wally controls
$VTESTBENCH +ElfFile=$TEST_DIR/build/test_zacas_rd1_control.elf > $TEST_DIR/logs/control.log 2>&1 || exit 2
$VTESTBENCH +ElfFile=$TEST_DIR/build/test_zacas_rd0_hazard.elf > $TEST_DIR/logs/rd0_hazard.log 2>&1 || exit 2

# Run Wally hazard test
set +e
$VTESTBENCH +ElfFile=$TEST_DIR/build/test_zacas_rd1_hazard.elf > $TEST_DIR/logs/hazard.log 2>&1
DUT_EXIT=$?
set -e

if [ $DUT_EXIT -eq 134 ] || grep -q "Assertion failed" $TEST_DIR/logs/hazard.log || grep -q "Watch Dog Time Out" $TEST_DIR/logs/hazard.log; then
    exit 1
elif [ $DUT_EXIT -eq 0 ]; then
    exit 0
else
    exit 2
fi
