#!/bin/bash
set -ex
TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260919T193248Z-eb60e108
cd $TEST_DIR
mkdir -p build logs

export PATH=$WALLY/bin:$PATH

riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -mcmodel=medany -static -std=gnu99 -O2 \
    -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld \
    -I$TEST_DIR/tests \
    $TEST_DIR/tests/test.S -o $TEST_DIR/build/test.elf

riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -mcmodel=medany -static -std=gnu99 -O2 \
    -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld \
    -I$TEST_DIR/tests \
    $TEST_DIR/tests/control.S -o $TEST_DIR/build/control.elf

# Run Spike locally to check
spike --isa=rv64gc $TEST_DIR/build/test.elf
spike --isa=rv64gc $TEST_DIR/build/control.elf

# Run Wally locally to verify failure
$WALLY/bin/wsim rv64gc --sim verilator --elf $TEST_DIR/build/test.elf || true
$WALLY/bin/wsim rv64gc --sim verilator --elf $TEST_DIR/build/control.elf || true

