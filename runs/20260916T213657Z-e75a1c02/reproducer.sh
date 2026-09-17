#!/bin/bash
# Reproducer for missing amocas data hazard detection for rd+1

export WALLY=/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared
export TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260916T213657Z-e75a1c02
export GCC=/home/rafay/riscv/bin/riscv64-unknown-elf-gcc
export SPIKE=/home/rafay/riscv/bin/spike
export VTB=$WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench
export CFLAGS="-march=rv64gc_zacas -mabi=lp64d -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld"

mkdir -p $TEST_DIR/build $TEST_DIR/logs

echo "Building tests..."
$GCC $CFLAGS $TEST_DIR/tests/test_zacas_rd1_hazard.S -o $TEST_DIR/build/test_zacas_rd1_hazard.elf || exit 2
$GCC $CFLAGS $TEST_DIR/tests/test_zacas_rd1_control.S -o $TEST_DIR/build/test_zacas_rd1_control.elf || exit 2
$GCC $CFLAGS $TEST_DIR/tests/test_zacas_rd0_hazard.S -o $TEST_DIR/build/test_zacas_rd0_hazard.elf || exit 2

echo "Running Spike oracle..."
timeout 5s $SPIKE --isa=rv64gc_zacas $TEST_DIR/build/test_zacas_rd1_hazard.elf || exit 2
timeout 5s $SPIKE --isa=rv64gc_zacas $TEST_DIR/build/test_zacas_rd1_control.elf || exit 2
timeout 5s $SPIKE --isa=rv64gc_zacas $TEST_DIR/build/test_zacas_rd0_hazard.elf || exit 2

echo "Running Wally DUT controls..."
$VTB +ElfFile=$TEST_DIR/build/test_zacas_rd1_control.elf > $TEST_DIR/logs/rd1_control.log 2>&1
if [ $? -ne 0 ]; then
    echo "Control test failed on DUT!"
    cat $TEST_DIR/logs/rd1_control.log
    exit 2
fi

$VTB +ElfFile=$TEST_DIR/build/test_zacas_rd0_hazard.elf > $TEST_DIR/logs/rd0_hazard.log 2>&1
if [ $? -ne 0 ]; then
    echo "rd0 hazard test failed on DUT!"
    cat $TEST_DIR/logs/rd0_hazard.log
    exit 2
fi

echo "Running Wally DUT reproducer..."
set +e
$VTB +ElfFile=$TEST_DIR/build/test_zacas_rd1_hazard.elf > $TEST_DIR/logs/rd1_hazard.log 2>&1
RV=$?
set -e

cat $TEST_DIR/logs/rd1_hazard.log

if [ $RV -eq 134 ] || grep -q "Assertion failed" $TEST_DIR/logs/rd1_hazard.log || grep -q "Watch Dog Time Out" $TEST_DIR/logs/rd1_hazard.log; then
    echo "Mismatch confirmed. Wally DUT failed as expected on the rd1 hazard test."
    exit 1
elif [ $RV -eq 0 ]; then
    echo "Test passed on Wally DUT. No mismatch found."
    exit 0
else
    echo "Unknown error occurred on Wally DUT."
    exit 2
fi
