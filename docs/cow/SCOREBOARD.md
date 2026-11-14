# Scoreboard

<!-- written by tools/cow/conveyor.py status - do not edit -->

Judge `dbb9909beca8`. Universe: 21038 functions, 3140766 bytes of original code (non-thunk, at most 32768 bytes each).

| line | functions | % | code bytes | % |
| --- | ---: | ---: | ---: | ---: |
| **PROVEN C** (gold under judge v2) | 6416 | 30.50% | 176224 | **5.61%** |
| of which CLEAN C (model-written, no machine residue) | 957 | 4.55% | 17379 | 0.55% |
| hand units and table rows (the earlier exact proofs) | 975 | 4.63% | 6213 | 0.20% |

Everything else, by what the judge last said:

| state | functions | code bytes | meaning |
| --- | ---: | ---: | --- |
| silver | 557 | 27675 | passes; not enough clean states or coverage to call it proven |
| weak | 824 | 65268 | passes where it ran; it barely ran |
| fail | 2683 | 250334 | a real mismatch |
| noisy | 67 | 3446 | the harness disagrees with itself here |
| hang | 3 | 168 | does not return |
| timeout | 228 | 15487 | ran out of its time budget |
| error | 8 | 533 | the machinery did not answer |
| hand unit in progress | 6 | 184 | a hand unit that is not finished; the conveyor leaves it alone |
| parked (no unit) | 382 | 4945 | three attempts failed; waiting for a better prompt or judge |
| no unit yet | 8889 | 2590289 | nothing written yet |

## Day by day

| date | proven functions | proven bytes | % of bytes | change | judge |
| --- | ---: | ---: | ---: | ---: | --- |
| 2026-11-12 | 3168 | 76900 | 2.448% | +2.448 | 7f9969cd916e |
| 2026-11-13 | 5057 | 124456 | 3.963% | +1.515 | 7f9969cd916e |
| 2026-11-14 | 6416 | 176224 | 5.611% | +5.611 | dbb9909beca8 |

## Is the judge still a judge

Checked 2026-11-14 15:01:49 (a sample of gold re-proven; gold units broken on purpose - docs/cow/SYSTEM2.md, 8.4):

- RECHECK OK: 1 of 200 re-proven gold unit(s) changed verdict (0.5%)
- AUDIT OK: must-kill 30 of 30 died at once; logic 21 killed; 0 missed at the standard depth; 6 unresolved; logic kill rate 100.0% of 21 resolved; 30 unit(s) sampled
