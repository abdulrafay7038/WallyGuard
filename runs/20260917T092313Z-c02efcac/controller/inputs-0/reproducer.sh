#!/bin/bash
set -e
# Exit 0 if tests pass cleanly on DUT (behavior of patched RTL)
# Exit 1 if crossing tests fail with Watch Dog Time Out on DUT (mismatch confirmed on unpatched RTL)
# Exit 2 if any tool/compilation errors occur

export TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260917T092313Z-c02efcac

# Compile tests
/home/rafay/riscv/bin/riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -mcmodel=medany -static -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_pmp_control.S -o $TEST_DIR/build/test_pmp_control.elf || exit 2
/home/rafay/riscv/bin/riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -mcmodel=medany -static -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_pmp_load_cross.S -o $TEST_DIR/build/test_pmp_load_cross.elf || exit 2
/home/rafay/riscv/bin/riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -mcmodel=medany -static -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/test_pmp_store_cross.S -o $TEST_DIR/build/test_pmp_store_cross.elf || exit 2

# Generate memfiles
$WALLY/bin/elf2hex $TEST_DIR/build/test_pmp_control.elf $TEST_DIR/build/test_pmp_control.elf.memfile || exit 2
$WALLY/bin/elf2hex $TEST_DIR/build/test_pmp_load_cross.elf $TEST_DIR/build/test_pmp_load_cross.elf.memfile || exit 2
$WALLY/bin/elf2hex $TEST_DIR/build/test_pmp_store_cross.elf $TEST_DIR/build/test_pmp_store_cross.elf.memfile || exit 2

# Spike verification (expected to pass)
timeout 5s /home/rafay/riscv/bin/spike --isa=rv64gc $TEST_DIR/build/test_pmp_control.elf || { echo "Spike failed on control"; exit 2; }
timeout 5s /home/rafay/riscv/bin/spike --isa=rv64gc $TEST_DIR/build/test_pmp_load_cross.elf || { echo "Spike failed on load_cross"; exit 2; }
timeout 5s /home/rafay/riscv/bin/spike --isa=rv64gc $TEST_DIR/build/test_pmp_store_cross.elf || { echo "Spike failed on store_cross"; exit 2; }

# CRITICAL HYGIENE CHECK: rebuild Vtestbench if RTL was modified
VTEST=$WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench
PMPCHECKER=$WALLY/src/mmu/pmpchecker.sv
if [ "$PMPCHECKER" -nt "$VTEST" ]; then
    echo "RTL modified, rebuilding Vtestbench..."
    rm -f $VTEST
    make -C $WALLY/sim/verilator compile WALLYCONF=rv64gc TESTBENCH=testbench || exit 2
fi

# Run Wally DUT
echo "Running DUT on control test..."
$VTEST +ElfFile=$TEST_DIR/build/test_pmp_control.elf > $TEST_DIR/logs/dut_control.log 2>&1 || true
if grep -q "FAILURE" $TEST_DIR/logs/dut_control.log; then
    echo "Control test failed on DUT."
    cat $TEST_DIR/logs/dut_control.log
    exit 2
fi

echo "Running DUT on load_cross test..."
$VTEST +ElfFile=$TEST_DIR/build/test_pmp_load_cross.elf > $TEST_DIR/logs/dut_pmp_load_cross.log 2>&1 || true

echo "Running DUT on store_cross test..."
$VTEST +ElfFile=$TEST_DIR/build/test_pmp_store_cross.elf > $TEST_DIR/logs/dut_pmp_store_cross.log 2>&1 || true

# Verification logic
LOAD_FAILED=0
STORE_FAILED=0
grep -q "FAILURE: Watch Dog Time Out" $TEST_DIR/logs/dut_pmp_load_cross.log && LOAD_FAILED=1
grep -q "FAILURE: Watch Dog Time Out" $TEST_DIR/logs/dut_pmp_store_cross.log && STORE_FAILED=1

if [ $LOAD_FAILED -eq 1 ] || [ $STORE_FAILED -eq 1 ]; then
    echo "Mismatch confirmed: tests failed with Watch Dog Time Out on unmodified RTL."
    exit 1
else
    echo "Tests passed cleanly on DUT. (RTL patched correctly)"
    exit 0
fi
