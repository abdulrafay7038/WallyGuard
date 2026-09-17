# RTL Fix: Missing Hazard Detection and Forwarding for amocas rd+1

## Root Cause

When `amocas` operates in its register-pair form (`amocas.d` on RV32, `amocas.q` on RV64),
it atomically loads a 2×XLEN value from memory into the register pair `{rd, rd+1}`.
However, the pipeline hazard detection and forwarding logic only tracked the base
destination register `rd` via pipeline registers `RdE`, `RdM`, and `RdW`.

Three specific gaps existed:

1. **MatchDE** (controller.sv line 540) only checked if source registers in Decode
   matched `RdE`. It ignored `RdE | 5'b1` (i.e., `rd+1`), so dependent instructions
   reading `rd+1` were never stalled.

2. **ForwardAE/ForwardBE** (controller.sv lines 529-535) only matched source registers
   against `RdM` and `RdW`. They ignored `RdM | 5'b1` and `RdW | 5'b1`, so even if
   a dependent instruction reached Execute when the producer was in Writeback, no
   forwarding occurred for `rd+1`.

3. **Forwarding mux** (datapath.sv lines 158-159) only had three sources: `R1E` (no
   forward), `ResultW` (Writeback), and `IFResultM` (Memory). There was no path to
   forward `ReadDataHighW` (the high-half loaded value written to `rd+1`).

Additionally, `MemReadE = 0` for AMO instructions (MemRWD = 2'b01, which does not set
the load bit through the normal load path), so the existing `LoadStallD` mechanism
(`(MemReadE|SCE) & MatchDE`) never fires for AMOCAS pair hazards.

## Minimal Fix (2 files, 3 changes)

### 1. src/ieu/controller.sv — AMOCASPairStallD (new signal)

Added a dedicated stall signal for when an AMOCAS pair is in Execute and the
Decode instruction reads `rd+1`:

```systemverilog
logic AMOCASPairStallD;  // new declaration near CASStallD

assign AMOCASPairStallD = AMOCASPairE & (RdE != 5'b0) &
    ((Rs1D == (RdE | 5'b1)) | (Rs2D == (RdE | 5'b1)));
assign StructuralStallD = ... | CASStallD | AMOCASPairStallD;  // added to existing OR
```

### 2. src/ieu/controller.sv — Extended MatchDE

Extended `MatchDE` to also detect RAW hazards on `rd+1`:

```systemverilog
assign MatchDE = (((Rs1D == RdE) | (Rs2D == RdE)) & (RdE != 5'b0)) |
    (AMOCASPairE & (RdE != 5'b0) &
     ((Rs1D == (RdE | 5'b1)) | (Rs2D == (RdE | 5'b1))));
```

This is harmless by itself (LoadStallD doesn't fire for AMOCAS due to MemReadE=0)
but provides correct hazard detection for future use.

### 3. src/ieu/controller.sv — Extended ForwardAE/ForwardBE

Added forwarding from Writeback stage for `rd+1` using encoding `2'b11`:

```systemverilog
// ForwardAE encoding: 00=regfile, 01=ResultW, 10=IFResultM, 11=ReadDataHighW
if (Rs1E != 5'b0)
  if      ((Rs1E == RdM) & RegWriteM)                        ForwardAE = 2'b10;
  else if ((Rs1E == RdW) & RegWriteW)                        ForwardAE = 2'b01;
  else if (AMOCASPairW & (Rs1E == (RdW | 5'b1)) & RegWriteW) ForwardAE = 2'b11;
```

### 4. src/ieu/datapath.sv — mux3 → mux4

Changed forwarding muxes from `mux3` to `mux4` to include `ReadDataHighW`:

```systemverilog
mux4 #(P.XLEN) faemux(R1E, ResultW, IFResultM, ReadDataHighW, ForwardAE, ForwardedSrcAE);
mux4 #(P.XLEN) fbemux(R2E, ResultW, IFResultM, ReadDataHighW, ForwardBE, ForwardedSrcBE);
```

## Pipeline Timing Verification

With the fix, when `amocas.q` is immediately followed by an instruction reading `rd+1`:

1. **Cycle N**: amocas in E (AMOCASPairE=1), dependent in D → AMOCASPairStallD=1
2. **Cycle N+1**: amocas in M, bubble in E, dependent still in D → stall released
3. **Cycle N+2**: amocas in W (AMOCASPairW=1), dependent in E → ForwardAE=2'b11 → ReadDataHighW ✓

The stall delays the dependent by exactly 1 cycle, so it reaches Execute precisely
when the AMOCAS pair reaches Writeback, where `ReadDataHighW` contains the correct
high-half loaded value.

## Files Modified
- `src/ieu/controller.sv` (3 changes)
- `src/ieu/datapath.sv` (2 lines changed: mux3→mux4)

## Verification
- Reproducer passes (exit 0): DUT correctly handles rd+1 hazard
- Control test passes (exit 0): rd+1 with 3 NOPs still works
- Negative control passes (exit 0): rd (base) still works
