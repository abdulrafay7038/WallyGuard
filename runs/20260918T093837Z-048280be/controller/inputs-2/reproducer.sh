#!/bin/bash
set -e
TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260918T093837Z-048280be
WALLY_CLEAN=$TEST_DIR/build/wally_clean
export WALLY=$WALLY_CLEAN
export PATH=$WALLY_CLEAN/bin:/home/rafay/riscv/bin:$PATH

for TEST in test_pmp_mmode_store_cross test_pmp_mmode_load_cross test_pmp_mmode_control; do
    riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostdlib -nostartfiles -T $WALLY_CLEAN/tests/riscof/spike/env/link.ld $TEST_DIR/tests/$TEST.S -o $TEST_DIR/build/$TEST.elf
done

for TEST in test_pmp_mmode_store_cross test_pmp_mmode_load_cross test_pmp_mmode_control; do
    timeout 5s spike --isa=rv64gc +signature=$TEST_DIR/build/${TEST}_spike.sig +signature-granularity=8 $TEST_DIR/build/$TEST.elf > $TEST_DIR/logs/${TEST}_spike.log 2>&1 || (echo "Spike failed on $TEST"; exit 2)
done

echo "Running Wally control..."
timeout 5s $TEST_DIR/build/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_pmp_mmode_control.elf > $TEST_DIR/logs/test_pmp_mmode_control_wally.log 2>&1 || true
if grep -q "Error on test" $TEST_DIR/logs/test_pmp_mmode_control_wally.log; then
    echo "Wally failed control test unexpectedly"
    exit 2
fi

echo "Running Wally reproducer (store)..."
timeout 5s $TEST_DIR/build/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_pmp_mmode_store_cross.elf > $TEST_DIR/logs/test_pmp_mmode_store_cross_wally.log 2>&1 || true
if ! grep -q "Error on test" $TEST_DIR/logs/test_pmp_mmode_store_cross_wally.log; then
    echo "Wally passed store test unexpectedly (bug not reproduced)"
    exit 2
fi

echo "Running Wally reproducer (load)..."
timeout 5s $TEST_DIR/build/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_pmp_mmode_load_cross.elf > $TEST_DIR/logs/test_pmp_mmode_load_cross_wally.log 2>&1 || true
if ! grep -q "Error on test" $TEST_DIR/logs/test_pmp_mmode_load_cross_wally.log; then
    echo "Wally passed load test unexpectedly (bug not reproduced)"
    exit 2
fi

echo "Successfully reproduced bug!"
exit 1
