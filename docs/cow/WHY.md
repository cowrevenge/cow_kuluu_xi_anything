# Why not gold

<!-- written by tools/cow/why_table.py (cycle step 8) - do not edit -->

Judge `15c934038e44`. Every function on the scoreboard that is not proven, by reason; 1009 functions, 17.94% of the code bytes. One row per function: [WHY.csv](WHY.csv).

| state | reason | functions | % of code bytes |
| --- | --- | ---: | ---: |
| silver | states reach 70-99% of its blocks | 423 | 11.33% |
| weak | states reach 30-70% of its blocks | 36 | 1.17% |
| weak | states reach under 30% of its blocks | 7 | 1.08% |
| no unit yet | lifts; judge: memory | 20 | 0.70% |
| silver | states reach all of its blocks | 40 | 0.40% |
| no unit yet | lifts; judge: not judged | 4 | 0.31% |
| no unit yet | lifts; judge: st0 | 14 | 0.25% |
| parked (no unit) | lifts; judge: no clean state | 109 | 0.20% |
| no unit yet | lifts; judge: no clean state | 18 | 0.20% |
| parked (no unit) | lifts; judge: memory | 15 | 0.17% |
| no unit yet | lifts; judge: fault | 4 | 0.17% |
| parked (no unit) | lifts; judge: fault | 10 | 0.14% |
| fail | fail: no clean state | 59 | 0.12% |
| parked (no unit) | lifts; judge: not judged | 11 | 0.12% |
| fail | fail: memory | 15 | 0.11% |
| parked (no unit) | rise: ret with esp off the return address at X | 11 | 0.11% |
| timeout | timeout: timeout | 9 | 0.11% |
| parked (no unit) | rise: tail jump with esp off the return address at X | 24 | 0.10% |
| parked (no unit) | rise: esp set to a non-frame value | 25 | 0.10% |
| parked (no unit) | lifts; judge: edx | 6 | 0.09% |
| no unit yet | rise: esp differs at X from X | 1 | 0.08% |
| parked (no unit) | rise: stack probe of a variable size | 5 | 0.06% |
| no unit yet | lifts; judge: hang | 1 | 0.06% |
| fail | fail: eax | 7 | 0.05% |
| no unit yet | lifts; judge: compile_blocked | 2 | 0.05% |
| no unit yet | rise: stack probe of a variable size | 1 | 0.04% |
| no unit yet | rise: fnstsw without a compare in the block | 10 | 0.04% |
| parked (no unit) | lifts; judge: compile_blocked | 8 | 0.04% |
| stale | not judged by this judge yet | 3 | 0.04% |
| no unit yet | lifts; judge: edx | 5 | 0.04% |
| parked (no unit) | lifts; judge: hang | 3 | 0.03% |
| no unit yet | rise: tail jump with esp off the return address at X | 4 | 0.03% |
| parked (no unit) | rise: esp differs at X from X | 1 | 0.03% |
| parked (no unit) | lifts; judge: callee-saved register | 2 | 0.03% |
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
| hand unit in progress | a hand unit, not finished | 6 | 0.01% |
| no unit yet | lifts; judge: fpu control word | 1 | 0.01% |
| parked (no unit) | lifts; judge: eax | 1 | 0.01% |
| weak | too few clean states (the original faults in most) | 2 | 0.00% |
| no unit yet | lifts; judge: eax | 1 | 0.00% |
| no unit yet | lifts; judge: compile:X | 1 | 0.00% |
| fail | fail: edx | 3 | 0.00% |

## The sites weak and silver units miss, by why

Every instruction site a weak or silver unit never reached in a clean state, grouped by why no state reaches it (seek's own words, from tools/cow/aim.py). One row per unit and reason, with the addresses: [SITES.csv](SITES.csv).

| why | sites | units |
| --- | ---: | ---: |
| not aimed: no site list for these states yet: the census will make one | 12929 | 269 |
| aimed states ranked no higher: the try ranks no higher: weak, 3997/7420 reached | 2550 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 125/1223 reached | 1088 | 1 |
| seek made a state for it; the judge's run went elsewhere | 773 | 28 |
| aimed states FAILed at state 0: memory (8 state(s) shed first) | 731 | 1 |
| seek gave no states: seek gave no states | 528 | 25 |
| aimed states ranked no higher: the try ranks no higher: weak, 693/1597 reached | 495 | 1 |
| aimed states FAILed at state 0: no clean state (8 state(s) shed first) | 363 | 5 |
| aimed states FAILed at state 11: call args (8 state(s) shed first) | 257 | 1 |
| aimed states FAILed at state 113: st0 (8 state(s) shed first) | 178 | 1 |
| aimed states FAILed at state 76: fault (8 state(s) shed first) | 166 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 510/803 reached | 148 | 1 |
| new states never ran: row budget | 145 | 2 |
| aimed states FAILed at state 77: st0 | 132 | 1 |
| aimed states FAILed at state 0: no clean state (1 state(s) shed first) | 122 | 5 |
| aimed states ranked no higher: the try ranks no higher: weak, 612/915 reached | 122 | 1 |
| aimed states FAILed at state 57: st0 (1 state(s) shed first) | 113 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 197/410 reached | 112 | 1 |
| aimed states FAILed at state 147: edx (6 state(s) shed first) | 81 | 1 |
| aimed states FAILed at state 67: fault | 76 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 173/478 reached | 70 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 148/460 reached | 70 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 317/933 reached | 69 | 1 |
| aimed states FAILed at state 142: memory | 61 | 1 |
| aimed states FAILed at state 118: fault (3 state(s) shed first) | 60 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 577/1124 reached | 58 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 50/916 reached | 56 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 184/265 reached | 48 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 1012/1080 reached | 48 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 150/552 reached | 46 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 164/387 reached | 44 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 103/321 reached | 43 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 78/509 reached | 42 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 142/175 reached | 38 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 108/196 reached | 36 | 1 |
| aimed states FAILed at state 34: call args (5 state(s) shed first) | 36 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 46/108 reached | 36 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 258/352 reached | 35 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 207/267 reached | 35 | 1 |
| aimed states FAILed at state 123: fault | 35 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 744/4401 reached | 33 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 81/117 reached | 33 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 128/161 reached | 31 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 306/339 reached | 28 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 152/317 reached | 28 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 85/198 reached | 25 | 1 |
| aimed states FAILed at state 1310: fault (1 state(s) shed first) | 25 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 620/982 reached | 24 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 84/107 reached | 22 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 66/106 reached | 22 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 167/281 reached | 21 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 73/95 reached | 21 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 127/150 reached | 20 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 72/193 reached | 19 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 232/1078 reached | 18 | 1 |
| aimed states FAILed at state 57: memory (2 state(s) shed first) | 18 | 1 |
| aimed states FAILed at state 0: no clean state (3 state(s) shed first) | 17 | 2 |
| aimed states ranked no higher: the try ranks no higher: weak, 22/70 reached | 16 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 67/104 reached | 15 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 166/181 reached | 15 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 349/601 reached | 15 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 87/553 reached | 14 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 231/327 reached | 13 | 1 |
| aimed states FAILed at state 0: no clean state (2 state(s) shed first) | 13 | 2 |
| aimed states ranked no higher: the try ranks no higher: weak, 41/67 reached | 13 | 1 |
| aimed states FAILed at state 0: no clean state (4 state(s) shed first) | 12 | 3 |
| aimed states ranked no higher: the try ranks no higher: silver, 199/255 reached | 12 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 55/127 reached | 12 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 44/62 reached | 12 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 48/127 reached | 11 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 50/95 reached | 11 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 54/158 reached | 10 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 123/141 reached | 10 | 1 |
| aimed states FAILed at state 37: fault | 10 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 47/65 reached | 9 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 136/254 reached | 9 | 1 |
| aimed states FAILed at state 0: no clean state (6 state(s) shed first) | 9 | 2 |
| aimed states ranked no higher: the try ranks no higher: weak, 52/543 reached | 9 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 75/85 reached | 9 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 183/446 reached | 9 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 94/103 reached | 9 | 1 |
| aimed states FAILed at state 100: fault | 8 | 1 |
| aimed states FAILed at state 27: memory | 8 | 1 |
| aimed states FAILed at state 0: no clean state (5 state(s) shed first) | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 288/388 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 41/219 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 33/139 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 272/279 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 48/206 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 68/68 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 47/266 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 191/197 reached | 5 | 1 |
| aimed states FAILed at state 1768: memory (3 state(s) shed first) | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 41/53 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 132/207 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 155/260 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 46/50 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 486/519 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 52/130 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 89/94 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 32/90 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 29/121 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 95/98 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 306/1318 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 73/264 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 53/78 reached | 2 | 2 |
| aimed states ranked no higher: the try ranks no higher: silver, 59/61 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 155/401 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 50/207 reached | 2 | 1 |
| aimed states FAILed at state 14: fault | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 30/95 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 133/275 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 150/183 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 40/41 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 45/68 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 101/137 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 171/229 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 79/125 reached | 1 | 1 |
| every site reached; too few clean states (the grind's) | 0 | 40 |
| no site list yet (judged before the aim) | 0 | 16 |
