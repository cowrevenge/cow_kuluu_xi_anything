# Why not gold

<!-- written by tools/cow/why_table.py (cycle step 8) - do not edit -->

Judge `6318f4f96b8d`. Every function on the scoreboard that is not proven, by reason; 4476 functions, 55.01% of the code bytes. One row per function: [WHY.csv](WHY.csv).

| state | reason | functions | % of code bytes |
| --- | --- | ---: | ---: |
| silver | states reach 70-99% of its blocks | 1234 | 14.45% |
| weak | states reach 30-70% of its blocks | 897 | 10.79% |
| weak | states reach under 30% of its blocks | 369 | 9.12% |
| no unit yet | lifts; judge: no clean state | 255 | 4.85% |
| no unit yet | rise: esp differs at X | 47 | 3.59% |
| no unit yet | lifts; judge: memory | 121 | 1.87% |
| no unit yet | lifts; judge: not judged | 80 | 1.36% |
| no unit yet | lifts; judge: fault | 68 | 0.94% |
| fail | fail: memory | 100 | 0.82% |
| no unit yet | rise: x87 stack differs at X | 7 | 0.65% |
| no unit yet | lifts; judge: callee-saved register | 34 | 0.57% |
| fail | fail: callee-saved register | 46 | 0.56% |
| fail | fail: no clean state | 181 | 0.55% |
| fail | fail: eax | 109 | 0.53% |
| no unit yet | lifts; judge: st0 | 30 | 0.50% |
| fail | fail: fault | 71 | 0.43% |
| no unit yet | lifts; judge: edx | 29 | 0.27% |
| no unit yet | rise: ret with esp off the return address at X | 51 | 0.26% |
| fail | fail: edx | 39 | 0.26% |
| fail | fail: out-of-region overflow | 64 | 0.25% |
| no unit yet | lifts; judge: out-of-region overflow | 26 | 0.24% |
| no unit yet | lifts; judge: eax | 29 | 0.23% |
| no unit yet | lifts; judge: call count | 5 | 0.19% |
| no unit yet | lifts; judge: hang | 9 | 0.17% |
| parked (no unit) | lifts; judge: no clean state | 294 | 0.16% |
| no unit yet | rise: stack probe of a variable size | 11 | 0.16% |
| no unit yet | lifts; judge: out-of-region write | 11 | 0.15% |
| silver | states reach all of its blocks | 26 | 0.13% |
| fail | fail: out-of-region write | 29 | 0.11% |
| no unit yet | rise: esp set to a non-frame value | 19 | 0.11% |
| no unit yet | rise: tail jump with esp off the return address at X | 13 | 0.09% |
| timeout | timeout: timeout | 13 | 0.08% |
| fail | fail: call args | 20 | 0.07% |
| stale | not judged by this judge yet | 10 | 0.07% |
| no unit yet | lifts; judge: vector register | 7 | 0.05% |
| no unit yet | rise: fnstsw without a compare in the block | 10 | 0.04% |
| fail | fail: call count | 6 | 0.04% |
| parked (no unit) | lifts; judge: memory | 21 | 0.04% |
| no unit yet | rise: switch target outside | 1 | 0.03% |
| timeout | timeout: wall timeout | 3 | 0.03% |
| no unit yet | rise: verbatim instruction on esp: pushfd | 2 | 0.03% |
| no unit yet | lifts; judge: compile:X | 2 | 0.02% |
| parked (no unit) | lifts; judge: not judged | 15 | 0.02% |
| parked (no unit) | rise: tail jump with esp off the return address at X | 15 | 0.02% |
| no unit yet | lifts; judge: fpu control word | 2 | 0.01% |
| weak | too few clean states (the original faults in most) | 2 | 0.01% |
| fail | fail: st0 | 2 | 0.01% |
| fail | fail: vector register | 2 | 0.01% |
| no unit yet | rise: jump outside: X | 1 | 0.01% |
| parked (no unit) | lifts; judge: out-of-region overflow | 4 | 0.01% |
| no unit yet | rise: x87 d9 e5 | 2 | 0.01% |
| no unit yet | lifts; judge: call args | 1 | 0.01% |
| parked (no unit) | lifts; judge: callee-saved register | 5 | 0.01% |
| parked (no unit) | rise: esp set to a non-frame value | 9 | 0.01% |
| hand unit in progress | a hand unit, not finished | 6 | 0.01% |
| parked (no unit) | lifts; judge: eax | 3 | 0.00% |
| parked (no unit) | rise: stack probe of a variable size | 1 | 0.00% |
| parked (no unit) | rise: call arguments reach above the frame | 3 | 0.00% |
| parked (no unit) | lifts; judge: edx | 1 | 0.00% |
| parked (no unit) | rise: ret with esp off the return address at X | 1 | 0.00% |
| parked (no unit) | lifts; judge: fault | 1 | 0.00% |
| parked (no unit) | lifts; judge: out-of-region write | 1 | 0.00% |
