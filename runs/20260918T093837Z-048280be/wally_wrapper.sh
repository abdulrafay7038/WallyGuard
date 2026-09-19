#!/bin/bash
TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260918T093837Z-048280be
WALLY_CLEAN=$TEST_DIR/build/wally_clean
export WALLY=$WALLY_CLEAN
export PATH=$WALLY_CLEAN/bin:/home/rafay/riscv/bin:$PATH
exec $TEST_DIR/build/rv64gc_testbench/Vtestbench +ElfFile="$1"
