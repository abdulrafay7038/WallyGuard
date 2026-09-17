#!/bin/bash
TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260917T024036Z-1b59815d
WALLY=/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared
GCC=/home/rafay/riscv/bin/riscv64-unknown-elf-gcc
SPIKE=/home/rafay/riscv/bin/spike
for t in test_sfence_inval_ir_global test_sfence_vma_control test_sfence_inval_ir_nonglobal; do
  $GCC -march=rv64gc_svinval -mabi=lp64d -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/$t.S -o $TEST_DIR/build/$t.elf || exit 2
  timeout 5s $SPIKE --isa=rv64gc_svinval $TEST_DIR/build/$t.elf
  if [ $? -ne 0 ]; then exit 2; fi
done
cd $WALLY/sim/verilator/wkdir/rv64gc_testbench/
timeout 5s ./Vtestbench +ElfFile=$TEST_DIR/build/test_sfence_vma_control.elf > $TEST_DIR/logs/vma_control.log 2>&1
if grep -q -E "FAILURE|Watch Dog" $TEST_DIR/logs/vma_control.log; then exit 2; fi
timeout 5s ./Vtestbench +ElfFile=$TEST_DIR/build/test_sfence_inval_ir_nonglobal.elf > $TEST_DIR/logs/nonglobal.log 2>&1
if grep -q -E "FAILURE|Watch Dog" $TEST_DIR/logs/nonglobal.log; then exit 2; fi
timeout 5s ./Vtestbench +ElfFile=$TEST_DIR/build/test_sfence_inval_ir_global.elf > $TEST_DIR/logs/run_global.log 2>&1
if grep -q -E "FAILURE|Watch Dog" $TEST_DIR/logs/run_global.log; then exit 1; fi
exit 0
