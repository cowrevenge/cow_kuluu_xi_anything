# Scoreboard

<!-- written by tools/cow/conveyor.py status - do not edit -->

Judge `6318f4f96b8d`. Universe: 21038 functions, 3140766 bytes of original code (non-thunk, at most 32768 bytes each).

| line | functions | % | code bytes | % |
| --- | ---: | ---: | ---: | ---: |
| **PROVEN C** (gold under judge v2) | 13739 | 65.31% | 1010137 | **32.16%** |
| of which CLEAN C (model-written, no machine residue) | 6946 | 33.02% | 772831 | 24.61% |
| hand units and table rows (the earlier exact proofs) | 975 | 4.63% | 6213 | 0.20% |

Everything else, by what the judge last said:

| state | functions | code bytes | meaning |
| --- | ---: | ---: | --- |
| silver | 1555 | 394035 | passes; not enough clean states or coverage to call it proven |
| weak | 1942 | 794271 | passes where it ran; it barely ran |
| fail | 818 | 133015 | a real mismatch |
| timeout | 22 | 5147 | ran out of its time budget |
| stale | 12 | 2389 | has a unit, not yet judged by THIS judge (run the baseline) |
| hand unit in progress | 6 | 184 | a hand unit that is not finished; the conveyor leaves it alone |
| parked (no unit) | 542 | 15551 | three attempts failed; waiting for a better prompt or judge |
| no unit yet | 1427 | 779824 | nothing written yet |

## Day by day

| date | proven functions | proven bytes | % of bytes | change | judge |
| --- | ---: | ---: | ---: | ---: | --- |
| 2026-11-12 | 3168 | 76900 | 2.448% | +2.448 | 7f9969cd916e |
| 2026-11-13 | 5057 | 124456 | 3.963% | +1.515 | 7f9969cd916e |
| 2026-11-14 | 6467 | 177701 | 5.658% | +5.658 | dbb9909beca8 |
| 2026-11-15 | 5263 | 145278 | 4.626% | +4.626 | 4a432abd0d9d |
| 2026-11-16 | 11613 | 700959 | 22.318% | +22.318 | 1e76be48d1da |
| 2026-11-17 | 13739 | 1010137 | 32.162% | +32.162 | 6318f4f96b8d |

## Is the judge still a judge

Checked 2026-11-17 04:44:20 (a sample of gold re-proven; gold units broken on purpose - docs/cow/SYSTEM2.md, 8.4):

- RECHECK OK: 1 of 200 re-proven gold unit(s) changed verdict (0.5%); 19 gold alone but not in a batch
- AUDIT OK: must-kill 30 of 30 died at once; logic 26 killed; 1 missed at the standard depth; 2 unresolved; logic kill rate 96.3% of 27 resolved; 30 unit(s) sampled
