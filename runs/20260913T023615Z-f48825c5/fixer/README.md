# RTL Fixer Notes: Missing Illegal Instruction Exception on mcounteren CSR Access

## Tag
`20260913T023615Z-f48825c5`, iteration 10

## Root Cause
In `src/privileged/csrm.sv` line 270, the `MCOUNTEREN` (CSR 0x306) read path
unconditionally serves reads by returning `MCOUNTEREN_REGW` without checking
`P.U_SUPPORTED` or asserting `IllegalCSRMAccessM`. This violates RISC-V Privileged
Architecture Specification (v20211203, Section 3.1.11): "When U-mode is not supported,
the mcounteren register does not exist, and attempting to access it causes an illegal
instruction exception."

Adjacent CSRs such as `MENVCFG` (lines 271-272) correctly gate access with:
```systemverilog
if (P.U_SUPPORTED) CSRMReadValM = MENVCFG_REGW[P.XLEN-1:0];
else IllegalCSRMAccessM = 1'b1;
```

The `MCOUNTEREN` case lacked this guard, so reads silently returned 0 instead of
trapping with Cause 2 (Illegal Instruction).

## Minimal Fix
**File**: `src/privileged/csrm.sv`, line 270

**Before**:
```systemverilog
MCOUNTEREN:    CSRMReadValM = {{(P.XLEN-32){1'b0}}, MCOUNTEREN_REGW};
```

**After**:
```systemverilog
MCOUNTEREN:    if (P.U_SUPPORTED) CSRMReadValM = {{(P.XLEN-32){1'b0}}, MCOUNTEREN_REGW};
                     else IllegalCSRMAccessM = 1'b1;
```

This is a 2-line addition (matching the `MENVCFG`/`MENVCFGH` pattern already
present on adjacent lines 271-274). No other files are modified.

## Configuration
- **DUT**: Wally Verilator, `WALLYCONF=noU_rv64gc` (U_SUPPORTED=0, S_SUPPORTED=0, ZICSR_SUPPORTED=1)
- **Compiler**: `riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -nostdlib`
- **Spike**: `/opt/riscv/bin/spike --priv=m`
- **Verilator**: 5.036

## Verification
- **Reproducer**: `./tester_llm/20260913T023615Z-f48825c5/reproducer.sh`
- **Pre-fix result**: Exit code 1 (bug reproduced — Wally did not trap on `csrr t1, mcounteren`)
- **Post-fix result**: Exit code 0 (Wally correctly traps with Cause 2, matching Spike oracle)
- **Test A** (CSR read): Passes — `csrr t1, 0x306` traps with `mcause == 2`
- **Test B** (CSR write): Passes — `csrw 0x306, t1` traps with `mcause == 2`
- **Test C** (positive control): Passes — `csrr t1, mstatus` executes without trap
- **Test D** (gated CSR): Passes — `csrr t1, menvcfg` traps with `mcause == 2`

## Notes
- The `WriteMCOUNTERENM` signal (line 164) is unconditionally generated but is harmless
  when `P.U_SUPPORTED == 0` because the `MCOUNTERENreg` flop is only instantiated inside
  the `if (P.U_SUPPORTED)` generate block (line 182-184). No write-path fix is needed.
- `IllegalCSRAccessM` in `csr.sv` line 315-317 is gated by `CSRReadM`, which is set for
  all CSR instructions (CSRRW/CSRRS/CSRRC and their immediate variants), so the fix
  correctly triggers traps for both read and write CSR operations.
