#!/bin/bash
set -e

export TEST_DIR="tester_llm/20260913T002730Z-c0bd0ca4"
export WALLY=$(pwd)

cp -a /home/abdul/miniconda3/WallyGuard2/cvw/config/deriv ./config/ || true
rm -rf addins/verilog-ethernet
ln -s /home/abdul/miniconda3/WallyGuard2/cvw/addins/verilog-ethernet addins/verilog-ethernet

# make -C sim/verilator compile WALLYCONF=rv64gc TESTBENCH=testbench || exit 2

tests=("test_a" "test_b" "test_c" "test_d")

bug_found=0
build_error=0

for t in "${tests[@]}"; do
    echo "Running test $t..."
    if ! /opt/riscv/bin/riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostartfiles -T examples/link/link.ld $TEST_DIR/tests/$t.S -o $TEST_DIR/build/$t.elf; then
        echo "Build failed for $t"
        build_error=1
        continue
    fi
    if ! bin/elf2hex $TEST_DIR/build/$t.elf $TEST_DIR/build/$t.elf.memfile; then
        echo "elf2hex failed for $t"
        build_error=1
        continue
    fi

    spike_ret=0
    timeout 5 /opt/riscv/bin/spike --isa=rv64gc $TEST_DIR/build/$t.elf > $TEST_DIR/logs/${t}_spike.log 2>&1 || spike_ret=$?
    
    wally_ret=0
    timeout 10 sim/verilator/wkdir/rv64gc_testbench/Vtestbench +TEST=$t +ElfFile=$TEST_DIR/build/$t.elf > $TEST_DIR/logs/${t}_wally.log 2>&1 || wally_ret=$?

    echo "Spike ret: $spike_ret, Wally ret: $wally_ret"
    
    if [ "$t" = "test_a" ] || [ "$t" = "test_b" ]; then
        if [ $spike_ret -eq 0 ] && [ $wally_ret -ne 0 ]; then
            echo "$t: BUG CONFIRMED (Spike passed, Wally failed/trapped)"
            bug_found=1
        elif [ $wally_ret -eq 0 ]; then
            echo "$t: NO BUG (Wally passed)"
        else
            echo "$t: OTHER BEHAVIOR (Spike=$spike_ret, Wally=$wally_ret)"
        fi
    else
        if [ $spike_ret -eq 0 ] && [ $wally_ret -eq 0 ]; then
            echo "$t: Control passed"
        else
            echo "$t: Control failed! Spike=$spike_ret, Wally=$wally_ret"
            build_error=1
        fi
    fi
done

if [ $build_error -ne 0 ]; then
    exit 2
elif [ $bug_found -ne 0 ]; then
    exit 1
else
    exit 0
fi
