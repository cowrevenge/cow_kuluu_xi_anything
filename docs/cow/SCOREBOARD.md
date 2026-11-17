# Scoreboard

<!-- written by tools/cow/conveyor.py status - do not edit -->

Judge `30d6aadf17fd`. Universe: 21038 functions, 3140766 bytes of original code (non-thunk, at most 32768 bytes each).

| line | functions | % | code bytes | % |
| --- | ---: | ---: | ---: | ---: |
| **PROVEN C** (gold under judge v2) | 12185 | 57.92% | 777876 | **24.77%** |
| of which CLEAN C (model-written, no machine residue) | 5529 | 26.28% | 550728 | 17.53% |
| hand units and table rows (the earlier exact proofs) | 975 | 4.63% | 6213 | 0.20% |

Everything else, by what the judge last said:

| state | functions | code bytes | meaning |
| --- | ---: | ---: | --- |
| silver | 1984 | 392607 | passes; not enough clean states or coverage to call it proven |
| weak | 2823 | 932165 | passes where it ran; it barely ran |
| fail | 895 | 151344 | a real mismatch |
| timeout | 30 | 9381 | ran out of its time budget |
| stale | 19 | 5006 | has a unit, not yet judged by THIS judge (run the baseline) |
| hand unit in progress | 6 | 184 | a hand unit that is not finished; the conveyor leaves it alone |
| parked (no unit) | 380 | 5889 | three attempts failed; waiting for a better prompt or judge |
| no unit yet | 1741 | 860101 | nothing written yet |

## Day by day

| date | proven functions | proven bytes | % of bytes | change | judge |
| --- | ---: | ---: | ---: | ---: | --- |
| 2026-11-12 | 3168 | 76900 | 2.448% | +2.448 | 7f9969cd916e |
| 2026-11-13 | 5057 | 124456 | 3.963% | +1.515 | 7f9969cd916e |
| 2026-11-14 | 6467 | 177701 | 5.658% | +5.658 | dbb9909beca8 |
| 2026-11-15 | 5263 | 145278 | 4.626% | +4.626 | 4a432abd0d9d |
| 2026-11-16 | 11613 | 700959 | 22.318% | +22.318 | 1e76be48d1da |
| 2026-11-17 | 12185 | 777876 | 24.767% | +24.767 | 30d6aadf17fd |

## Is the judge still a judge

Checked 2026-11-17 04:44:20 (a sample of gold re-proven; gold units broken on purpose - docs/cow/SYSTEM2.md, 8.4):

- RECHECK OK: 1 of 200 re-proven gold unit(s) changed verdict (0.5%); 19 gold alone but not in a batch
- AUDIT OK: must-kill 30 of 30 died at once; logic 26 killed; 1 missed at the standard depth; 2 unresolved; logic kill rate 96.3% of 27 resolved; 30 unit(s) sampled
