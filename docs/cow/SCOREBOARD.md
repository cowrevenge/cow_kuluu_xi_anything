# Scoreboard

<!-- written by tools/cow/conveyor.py status - do not edit -->

Judge `7f9969cd916e`. Universe: 21038 functions, 3140766 bytes of original code (non-thunk, at most 32768 bytes each).

| line | functions | % | code bytes | % |
| --- | ---: | ---: | ---: | ---: |
| **PROVEN C** (gold under judge v2) | 1215 | 5.78% | 31938 | **1.02%** |
| of which CLEAN C (model-written, no machine residue) | 24 | 0.11% | 157 | 0.00% |
| hand units and table rows (the earlier exact proofs) | 975 | 4.63% | 6213 | 0.20% |

Everything else, by what the judge last said:

| state | functions | code bytes | meaning |
| --- | ---: | ---: | --- |
| silver | 130 | 5088 | passes; not enough clean states or coverage to call it proven |
| weak | 369 | 26794 | passes where it ran; it barely ran |
| fail | 1284 | 96713 | a real mismatch |
| timeout | 26 | 1746 | ran out of its time budget |
| stale | 7166 | 366591 | has a unit, not yet judged by THIS judge (run the baseline) |
| hand unit in progress | 6 | 184 | a hand unit that is not finished; the conveyor leaves it alone |
| parked (no unit) | 35 | 225 | three attempts failed; waiting for a better prompt or judge |
| no unit yet | 9832 | 2605274 | nothing written yet |

## Day by day

| date | proven functions | proven bytes | % of bytes | change | judge |
| --- | ---: | ---: | ---: | ---: | --- |
| 2026-11-12 | 1215 | 31938 | 1.017% |  | 7f9969cd916e |
