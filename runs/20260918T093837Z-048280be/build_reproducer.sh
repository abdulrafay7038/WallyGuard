#!/bin/bash
set -e
TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260918T093837Z-048280be
WALLY_CLEAN=$TEST_DIR/build/wally_clean
export WALLY=$WALLY_CLEAN
export PATH=$WALLY_CLEAN/bin:/home/rafay/riscv/bin:$PATH

for TEST in test_pmp_mmode_store_cross test_pmp_mmode_load_cross test_pmp_mmode_control; do
    riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostdlib -nostartfiles -T $WALLY_CLEAN/tests/riscof/spike/env/link.ld $TEST_DIR/tests/$TEST.S -o $TEST_DIR/build/$TEST.elf
done
