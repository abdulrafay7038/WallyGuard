#!/bin/bash
set -e

TEST_DIR="/home/rafay/miniconda3/WallyGuard2/runs/20260917T052633Z-c34886a4"
WALLY="/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared"
SPIKE="/home/rafay/riscv/bin/spike"
GCC="/home/rafay/riscv/bin/riscv64-unknown-elf-gcc"
ELF2HEX="$WALLY/bin/elf2hex"
VTESTBENCH="$WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench"
LINK_LD="$WALLY/tests/riscof/spike/env/link.ld"

mkdir -p $TEST_DIR/tests $TEST_DIR/build $TEST_DIR/logs

# Compile tests
for test in pmp_control pmp_load_cross pmp_store_cross; do
    echo "Compiling $test..."
    $GCC -march=rv64gc -mabi=lp64d -mcmodel=medany -static -std=gnu99 -O2 \
         -ffast-math -fno-common -fno-builtin-printf -fno-tree-loop-distribute-patterns \
         -nostdlib -nostartfiles -lm -lgcc -T $LINK_LD \
         $TEST_DIR/tests/test_${test}.S -o $TEST_DIR/build/test_${test}.elf || exit 2
    
    $ELF2HEX $TEST_DIR/build/test_${test}.elf $TEST_DIR/build/test_${test}.elf.memfile || exit 2
done

# Run on Spike
echo "Running on Spike..."
for test in pmp_control pmp_load_cross pmp_store_cross; do
    timeout 5s $SPIKE --isa=rv64gc $TEST_DIR/build/test_${test}.elf > $TEST_DIR/logs/spike_${test}.log 2>&1 || {
        echo "Spike failed on $test"
        exit 2
    }
done

# Run on Wally DUT
echo "Running on Wally DUT..."
# Control should pass
$VTESTBENCH +ElfFile=$TEST_DIR/build/test_pmp_control.elf > $TEST_DIR/logs/wally_pmp_control.log 2>&1 || true
if grep -q "FAILURE\|Assertion failed" $TEST_DIR/logs/wally_pmp_control.log; then
    echo "Wally DUT failed positive control (pmp_control)"
    exit 2
fi

MISMATCH=0

# Load cross should fail (it will trigger watchdog which exits 0 but prints FAILURE)
$VTESTBENCH +ElfFile=$TEST_DIR/build/test_pmp_load_cross.elf > $TEST_DIR/logs/wally_pmp_load_cross.log 2>&1 || true
if grep -q "FAILURE\|Assertion failed" $TEST_DIR/logs/wally_pmp_load_cross.log; then
    echo "Wally DUT correctly failed (or mismatch observed via watchdog) on load_cross."
    MISMATCH=1
fi

# Store cross should fail
$VTESTBENCH +ElfFile=$TEST_DIR/build/test_pmp_store_cross.elf > $TEST_DIR/logs/wally_pmp_store_cross.log 2>&1 || true
if grep -q "FAILURE\|Assertion failed" $TEST_DIR/logs/wally_pmp_store_cross.log; then
    echo "Wally DUT correctly failed (or mismatch observed via watchdog) on store_cross."
    MISMATCH=1
fi

if [ $MISMATCH -eq 1 ]; then
    echo "Mismatch confirmed. Spike passed cleanly, DUT Watchdog Time Out (failed to trap)."
    exit 1
fi

echo "DUT patched. Matches Spike behavior."
exit 0
