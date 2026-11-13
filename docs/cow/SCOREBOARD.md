# Scoreboard

<!-- written by tools/cow/conveyor.py status - do not edit -->

Judge `7f9969cd916e`. Universe: 21038 functions, 3140766 bytes of original code (non-thunk, at most 32768 bytes each).

| line | functions | % | code bytes | % |
| --- | ---: | ---: | ---: | ---: |
| **PROVEN C** (gold under judge v2) | 5057 | 24.04% | 124456 | **3.96%** |
| of which CLEAN C (model-written, no machine residue) | 822 | 3.91% | 15023 | 0.48% |
| hand units and table rows (the earlier exact proofs) | 975 | 4.63% | 6213 | 0.20% |

Everything else, by what the judge last said:

| state | functions | code bytes | meaning |
| --- | ---: | ---: | --- |
| silver | 507 | 19476 | passes; not enough clean states or coverage to call it proven |
| weak | 1108 | 81511 | passes where it ran; it barely ran |
| fail | 3281 | 272955 | a real mismatch |
| noisy | 42 | 3444 | the harness disagrees with itself here |
| hang | 22 | 1393 | does not return |
| timeout | 55 | 8844 | ran out of its time budget |
| error | 645 | 26106 | the machinery did not answer |
| stale | 16 | 166 | has a unit, not yet judged by THIS judge (run the baseline) |
| hand unit in progress | 6 | 184 | a hand unit that is not finished; the conveyor leaves it alone |
| parked (no unit) | 435 | 5729 | three attempts failed; waiting for a better prompt or judge |
| no unit yet | 8889 | 2590289 | nothing written yet |

## Day by day

| date | proven functions | proven bytes | % of bytes | change | judge |
| --- | ---: | ---: | ---: | ---: | --- |
| 2026-11-12 | 3168 | 76900 | 2.448% | +2.448 | 7f9969cd916e |
| 2026-11-13 | 5057 | 124456 | 3.963% | +1.515 | 7f9969cd916e |

## Is the judge still a judge

Checked 2026-11-13 01:15:16 (a sample of gold re-proven; gold units broken on purpose - docs/cow/SYSTEM2.md, 8.4):

- RECHECK OK: 0 of 200 re-proven gold unit(s) changed verdict (0.0%)
- AUDIT OK: must-kill 30 of 30 died at once; logic 20 killed; 1 missed at the standard depth; 6 unresolved; logic kill rate 95.2% of 21 resolved; 30 unit(s) sampled
