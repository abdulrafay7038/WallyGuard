#!/bin/bash
TEST_DIR="/home/abdul/miniconda3/WallyGuard2/runs/20260914T034549Z-6bf0ee02"
WALLY="/home/abdul/miniconda3/WallyGuard2/wally-worktrees/wally-shared"
BUILD_DIR="$TEST_DIR/build"
LOGS_DIR="$TEST_DIR/logs"

cd "$WALLY"

NODCACHE_TB="sim/verilator/wkdir/nodcache_rv64gc_testbench/Vtestbench"
RV64GC_TB="sim/verilator/wkdir/rv64gc_testbench/Vtestbench"

if [ ! -x "$NODCACHE_TB" ]; then
    echo "Error: nodcache_rv64gc_testbench not found or not executable"
    exit 2
fi

if [ ! -x "$RV64GC_TB" ]; then
    echo "Error: rv64gc_testbench not found or not executable"
    exit 2
fi

GCC="/opt/riscv/bin/riscv64-unknown-elf-gcc"
LINKER="$TEST_DIR/tests/linker.ld"

for TEST in test_mxr_novm test_sum_novm test_mxr_vm; do
    $GCC -march=rv64gc -mabi=lp64d -nostdlib -nostartfiles -T "$LINKER" "$TEST_DIR/tests/$TEST.S" -o "$BUILD_DIR/$TEST.elf"
    if [ $? -ne 0 ]; then
        echo "Compilation failed for $TEST"
        exit 2
    fi
    bin/elf2hex "$BUILD_DIR/$TEST.elf" "$BUILD_DIR/$TEST.mem"
done

echo "Running positive control (mxr_vm on rv64gc)..."
$RV64GC_TB +ElfFile="$BUILD_DIR/test_mxr_vm.elf" > "$LOGS_DIR/run_mxr_vm.log" 2>&1
RES_VM=$?

echo "Running negative control (sum_novm on nodcache_rv64gc)..."
$NODCACHE_TB +ElfFile="$BUILD_DIR/test_sum_novm.elf" > "$LOGS_DIR/run_sum_novm.log" 2>&1
RES_SUM=$?

echo "Running bug reproducer (mxr_novm on nodcache_rv64gc)..."
$NODCACHE_TB +ElfFile="$BUILD_DIR/test_mxr_novm.elf" > "$LOGS_DIR/run_mxr_novm.log" 2>&1
RES_MXR=$?

echo "VM: $RES_VM, SUM: $RES_SUM, MXR: $RES_MXR"

if [ $RES_VM -ne 0 ]; then
    echo "Positive control failed! Exit code: $RES_VM"
    cat "$LOGS_DIR/run_mxr_vm.log"
    exit 2
fi

if [ $RES_SUM -ne 0 ]; then
    echo "Negative control failed! Exit code: $RES_SUM"
    cat "$LOGS_DIR/run_sum_novm.log"
    exit 2
fi

if [ $RES_MXR -eq 134 ]; then
    echo "Bug reproduced successfully."
    exit 1
elif [ $RES_MXR -eq 0 ]; then
    echo "Bug fixed."
    exit 0
else
    echo "Unexpected exit code for reproducer: $RES_MXR"
    cat "$LOGS_DIR/run_mxr_novm.log"
    exit 2
fi
