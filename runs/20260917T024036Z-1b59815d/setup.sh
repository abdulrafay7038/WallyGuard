#!/bin/bash
TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260917T024036Z-1b59815d
mkdir -p $TEST_DIR/tests $TEST_DIR/build $TEST_DIR/logs $TEST_DIR/fixer

cat << 'EOF' > $TEST_DIR/tests/test_sfence_inval_ir_global.S
.section .text.init
.globl rvtest_entry_point
.align 2
rvtest_entry_point:
    li t0, -1
    csrw pmpaddr0, t0
    li t0, 0x1F
    csrw pmpcfg0, t0
    la t0, pg_dir
    li t1, 0x80000000
    srli t1, t1, 12
    slli t1, t1, 10
    ori t1, t1, 0xCF
    sd t1, 16(t0)
    la t1, pg_dir_l1
    srli t1, t1, 12
    slli t1, t1, 10
    ori t1, t1, 0x01
    sd t1, 24(t0)
    la t0, pg_dir_l1
    la t1, pg_dir_l0
    srli t1, t1, 12
    slli t1, t1, 10
    ori t1, t1, 0x01
    sd t1, 0(t0)
    la t0, pg_dir_l0
    la t1, code_page_a
    srli t1, t1, 12
    slli t1, t1, 10
    ori t1, t1, 0xEB
    sd t1, 8(t0)
    la t0, pg_dir
    srli t0, t0, 12
    li t1, 0x8000000000000000
    li t2, 1
    slli t2, t2, 44
    or t0, t0, t1
    or t0, t0, t2
    csrw satp, t0
    sfence.vma
    la t0, fail
    csrw mtvec, t0
    csrw stvec, t0
    li t0, 0x00000800
    csrs mstatus, t0
    la t0, smode_entry
    csrw mepc, t0
    mret
.align 2
smode_entry:
    li s1, 0xC0001000
    jalr ra, 0(s1)
    li t0, 0x11
    bne a5, t0, fail
    la t0, pg_dir_l0
    la t1, code_page_b
    srli t1, t1, 12
    slli t1, t1, 10
    ori t1, t1, 0xEB
    sd t1, 8(t0)
    csrr t0, mvendorid
    bnez t0, wally_sfence
    sfence.vma x0, x0
    j after_sfence
wally_sfence:
    .word 0x18100073
after_sfence:
    li s1, 0xC0001000
    jalr ra, 0(s1)
    li t0, 0x22
    bne a5, t0, fail
    li t0, 1
    la t1, tohost
    sd t0, 0(t1)
.option norvc
1:  j 1b
.align 2
fail:
    csrw mtvec, x0
    jr x0
.align 12
code_page_a:
    li a5, 0x11
    ret
.align 12
code_page_b:
    li a5, 0x22
    ret
.align 12
pg_dir:
    .space 4096
.align 12
pg_dir_l1:
    .space 4096
.align 12
pg_dir_l0:
    .space 4096
.section .tohost
.align 3
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
EOF

sed 's/0xEB/0xCB/g' $TEST_DIR/tests/test_sfence_inval_ir_global.S > $TEST_DIR/tests/test_sfence_inval_ir_nonglobal.S
awk '/csrr t0, mvendorid/{flag=1; print "    sfence.vma x0, x0"; next} /after_sfence:/{flag=0; next} !flag' $TEST_DIR/tests/test_sfence_inval_ir_global.S > $TEST_DIR/tests/test_sfence_vma_control.S

cat << 'EOF' > $TEST_DIR/reproducer.sh
#!/bin/bash
TEST_DIR=/home/rafay/miniconda3/WallyGuard2/runs/20260917T024036Z-1b59815d
WALLY=/home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared
GCC=/home/rafay/riscv/bin/riscv64-unknown-elf-gcc
SPIKE=/home/rafay/riscv/bin/spike
for t in test_sfence_inval_ir_global test_sfence_vma_control test_sfence_inval_ir_nonglobal; do
  $GCC -march=rv64gc_svinval -mabi=lp64d -nostdlib -nostartfiles -T $WALLY/tests/riscof/spike/env/link.ld $TEST_DIR/tests/$t.S -o $TEST_DIR/build/$t.elf || exit 2
  timeout 5s $SPIKE --isa=rv64gc_svinval $TEST_DIR/build/$t.elf
  if [ $? -ne 0 ]; then exit 2; fi
done
cd $WALLY/sim/verilator/wkdir/rv64gc_testbench/
timeout 5s ./Vtestbench +ElfFile=$TEST_DIR/build/test_sfence_vma_control.elf > $TEST_DIR/logs/vma_control.log 2>&1
if grep -q -E "FAILURE|Watch Dog" $TEST_DIR/logs/vma_control.log; then exit 2; fi
timeout 5s ./Vtestbench +ElfFile=$TEST_DIR/build/test_sfence_inval_ir_nonglobal.elf > $TEST_DIR/logs/nonglobal.log 2>&1
if grep -q -E "FAILURE|Watch Dog" $TEST_DIR/logs/nonglobal.log; then exit 2; fi
timeout 5s ./Vtestbench +ElfFile=$TEST_DIR/build/test_sfence_inval_ir_global.elf > $TEST_DIR/logs/run_global.log 2>&1
if grep -q -E "FAILURE|Watch Dog" $TEST_DIR/logs/run_global.log; then exit 1; fi
exit 0
EOF
chmod +x $TEST_DIR/reproducer.sh
echo "Reproducer script ready." > $TEST_DIR/README.md
