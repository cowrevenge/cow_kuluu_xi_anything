# Scoreboard

<!-- written by tools/cow/conveyor.py status - do not edit -->

Judge `7f9969cd916e`. Universe: 21038 functions, 3140766 bytes of original code (non-thunk, at most 32768 bytes each).

| line | functions | % | code bytes | % |
| --- | ---: | ---: | ---: | ---: |
| **PROVEN C** (gold under judge v2) | 267 | 1.27% | 6494 | **0.21%** |
| of which CLEAN C (model-written, no machine residue) | 12 | 0.06% | 68 | 0.00% |
| hand units and table rows (the earlier exact proofs) | 975 | 4.63% | 6213 | 0.20% |

Everything else, by what the judge last said:

| state | functions | code bytes | meaning |
| --- | ---: | ---: | --- |
| silver | 21 | 667 | passes; not enough clean states or coverage to call it proven |
| weak | 96 | 6792 | passes where it ran; it barely ran |
| fail | 261 | 16250 | a real mismatch |
| timeout | 1 | 266 | ran out of its time budget |
| stale | 9516 | 498184 | has a unit, not yet judged by THIS judge (run the baseline) |
| hand unit in progress | 6 | 184 | a hand unit that is not finished; the conveyor leaves it alone |
| parked (no unit) | 3 | 13 | three attempts failed; waiting for a better prompt or judge |
| no unit yet | 9892 | 2605703 | nothing written yet |

## Day by day

| date | proven functions | proven bytes | % of bytes | change | judge |
| --- | ---: | ---: | ---: | ---: | --- |
| 2026-11-12 | 267 | 6494 | 0.207% |  | 7f9969cd916e |
