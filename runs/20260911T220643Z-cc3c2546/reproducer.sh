#!/bin/bash
# Reproducer for CORE-V Wally RTL bug
# Exit 0: All tests pass (RTL correct)
# Exit 1: Bug reproduced (Test A fails on Verilator, everything else passes)
# Exit 2: Build or tool errors

DIR="tester_llm/20260911T220643Z-cc3c2546"
TESTS=("test_a" "test_b" "test_c" "test_d")

# Compile tests
for t in "${TESTS[@]}"; do
    riscv64-unknown-elf-gcc -march=rv64gc_zicboz -mabi=lp64d -nostartfiles -T examples/link/link.ld $DIR/tests/$t.S -o $DIR/build/$t.elf
    if [ $? -ne 0 ]; then
        echo "Failed to compile $t"
        exit 2
    fi
done

# Run Spike
for t in "${TESTS[@]}"; do
    /opt/riscv/bin/spike --isa=rv64gc_zicboz_svadu $DIR/build/$t.elf > $DIR/logs/spike_$t.log 2>&1
    ret=$?
    if [ $ret -ne 0 ]; then
        echo "Spike failed on $t"
        exit 2
    fi
done

# Run Verilator
declare -A v_ret
for t in "${TESTS[@]}"; do
    sim/verilator/wkdir/rv64gc_testbench/Vtestbench +TEST=$t +ElfFile=$DIR/build/$t.elf > $DIR/logs/verilator_$t.log 2>&1
    v_ret[$t]=$?
done

if [ ${v_ret["test_a"]} -ne 0 ] && [ ${v_ret["test_b"]} -eq 0 ] && [ ${v_ret["test_c"]} -eq 0 ] && [ ${v_ret["test_d"]} -eq 0 ]; then
    echo "Bug successfully reproduced: Test A failed (exit ${v_ret["test_a"]}), positive controls passed."
    exit 1
elif [ ${v_ret["test_a"]} -eq 0 ] && [ ${v_ret["test_b"]} -eq 0 ] && [ ${v_ret["test_c"]} -eq 0 ] && [ ${v_ret["test_d"]} -eq 0 ]; then
    echo "All tests passed. Bug not reproduced."
    exit 0
else
    echo "Unexpected Verilator behavior. Exit codes: A=${v_ret["test_a"]}, B=${v_ret["test_b"]}, C=${v_ret["test_c"]}, D=${v_ret["test_d"]}"
    exit 2
fi
