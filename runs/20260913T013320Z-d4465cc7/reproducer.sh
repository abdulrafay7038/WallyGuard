#!/bin/bash
set -e
TEST_DIR="tester_llm/20260913T013320Z-d4465cc7"
cp -a /home/abdul/miniconda3/WallyGuard2/cvw/config/deriv ./config/ 2>/dev/null || true
rm -rf addins/verilog-ethernet
ln -s /home/abdul/miniconda3/WallyGuard2/cvw/addins/verilog-ethernet addins/verilog-ethernet 2>/dev/null || true
make -C sim/verilator compile WALLYCONF=rv64i TESTBENCH=testbench > $TEST_DIR/logs/verilator_compile.log 2>&1 || exit 2
declare -A spike_results
declare -A dut_results
for t in test_a test_b test_c test_d; do
    riscv64-unknown-elf-gcc -march=rv64i_zicsr -mabi=lp64 -nostartfiles -T examples/link/link.ld $TEST_DIR/tests/$t.S -o $TEST_DIR/build/$t.elf > $TEST_DIR/logs/$t.build.log 2>&1 || exit 2
    bin/elf2hex $TEST_DIR/build/$t.elf $TEST_DIR/build/$t.elf.memfile > $TEST_DIR/logs/$t.elf2hex.log 2>&1 || exit 2
    spike_results[$t]=0
    timeout 5 /opt/riscv/bin/spike --isa=rv64i $TEST_DIR/build/$t.elf > $TEST_DIR/logs/$t.spike.log 2>&1 || spike_results[$t]=$?
    dut_results[$t]=0
    timeout 10 sim/verilator/wkdir/rv64i_testbench/Vtestbench +TEST=$t +ElfFile=$TEST_DIR/build/$t.elf > $TEST_DIR/logs/$t.dut.log 2>&1 || dut_results[$t]=$?
done
if [ ${spike_results[test_c]} -ne 0 ] || [ ${spike_results[test_d]} -ne 0 ]; then exit 2; fi
if [ ${dut_results[test_c]} -ne 0 ] || [ ${dut_results[test_d]} -ne 0 ]; then exit 2; fi
if [ ${spike_results[test_a]} -ne 0 ] || [ ${spike_results[test_b]} -ne 0 ]; then exit 2; fi
if [ ${dut_results[test_a]} -ne 0 ] || [ ${dut_results[test_b]} -ne 0 ]; then exit 1; fi
exit 0
