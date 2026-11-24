# Scoreboard

<!-- written by tools/cow/conveyor.py status - do not edit -->

Judge `15c934038e44`. Universe: 21038 functions, 3140766 bytes of original code (non-thunk, at most 32768 bytes each).

| line | functions | % | code bytes | % |
| --- | ---: | ---: | ---: | ---: |
| **PROVEN C** (gold under judge v2) | 19188 | 91.21% | 2672180 | **85.08%** |
| of which CLEAN C (model-written, no machine residue) | 12155 | 57.78% | 2410476 | 76.75% |
| hand units and table rows (the earlier exact proofs) | 975 | 4.63% | 6213 | 0.20% |

Everything else, by what the judge last said:

| state | functions | code bytes | meaning |
| --- | ---: | ---: | --- |
| silver | 345 | 295315 | passes; not enough clean states or coverage to call it proven |
| weak | 34 | 44620 | passes where it ran; it barely ran |
| fail | 96 | 10962 | a real mismatch |
| timeout | 9 | 3397 | ran out of its time budget |
| stale | 3 | 1150 | has a unit, not yet judged by THIS judge (run the baseline) |
| hand unit in progress | 6 | 184 | a hand unit that is not finished; the conveyor leaves it alone |
| parked (no unit) | 244 | 65056 | three attempts failed; waiting for a better prompt or judge |
| no unit yet | 138 | 41689 | nothing written yet |

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
| 2026-11-22 | 19086 | 2598523 | 82.735% | +2.861 | 15c934038e44 |
| 2026-11-23 | 19080 | 2593161 | 82.565% | -0.170 | 15c934038e44 |
| 2026-11-24 | 19188 | 2672180 | 85.081% | +2.516 | 15c934038e44 |

## Is the judge still a judge

Checked 2026-11-23 18:17:20 (a sample of gold re-proven; gold units broken on purpose - docs/cow/SYSTEM2.md, 8.4):

- RECHECK JUDGE UNSTABLE: 7 of 200 re-proven gold unit(s) changed verdict (3.5%)
- AUDIT OK: must-kill 30 of 30 died at once; logic 22 killed; 1 missed at the standard depth; 2 unresolved; logic kill rate 95.7% of 23 resolved; 30 unit(s) sampled
