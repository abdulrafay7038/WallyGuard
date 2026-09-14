#!/bin/bash
export TEST_DIR="tester_llm/20260912T210944Z-fd08ec05"

ln -sfn /home/abdul/miniconda3/WallyGuard2/cvw/config/deriv config/deriv
ln -sfn /home/abdul/miniconda3/WallyGuard2/cvw/addins/verilog-ethernet addins/verilog-ethernet
ln -sfn /home/abdul/miniconda3/WallyGuard2/cvw/tests/riscof/work tests/riscof/work

handle_error() {
    echo "Build or execution error (line $1)"
    exit 2
}
set -e
trap 'handle_error $LINENO' ERR

echo "Building DUT..."
make -C sim/verilator clean WALLYCONF=nodcache_rv64gc TESTBENCH=testbench > /dev/null 2>&1 || true
make -C sim/verilator compile WALLYCONF=nodcache_rv64gc TESTBENCH=testbench > $TEST_DIR/logs/build.log 2>&1

echo "Building tests..."
for t in test_a test_b test_c test_d; do
    riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostartfiles -T examples/link/link.ld $TEST_DIR/tests/$t.S -o $TEST_DIR/build/$t.elf
    bin/elf2hex $TEST_DIR/build/$t.elf $TEST_DIR/build/$t.elf.memfile
    make -f testbench/Makefile $TEST_DIR/build/$t.elf.objdump.addr

    timeout 5 /opt/riscv/bin/spike --isa=rv64gc $TEST_DIR/build/$t.elf > $TEST_DIR/logs/spike_${t}.log 2>&1
done

set +e
trap - ERR

bug_found=0
pass_all=1

for t in test_a test_b test_c test_d; do
    echo "Running DUT for $t..."
    timeout 10 sim/verilator/wkdir/nodcache_rv64gc_testbench/Vtestbench +TEST=test +ElfFile=$TEST_DIR/build/$t.elf > $TEST_DIR/logs/dut_${t}.log 2>&1
    
    if grep -q "FAILURE:" $TEST_DIR/logs/dut_${t}.log; then
        echo "DUT $t failed"
        if [ "$t" == "test_a" ] || [ "$t" == "test_b" ]; then
            bug_found=1
        fi
        pass_all=0
    else
        echo "DUT $t passed"
    fi
done

if [ $pass_all -eq 1 ]; then
    echo "All tests passed (fixed behavior)"
    exit 0
elif [ $bug_found -eq 1 ]; then
    if [ "$pass_all" -eq 0 ]; then
        for t in test_c test_d; do
            if grep -q "FAILURE:" $TEST_DIR/logs/dut_${t}.log; then
                echo "Test $t failed unexpectedly. Aborting."
                exit 2
            fi
        done
    fi
    echo "Functional bug confirmed: cbo.clean or cbo.flush did not trap (failed)"
    exit 1
else
    echo "Unexpected failure (test_c or test_d failed, or other issue)"
    exit 2
fi
