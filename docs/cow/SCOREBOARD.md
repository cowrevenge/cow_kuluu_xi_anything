# Scoreboard

<!-- written by tools/cow/conveyor.py status - do not edit -->

Judge `7f9969cd916e`. Universe: 21038 functions, 3140766 bytes of original code (non-thunk, at most 32768 bytes each).

| line | functions | % | code bytes | % |
| --- | ---: | ---: | ---: | ---: |
| **PROVEN C** (gold under judge v2) | 1929 | 9.17% | 45120 | **1.44%** |
| of which CLEAN C (model-written, no machine residue) | 40 | 0.19% | 286 | 0.01% |
| hand units and table rows (the earlier exact proofs) | 975 | 4.63% | 6213 | 0.20% |

Everything else, by what the judge last said:

| state | functions | code bytes | meaning |
| --- | ---: | ---: | --- |
| silver | 166 | 6925 | passes; not enough clean states or coverage to call it proven |
| weak | 445 | 31614 | passes where it ran; it barely ran |
| fail | 1691 | 118835 | a real mismatch |
| timeout | 49 | 2891 | ran out of its time budget |
| stale | 5931 | 323654 | has a unit, not yet judged by THIS judge (run the baseline) |
| hand unit in progress | 6 | 184 | a hand unit that is not finished; the conveyor leaves it alone |
| parked (no unit) | 54 | 382 | three attempts failed; waiting for a better prompt or judge |
| no unit yet | 9792 | 2604948 | nothing written yet |

## Day by day

| date | proven functions | proven bytes | % of bytes | change | judge |
| --- | ---: | ---: | ---: | ---: | --- |
| 2026-11-12 | 1929 | 45120 | 1.437% |  | 7f9969cd916e |
