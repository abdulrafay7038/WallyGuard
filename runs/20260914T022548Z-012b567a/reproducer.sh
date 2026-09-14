#!/bin/bash

test_dir="/home/abdul/miniconda3/WallyGuard2/runs/20260914T022548Z-012b567a"
mkdir -p "$test_dir/build" "$test_dir/logs"

GCC=/opt/riscv/bin/riscv64-unknown-elf-gcc
ELF2HEX=bin/elf2hex
SPIKE=/opt/riscv/bin/spike
WALLY_NOU=sim/verilator/wkdir/noU_rv64gc_testbench/Vtestbench
WALLY_RV64=sim/verilator/wkdir/rv64gc_testbench/Vtestbench

# Compile and convert
for test in test_mpp_reset test_mpp_warl test_positive_control; do
    $GCC -march=rv64gc -mabi=lp64d -nostdlib -nostartfiles -T "$test_dir/tests/linker.ld" "$test_dir/tests/$test.S" -o "$test_dir/build/$test.elf" 2> "$test_dir/logs/${test}_gcc.log" || exit 2
    $ELF2HEX "$test_dir/build/$test.elf" "$test_dir/build/$test.elf.memfile" 2> "$test_dir/logs/${test}_elf2hex.log" || exit 2
done

# Run Spike oracle
timeout 5s $SPIKE --priv=m -m0x80000000:0x100000 "$test_dir/build/test_mpp_reset.elf" > "$test_dir/logs/spike_reset.log" 2>&1
spike_reset_rc=$?

timeout 5s $SPIKE --priv=m -m0x80000000:0x100000 "$test_dir/build/test_mpp_warl.elf" > "$test_dir/logs/spike_warl.log" 2>&1
spike_warl_rc=$?

timeout 5s $SPIKE --isa=rv64gc -m0x80000000:0x100000 "$test_dir/build/test_positive_control.elf" > "$test_dir/logs/spike_pos.log" 2>&1
spike_pos_rc=$?

if [ $spike_reset_rc -ne 0 ] || [ $spike_warl_rc -ne 0 ] || [ $spike_pos_rc -ne 0 ]; then
    echo "Spike oracle failed"
    exit 2
fi

# Run Wally
timeout 10s $WALLY_NOU +ElfFile="$test_dir/build/test_mpp_reset.elf" > "$test_dir/logs/wally_reset.log" 2>&1
wally_reset_rc=$?

timeout 10s $WALLY_NOU +ElfFile="$test_dir/build/test_mpp_warl.elf" > "$test_dir/logs/wally_warl.log" 2>&1
wally_warl_rc=$?

timeout 10s $WALLY_RV64 +ElfFile="$test_dir/build/test_positive_control.elf" > "$test_dir/logs/wally_pos.log" 2>&1
wally_pos_rc=$?

# Evaluate results
if [ $wally_reset_rc -eq 134 ] && [ $wally_pos_rc -eq 0 ]; then
    echo "Bug reproduced successfully!"
    exit 1
elif [ $wally_reset_rc -eq 0 ] && [ $wally_warl_rc -eq 0 ] && [ $wally_pos_rc -eq 0 ]; then
    echo "Wally passed all tests"
    exit 0
else
    echo "Unexpected behavior"
    exit 2
fi
