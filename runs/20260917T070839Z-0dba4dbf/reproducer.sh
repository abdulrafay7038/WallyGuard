#!/bin/bash
set -e

TEST_DIR="/home/rafay/miniconda3/WallyGuard2/runs/20260917T070839Z-0dba4dbf"
WALLY="/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared"
GCC="/home/rafay/riscv/bin/riscv64-unknown-elf-gcc"
SPIKE="/home/rafay/riscv/bin/spike"
ELF2HEX="$WALLY/bin/elf2hex"
VTESTBENCH="$WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench"

CFLAGS="-march=rv64gc -mabi=lp64d -mcmodel=medany -static -std=gnu99 -O2 -ffast-math -fno-common -fno-builtin-printf -fno-tree-loop-distribute-patterns -nostdlib -nostartfiles -lm -lgcc -T $WALLY/tests/riscof/spike/env/link.ld"

# Compile tests
for TEST in pmp_control pmp_load_cross pmp_store_cross; do
    echo "Compiling $TEST..."
    $GCC $CFLAGS -o $TEST_DIR/build/test_${TEST}.elf $TEST_DIR/tests/test_${TEST}.S || { echo "Compilation failed"; exit 2; }
    $ELF2HEX $TEST_DIR/build/test_${TEST}.elf $TEST_DIR/build/test_${TEST}.elf.memfile || { echo "elf2hex failed"; exit 2; }
done

# Run Spike
echo "Running Spike..."
for TEST in pmp_control pmp_load_cross pmp_store_cross; do
    timeout 5s $SPIKE --isa=rv64gc $TEST_DIR/build/test_${TEST}.elf || { echo "Spike failed on $TEST"; exit 2; }
done
echo "Spike passed all tests."

# Run DUT on control
echo "Running DUT on control..."
timeout 10s $VTESTBENCH +ElfFile=$TEST_DIR/build/test_pmp_control.elf > $TEST_DIR/logs/dut_control.log 2>&1 || true
if grep -q -e "FAILURE" -e "Watch Dog Time Out" -e "Assertion failed" $TEST_DIR/logs/dut_control.log; then
    echo "DUT failed positive control test!"
    cat $TEST_DIR/logs/dut_control.log
    exit 2
fi
echo "DUT passed positive control test."

# Run DUT on reproducers
mismatch_found=0
for TEST in pmp_load_cross pmp_store_cross; do
    echo "Running DUT on $TEST..."
    timeout 10s $VTESTBENCH +ElfFile=$TEST_DIR/build/test_${TEST}.elf > $TEST_DIR/logs/dut_${TEST}.log 2>&1 || true
    if grep -q -e "FAILURE" -e "Watch Dog Time Out" $TEST_DIR/logs/dut_${TEST}.log; then
        echo "Mismatch confirmed: DUT failed to raise access fault on $TEST and hit Watch Dog Time Out."
        mismatch_found=1
    else
        echo "DUT passed $TEST (Patched?)"
    fi
done

if [ $mismatch_found -eq 1 ]; then
    echo "Bug confirmed on DUT."
    exit 1
fi

echo "DUT passed all tests cleanly. Bug not reproduced or fixed."
exit 0
