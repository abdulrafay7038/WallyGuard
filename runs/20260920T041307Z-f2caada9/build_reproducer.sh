#!/bin/bash
set -e
export WALLY=/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared
export PATH=$WALLY/bin:$PATH
export TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260920T041307Z-f2caada9

mkdir -p $TEST_DIR/build

riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -mcmodel=medany -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld -I$TEST_DIR/tests $TEST_DIR/build/test.S -o $TEST_DIR/build/test.elf
$WALLY/bin/elf2hex $TEST_DIR/build/test.elf $TEST_DIR/build/test.elf.memfile
riscv64-unknown-elf-objdump -S -D $TEST_DIR/build/test.elf > $TEST_DIR/build/test.elf.objdump
$WALLY/bin/extractFunctionRadix.sh $TEST_DIR/build/test.elf.objdump

riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -mcmodel=medany -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld -I$TEST_DIR/tests $TEST_DIR/build/control.S -o $TEST_DIR/build/control.elf
$WALLY/bin/elf2hex $TEST_DIR/build/control.elf $TEST_DIR/build/control.elf.memfile
riscv64-unknown-elf-objdump -S -D $TEST_DIR/build/control.elf > $TEST_DIR/build/control.elf.objdump
$WALLY/bin/extractFunctionRadix.sh $TEST_DIR/build/control.elf.objdump
