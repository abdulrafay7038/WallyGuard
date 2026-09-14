#!/bin/bash
set -e
TEST_DIR="/home/abdul/miniconda3/WallyGuard2/runs/20260913T192411Z-04477c6a"

echo "Compiling test..."
/opt/riscv/bin/riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -mcmodel=medany -static -std=gnu99 -O2 -ffast-math -fno-common -fno-builtin-printf -nostdlib -nostartfiles -lm -lgcc -T "$TEST_DIR/tests/test.ld" "$TEST_DIR/tests/test_satp.S" -o "$TEST_DIR/build/test_satp.elf" > "$TEST_DIR/logs/gcc.log" 2>&1

echo "Running on Spike..."
/opt/riscv/bin/spike --isa=rv64gc "$TEST_DIR/build/test_satp.elf" > "$TEST_DIR/logs/spike.log" 2>&1

echo "Building Wally..."
make -C sim/verilator clean > /dev/null 2>&1
make -C sim/verilator compile WALLYCONF=nodcache_rv64gc TESTBENCH=testbench > "$TEST_DIR/logs/wally_build.log" 2>&1

echo "Running on Wally..."
set +e
./sim/verilator/wkdir/nodcache_rv64gc_testbench/Vtestbench +ElfFile="$TEST_DIR/build/test_satp.elf" > "$TEST_DIR/logs/wally_run.log" 2>&1
WALLY_EXIT=$?
set -e

if [ $WALLY_EXIT -eq 134 ]; then
    echo "Wally test failed (exit code 134) - Functional mismatch reproduced!"
    exit 1
elif [ $WALLY_EXIT -eq 0 ]; then
    echo "Wally test passed (exit code 0) - No bug found."
    exit 0
else
    echo "Wally exited with code $WALLY_EXIT. Tooling/test issue?"
    exit 2
fi
