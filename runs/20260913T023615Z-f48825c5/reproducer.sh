#!/bin/bash
set -e
# Compile test
riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostdlib -T tester_llm/20260913T023615Z-f48825c5/tests/test.ld tester_llm/20260913T023615Z-f48825c5/tests/test.S -o tester_llm/20260913T023615Z-f48825c5/build/test.elf
riscv64-unknown-elf-objcopy -O binary tester_llm/20260913T023615Z-f48825c5/build/test.elf tester_llm/20260913T023615Z-f48825c5/build/test.bin

# Run Spike
echo "Running Spike..."
/opt/riscv/bin/spike --priv=m tester_llm/20260913T023615Z-f48825c5/build/test.elf > tester_llm/20260913T023615Z-f48825c5/logs/spike.log 2>&1 || SPIKE_EXIT=$?
SPIKE_EXIT=${SPIKE_EXIT:-0}
if [ $SPIKE_EXIT -ne 0 ]; then
    echo "Spike failed with exit code $SPIKE_EXIT. Output:"
    cat tester_llm/20260913T023615Z-f48825c5/logs/spike.log
    exit 2
fi

# Build Wally DUT
echo "Building Wally..."
make -C sim/verilator compile WALLYCONF=noU_rv64gc TESTBENCH=testbench > tester_llm/20260913T023615Z-f48825c5/logs/build.log 2>&1 || {
    echo "Wally build failed"
    cat tester_llm/20260913T023615Z-f48825c5/logs/build.log
    exit 2
}

# Run Wally
echo "Running Wally..."
./sim/verilator/wkdir/noU_rv64gc_testbench/Vtestbench +ElfFile=tester_llm/20260913T023615Z-f48825c5/build/test.elf > tester_llm/20260913T023615Z-f48825c5/logs/wally.log 2>&1 || WALLY_EXIT=$?
WALLY_EXIT=${WALLY_EXIT:-0}

if [ $WALLY_EXIT -ne 0 ]; then
    echo "Bug reproduced! Wally failed the test while Spike passed. Exit code: $WALLY_EXIT"
    cat tester_llm/20260913T023615Z-f48825c5/logs/wally.log
    exit 1
else
    echo "No bug. Wally passed the test."
    exit 0
fi
