# Why not gold

<!-- written by tools/cow/why_table.py (cycle step 8) - do not edit -->

Judge `15c934038e44`. Every function on the scoreboard that is not proven, by reason; 881 functions, 15.07% of the code bytes. One row per function: [WHY.csv](WHY.csv).

| state | reason | functions | % of code bytes |
| --- | --- | ---: | ---: |
| silver | states reach 70-99% of its blocks | 316 | 9.45% |
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
| aimed states FAILed at state 283: st0 (8 state(s) shed first) | 3294 | 1 |
| aimed states ranked no higher: the original faults in every new state : nothing new was judged | 2567 | 98 |
| aimed states ranked no higher: the try ranks no higher: weak, 140/1223 reached | 969 | 1 |
| aimed states FAILed at state 3608: callee-saved register (1 state(s) shed first) | 923 | 1 |
| aimed states FAILed at state 0: memory (8 state(s) shed first) | 731 | 1 |
| seek gave no states: seek gave no states | 577 | 37 |
| seek: reached, but the run does not finish: cannot send the branch that way | 474 | 1 |
| seek made a state for it; the judge's run went elsewhere | 407 | 17 |
| new states never ran: row budget | 390 | 9 |
| seek: switch | 285 | 1 |
| aimed states FAILed at state 11: call args (8 state(s) shed first) | 257 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 322/348 reached | 189 | 1 |
| aimed states FAILed at state 162: st0 | 178 | 1 |
| aimed states FAILed at state 78: fault (8 state(s) shed first) | 166 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 439/803 reached | 148 | 1 |
| aimed states FAILed at state 228: fault | 147 | 1 |
| aimed states FAILed at state 94: edx | 132 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 155/172 reached | 88 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 449/494 reached | 82 | 1 |
| aimed states FAILed at state 147: edx (6 state(s) shed first) | 81 | 1 |
| aimed states FAILed at state 339: fault | 76 | 1 |
| aimed states FAILed at state 748: memory | 70 | 1 |
| aimed states ranked no higher: the try ranks no higher: hang, None reached | 64 | 1 |
| seek: time budget | 63 | 2 |
| aimed states FAILed at state 142: memory | 61 | 1 |
| aimed states FAILed at state 118: fault (3 state(s) shed first) | 60 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 148/175 reached | 60 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 1066/1124 reached | 58 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 742/795 reached | 53 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 246/299 reached | 53 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 290/341 reached | 51 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 293/343 reached | 50 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 216/265 reached | 49 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 64/107 reached | 44 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 343/387 reached | 44 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 305/321 reached | 43 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 226/226 reached | 40 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 145/182 reached | 37 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 108/196 reached | 36 | 1 |
| aimed states FAILed at state 34: call args (5 state(s) shed first) | 36 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 46/108 reached | 36 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 192/212 reached | 36 | 1 |
| aimed states FAILed at state 79: st0 | 35 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 223/267 reached | 35 | 1 |
| aimed states FAILed at state 123: fault | 35 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 932/966 reached | 34 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 58/117 reached | 33 | 1 |
| seek: reached, but the run does not finish: a division by 0 at X | 29 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 286/339 reached | 28 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 83/317 reached | 28 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 554/581 reached | 27 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 373/399 reached | 26 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 115/140 reached | 25 | 1 |
| seek: a read or write in the null page | 24 | 2 |
| aimed states ranked no higher: the try ranks no higher: silver, 977/982 reached | 24 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 143/157 reached | 24 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 39/127 reached | 23 | 2 |
| aimed states ranked no higher: the try ranks no higher: silver, 161/184 reached | 23 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 319/340 reached | 21 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 167/281 reached | 21 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 169/193 reached | 19 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 29/47 reached | 18 | 1 |
| aimed states FAILed at state 57: memory (2 state(s) shed first) | 18 | 1 |
| aimed states FAILed at state 79: callee-saved register | 16 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 64/91 reached | 16 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 80/81 reached | 16 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 188/204 reached | 16 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 583/601 reached | 15 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 124/138 reached | 14 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 41/55 reached | 14 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 93/327 reached | 13 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 41/67 reached | 13 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 33/46 reached | 13 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 69/84 reached | 13 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 119/132 reached | 13 | 1 |
| seek: reached, but the run does not finish: the path ends in a trap | 12 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 1526/1538 reached | 12 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 74/89 reached | 12 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 116/140 reached | 12 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 39/95 reached | 11 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 272/283 reached | 11 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 547/557 reached | 11 | 1 |
| aimed states FAILed at state 491: fault (2 state(s) shed first) | 10 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 123/141 reached | 10 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 66/76 reached | 10 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 126/136 reached | 10 | 1 |
| aimed states FAILed at state 33: fault | 10 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 47/65 reached | 9 | 1 |
| aimed states FAILed at state 2960: memory | 9 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 534/543 reached | 9 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 81/96 reached | 9 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 62/95 reached | 9 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 94/103 reached | 9 | 1 |
| aimed states FAILed at state 100: fault | 8 | 1 |
| aimed states FAILed at state 27: memory | 8 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 148/156 reached | 8 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 105/113 reached | 8 | 1 |
| seek: a branch on what ret_101b21b3_1 returned, and that | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 144/151 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 170/177 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 334/341 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 381/388 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 41/219 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 190/197 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 132/139 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 272/279 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 49/55 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 462/468 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 89/108 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 103/109 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 95/101 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 114/120 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 47/266 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 833/876 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 195/197 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 55/61 reached | 5 | 1 |
| aimed states FAILed at state 1768: memory (3 state(s) shed first) | 5 | 1 |
| seek: a branch on what ret_101b21b3_2 returned, and that | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 289/294 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 120/125 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 483/488 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 41/53 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 451/456 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 136/137 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 96/98 reached | 4 | 2 |
| aimed states ranked no higher: the try ranks no higher: weak, 12/19 reached | 4 | 2 |
| aimed states ranked no higher: the try ranks no higher: silver, 46/50 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 55/57 reached | 4 | 2 |
| aimed states ranked no higher: the try ranks no higher: silver, 617/621 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 509/519 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 182/186 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 55/67 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 168/172 reached | 4 | 1 |
| not aimed: no site list for these states yet: the census will make one | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 89/94 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 58/70 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 37/59 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 32/90 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 29/121 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 95/98 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 160/163 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 23/29 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 67/70 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 109/111 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 40/42 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 483/485 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 262/264 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 37/39 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 118/120 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 75/77 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 54/56 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 65/67 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 40/45 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 119/122 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 59/61 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 105/107 reached | 2 | 1 |
| seek: a branch on what ret_101b26c3_1 returned, and that | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 180/182 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 50/207 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 206/208 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 119/137 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 119/121 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 35/37 reached | 2 | 1 |
| aimed states FAILed at state 14: fault | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 178/179 reached | 1 | 1 |
| seek: reached, but the run does not finish: switch: no case reachable | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 28/31 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 48/51 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 29/30 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 30/95 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 175/176 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 73/74 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 112/113 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 34/35 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 33/34 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 225/226 reached | 1 | 1 |
| seek: a branch on what ret_101b21e7_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101b2209_0 returned, and that | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 45/46 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 40/41 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 228/229 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 147/148 reached | 1 | 1 |
| every site reached; too few clean states (the grind's) | 0 | 35 |
| no site list yet (judged before the aim) | 0 | 13 |
