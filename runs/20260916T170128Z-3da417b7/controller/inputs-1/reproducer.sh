#!/bin/bash
TEST_DIR="/home/rafay/miniconda3/WallyGuard2/runs/20260916T170128Z-3da417b7"
WALLY="/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared"

# Compile tests
/home/rafay/riscv/bin/riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_mhpmevent_write.S -o $TEST_DIR/build/test_mhpmevent_write.elf || exit 2
/home/rafay/riscv/bin/riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_mhpmevent_cross.S -o $TEST_DIR/build/test_mhpmevent_cross.elf || exit 2
/home/rafay/riscv/bin/riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_positive_control.S -o $TEST_DIR/build/test_positive_control.elf || exit 2

cd $WALLY

if [ ! -f sim/verilator/wkdir/rv64gc_testbench/Vtestbench ]; then
  echo "Vtestbench not found! Cannot run tests."
  exit 2
fi

./sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_positive_control.elf > $TEST_DIR/logs/positive_control.log 2>&1
if grep -q -e "Watch Dog Time Out" -e "Assertion failed" -e "illegal instruction" $TEST_DIR/logs/positive_control.log; then
  echo "Control test failed unexpectedly with a fault!"
  cat $TEST_DIR/logs/positive_control.log
  exit 2
fi

set +e
./sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_mhpmevent_write.elf > $TEST_DIR/logs/wally.log 2>&1
RET=$?
set -e

if grep -q -e "Watch Dog Time Out" -e "Assertion failed" -e "illegal instruction" $TEST_DIR/logs/wally.log; then
  echo "Bug reproduced successfully in write test!"
  
  # Also run cross test for completeness
  ./sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_mhpmevent_cross.elf > $TEST_DIR/logs/cross.log 2>&1
  if grep -q -e "Watch Dog Time Out" -e "Assertion failed" -e "illegal instruction" $TEST_DIR/logs/cross.log; then
    echo "Bug reproduced successfully in cross test too!"
  fi
  
  exit 1
elif [ $RET -ne 0 ]; then
  echo "Unknown failure in write test (exit $RET):"
  cat $TEST_DIR/logs/wally.log
  exit 2
else
  echo "Test passed cleanly. Bug not reproduced."
  exit 0
fi
