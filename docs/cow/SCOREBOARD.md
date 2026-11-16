# Scoreboard

<!-- written by tools/cow/conveyor.py status - do not edit -->

Judge `1b8a2c1740d0`. Universe: 21038 functions, 3140766 bytes of original code (non-thunk, at most 32768 bytes each).

| line | functions | % | code bytes | % |
| --- | ---: | ---: | ---: | ---: |
| **PROVEN C** (gold under judge v2) | 11586 | 55.07% | 657116 | **20.92%** |
| of which CLEAN C (model-written, no machine residue) | 4788 | 22.76% | 421109 | 13.41% |
| hand units and table rows (the earlier exact proofs) | 975 | 4.63% | 6213 | 0.20% |

Everything else, by what the judge last said:

| state | functions | code bytes | meaning |
| --- | ---: | ---: | --- |
| silver | 1442 | 270287 | passes; not enough clean states or coverage to call it proven |
| weak | 2879 | 882803 | passes where it ran; it barely ran |
| fail | 963 | 132942 | a real mismatch |
| timeout | 206 | 30282 | ran out of its time budget |
| stale | 9 | 1039 | has a unit, not yet judged by THIS judge (run the baseline) |
| hand unit in progress | 6 | 184 | a hand unit that is not finished; the conveyor leaves it alone |
| parked (no unit) | 355 | 4628 | three attempts failed; waiting for a better prompt or judge |
| no unit yet | 2617 | 1155272 | nothing written yet |

## Day by day

| date | proven functions | proven bytes | % of bytes | change | judge |
| --- | ---: | ---: | ---: | ---: | --- |
| 2026-11-12 | 3168 | 76900 | 2.448% | +2.448 | 7f9969cd916e |
| 2026-11-13 | 5057 | 124456 | 3.963% | +1.515 | 7f9969cd916e |
| 2026-11-14 | 6467 | 177701 | 5.658% | +5.658 | dbb9909beca8 |
| 2026-11-15 | 5263 | 145278 | 4.626% | +4.626 | 4a432abd0d9d |
| 2026-11-16 | 11586 | 657116 | 20.922% | +20.922 | 1b8a2c1740d0 |

## Is the judge still a judge

Checked 2026-11-16 19:42:08 (a sample of gold re-proven; gold units broken on purpose - docs/cow/SYSTEM2.md, 8.4):

- RECHECK OK: 4 of 200 re-proven gold unit(s) changed verdict (2.0%)
- AUDIT OK: must-kill 30 of 30 died at once; logic 26 killed; 0 missed at the standard depth; 2 unresolved; logic kill rate 100.0% of 26 resolved; 30 unit(s) sampled
