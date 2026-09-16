# RTL Fix for Zacas amocas Compare Operand Forwarding

## Bug Description
The `amocas` instruction in the Zacas extension uses its destination register (`rd`) 
as a source operand for the comparison operation. However:
1. The hazard detection logic in `controller.sv` (`MatchDE`) only checks `Rs1D` and `Rs2D` 
   against `RdE`, completely omitting `rd` (`InstrD[11:7]`).
2. In `datapath.sv`, `ComparePairDReg` captures the compare operand directly from the 
   raw register file outputs (`R2D` / `R2PD`) during the `CASStallD` cycle without 
   any forwarding multiplexers from Execute, Memory, or Writeback stages.

## Root Cause
When an instruction immediately preceding `amocas` writes to `rd` (e.g., `li rd, expected_val`), 
the pipeline does NOT detect the RAW hazard on the `rd` operand. The `ComparePairDReg` latch 
captures stale data from the register file, causing `amocas` to compare against an outdated value.

## Fix
Added forwarding multiplexers for the `ComparePairDReg` inputs in `datapath.sv`, forwarding from:
- Execute stage (`IEUResultE`) when `rd` matches `RdE`
- Memory stage (`IFResultM`) when `rd` matches `RdM`  
- Writeback stage (`ResultW`) when `rd` matches `RdW`
- Default: register file output (`R2D`)

Similarly, for pair amocas (rd+1), forwarding is applied to the high half of `ComparePairDReg`.

## Files Modified
1. `src/ieu/controller.sv` - Added `RegWriteE`, `RegWriteM`, `AMOCASPairD` as outputs
2. `src/ieu/datapath.sv` - Added forwarding logic and new inputs (`RdE`, `RdM`, `RegWriteE`, `RegWriteM`, `AMOCASPairD`)
3. `src/ieu/ieu.sv` - Updated port connections between controller and datapath

## Backup Files
- `fixer/controller.sv.orig` - Original controller.sv
- `fixer/datapath.sv.orig` - Original datapath.sv  
- `fixer/ieu.sv.orig` - Original ieu.sv

## Verification
- Control test (with 3 NOPs): PASSES (exit 0) - both before and after fix
- Hazard test (back-to-back): FAILS before fix (exit 134), PASSES after fix (exit 0)
