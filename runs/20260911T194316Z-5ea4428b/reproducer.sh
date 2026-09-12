#!/bin/bash
set -e

WORK_DIR=$(pwd)
TEST_DIR="tester_llm/20260911T194316Z-5ea4428b"
BUILD_DIR="${TEST_DIR}/build"
LOG_DIR="${TEST_DIR}/logs"
mkdir -p "${BUILD_DIR}" "${LOG_DIR}"

for test in a b c d; do
    riscv64-unknown-elf-gcc -T examples/link/link.ld -nostdlib -nostartfiles -Wa,-march=rv64gc -Wa,-mabi=lp64d "${TEST_DIR}/test_${test}.S" -o "${BUILD_DIR}/test_${test}.elf" > "${LOG_DIR}/build_${test}.log" 2>&1 || exit 2
done

for test in a b c d; do
    /opt/riscv/bin/spike --isa=rv64gc_svadu "${BUILD_DIR}/test_${test}.elf" > "${LOG_DIR}/spike_${test}.log" 2>&1
    RET=$?
    if [ $RET -ne 0 ]; then
        echo "Spike failed on test_${test}.elf with exit code $RET"
        exit 2
    fi
done

make -C sim/verilator TESTBENCH=testbench WALLYCONF=rv64gc -j$(nproc) > "${LOG_DIR}/verilator_build.log" 2>&1 || exit 2
DUT="sim/verilator/wkdir/rv64gc_testbench/Vtestbench"

for test in b c d; do
    set +e
    ${DUT} +ElfFile="${BUILD_DIR}/test_${test}.elf" > "${LOG_DIR}/verilator_${test}.log" 2>&1
    RET=$?
    set -e
    if [ $RET -ne 0 ]; then
        echo "Verilator failed on positive control test_${test}.elf with exit code $RET"
        exit 2
    fi
done

set +e
${DUT} +ElfFile="${BUILD_DIR}/test_a.elf" > "${LOG_DIR}/verilator_a.log" 2>&1
RET=$?
set -e

if [ $RET -eq 134 ]; then
    echo "Bug reproduced successfully!"
    exit 1
elif [ $RET -eq 0 ]; then
    echo "Bug fixed."
    exit 0
else
    echo "Unexpected exit code $RET"
    exit 2
fi
