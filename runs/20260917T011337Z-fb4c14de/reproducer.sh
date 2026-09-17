#!/bin/bash
set -e

export PATH="$WALLY/bin:/home/rafay/riscv/bin:$PATH"
export WALLY="/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared"
TEST_DIR="/home/rafay/miniconda3/WallyGuard2/runs/20260917T011337Z-fb4c14de"
VTESTBENCH="$WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench"

# Exit with code 2 on any build failure
trap 'exit 2' ERR

cd "$TEST_DIR"

# Build all three tests
for test_name in test_sfence_inval_ir_global test_sfence_vma_control test_sfence_inval_ir_nonglobal; do
    riscv64-unknown-elf-gcc -mno-relax -march=rv64gc_svinval -mabi=lp64d -nostdlib -nostartfiles \
        -T $WALLY/tests/riscof/spike/env/link.ld \
        tests/${test_name}.S -o build/${test_name}.elf > logs/build_${test_name}.log 2>&1
done

# Turn off the exit-on-error trap for execution since we expect a failure
trap - ERR

run_wally() {
    local elf=$1
    local log=$2
    timeout 10s $VTESTBENCH +ElfFile=$elf > $log 2>&1
    return $?
}

echo "Running Positive Control (sfence.vma)"
run_wally build/test_sfence_vma_control.elf logs/run_control.log
res_control=$?
if [ $res_control -ne 0 ]; then
    echo "Positive control failed with $res_control. Expected 0."
    exit 2
fi

echo "Running Negative Control (sfence.inval.ir non-global)"
run_wally build/test_sfence_inval_ir_nonglobal.elf logs/run_nonglobal.log
res_nonglobal=$?
if [ $res_nonglobal -ne 0 ]; then
    echo "Negative control failed with $res_nonglobal. Expected 0."
    exit 2
fi

echo "Running Bug Reproducer (sfence.inval.ir global)"
run_wally build/test_sfence_inval_ir_global.elf logs/run_global.log
res_global=$?

# We expect the watchdog abort to trigger, which typically results in a nonzero exit code (e.g. 134 or timeout)
if [ $res_global -ne 0 ]; then
    if grep -q "FAILURE: Watch Dog Time Out" logs/run_global.log; then
        echo "Bug successfully reproduced: sfence.inval.ir failed to invalidate global PTE."
        exit 1
    else
        echo "Reproducer failed with unexpected error."
        exit 2
    fi
else
    echo "Bug NOT reproduced. The reproducer passed cleanly."
    exit 0
fi
