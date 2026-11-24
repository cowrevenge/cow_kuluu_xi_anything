# Why not gold

<!-- written by tools/cow/why_table.py (cycle step 8) - do not edit -->

Judge `15c934038e44`. Every function on the scoreboard that is not proven, by reason; 878 functions, 14.86% of the code bytes. One row per function: [WHY.csv](WHY.csv).

| state | reason | functions | % of code bytes |
| --- | --- | ---: | ---: |
| silver | states reach 70-99% of its blocks | 313 | 9.24% |
| weak | states reach 30-70% of its blocks | 26 | 0.75% |
| weak | states reach under 30% of its blocks | 6 | 0.67% |
| parked (no unit) | lifts; judge: memory | 18 | 0.53% |
| parked (no unit) | lifts; judge: not judged | 14 | 0.39% |
| no unit yet | lifts; judge: memory | 16 | 0.33% |
| silver | states reach all of its blocks | 35 | 0.30% |
| no unit yet | lifts; judge: st0 | 15 | 0.29% |
| no unit yet | lifts; judge: no clean state | 19 | 0.20% |
| parked (no unit) | lifts; judge: no clean state | 110 | 0.20% |
| parked (no unit) | lifts; judge: fault | 10 | 0.14% |
| parked (no unit) | rise: esp differs at X from X | 2 | 0.12% |
| parked (no unit) | rise: ret with esp off the return address at X | 11 | 0.11% |
| timeout | timeout: timeout | 9 | 0.11% |
| fail | fail: no clean state | 58 | 0.10% |
| fail | fail: memory | 14 | 0.10% |
| parked (no unit) | rise: tail jump with esp off the return address at X | 24 | 0.10% |
| parked (no unit) | rise: esp set to a non-frame value | 25 | 0.10% |
| parked (no unit) | lifts; judge: hang | 4 | 0.10% |
| no unit yet | lifts; judge: fault | 3 | 0.09% |
| no unit yet | lifts; judge: compile_blocked | 2 | 0.08% |
| parked (no unit) | lifts; judge: compile_blocked | 6 | 0.07% |
| parked (no unit) | lifts; judge: edx | 5 | 0.07% |
| parked (no unit) | rise: stack probe of a variable size | 5 | 0.06% |
| fail | fail: eax | 7 | 0.05% |
| no unit yet | lifts; judge: not judged | 1 | 0.05% |
| no unit yet | rise: stack probe of a variable size | 1 | 0.04% |
| no unit yet | rise: fnstsw without a compare in the block | 10 | 0.04% |
| stale | not judged by this judge yet | 3 | 0.04% |
| no unit yet | rise: tail jump with esp off the return address at X | 4 | 0.03% |
| no unit yet | lifts; judge: edx | 4 | 0.03% |
| parked (no unit) | rise: switch target outside | 1 | 0.03% |
| parked (no unit) | rise: verbatim instruction on esp: pushfd | 2 | 0.03% |
| fail | fail: crash | 1 | 0.03% |
| no unit yet | rise: ret with esp off the return address at X | 35 | 0.03% |
| fail | fail: fault | 6 | 0.02% |
| fail | fail: callee-saved register | 5 | 0.02% |
| parked (no unit) | lifts; judge: compile:X | 1 | 0.02% |
| no unit yet | rise: x87 stack differs at X | 3 | 0.02% |
| no unit yet | lifts; judge: callee-saved register | 1 | 0.02% |
| no unit yet | rise: block reached before its predecessor (irreducible) | 14 | 0.01% |
| no unit yet | rise: esp set to a non-frame value | 2 | 0.01% |
| fail | fail: call args | 2 | 0.01% |
| parked (no unit) | lifts; judge: out-of-region write | 2 | 0.01% |
| no unit yet | lifts; judge: vector register | 2 | 0.01% |
| no unit yet | rise: jump outside: X | 1 | 0.01% |
| no unit yet | rise: x87 d9 e5 | 2 | 0.01% |
| parked (no unit) | lifts; judge: compile_error | 1 | 0.01% |
| parked (no unit) | lifts; judge: eax | 2 | 0.01% |
| hand unit in progress | a hand unit, not finished | 6 | 0.01% |
| no unit yet | lifts; judge: fpu control word | 1 | 0.01% |
| weak | too few clean states (the original faults in most) | 2 | 0.00% |
| no unit yet | lifts; judge: eax | 1 | 0.00% |
| no unit yet | lifts; judge: compile:X | 1 | 0.00% |
| fail | fail: edx | 3 | 0.00% |
| parked (no unit) | lifts; judge: callee-saved register | 1 | 0.00% |

## The sites weak and silver units miss, by why

Every instruction site a weak or silver unit never reached in a clean state, grouped by why no state reaches it (seek's own words, from tools/cow/aim.py). One row per unit and reason, with the addresses: [SITES.csv](SITES.csv).

| why | sites | units |
| --- | ---: | ---: |
| not aimed: stopped moving: 1 round(s) with these states and these tools | 12973 | 313 |
| aimed states ranked no higher: the try ranks no higher: silver, 2994/3483 reached | 474 | 1 |
| seek gave no states: seek gave no states | 303 | 3 |
| aimed states FAILed at state 192: fault | 147 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 188/268 reached | 80 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 155/196 reached | 41 | 1 |
| aimed states ranked no higher: the original faults in every new state : nothing new was judged | 37 | 2 |
| seek made a state for it; the judge's run went elsewhere | 36 | 3 |
| aimed states ranked no higher: the try ranks no higher: silver, 7381/7420 reached | 26 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 506/529 reached | 23 | 1 |
| seek: reached, but the run does not finish: a division by 0 at X | 20 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 573/586 reached | 13 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 154/161 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 4396/4401 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 536/541 reached | 5 | 1 |
| seek: reached, but the run does not finish: cannot send the branch that way | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 151/158 reached | 1 | 1 |
| every site reached; too few clean states (the grind's) | 0 | 35 |
| no site list yet (judged before the aim) | 0 | 13 |
