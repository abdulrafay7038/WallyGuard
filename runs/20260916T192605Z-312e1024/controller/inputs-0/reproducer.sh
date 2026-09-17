#!/bin/bash
set -u

WALLY="/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared"
TEST_DIR="/home/rafay/miniconda3/WallyGuard2/runs/20260916T192605Z-312e1024"

GCC="/home/rafay/riscv/bin/riscv64-unknown-elf-gcc"
SPIKE="/home/rafay/riscv/bin/spike"

cd "$WALLY"

# Build ELFs
echo "Building binaries..."
$GCC -march=rv64gc_zacas -mabi=lp64d -nostdlib -nostartfiles -T tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_zacas_rd1_hazard.S -o $TEST_DIR/build/test_zacas_rd1_hazard.elf || exit 2
$GCC -march=rv64gc_zacas -mabi=lp64d -nostdlib -nostartfiles -T tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_zacas_rd1_control.S -o $TEST_DIR/build/test_zacas_rd1_control.elf || exit 2
$GCC -march=rv64gc_zacas -mabi=lp64d -nostdlib -nostartfiles -T tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_zacas_rd0_hazard.S -o $TEST_DIR/build/test_zacas_rd0_hazard.elf || exit 2

echo "Running Spike oracle..."
timeout 5s $SPIKE --isa=rv64gc_zacas $TEST_DIR/build/test_zacas_rd1_hazard.elf || exit 2
timeout 5s $SPIKE --isa=rv64gc_zacas $TEST_DIR/build/test_zacas_rd1_control.elf || exit 2
timeout 5s $SPIKE --isa=rv64gc_zacas $TEST_DIR/build/test_zacas_rd0_hazard.elf || exit 2

echo "Running Wally DUT..."
VTESTBENCH="sim/verilator/wkdir/rv64gc_testbench/Vtestbench"

if [ ! -f "$VTESTBENCH" ]; then
    echo "Building Verilator testbench..."
    make -C sim/verilator compile WALLYCONF=rv64gc TESTBENCH=testbench || exit 2
fi

echo "Running positive control..."
if ! ./$VTESTBENCH +ElfFile=$TEST_DIR/build/test_zacas_rd1_control.elf > $TEST_DIR/logs/control.log 2>&1; then
    if grep -q "twice in a row" $TEST_DIR/logs/control.log || grep -q "Watch Dog Time Out" $TEST_DIR/logs/control.log; then
        echo "Error: Positive control failed."
        cat $TEST_DIR/logs/control.log
        exit 2
    fi
fi
if grep -q "twice in a row" $TEST_DIR/logs/control.log || grep -q "Watch Dog Time Out" $TEST_DIR/logs/control.log; then
    echo "Error: Positive control failed (watchdog)."
    cat $TEST_DIR/logs/control.log
    exit 2
fi

echo "Running negative control..."
if ! ./$VTESTBENCH +ElfFile=$TEST_DIR/build/test_zacas_rd0_hazard.elf > $TEST_DIR/logs/negative_control.log 2>&1; then
    if grep -q "twice in a row" $TEST_DIR/logs/negative_control.log || grep -q "Watch Dog Time Out" $TEST_DIR/logs/negative_control.log; then
        echo "Error: Negative control failed."
        cat $TEST_DIR/logs/negative_control.log
        exit 2
    fi
fi
if grep -q "twice in a row" $TEST_DIR/logs/negative_control.log || grep -q "Watch Dog Time Out" $TEST_DIR/logs/negative_control.log; then
    echo "Error: Negative control failed (watchdog)."
    cat $TEST_DIR/logs/negative_control.log
    exit 2
fi


echo "Running hazard reproducer..."
./$VTESTBENCH +ElfFile=$TEST_DIR/build/test_zacas_rd1_hazard.elf > $TEST_DIR/logs/hazard.log 2>&1
RET=$?

if grep -q "twice in a row" $TEST_DIR/logs/hazard.log || grep -q "Watch Dog Time Out" $TEST_DIR/logs/hazard.log || [ $RET -eq 134 ] || [ $RET -eq 1 ]; then
    echo "Success: Bug reproduced."
    exit 1
fi

if [ $RET -eq 0 ]; then
    echo "Failure: DUT passed the hazard test unexpectedly."
    exit 0
fi

echo "Unknown failure:"
cat $TEST_DIR/logs/hazard.log
exit 2
