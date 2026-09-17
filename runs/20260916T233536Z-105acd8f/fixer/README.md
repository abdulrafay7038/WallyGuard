# RTL Fixer Report: Missing Quadword Misalignment Fault Detection for amocas.q

## Tag: 20260916T233536Z-105acd8f
## Target: Missing Quadword Misalignment Fault Detection for amocas.q in Zacas Extension (src/lsu/lsu.sv and src/mmu/mmu.sv)
## Status: fixed (changed=true)

---

## Root Cause

The bug stems from a signal-width truncation when passing the memory operation size from the LSU to the MMU, combined with a missing quadword alignment case in the MMU's misalignment checker.

### Source 1: `src/lsu/lsu.sv` (line 261)
```systemverilog
.Size(LSUFunct3M[1:0]),  // BUG: truncates 3-bit funct3 to 2 bits
```

`LSUFunct3M` is a 3-bit signal encoding the memory operation size. For `amocas.q`, `LSUFunct3M = 3'b100` (quadword, 128-bit). The `.Size()` port of the MMU only received `LSUFunct3M[1:0]`, truncating the value to `2'b00` (byte, 8-bit).

### Source 2: `src/mmu/mmu.sv` (lines 43, 139-144)
```systemverilog
input  logic [1:0]  Size,  // Only 2 bits: 00=8, 01=16, 10=32, 11=64
...
case(Size)
  2'b00: DataMisalignedM = 1'b0;              // byte: always aligned
  2'b01: DataMisalignedM = VAdr[0];           // halfword
  2'b10: DataMisalignedM = VAdr[1] | VAdr[0]; // word
  2'b11: DataMisalignedM = |VAdr[2:0];        // doubleword
endcase
```

The `Size` port was only 2 bits, with no provision for quadword (128-bit) accesses. Since the truncated `Size` value was `2'b00`, the misalignment check always returned `DataMisalignedM = 1'b0` for `amocas.q`, regardless of address alignment.

### Consequence
When software executed `amocas.q` on an address that was not 16-byte aligned (e.g., offset 8 or offset 1 from a 16-byte aligned base), the core failed to raise the required address-misaligned exception or access-fault exception. This violates the RISC-V Zacas specification Section 2.

---

## Specification Reference

- **RISC-V Atomic Compare-and-Swap (Zacas) Extension Specification, Version 1.0, Section 2**: "AMOCAS.Q requires natural alignment: the address must be 16-byte aligned. If the effective address is not naturally aligned, an address-misaligned exception or an access-fault exception shall be raised."
- **RISC-V Instruction Set Manual, Volume I, Chapter 8 (A Extension)**: "An address-misaligned exception or access-fault exception is generated if the address is not naturally aligned to the size of the operand."

---

## Minimal Fix

### File 1: `src/mmu/mmu.sv`

**Change 1 (line 43)**: Widen the `Size` port from 2 to 3 bits.
```diff
- input  logic [1:0]           Size,               // access size: 00 = 8 bits, 01 = 16 bits, 10 = 32 bits , 11 = 64 bits
+ input  logic [2:0]           Size,               // access size: 000 = 8 bits, 001 = 16 bits, 010 = 32 bits, 011 = 64 bits, 100 = 128 bits
```

**Change 2 (line 119)**: Truncate to 2 bits when passing to pmachecker (which only supports byte/half/word/double).
```diff
- pmachecker #(P) pmachecker(.PhysicalAddress, .Size, .CMOpM,
+ pmachecker #(P) pmachecker(.PhysicalAddress, .Size(Size[1:0]), .CMOpM,
```

**Change 3 (line 127)**: Truncate to 2 bits when passing to pmpchecker.
```diff
- .ExecuteAccessF, .WriteAccessM, .ReadAccessM, .Size, .CMOpM,
+ .ExecuteAccessF, .WriteAccessM, .ReadAccessM, .Size(Size[1:0]), .CMOpM,
```

**Change 4 (lines 139-144)**: Add quadword case to the misalignment check.
```diff
  case(Size)
-   2'b00:  DataMisalignedM = 1'b0;
-   2'b01:  DataMisalignedM = VAdr[0];
-   2'b10:  DataMisalignedM = VAdr[1] | VAdr[0];
-   2'b11:  DataMisalignedM = |VAdr[2:0];
+   3'b000: DataMisalignedM = 1'b0;              // lb, sb, lbu
+   3'b001: DataMisalignedM = VAdr[0];           // lh, sh, lhu
+   3'b010: DataMisalignedM = VAdr[1] | VAdr[0]; // lw, sw, flw, fsw, lwu
+   3'b011: DataMisalignedM = |VAdr[2:0];        // ld, sd, fld, fsd
+   3'b100: DataMisalignedM = |VAdr[3:0];        // amocas.q (128-bit quadword)
+   default: DataMisalignedM = 1'b0;
  endcase
```

### File 2: `src/lsu/lsu.sv`

**Change (line 261)**: Pass full 3-bit LSUFunct3M instead of truncated 2-bit.
```diff
- .PrivilegeModeW, .DisableTranslation, .VAdr(IHAdrM), .Size(LSUFunct3M[1:0]),
+ .PrivilegeModeW, .DisableTranslation, .VAdr(IHAdrM), .Size(LSUFunct3M),
```

### File 3: `src/ifu/ifu.sv`

**Change (line 214)**: Update IMMU Size literal from 2 to 3 bits for consistency.
```diff
- .Size(2'b10),
+ .Size(3'b010),
```

---

## Why This Is Minimal

- Only 3 files modified: `mmu.sv` (4 changes), `lsu.sv` (1 change), `ifu.sv` (1 change).
- Downstream modules (`pmachecker.sv`, `pmpchecker.sv`, `adrdecs.sv`, `adrdec.sv`) are unchanged; `Size[1:0]` truncation at the pmachecker/pmpchecker boundary preserves their existing 2-bit interface.
- No new signals, no new modules, no changes to configuration, tests, or dependencies.

---

## Targeted Test Outcome

### Configuration
- **ISA**: rv64gc_zacas
- **ABI**: lp64d
- **DUT**: `$WALLY/sim/verilator/wkdir/rv64gc_testbench/Vtestbench` (rebuilt with fix)
- **Compiler**: `/home/rafay/riscv/bin/riscv64-unknown-elf-gcc` (GCC 15.2.0)
- **Spike**: `/home/rafay/riscv/bin/spike` (1.1.1-dev, `--isa=rv64gc_zacas`)

### Commands
```bash
# Build from worktree root
cd /home/rafay/miniconda3/WallyGuard2/wally-worktrees/wally-shared
make -C sim/verilator WALLYCONF=rv64gc TESTBENCH=testbench

# Run reproducer
/home/rafay/miniconda3/WallyGuard2/runs/20260916T233536Z-105acd8f/reproducer.sh
```

### Results
| Test | Spike | Wally DUT (Patched) | Wally DUT (Unpatched) |
|------|-------|---------------------|----------------------|
| `test_zacas_q_aligned.elf` (16-byte aligned, offset 0) | pass (exit 0) | pass (exit 0) | pass (exit 0) |
| `test_zacas_q_unaligned.elf` (8-byte aligned, offset 8) | pass (exit 0) | **pass (exit 0)** | FAIL (Watch Dog, exit 134) |
| `test_zacas_q_unaligned_byte.elf` (byte-aligned, offset 1) | pass (exit 0) | not reached (reproducer exits 0 early) | FAIL (Watch Dog, exit 134) |

### Reproducer Exit Code
- **Before fix**: `1` (mismatch confirmed — DUT failed to trap on unaligned amocas.q)
- **After fix**: `0` (DUT correctly traps on unaligned amocas.q; bug is fixed)

### Build Log Location
- Build output: `$TEST_DIR/logs/*_build.log`
- Spike logs: `$TEST_DIR/logs/*_spike.log`
- Wally DUT logs: `$TEST_DIR/logs/*_dut.log`
- Full Verilator build: `/tmp/build_output.log`
