#!/bin/bash
set -e

WALLY="${WALLY:-/home/abdul/miniconda3/WallyGuard2/wally-worktrees/wally-shared}"
TEST_DIR="/home/abdul/miniconda3/WallyGuard2/runs/20260914T034549Z-6bf0ee02"

mkdir -p "$TEST_DIR/build" "$TEST_DIR/logs"

# Compile the tests
compile_test() {
    local name=$1
    /opt/riscv/bin/riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostdlib -nostartfiles -T "$TEST_DIR/tests/linker.ld" "$TEST_DIR/tests/${name}.S" -o "$TEST_DIR/build/${name}.elf" || { echo "Compilation failed for $name"; exit 2; }
    "$WALLY/bin/elf2hex" "$TEST_DIR/build/${name}.elf" "$TEST_DIR/build/${name}.mem" || { echo "elf2hex failed for $name"; exit 2; }
}

compile_test "test_mxr_novm"
compile_test "test_sum_novm"
compile_test "test_mxr_vm"

# Rebuild testbenches if needed
cd "$WALLY"
make -C sim/verilator WALLYCONF=nodcache_rv64gc TESTBENCH=testbench > "$TEST_DIR/logs/build_nodcache.log" 2>&1 || { echo "Build failed for nodcache_rv64gc"; cat "$TEST_DIR/logs/build_nodcache.log"; exit 2; }
make -C sim/verilator WALLYCONF=rv64gc TESTBENCH=testbench > "$TEST_DIR/logs/build_rv64gc.log" 2>&1 || { echo "Build failed for rv64gc"; cat "$TEST_DIR/logs/build_rv64gc.log"; exit 2; }

# Run nodcache_rv64gc with test_mxr_novm
set +e
"$WALLY/sim/verilator/wkdir/nodcache_rv64gc_testbench/Vtestbench" +ElfFile="$TEST_DIR/build/test_mxr_novm.elf" > "$TEST_DIR/logs/run_mxr_novm.log" 2>&1
mxr_novm_rc=$?
set -e

# Run nodcache_rv64gc with test_sum_novm
set +e
"$WALLY/sim/verilator/wkdir/nodcache_rv64gc_testbench/Vtestbench" +ElfFile="$TEST_DIR/build/test_sum_novm.elf" > "$TEST_DIR/logs/run_sum_novm.log" 2>&1
sum_novm_rc=$?
set -e

# Run rv64gc with test_mxr_vm
set +e
"$WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench" +ElfFile="$TEST_DIR/build/test_mxr_vm.elf" > "$TEST_DIR/logs/run_mxr_vm.log" 2>&1
mxr_vm_rc=$?
set -e

# Analysis
echo "mxr_novm_rc=$mxr_novm_rc sum_novm_rc=$sum_novm_rc mxr_vm_rc=$mxr_vm_rc"

# Check for fixed state
if [ $mxr_novm_rc -eq 0 ] && [ $sum_novm_rc -eq 0 ] && [ $mxr_vm_rc -eq 0 ]; then
    echo "Bug fixed."
    exit 0
fi

# Check for expected bug state
if [ $mxr_novm_rc -eq 134 ] && [ $sum_novm_rc -eq 0 ] && [ $mxr_vm_rc -eq 0 ]; then
    echo "Bug successfully reproduced."
    exit 1
fi

echo "Unexpected simulation results."
exit 2
