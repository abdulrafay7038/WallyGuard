#!/bin/bash
set -e

WALLY="/home/abdul/miniconda3/WallyGuard2/wally-worktrees/wally-shared"
TEST_DIR="/home/abdul/miniconda3/WallyGuard2/runs/20260914T034549Z-6bf0ee02"
export PATH="/opt/riscv/bin:$PATH"
export WALLY="$WALLY"

cd "$WALLY"

echo "Building Verilator models..."
make -C sim/verilator WALLYCONF=nodcache_rv64gc TESTBENCH=testbench > "$TEST_DIR/logs/build_nodcache.log" 2>&1 || { echo "Build failed"; exit 2; }
make -C sim/verilator WALLYCONF=rv64gc TESTBENCH=testbench > "$TEST_DIR/logs/build_rv64gc.log" 2>&1 || { echo "Build failed"; exit 2; }

echo "Compiling tests..."
mkdir -p "$TEST_DIR/build" "$TEST_DIR/logs"

for test in test_mxr_novm test_sum_novm test_mxr_vm; do
  riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostdlib -nostartfiles -T "$TEST_DIR/tests/linker.ld" "$TEST_DIR/tests/${test}.S" -o "$TEST_DIR/build/${test}.elf" > "$TEST_DIR/logs/gcc_${test}.log" 2>&1 || { echo "GCC failed for $test"; exit 2; }
  bin/elf2hex "$TEST_DIR/build/${test}.elf" "$TEST_DIR/build/${test}.elf.memfile" > "$TEST_DIR/logs/elf2hex_${test}.log" 2>&1 || { echo "elf2hex failed for $test"; exit 2; }
done

set +e

echo "Running tests..."

./sim/verilator/wkdir/nodcache_rv64gc_testbench/Vtestbench +ElfFile="$TEST_DIR/build/test_mxr_novm.elf" > "$TEST_DIR/logs/run_mxr_novm.log" 2>&1
MXR_NOVM_EXIT=$?

./sim/verilator/wkdir/nodcache_rv64gc_testbench/Vtestbench +ElfFile="$TEST_DIR/build/test_sum_novm.elf" > "$TEST_DIR/logs/run_sum_novm.log" 2>&1
SUM_NOVM_EXIT=$?

./sim/verilator/wkdir/rv64gc_testbench/Vtestbench +ElfFile="$TEST_DIR/build/test_mxr_vm.elf" > "$TEST_DIR/logs/run_mxr_vm.log" 2>&1
MXR_VM_EXIT=$?

echo "MXR_NOVM_EXIT=$MXR_NOVM_EXIT"
echo "SUM_NOVM_EXIT=$SUM_NOVM_EXIT"
echo "MXR_VM_EXIT=$MXR_VM_EXIT"

if [ "$MXR_NOVM_EXIT" -eq 134 ] && [ "$SUM_NOVM_EXIT" -eq 0 ] && [ "$MXR_VM_EXIT" -eq 0 ]; then
    echo "Bug successfully reproduced."
    exit 1
elif [ "$MXR_NOVM_EXIT" -eq 0 ] && [ "$SUM_NOVM_EXIT" -eq 0 ] && [ "$MXR_VM_EXIT" -eq 0 ]; then
    echo "Bug fixed."
    exit 0
else
    echo "Unexpected execution states or tool failure."
    exit 2
fi
