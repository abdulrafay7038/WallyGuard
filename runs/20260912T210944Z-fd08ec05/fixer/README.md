# RTL Fixer Report — 20260912T210944Z-fd08ec05 Iteration 2

## Configuration
- **Config**: `nodcache_rv64gc` (`P.ZICBOM_SUPPORTED = 0`, `P.ZICSR_SUPPORTED = 1`)
- **ISA/ABI**: rv64gc / lp64d
- **Verilator**: 5.036
- **RISC-V toolchain**: riscv64-unknown-elf-gcc 15.2.0

## Root Cause
In `src/ieu/controller.sv` lines 196-199, the `CMOFunctD` signal assigns which cache-block management instructions are legal. Due to Verilog/SystemVerilog operator precedence (bitwise AND `&` binds tighter than bitwise OR `|`), the parentheses grouping was incorrect:

### Buggy Code (original)
```systemverilog
assign CMOFunctD = (Funct3D == 3'b010 & RdD == 5'b0) &
  ((P.ZICBOZ_SUPPORTED & InstrD[31:20] == 12'd4 & ENVCFG_CBE[3]) |
   (P.ZICBOM_SUPPORTED & ((InstrD[31:20] == 12'd0 & (ENVCFG_CBE[1:0] != 2'b00))) |
                          (InstrD[31:20] == 12'd1 | InstrD[31:20] == 12'd2) & ENVCFG_CBE[2]));
```

**Due to `&` > `|` precedence**, the expression parses as:
```
(P.ZICBOZ & ...) | (P.ZICBOM & (cbo.inval term)) | (cbo.clean/flush term)
```

The `cbo.clean` (12'd1) and `cbo.flush` (12'd2) terms are OR'd at the outer level, **completely unguarded by `P.ZICBOM_SUPPORTED`**. When `P.ZICBOM_SUPPORTED == 0` (as in `nodcache_rv64gc`), these instructions are erroneously decoded as legal CMO instructions instead of trapping with Illegal Instruction (Cause 2).

### Fixed Code
```systemverilog
assign CMOFunctD = (Funct3D == 3'b010 & RdD == 5'b0) &
  ((P.ZICBOZ_SUPPORTED & InstrD[31:20] == 12'd4 & ENVCFG_CBE[3]) |
   (P.ZICBOM_SUPPORTED & ((InstrD[31:20] == 12'd0 & (ENVCFG_CBE[1:0] != 2'b00)) |
                          (InstrD[31:20] == 12'd1 | InstrD[31:20] == 12'd2) & ENVCFG_CBE[2])));
```

**Fix**: Move one closing parenthesis `)` from after `(ENVCFG_CBE[1:0] != 2'b00)))` (line 198) to after `ENVCFG_CBE[2]` (line 199). This closes the `P.ZICBOM_SUPPORTED & (...)` group **after** all three Zicbom instruction terms, properly gating `cbo.inval`, `cbo.clean`, and `cbo.flush` with the extension support flag.

## Minimal Fix Description
- **File**: `src/ieu/controller.sv`
- **Lines**: 198-199
- **Change**: One parenthesis moved: `2'b00)))` → `2'b00))` on line 198, `CBE[2]));` → `CBE[2]));` on line 199 (net: same paren count, different placement)
- **Side effects**: None — only changes grouping of existing terms; no new signals, no removed logic

## Verification
- **Reproducer**: `tester_llm/20260912T210944Z-fd08ec05/reproducer.sh`
- **Result**: EXIT_CODE=0 (all tests pass)
  - test_a (`cbo.clean`): PASS — traps with mcause=2 on DUT ✓
  - test_b (`cbo.flush`): PASS — traps with mcause=2 on DUT ✓
  - test_c (`cbo.inval`): PASS — traps with mcause=2 on DUT ✓
  - test_d (smoke test): PASS ✓
- **Before fix**: test_a and test_b FAILED (cbo.clean/cbo.flush did not trap, triggering watchdog timeout)
- **After fix**: All 4 tests PASS, Verilator exits cleanly with `$finish`
