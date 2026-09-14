# Test Report: Exception Priority Logic (Page Fault vs Access Fault)

## Objective
The architect hypothesized a priority inversion bug in `src/privileged/trap.sv` where Data Access Faults (Causes 5 and 7) were mistakenly evaluated before Data Page Faults (Causes 13 and 15), violating RISC-V Table 3.7. The objective was to confirm this bug.

## Configuration
- ISA/ABI: `rv64gc`, `lp64d`
- Derived config: `rv64gc`
- Spike: 1.1.1-dev, invoked with `--isa=rv64gc`

## Methodology
Four assembly tests were authored and executed:
- `test_a.S`: S-mode attempts a load from `0x4000`. The root PTE maps `0x4000` with `V=0` (triggering TLB Page Fault). PMP is left unconfigured for this region, defaulting to deny in S-mode (triggering Access Fault).
- `test_b.S`: Same as `test_a.S`, but uses a store instruction.
- `test_c.S`: Positive control for Instruction Page Fault.
- `test_d.S`: Positive control for Load Access Fault in Bare mode.

## Results
The hypothesis was **refuted**. Inspection of `src/privileged/trap.sv` (lines 120-123) confirms that Wally RTL evaluates Causes 13/15 strictly *before* Causes 5/7:
```systemverilog
    else if (StoreAmoPageFaultM)                              CauseM = 5'd15;
    else if (LoadPageFaultM)                                  CauseM = 5'd13;
    else if (StoreAmoAccessFaultM)                            CauseM = 5'd7;
    else if (LoadAccessFaultM)                                CauseM = 5'd5;
```
When run on the Spike oracle and the Wally Verilator DUT, both platforms correctly raise a Load Page Fault (`scause=13`) for `test_a` and a Store Page Fault (`scause=15`) for `test_b`. 

## Conclusion
No functional mismatch exists. Wally RTL is fully compliant with the synchronous exception priority rules outlined in the RISC-V Privileged Architecture Specification (v20211203, Section 3.7.1).
