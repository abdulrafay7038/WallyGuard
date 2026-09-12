#!/bin/bash

DIR="tester_llm/20260911T220643Z-cc3c2546"
TESTS=("test_a" "test_b" "test_c" "test_d")

for t in "${TESTS[@]}"; do
    echo "Running Verilator on $t..."
    sim/verilator/wkdir/rv64gc_testbench/Vtestbench +TEST=$t +ElfFile=$DIR/build/$t.elf > $DIR/logs/verilator_$t.log 2>&1
    ret=$?
    echo "Verilator $t returned $ret"
done
