# Paper results and archived controller evidence

This document explains the **2026-09-23 audit snapshot**, not the total of every
run subsequently added to a local installation. Its source is
[the runtime audit, inventory and candidate campaigns](wallyguard-runtime-audit.md#b-campaign-level-runtime).
That audit uses “campaign” for terminal attempt records; these counts must not be
reinterpreted as 46 independent 48-hour jobs.

| Audited category | Count |
| --- | ---: |
| Archived attempt records | 83 |
| Terminal records/campaigns | 46 |
| Partial/development/infrastructure-incomplete records | 37 |
| Successful targeted repair campaigns (`candidate_fix_verified`) | 6 |
| Full controller confirmations (`confirmed`) | 0 |

The six historical successful repairs mean **targeted candidate repairs**, not
full controller confirmation:

| Archived attempt | Investigation topic | Archived status |
| --- | --- | --- |
| `20260922T044024Z-c24f74c3` | AMOCAS register-pair pipeline hazards | `candidate_fix_verified` |
| `20260922T120117Z-33808e6e` | AMOCAS.Q write-data sign extension | `candidate_fix_verified` |
| `20260922T154032Z-c3aec3e8` | cbo.zero hit with a dirty cache victim | `candidate_fix_verified` |
| `20260922T211925Z-f293c4b6` | AMOCAS.Q size truncation / misalignment | `candidate_fix_verified` |
| `20260923T042133Z-b2f651bd` | Misaligned-superpage A/D updates | `candidate_fix_verified` |
| `20260923T114955Z-74b865d1` | User-mode WFI illegal-instruction trap delay | `candidate_fix_verified` |

Where the raw archive is supplied, inspect `runs/<tag>/attempt.json`, including
`test_revisions`, `fix_attempts`, and `review_notes`. In these six records,
`run_regression=false` and `directed_configured=false`. The audit therefore records
zero directed/full regression executions. **No later controller evidence satisfying
both gates for these six repairs was identified in the supplied material.**
Their historical status remains `candidate_fix_verified`; no record is relabelled.
Raw runs and patch exports are Git-ignored and may be absent from a source clone.

## Upstream results are a separate status

The artifact owner's paper summary reports **seven associated upstream CVW PRs**.
The checked-in audit explicitly lists upstream PR linkage as unavailable
([efficiency metrics](wallyguard-runtime-audit.md#i-efficiency-metrics)). It does not
establish a complete seven-PR inventory or a one-to-one mapping to the six runs.
Consequently seven is recorded here as an **owner-reported paper result**, not a
new controller measurement. A complete sourced inventory remains needed.

The following related upstream references can be identified from the supplied
local CVW Git history/refs; they are not asserted to be the complete paper set.
The public PR links identify upstream discussions, not additional controller gates.

| PR | Subject | Source available during artifact preparation |
| --- | --- | --- |
| [1856](https://github.com/openhwfoundation/cvw/pull/1856) | HPTW privilege check for ITLB walks | Local `wallyguard-pr-1856` ref, commit `0b2bb0bbf` |
| [1864](https://github.com/openhwfoundation/cvw/pull/1864) | mcounteren access without U-mode | Local CVW commit `79562b567`, subject includes PR number |
| [1882](https://github.com/openhwfoundation/cvw/pull/1882) | mhpmevent CSR address decode | Local CVW commit `20ce3c57f`, subject includes PR number |
| [1889](https://github.com/openhwfoundation/cvw/pull/1889) | Full PMP match across memory operations | Local `wallyguard-pr-1889` ref, commit `d9be29a60` |
| [1892](https://github.com/openhwfoundation/cvw/pull/1892) | Misaligned-superpage A/D update ordering | Public PR and local review ref, commit `519500de4` |
| [1903](https://github.com/openhwfoundation/cvw/pull/1903) | cbo.zero dirty-victim handling | Local CVW merge commit `be4b5af64`, implementation `2921ee702` |

These local CVW refs are external-checkout evidence, not files bundled in the
WallyGuard source artifact. Similar topics do not prove run-to-PR provenance;
no such mapping is invented here. PR opening, review, merge, and any upstream
validation are separate from a WallyGuard `confirmed` result. Even a merged PR
does not retroactively run the archived controller's missing regression gates.

## Paper-facing usage totals

Use [Final Usage Accounting Pass](wallyguard-runtime-audit.md#o-final-usage-accounting-pass),
which supersedes preliminary totals while retaining the earlier audit text:

| Field | Final audited total |
| --- | ---: |
| Usage-bearing records | 167 |
| Turns | 8,499 |
| Input tokens | 114,932,299 |
| Output tokens | 1,178,856 |
| Reasoning tokens | 5,319,457 |
| Cache-read tokens | 698,139,688 |

Keep token categories separate; cached-token totals and nested timing sums are
not standalone measures of billable cost or elapsed runtime. Missing evidence is
labelled unavailable, not reconstructed from agent claims.
