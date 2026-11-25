# Why not gold

<!-- written by tools/cow/why_table.py (cycle step 8) - do not edit -->

Judge `401ff8958bf8`. Every function on the scoreboard that is not proven, by reason; 556 functions, 7.26% of the code bytes. One row per function: [WHY.csv](WHY.csv).

| state | reason | functions | % of code bytes |
| --- | --- | ---: | ---: |
| silver | states reach 70-99% of its blocks | 127 | 2.92% |
| weak | states reach under 30% of its blocks | 4 | 0.52% |
| weak | states reach 30-70% of its blocks | 19 | 0.47% |
| parked (no unit) | lifts; judge: not judged | 13 | 0.38% |
| no unit yet | lifts; judge: memory | 18 | 0.30% |
| parked (no unit) | lifts; judge: memory | 13 | 0.20% |
| no unit yet | lifts; judge: fault | 4 | 0.17% |
| silver | states reach all of its blocks | 20 | 0.17% |
| no unit yet | lifts; judge: no clean state | 17 | 0.16% |
| parked (no unit) | lifts; judge: fault | 10 | 0.14% |
| weak | too few clean states (the original faults in most) | 1 | 0.13% |
| parked (no unit) | lifts; judge: no clean state | 35 | 0.12% |
| parked (no unit) | rise: esp differs at X from X | 2 | 0.12% |
| parked (no unit) | rise: ret with esp off the return address at X | 11 | 0.11% |
| timeout | timeout: timeout | 8 | 0.10% |
| parked (no unit) | rise: tail jump with esp off the return address at X | 24 | 0.10% |
| parked (no unit) | rise: esp set to a non-frame value | 25 | 0.10% |
| parked (no unit) | lifts; judge: hang | 4 | 0.10% |
| parked (no unit) | lifts; judge: edx | 6 | 0.09% |
| fail | fail: memory | 11 | 0.08% |
| parked (no unit) | rise: stack probe of a variable size | 5 | 0.06% |
| fail | fail: no clean state | 50 | 0.06% |
| fail | fail: eax | 7 | 0.05% |
| no unit yet | lifts; judge: not judged | 1 | 0.05% |
| no unit yet | rise: stack probe of a variable size | 1 | 0.04% |
| no unit yet | rise: fnstsw without a compare in the block | 10 | 0.04% |
| no unit yet | lifts; judge: st0 | 5 | 0.04% |
| no unit yet | rise: tail jump with esp off the return address at X | 4 | 0.03% |
| parked (no unit) | lifts; judge: callee-saved register | 2 | 0.03% |
| no unit yet | lifts; judge: edx | 3 | 0.03% |
| parked (no unit) | rise: switch target outside | 1 | 0.03% |
| stale | not judged by this judge yet | 2 | 0.03% |
| parked (no unit) | rise: verbatim instruction on esp: pushfd | 2 | 0.03% |
| fail | fail: crash | 1 | 0.03% |
| no unit yet | rise: ret with esp off the return address at X | 35 | 0.03% |
| parked (no unit) | lifts; judge: compile:X | 1 | 0.02% |
| fail | fail: callee-saved register | 3 | 0.02% |
| parked (no unit) | lifts; judge: compile_blocked | 5 | 0.02% |
| no unit yet | rise: x87 stack differs at X | 3 | 0.02% |
| no unit yet | lifts; judge: callee-saved register | 1 | 0.02% |
| fail | fail: fault | 4 | 0.02% |
| no unit yet | rise: block reached before its predecessor (irreducible) | 14 | 0.01% |
| no unit yet | rise: esp set to a non-frame value | 2 | 0.01% |
| fail | fail: call args | 2 | 0.01% |
| no unit yet | lifts; judge: vector register | 2 | 0.01% |
| no unit yet | rise: jump outside: X | 1 | 0.01% |
| no unit yet | rise: x87 d9 e5 | 2 | 0.01% |
| parked (no unit) | lifts; judge: compile_error | 1 | 0.01% |
| hand unit in progress | a hand unit, not finished | 6 | 0.01% |
| no unit yet | lifts; judge: fpu control word | 1 | 0.01% |
| parked (no unit) | lifts; judge: eax | 1 | 0.01% |
| no unit yet | lifts; judge: compile_blocked | 2 | 0.01% |
| parked (no unit) | lifts; judge: out-of-region write | 1 | 0.00% |
| no unit yet | lifts; judge: compile:X | 1 | 0.00% |
| fail | fail: edx | 2 | 0.00% |

## The sites weak and silver units miss, by why

Every instruction site a weak or silver unit never reached in a clean state, grouped by why no state reaches it (seek's own words, from tools/cow/aim.py). One row per unit and reason, with the addresses: [SITES.csv](SITES.csv).

| why | sites | units |
| --- | ---: | ---: |
| not aimed: stopped moving: 1 round(s) with these states and these tools | 6465 | 108 |
| aimed states FAILed at state 529: st0 (8 state(s) shed first) | 524 | 1 |
| seek made a state for it; the judge's run went elsewhere | 442 | 14 |
| aimed states ranked no higher: the try ranks no higher: weak, 345/617 reached | 272 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 107/241 reached | 134 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 750/862 reached | 112 | 1 |
| aimed states FAILed at state 6: fault (8 state(s) shed first) | 60 | 1 |
| aimed states FAILed at state 166: callee-saved register (8 state(s) shed first) | 45 | 1 |
| aimed states FAILed at state 2: callee-saved register (8 state(s) shed first) | 44 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 374/581 reached | 27 | 1 |
| aimed states FAILed at state 1: call args (8 state(s) shed first) | 20 | 1 |
| seek gave no states: seek gave no states | 20 | 2 |
| aimed states ranked no higher: the try ranks no higher: silver, 784/803 reached | 19 | 1 |
| aimed states FAILed at state 9: st0 (8 state(s) shed first) | 14 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 128/140 reached | 12 | 1 |
| aimed states ranked no higher: the original faults in every new state : nothing new was judged | 12 | 2 |
| aimed states ranked no higher: the try ranks no higher: silver, 146/153 reached | 7 | 1 |
| aimed states FAILed at state 0: no clean state (8 state(s) shed first) | 6 | 1 |
| seek: a read or write in the null page | 5 | 2 |
| seek: a branch on what ret_101b21b3_2 returned, and that | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 150/154 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 338/341 reached | 3 | 1 |
| aimed states FAILed at state 65: fault (2 state(s) shed first) | 2 | 1 |
| seek: reached, but the run does not finish: cannot send the branch that way | 2 | 1 |
| aimed states FAILed at state 2: eax (8 state(s) shed first) | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 196/197 reached | 1 | 1 |
| seek: a branch on what ret_101b21e7_0 returned, and that | 1 | 1 |
| aimed states FAILed at state 0: no clean state (2 state(s) shed first) | 1 | 1 |
| every site reached; too few clean states (the grind's) | 0 | 19 |
| no site list yet (judged before the aim) | 0 | 3 |
