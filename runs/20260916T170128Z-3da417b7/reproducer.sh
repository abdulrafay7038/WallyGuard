#!/bin/bash
set -e

# The harness starts us at the worktree root
WALLY=$(pwd)
# Derive TEST_DIR from the script's location
TEST_DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)

echo "WALLY root is $WALLY"
echo "TEST_DIR is $TEST_DIR"

# Compilers and tools
GCC=/home/rafay/riscv/bin/riscv64-unknown-elf-gcc
OBJCOPY=/home/rafay/riscv/bin/riscv64-unknown-elf-objcopy
SPIKE=/home/rafay/riscv/bin/spike
ELF2HEX=$WALLY/bin/elf2hex

cd $WALLY

# Ensure test_dir directories exist
mkdir -p $TEST_DIR/build $TEST_DIR/logs

# Build tests
for TEST in test_mhpmevent_write test_mhpmevent_cross test_positive_control; do
    echo "Building $TEST..."
    $GCC -march=rv64gc -mabi=lp64d -nostdlib -nostartfiles \
         -T $WALLY/tests/riscof/spike/env/link.ld \
         $TEST_DIR/tests/$TEST.S -o $TEST_DIR/build/$TEST.elf || { echo "GCC failed on $TEST"; exit 2; }
    
    $ELF2HEX $TEST_DIR/build/$TEST.elf $TEST_DIR/build/$TEST.elf.memfile || { echo "ELF2HEX failed on $TEST"; exit 2; }
done

# Run on Spike (Oracle)
for TEST in test_mhpmevent_write test_mhpmevent_cross test_positive_control; do
    echo "Running $TEST on Spike..."
    # Spike should return 0 (success)
    $SPIKE --isa=rv64gc -m0x80000000:0x800000 $TEST_DIR/build/$TEST.elf > $TEST_DIR/logs/$TEST.spike.log 2>&1 || { echo "Spike failed on $TEST. Oracle mismatch/tool error."; exit 2; }
done

# Run on Wally DUT
DUT=$WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench
if [ ! -f "$DUT" ]; then
    echo "Vtestbench not found at $DUT"
    exit 2
fi

MISMATCH=0

echo "Running test_positive_control on Wally..."
$DUT +ElfFile=$TEST_DIR/build/test_positive_control.elf > $TEST_DIR/logs/test_positive_control.dut.log 2>&1 || true
if grep -q "Assertion failed: Program fetched illegal instruction" $TEST_DIR/logs/test_positive_control.dut.log || grep -q "Watch Dog Time Out" $TEST_DIR/logs/test_positive_control.dut.log; then
    echo "Control test failed on Wally DUT! This means the baseline is broken."
    cat $TEST_DIR/logs/test_positive_control.dut.log
    exit 2
fi

echo "Running test_mhpmevent_write on Wally..."
$DUT +ElfFile=$TEST_DIR/build/test_mhpmevent_write.elf > $TEST_DIR/logs/test_mhpmevent_write.dut.log 2>&1 || true
if grep -q "Assertion failed: Program fetched illegal instruction" $TEST_DIR/logs/test_mhpmevent_write.dut.log || grep -q "Watch Dog Time Out" $TEST_DIR/logs/test_mhpmevent_write.dut.log; then
    echo "Bug reproduced successfully in write test!"
    MISMATCH=1
fi

echo "Running test_mhpmevent_cross on Wally..."
$DUT +ElfFile=$TEST_DIR/build/test_mhpmevent_cross.elf > $TEST_DIR/logs/test_mhpmevent_cross.dut.log 2>&1 || true
if grep -q "Assertion failed: Program fetched illegal instruction" $TEST_DIR/logs/test_mhpmevent_cross.dut.log || grep -q "Watch Dog Time Out" $TEST_DIR/logs/test_mhpmevent_cross.dut.log; then
    echo "Bug reproduced successfully in cross test too!"
    MISMATCH=1
fi

if [ $MISMATCH -eq 1 ]; then
    echo "DUT mismatches confirmed."
    exit 1
else
    echo "DUT matches Oracle. Bug NOT reproduced or already fixed."
    exit 0
fi
