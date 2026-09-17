#!/bin/bash
set -e
export TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260917T123710Z-9bc09998
export WALLY=/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared
export PATH=/home/rafay/riscv/bin:$PATH

mkdir -p $TEST_DIR/build
mkdir -p $TEST_DIR/logs

# Build all
for test in test_hptw_gigapage_misaligned test_hptw_megapage_misaligned test_control_aligned; do
    riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/$test.S -o $TEST_DIR/build/$test.elf
    $WALLY/bin/elf2hex $TEST_DIR/build/$test.elf $TEST_DIR/build/$test.elf.memfile
done

# Run Spike
echo "Running Spike..."
timeout 5s spike --isa=rv64gc_svadu $TEST_DIR/build/test_control_aligned.elf > $TEST_DIR/logs/spike_control.log 2>&1 || { echo "Spike control failed"; exit 2; }
timeout 5s spike --isa=rv64gc_svadu $TEST_DIR/build/test_hptw_gigapage_misaligned.elf > $TEST_DIR/logs/spike_giga.log 2>&1 || { echo "Spike giga failed"; exit 2; }
timeout 5s spike --isa=rv64gc_svadu $TEST_DIR/build/test_hptw_megapage_misaligned.elf > $TEST_DIR/logs/spike_mega.log 2>&1 || { echo "Spike mega failed"; exit 2; }

# Run Wally
echo "Running Wally..."
timeout 5s $WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_control_aligned.elf > $TEST_DIR/logs/wally_control.log 2>&1 || true
timeout 5s $WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_hptw_gigapage_misaligned.elf > $TEST_DIR/logs/wally_giga.log 2>&1 || true
timeout 5s $WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_hptw_megapage_misaligned.elf > $TEST_DIR/logs/wally_mega.log 2>&1 || true

# Check Control
if grep -q "FAILURE" $TEST_DIR/logs/wally_control.log; then
    echo "Wally control failed unexpectedly"
    exit 2
fi

# Check misaligned (expecting watchdog timeout failure)
# Verilator watchdog calls $finish, exits 0, but prints 'FAILURE: Watch Dog Time Out'
bug_found=0
if grep -q "FAILURE" $TEST_DIR/logs/wally_giga.log; then
    echo "Wally giga triggered failure as expected (bug reproduced)"
    bug_found=1
else
    echo "Wally giga passed unexpectedly or failed to print FAILURE"
fi

if grep -q "FAILURE" $TEST_DIR/logs/wally_mega.log; then
    echo "Wally mega triggered failure as expected (bug reproduced)"
    bug_found=1
else
    echo "Wally mega passed unexpectedly or failed to print FAILURE"
fi

if [ $bug_found -eq 1 ]; then
    echo "Bug successfully reproduced!"
    exit 1
else
    echo "Bug NOT reproduced. Tests passed on Wally."
    exit 0
fi
