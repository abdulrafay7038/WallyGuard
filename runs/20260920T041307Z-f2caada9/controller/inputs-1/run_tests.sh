#!/bin/bash
export WALLY=/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared
export WALLY_SPIKE=/home/rafay/riscv/bin/spike
export TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260920T041307Z-f2caada9

echo "--- Running control.elf on Spike ---"
timeout 30s "$WALLY_SPIKE" -m0x80000000:0x100000 --pc=0x80000000 $TEST_DIR/build/control.elf
echo "Spike exit: $?"

echo "--- Running test.elf on Spike ---"
timeout 30s "$WALLY_SPIKE" -m0x80000000:0x100000 --pc=0x80000000 $TEST_DIR/build/test.elf
echo "Spike exit: $?"

echo "--- Running control.elf on Wally ---"
timeout 60s $WALLY/bin/wsim rv64gc --sim verilator --elf $TEST_DIR/build/control.elf
echo "Wally exit: $?"

echo "--- Running test.elf on Wally ---"
timeout 60s $WALLY/bin/wsim rv64gc --sim verilator --elf $TEST_DIR/build/test.elf
echo "Wally exit: $?"
