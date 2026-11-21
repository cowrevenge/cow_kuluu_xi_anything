# Scoreboard

<!-- written by tools/cow/conveyor.py status - do not edit -->

Judge `15c934038e44`. Universe: 21038 functions, 3140766 bytes of original code (non-thunk, at most 32768 bytes each).

| line | functions | % | code bytes | % |
| --- | ---: | ---: | ---: | ---: |
| **PROVEN C** (gold under judge v2) | 18974 | 90.19% | 2526631 | **80.45%** |
| of which CLEAN C (model-written, no machine residue) | 11943 | 56.77% | 2265099 | 72.12% |
| hand units and table rows (the earlier exact proofs) | 975 | 4.63% | 6213 | 0.20% |

Everything else, by what the judge last said:

| state | functions | code bytes | meaning |
| --- | ---: | ---: | --- |
| silver | 465 | 355901 | passes; not enough clean states or coverage to call it proven |
| weak | 70 | 84047 | passes where it ran; it barely ran |
| fail | 108 | 19117 | a real mismatch |
| timeout | 11 | 6332 | ran out of its time budget |
| stale | 5 | 2261 | has a unit, not yet judged by THIS judge (run the baseline) |
| hand unit in progress | 6 | 184 | a hand unit that is not finished; the conveyor leaves it alone |
| parked (no unit) | 263 | 53025 | three attempts failed; waiting for a better prompt or judge |
| no unit yet | 161 | 87055 | nothing written yet |

## Day by day

| date | proven functions | proven bytes | % of bytes | change | judge |
| --- | ---: | ---: | ---: | ---: | --- |
| 2026-11-12 | 3168 | 76900 | 2.448% | +2.448 | 7f9969cd916e |
| 2026-11-13 | 5057 | 124456 | 3.963% | +1.515 | 7f9969cd916e |
| 2026-11-14 | 6467 | 177701 | 5.658% | +5.658 | dbb9909beca8 |
| 2026-11-15 | 5263 | 145278 | 4.626% | +4.626 | 4a432abd0d9d |
| 2026-11-16 | 11613 | 700959 | 22.318% | +22.318 | 1e76be48d1da |
| 2026-11-17 | 14122 | 1065478 | 33.924% | +33.924 | 6318f4f96b8d |
| 2026-11-18 | 15701 | 1394961 | 44.415% | +44.415 | e39543763510 |
| 2026-11-19 | 18273 | 2263033 | 72.054% | +72.054 | 5b10bdaae575 |
| 2026-11-20 | 18962 | 2510862 | 79.944% | +79.944 | 15c934038e44 |
| 2026-11-21 | 18957 | 2508665 | 79.874% | -0.070 | 15c934038e44 |
| 2026-11-22 | 18974 | 2526631 | 80.446% | +0.572 | 15c934038e44 |

## Is the judge still a judge

Checked 2026-11-22 05:37:59 (a sample of gold re-proven; gold units broken on purpose - docs/cow/SYSTEM2.md, 8.4):

- RECHECK OK: 3 of 200 re-proven gold unit(s) changed verdict (1.5%)
- AUDIT OK: must-kill 30 of 30 died at once; logic 21 killed; 2 missed at the standard depth; 4 unresolved; logic kill rate 91.3% of 23 resolved; 30 unit(s) sampled
