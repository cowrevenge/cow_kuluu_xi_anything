# Why not gold

<!-- written by tools/cow/why_table.py (cycle step 8) - do not edit -->

Judge `401ff8958bf8`. Every function on the scoreboard that is not proven, by reason; 663 functions, 9.10% of the code bytes. One row per function: [WHY.csv](WHY.csv).

| state | reason | functions | % of code bytes |
| --- | --- | ---: | ---: |
| silver | states reach 70-99% of its blocks | 127 | 3.98% |
| weak | states reach under 30% of its blocks | 6 | 0.58% |
| weak | states reach 30-70% of its blocks | 21 | 0.55% |
| parked (no unit) | lifts; judge: memory | 15 | 0.43% |
| parked (no unit) | lifts; judge: not judged | 14 | 0.39% |
| no unit yet | lifts; judge: st0 | 15 | 0.29% |
| no unit yet | lifts; judge: memory | 15 | 0.26% |
| parked (no unit) | lifts; judge: no clean state | 107 | 0.20% |
| no unit yet | lifts; judge: fault | 4 | 0.17% |
| weak | too few clean states (the original faults in most) | 5 | 0.17% |
| no unit yet | lifts; judge: no clean state | 16 | 0.16% |
| silver | states reach all of its blocks | 17 | 0.15% |
| parked (no unit) | lifts; judge: fault | 9 | 0.13% |
| timeout | timeout: timeout | 11 | 0.13% |
| parked (no unit) | rise: esp differs at X from X | 2 | 0.12% |
| parked (no unit) | rise: ret with esp off the return address at X | 11 | 0.11% |
| fail | fail: memory | 14 | 0.10% |
| parked (no unit) | rise: tail jump with esp off the return address at X | 24 | 0.10% |
| parked (no unit) | rise: esp set to a non-frame value | 25 | 0.10% |
| parked (no unit) | lifts; judge: hang | 4 | 0.10% |
| fail | fail: no clean state | 57 | 0.07% |
| parked (no unit) | rise: stack probe of a variable size | 5 | 0.06% |
| parked (no unit) | lifts; judge: compile_blocked | 7 | 0.06% |
| parked (no unit) | lifts; judge: edx | 5 | 0.06% |
| fail | fail: eax | 7 | 0.05% |
| no unit yet | lifts; judge: not judged | 1 | 0.05% |
| no unit yet | rise: stack probe of a variable size | 1 | 0.04% |
| no unit yet | rise: fnstsw without a compare in the block | 10 | 0.04% |
| stale | not judged by this judge yet | 3 | 0.04% |
| no unit yet | rise: tail jump with esp off the return address at X | 4 | 0.03% |
| parked (no unit) | lifts; judge: callee-saved register | 2 | 0.03% |
| no unit yet | lifts; judge: edx | 4 | 0.03% |
| parked (no unit) | rise: switch target outside | 1 | 0.03% |
| parked (no unit) | rise: verbatim instruction on esp: pushfd | 2 | 0.03% |
| fail | fail: crash | 1 | 0.03% |
| no unit yet | rise: ret with esp off the return address at X | 35 | 0.03% |
| fail | fail: callee-saved register | 5 | 0.02% |
| parked (no unit) | lifts; judge: compile:X | 1 | 0.02% |
| fail | fail: fault | 5 | 0.02% |
| no unit yet | rise: x87 stack differs at X | 3 | 0.02% |
| no unit yet | lifts; judge: callee-saved register | 1 | 0.02% |
| no unit yet | rise: block reached before its predecessor (irreducible) | 14 | 0.01% |
| no unit yet | rise: esp set to a non-frame value | 2 | 0.01% |
| fail | fail: call args | 2 | 0.01% |
| timeout | timeout: wall timeout | 1 | 0.01% |
| parked (no unit) | lifts; judge: out-of-region write | 2 | 0.01% |
| no unit yet | lifts; judge: vector register | 2 | 0.01% |
| no unit yet | rise: jump outside: X | 1 | 0.01% |
| no unit yet | rise: x87 d9 e5 | 2 | 0.01% |
| parked (no unit) | lifts; judge: compile_error | 1 | 0.01% |
| hand unit in progress | a hand unit, not finished | 6 | 0.01% |
| no unit yet | lifts; judge: fpu control word | 1 | 0.01% |
| parked (no unit) | lifts; judge: eax | 1 | 0.01% |
| no unit yet | lifts; judge: compile_blocked | 1 | 0.00% |
| no unit yet | lifts; judge: eax | 1 | 0.00% |
| no unit yet | lifts; judge: compile:X | 1 | 0.00% |
| fail | fail: edx | 3 | 0.00% |

## The sites weak and silver units miss, by why

Every instruction site a weak or silver unit never reached in a clean state, grouped by why no state reaches it (seek's own words, from tools/cow/aim.py). One row per unit and reason, with the addresses: [SITES.csv](SITES.csv).

| why | sites | units |
| --- | ---: | ---: |
| aimed states FAILed at state 276: st0 (8 state(s) shed first) | 3294 | 1 |
| seek made a state for it; the judge's run went elsewhere | 2542 | 53 |
| aimed states ranked no higher: the original faults in every new state : nothing new was judged | 896 | 11 |
| aimed states FAILed at state 0: memory (8 state(s) shed first) | 731 | 1 |
| seek gave no states: seek gave no states | 686 | 26 |
| aimed states ranked no higher: the try ranks no higher: silver, 2996/3483 reached | 474 | 1 |
| new states never ran: row budget | 416 | 5 |
| aimed states FAILed at state 9: call args (8 state(s) shed first) | 257 | 1 |
| aimed states FAILed at state 240: st0 (2 state(s) shed first) | 178 | 1 |
| aimed states FAILed at state 70: fault (8 state(s) shed first) | 166 | 1 |
| aimed states FAILed at state 0: no clean state (4 state(s) shed first) | 136 | 1 |
| aimed states FAILed at state 78: edx | 132 | 1 |
| seek: time budget | 117 | 3 |
| aimed states ranked no higher: the try ranks no higher: silver, 169/172 reached | 88 | 1 |
| aimed states FAILed at state 47: edx (8 state(s) shed first) | 81 | 1 |
| aimed states FAILed at state 136: fault (1 state(s) shed first) | 76 | 1 |
| aimed states ranked no higher: the try ranks no higher: hang, None reached | 64 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 294/313 reached | 62 | 1 |
| aimed states FAILed at state 51: fault (8 state(s) shed first) | 60 | 1 |
| aimed states FAILed at state 6: fault (8 state(s) shed first) | 60 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 1066/1124 reached | 58 | 1 |
| aimed states FAILed at state 16: fault (8 state(s) shed first) | 54 | 2 |
| seek: cannot send the branch that way | 45 | 2 |
| aimed states ranked no higher: the try ranks no higher: silver, 343/387 reached | 44 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 210/212 reached | 36 | 1 |
| aimed states FAILed at state 2: fault (8 state(s) shed first) | 36 | 3 |
| aimed states FAILed at state 121: fault (3 state(s) shed first) | 35 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 554/581 reached | 27 | 1 |
| aimed states FAILed at state 696: callee-saved register | 27 | 1 |
| aimed states FAILed at state 1: st0 (8 state(s) shed first) | 27 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 383/410 reached | 27 | 1 |
| aimed states FAILed at state 1393: fault (8 state(s) shed first) | 26 | 1 |
| aimed states FAILed at state 10: st0 | 25 | 1 |
| aimed states FAILed at state 45: fault | 23 | 1 |
| aimed states FAILed at state 626: call args (8 state(s) shed first) | 20 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 49/193 reached | 19 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 41/46 reached | 19 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 29/47 reached | 18 | 1 |
| not aimed: no site list for these states yet: the census will make one | 18 | 1 |
| aimed states FAILed at state 395: fault | 17 | 1 |
| seek: reached, but the run does not finish: too many steps (a loop it cannot leave) | 15 | 1 |
| aimed states FAILed at state 58: edx (8 state(s) shed first) | 14 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 100/100 reached | 14 | 1 |
| aimed states FAILed at state 9: st0 (8 state(s) shed first) | 14 | 1 |
| seek: a read or write in the null page | 13 | 6 |
| aimed states ranked no higher: the try ranks no higher: silver, 163/172 reached | 13 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 128/140 reached | 12 | 1 |
| seek: a branch on what ret_101b06f6_0 returned, and that | 10 | 1 |
| aimed states FAILed at state 93: fault (8 state(s) shed first) | 10 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 294/543 reached | 9 | 1 |
| seek: a branch on what ret_101b06f6_2 returned, and that | 8 | 1 |
| seek: reached, but the run does not finish: cannot send the branch that way | 7 | 2 |
| aimed states ranked no higher: the try ranks no higher: silver, 146/153 reached | 7 | 1 |
| seek: a branch on what ret_101b06f6_3 returned, and that | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 536/541 reached | 5 | 1 |
| seek: a branch on what ret_101b21b3_2 returned, and that | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 91/137 reached | 5 | 1 |
| seek: a branch on what ret_101b027e_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b06f6_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b071f_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b09b2_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b09c0_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b0fbb_0 returned, and that | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 150/154 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 59/61 reached | 2 | 1 |
| seek: a branch on what ret_101b0274_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b032a_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b071f_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b07d7_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b09b2_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b0a54_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b0d12_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b0d5b_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b0fbb_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b1883_0 returned, and that | 2 | 1 |
| aimed states FAILed at state 138: fault | 2 | 1 |
| aimed states FAILed at state 130: fault | 2 | 1 |
| aimed states FAILed at state 56: fault | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 503/504 reached | 1 | 1 |
| seek: a branch on what ret_101b061c_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101b0691_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101b0777_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101b0c1c_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101b0cd6_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101b21e7_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101b2209_0 returned, and that | 1 | 1 |
| seek: too slow (over 90 s) | 1 | 1 |
| every site reached; too few clean states (the grind's) | 0 | 19 |
| no site list yet (judged before the aim) | 0 | 1 |
