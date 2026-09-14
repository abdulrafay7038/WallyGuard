#!/bin/bash

WALLY_DIR="/home/abdul/miniconda3/WallyGuard2/wally-worktrees/wally-shared"
TEST_DIR="/home/abdul/miniconda3/WallyGuard2/runs/20260914T004119Z-9aa7d80b"

# Compile the test
/opt/riscv/bin/riscv64-unknown-elf-gcc -nostdlib -nostartfiles -T "$TEST_DIR/tests/linker.ld" "$TEST_DIR/tests/test_sfence_bare.S" -o "$TEST_DIR/build/test_sfence_bare.elf" -march=rv64gc -mabi=lp64d
if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 2
fi

# Run Spike
echo "Running Spike..."
timeout 5s /opt/riscv/bin/spike --isa=rv64gc -m0x80000000:0x100000 "$TEST_DIR/build/test_sfence_bare.elf" > "$TEST_DIR/logs/spike.log" 2>&1
SPIKE_EXIT=$?
echo "Spike exit code: $SPIKE_EXIT"
if [ $SPIKE_EXIT -ne 0 ]; then
    echo "Spike failed, check $TEST_DIR/logs/spike.log"
    exit 2
fi

# Run Wally (DUT)
echo "Running Wally..."
cd "$WALLY_DIR"
timeout 10s ./sim/verilator/wkdir/nodcache_rv64gc_testbench/Vtestbench +ElfFile="$TEST_DIR/build/test_sfence_bare.elf" > "$TEST_DIR/logs/wally.log" 2>&1
WALLY_EXIT=$?
echo "Wally exit code: $WALLY_EXIT"
cd "$TEST_DIR"

if [ $WALLY_EXIT -eq 0 ]; then
    echo "Wally executed successfully (DUT correct)."
    exit 0
elif [ $WALLY_EXIT -eq 134 ] || [ $WALLY_EXIT -eq 1 ] || [ $WALLY_EXIT -eq 124 ]; then
    echo "Bug reproduced: Wally failed with exit code $WALLY_EXIT while Spike succeeded."
    exit 1
else
    echo "Wally failed with unexpected exit code $WALLY_EXIT."
    exit 2
fi
