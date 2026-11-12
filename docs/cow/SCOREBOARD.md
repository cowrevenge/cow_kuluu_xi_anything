# Scoreboard

<!-- written by tools/cow/conveyor.py status - do not edit -->

Judge `7f9969cd916e`. Universe: 21038 functions, 3140766 bytes of original code (non-thunk, at most 32768 bytes each).

| line | functions | % | code bytes | % |
| --- | ---: | ---: | ---: | ---: |
| **PROVEN C** (gold under judge v2) | 3801 | 18.07% | 94407 | **3.01%** |
| of which CLEAN C (model-written, no machine residue) | 65 | 0.31% | 509 | 0.02% |
| hand units and table rows (the earlier exact proofs) | 975 | 4.63% | 6213 | 0.20% |

Everything else, by what the judge last said:

| state | functions | code bytes | meaning |
| --- | ---: | ---: | --- |
| silver | 376 | 15557 | passes; not enough clean states or coverage to call it proven |
| weak | 961 | 75238 | passes where it ran; it barely ran |
| fail | 3358 | 243339 | a real mismatch |
| timeout | 17 | 1499 | ran out of its time budget |
| stale | 1715 | 99155 | has a unit, not yet judged by THIS judge (run the baseline) |
| hand unit in progress | 6 | 184 | a hand unit that is not finished; the conveyor leaves it alone |
| parked (no unit) | 107 | 902 | three attempts failed; waiting for a better prompt or judge |
| no unit yet | 9722 | 2604272 | nothing written yet |

## Day by day

| date | proven functions | proven bytes | % of bytes | change | judge |
| --- | ---: | ---: | ---: | ---: | --- |
| 2026-11-12 | 3168 | 76900 | 2.448% | +2.448 | 7f9969cd916e |
| 2026-11-13 | 3801 | 94407 | 3.006% | +0.558 | 7f9969cd916e |

## Is the judge still a judge

Checked 2026-11-13 01:15:16 (a sample of gold re-proven; gold units broken on purpose - docs/cow/SYSTEM2.md, 8.4):

- RECHECK OK: 0 of 200 re-proven gold unit(s) changed verdict (0.0%)
- AUDIT OK: must-kill 30 of 30 died at once; logic 20 killed; 1 missed at the standard depth; 6 unresolved; logic kill rate 95.2% of 21 resolved; 30 unit(s) sampled
