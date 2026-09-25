# Paper results and archived controller evidence

This document explains the **2026-09-23 audit snapshot**, not the total of every
run subsequently added to a local installation. Its source is
[the runtime audit, inventory and candidate campaigns](wallyguard-runtime-audit.md#b-campaign-level-runtime).
That audit uses “campaign” for terminal attempt records; these counts must not be
reinterpreted as 46 independent 48-hour jobs.

## Campaign-level bug accounting

Across the broader campaign, WallyGuard independently identified **nine real RTL
bugs**: **six fresh findings** and **three independent rediscoveries** of bugs
already known or fixed upstream. One rediscovery resulted in PR #1863 before it
was recognized as a duplicate. The other two were recognized as already known
upstream, so no new pull requests were submitted for them.

These nine discoveries are broader campaign-level accounting. They do not mean
that all nine have archived `candidate_fix_verified` terminal controller records.
The six `candidate_fix_verified` records below are the six archived successful
targeted repair campaigns used in the controller/runtime analysis. The nine
independently identified bugs and six archived repair campaigns are distinct
counts and should not be treated as a one-to-one mapping.

## Archived controller evidence

The archived audit dataset is separate from the broader discovery count:

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
`run_regression=false` and `directed_configured=false`. Regression was
intentionally disabled during the archived campaigns to reduce experiment time,
so these successful repair campaigns were recorded as `candidate_fix_verified`,
not `confirmed`. The archived audit therefore records zero directed/full
regression executions and zero historical controller `confirmed` records.

After the agentic campaign, all six proposed fixes were applied together and a
manual regression of the combined fixed RTL was run and passed. This was later
manual validation, separate from the archived campaigns; it does not retroactively
change their controller statuses. The archived records remain
`candidate_fix_verified`. This was one combined manual regression, not six
independent full regressions, and the controller itself did not run it. Raw runs
and patch exports are Git-ignored and may be absent from a source clone.

## Upstream results are a separate status

Across the broader campaign, WallyGuard independently identified nine RTL bugs:
six fresh findings and three rediscoveries of bugs already known upstream. One
rediscovery resulted in PR #1863 before being recognized as a duplicate; the
other two were recognized as previously known and were not submitted as new pull
requests. In total, the project produced seven associated CORE-V Wally pull
requests: four merged, two open, and one closed as duplicate. The nine
discoveries and seven PRs do not have a one-to-one relationship.

| PR | Status |
| --- | --- |
| [1856](https://github.com/openhwfoundation/cvw/pull/1856) | Open |
| [1863](https://github.com/openhwfoundation/cvw/pull/1863) | Closed as duplicate |
| [1864](https://github.com/openhwfoundation/cvw/pull/1864) | Merged |
| [1870](https://github.com/openhwfoundation/cvw/pull/1870) | Merged |
| [1882](https://github.com/openhwfoundation/cvw/pull/1882) | Merged |
| [1892](https://github.com/openhwfoundation/cvw/pull/1892) | Open |
| [1903](https://github.com/openhwfoundation/cvw/pull/1903) | Merged |

Upstream PR opening, review, merge, and validation are separate from a WallyGuard
controller `confirmed` result. Even a merged PR does not retroactively run the
archived controller's missing regression gates.

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
