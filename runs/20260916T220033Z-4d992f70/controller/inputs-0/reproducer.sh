#!/bin/bash

# Environment setup
WALLY="/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared"
TEST_DIR="/home/rafay/miniconda3/WallyGuard2/runs/20260916T220033Z-4d992f70"
GCC="/home/rafay/riscv/bin/riscv64-unknown-elf-gcc"
SPIKE="/home/rafay/riscv/bin/spike"
VERILATOR_BIN="$WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench"

# Rebuild tests into $TEST_DIR/build/
cd "$TEST_DIR/build" || exit 2

for test_name in test_zacas_rd1_hazard test_zacas_rd1_control test_zacas_rd0_hazard; do
    echo "Compiling $test_name..."
    $GCC -march=rv64gc_zacas -mabi=lp64d -nostdlib -nostartfiles -T "$WALLY/tests/riscof/spike/env/link.ld" "$TEST_DIR/tests/$test_name.S" -o "$test_name.elf"
    if [ $? -ne 0 ]; then
        echo "Compilation failed for $test_name."
        exit 2
    fi
done

echo "Running Spike oracle on all tests..."
for test_name in test_zacas_rd1_hazard test_zacas_rd1_control test_zacas_rd0_hazard; do
    timeout 5s $SPIKE --isa=rv64gc_zacas "$test_name.elf"
    SPIKE_EXIT=$?
    if [ $SPIKE_EXIT -ne 0 ]; then
        echo "Spike failed on $test_name (exit code $SPIKE_EXIT)."
        exit 2
    fi
done

cd "$WALLY" || exit 2

echo "Running Wally DUT on control and negative control..."
timeout 5s $VERILATOR_BIN +ElfFile="$TEST_DIR/build/test_zacas_rd1_control.elf" > "$TEST_DIR/logs/control.log" 2>&1
if [ $? -ne 0 ]; then
    echo "Wally DUT failed on test_zacas_rd1_control.elf."
    cat "$TEST_DIR/logs/control.log"
    exit 2
fi

timeout 5s $VERILATOR_BIN +ElfFile="$TEST_DIR/build/test_zacas_rd0_hazard.elf" > "$TEST_DIR/logs/neg_control.log" 2>&1
if [ $? -ne 0 ]; then
    echo "Wally DUT failed on test_zacas_rd0_hazard.elf."
    cat "$TEST_DIR/logs/neg_control.log"
    exit 2
fi

echo "Running Wally DUT on bug reproducer (hazard on rd+1)..."
timeout 5s $VERILATOR_BIN +ElfFile="$TEST_DIR/build/test_zacas_rd1_hazard.elf" > "$TEST_DIR/logs/hazard.log" 2>&1
DUT_EXIT=$?

if [ $DUT_EXIT -eq 134 ] || grep -q -iE "Assertion failed|Watch Dog Time Out|twice in a row" "$TEST_DIR/logs/hazard.log"; then
    echo "Bug successfully reproduced! DUT failed as expected on test_zacas_rd1_hazard.elf."
    exit 1
elif [ $DUT_EXIT -eq 0 ]; then
    echo "DUT passed test_zacas_rd1_hazard.elf. Bug not reproduced."
    exit 0
else
    echo "DUT failed with an unexpected tool error (exit code $DUT_EXIT)."
    cat "$TEST_DIR/logs/hazard.log"
    exit 2
fi
