# Scoreboard

<!-- written by tools/cow/conveyor.py status - do not edit -->

Judge `401ff8958bf8`. Universe: 21038 functions, 3140766 bytes of original code (non-thunk, at most 32768 bytes each).

| line | functions | % | code bytes | % |
| --- | ---: | ---: | ---: | ---: |
| **PROVEN C** (gold under judge v2) | 19621 | 93.26% | 2966245 | **94.44%** |
| of which CLEAN C (model-written, no machine residue) | 12590 | 59.84% | 2704571 | 86.11% |
| hand units and table rows (the earlier exact proofs) | 975 | 4.63% | 6213 | 0.20% |

Everything else, by what the judge last said:

| state | functions | code bytes | meaning |
| --- | ---: | ---: | --- |
| silver | 99 | 77436 | passes; not enough clean states or coverage to call it proven |
| weak | 18 | 22772 | passes where it ran; it barely ran |
| fail | 70 | 5499 | a real mismatch |
| timeout | 7 | 3000 | ran out of its time budget |
| stale | 2 | 854 | has a unit, not yet judged by THIS judge (run the baseline) |
| hand unit in progress | 6 | 184 | a hand unit that is not finished; the conveyor leaves it alone |
| parked (no unit) | 142 | 41884 | three attempts failed; waiting for a better prompt or judge |
| no unit yet | 98 | 16679 | nothing written yet |

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
| 2026-11-24 | 19184 | 2670814 | 85.037% | +2.472 | 15c934038e44 |
| 2026-11-25 | 19465 | 2890099 | 92.019% | +92.019 | 401ff8958bf8 |
| 2026-11-26 | 19508 | 2906790 | 92.550% | +0.531 | 401ff8958bf8 |
| 2026-11-27 | 19621 | 2966245 | 94.443% | +1.893 | 401ff8958bf8 |

## Is the judge still a judge

Checked 2026-11-27 09:44:28 (a sample of gold re-proven; gold units broken on purpose - docs/cow/SYSTEM2.md, 8.4):

- RECHECK OK: 0 of 200 re-proven gold unit(s) changed verdict (0.0%)
- AUDIT OK: must-kill 30 of 30 died at once; logic 26 killed; 0 missed at the standard depth; 3 unresolved; logic kill rate 100.0% of 26 resolved; 30 unit(s) sampled
