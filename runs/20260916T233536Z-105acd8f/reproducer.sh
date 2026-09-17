#!/bin/bash
set -e

WALLY=/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared
TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260916T233536Z-105acd8f
GCC=/home/rafay/riscv/bin/riscv64-unknown-elf-gcc
SPIKE=/home/rafay/riscv/bin/spike
VTESTBENCH=$WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench
ELF2HEX=$WALLY/bin/elf2hex

export PATH="/home/rafay/riscv/bin:$PATH"

mkdir -p $TEST_DIR/build $TEST_DIR/logs

echo "Building tests..."
for test in test_zacas_q_unaligned test_zacas_q_unaligned_byte test_zacas_q_aligned; do
    $GCC -march=rv64gc_zacas -mabi=lp64d -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld \
        $TEST_DIR/tests/$test.S -o $TEST_DIR/build/$test.elf > $TEST_DIR/logs/${test}_build.log 2>&1 || { echo "Build failed for $test"; exit 2; }
    
    $ELF2HEX $TEST_DIR/build/$test.elf $TEST_DIR/build/$test.elf.memfile
done

echo "Running tests on Spike..."
for test in test_zacas_q_unaligned test_zacas_q_unaligned_byte test_zacas_q_aligned; do
    if ! timeout 5s $SPIKE --isa=rv64gc_zacas $TEST_DIR/build/$test.elf > $TEST_DIR/logs/${test}_spike.log 2>&1; then
        echo "Spike failed on $test"
        cat $TEST_DIR/logs/${test}_spike.log
        exit 2
    fi
done

echo "Running test_zacas_q_aligned on Wally DUT..."
# Expected to pass normally, exit 0 and NOT have "Watch Dog" in log
timeout 5s $VTESTBENCH +ElfFile=$TEST_DIR/build/test_zacas_q_aligned.elf > $TEST_DIR/logs/test_zacas_q_aligned_dut.log 2>&1 || true
if grep -q "FAILURE: Watch Dog" $TEST_DIR/logs/test_zacas_q_aligned_dut.log; then
    echo "Wally failed on positive control test_zacas_q_aligned (Watch Dog triggered)"
    cat $TEST_DIR/logs/test_zacas_q_aligned_dut.log
    exit 2
fi

echo "Running test_zacas_q_unaligned on Wally DUT (EXPECTED TO FAIL)..."
timeout 5s $VTESTBENCH +ElfFile=$TEST_DIR/build/test_zacas_q_unaligned.elf > $TEST_DIR/logs/test_zacas_q_unaligned_dut.log 2>&1 || true
if ! grep -q "FAILURE: Watch Dog Time Out triggered" $TEST_DIR/logs/test_zacas_q_unaligned_dut.log; then
    echo "ERROR: DUT passed the unaligned test instead of trapping/failing! Bug is either not present or fixed."
    cat $TEST_DIR/logs/test_zacas_q_unaligned_dut.log
    exit 0
fi

echo "Running test_zacas_q_unaligned_byte on Wally DUT (EXPECTED TO FAIL)..."
timeout 5s $VTESTBENCH +ElfFile=$TEST_DIR/build/test_zacas_q_unaligned_byte.elf > $TEST_DIR/logs/test_zacas_q_unaligned_byte_dut.log 2>&1 || true
if ! grep -q "FAILURE: Watch Dog Time Out triggered" $TEST_DIR/logs/test_zacas_q_unaligned_byte_dut.log; then
    echo "ERROR: DUT passed the unaligned byte test instead of trapping/failing!"
    cat $TEST_DIR/logs/test_zacas_q_unaligned_byte_dut.log
    exit 0
fi

echo "Mismatch confirmed: DUT failed to trap and triggered Watchdog Time Out."
exit 1
