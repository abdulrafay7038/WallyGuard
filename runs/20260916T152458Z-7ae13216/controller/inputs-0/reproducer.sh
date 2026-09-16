#!/bin/bash
export PATH="/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared/bin:/home/rafay/riscv/bin:$PATH"

TEST_DIR="/home/rafay/miniconda3/WallyGuard2/runs/20260916T152458Z-7ae13216"
WALLY="/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared"

cd $WALLY

echo "Compiling tests..."
riscv64-unknown-elf-gcc -march=rv64gc_zacas -mabi=lp64d -nostdlib -nostartfiles \
  -T $WALLY/tests/riscof/spike/env/link.ld \
  $TEST_DIR/tests/test_zacas_hazard.S -o $TEST_DIR/build/test_zacas_hazard.elf || exit 2

riscv64-unknown-elf-gcc -march=rv64gc_zacas -mabi=lp64d -nostdlib -nostartfiles \
  -T $WALLY/tests/riscof/spike/env/link.ld \
  $TEST_DIR/tests/test_zacas_control.S -o $TEST_DIR/build/test_zacas_control.elf || exit 2

echo "Running Spike oracle..."
timeout 5s spike --isa=rv64gc_zacas $TEST_DIR/build/test_zacas_control.elf
if [ $? -ne 0 ]; then
  echo "Spike failed on control test"
  exit 2
fi

timeout 5s spike --isa=rv64gc_zacas $TEST_DIR/build/test_zacas_hazard.elf
if [ $? -ne 0 ]; then
  echo "Spike failed on hazard test"
  exit 2
fi

echo "Rebuilding Wally DUT..."
TB_FILES="$(ls $WALLY/testbench/common/*.sv | grep -v 'riscvassertions.sv' | tr '\n' ' ') $TEST_DIR/tests/riscvassertions.sv"

make -C sim/verilator compile WALLYCONF=rv64gc TESTBENCH=testbench \
  SOURCES="$WALLY/src/cvw.sv $WALLY/testbench/testbench.sv $TB_FILES $WALLY/src/*/*.sv $WALLY/src/*/*/*.sv $WALLY/addins/verilog-ethernet/*/*.sv $WALLY/addins/verilog-ethernet/*/*/*/*.sv"
if [ $? -ne 0 ]; then
  echo "Wally build failed"
  exit 2
fi

echo "Running Wally DUT on control test..."
./sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_zacas_control.elf > $TEST_DIR/logs/control.log 2>&1
CTRL_EXIT=$?
if [ $CTRL_EXIT -ne 0 ]; then
  echo "Wally failed on control test with exit code $CTRL_EXIT"
  cat $TEST_DIR/logs/control.log
  exit 2
fi

echo "Running Wally DUT on bug test..."
./sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile=$TEST_DIR/build/test_zacas_hazard.elf > $TEST_DIR/logs/hazard.log 2>&1
HAZ_EXIT=$?

grep -q "Assertion failed in testbench: Program fetched illegal instruction 0x00000000 twice in a row" $TEST_DIR/logs/hazard.log
ASSERT_FAIL=$?

grep -q "Watch Dog Time Out triggered" $TEST_DIR/logs/hazard.log
WD_FAIL=$?

if [ $HAZ_EXIT -eq 134 ] || [ $ASSERT_FAIL -eq 0 ] || [ $WD_FAIL -eq 0 ]; then
  echo "Bug confirmed: data hazard on amocas compare operand!"
  cat $TEST_DIR/logs/hazard.log
  exit 1
elif [ $HAZ_EXIT -eq 0 ]; then
  echo "DUT correct/fixed."
  exit 0
else
  echo "Wally failed with unexpected exit code $HAZ_EXIT"
  cat $TEST_DIR/logs/hazard.log
  exit 2
fi
