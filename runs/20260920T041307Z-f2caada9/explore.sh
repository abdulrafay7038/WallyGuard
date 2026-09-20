#!/bin/bash
export WALLY=/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared
export PATH=$WALLY/bin:$PATH
export TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260920T041307Z-f2caada9
mkdir -p $TEST_DIR/build $TEST_DIR/logs $TEST_DIR/tests
ls -l $WALLY/bin
