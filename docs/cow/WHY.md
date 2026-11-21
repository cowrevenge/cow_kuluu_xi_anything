# Why not gold

<!-- written by tools/cow/why_table.py (cycle step 8) - do not edit -->

Judge `15c934038e44`. Every function on the scoreboard that is not proven, by reason; 1088 functions, 19.43% of the code bytes. One row per function: [WHY.csv](WHY.csv).

| state | reason | functions | % of code bytes |
| --- | --- | ---: | ---: |
| silver | states reach 70-99% of its blocks | 425 | 11.03% |
| weak | states reach 30-70% of its blocks | 52 | 1.41% |
| weak | states reach under 30% of its blocks | 10 | 1.14% |
| no unit yet | lifts; judge: memory | 34 | 1.11% |
| no unit yet | lifts; judge: not judged | 7 | 0.63% |
| fail | fail: memory | 26 | 0.39% |
| no unit yet | lifts; judge: no clean state | 25 | 0.38% |
| silver | states reach all of its blocks | 39 | 0.38% |
| no unit yet | lifts; judge: fault | 10 | 0.33% |
| no unit yet | lifts; judge: st0 | 15 | 0.29% |
| parked (no unit) | lifts; judge: no clean state | 114 | 0.23% |
| timeout | timeout: timeout | 11 | 0.20% |
| parked (no unit) | lifts; judge: fault | 15 | 0.14% |
| fail | fail: no clean state | 59 | 0.12% |
| no unit yet | rise: esp differs at X from X | 2 | 0.12% |
| no unit yet | rise: stack probe of a variable size | 4 | 0.11% |
| no unit yet | lifts; judge: edx | 7 | 0.10% |
| parked (no unit) | rise: tail jump with esp off the return address at X | 24 | 0.10% |
| parked (no unit) | rise: esp set to a non-frame value | 25 | 0.10% |
| no unit yet | lifts; judge: callee-saved register | 4 | 0.08% |
| no unit yet | rise: ret with esp off the return address at X | 37 | 0.08% |
| fail | fail: fault | 9 | 0.08% |
| parked (no unit) | lifts; judge: memory | 12 | 0.07% |
| stale | not judged by this judge yet | 5 | 0.07% |
| parked (no unit) | lifts; judge: not judged | 8 | 0.07% |
| no unit yet | lifts; judge: hang | 1 | 0.06% |
| no unit yet | lifts; judge: compile_blocked | 2 | 0.06% |
| fail | fail: eax | 7 | 0.05% |
| parked (no unit) | rise: ret with esp off the return address at X | 9 | 0.05% |
| no unit yet | rise: fnstsw without a compare in the block | 10 | 0.04% |
| parked (no unit) | lifts; judge: hang | 3 | 0.03% |
| no unit yet | rise: tail jump with esp off the return address at X | 4 | 0.03% |
| parked (no unit) | lifts; judge: compile_blocked | 9 | 0.03% |
| no unit yet | rise: switch target outside | 1 | 0.03% |
| parked (no unit) | rise: verbatim instruction on esp: pushfd | 2 | 0.03% |
| parked (no unit) | lifts; judge: edx | 4 | 0.03% |
| fail | fail: callee-saved register | 5 | 0.02% |
| no unit yet | lifts; judge: compile:X | 2 | 0.02% |
| parked (no unit) | rise: stack probe of a variable size | 3 | 0.02% |
| no unit yet | lifts; judge: call count | 1 | 0.02% |
| no unit yet | rise: x87 stack differs at X | 3 | 0.02% |
| no unit yet | rise: block reached before its predecessor (irreducible) | 14 | 0.01% |
| no unit yet | rise: esp set to a non-frame value | 2 | 0.01% |
| fail | fail: call args | 2 | 0.01% |
| no unit yet | lifts; judge: vector register | 2 | 0.01% |
| no unit yet | rise: jump outside: X | 1 | 0.01% |
| parked (no unit) | lifts; judge: callee-saved register | 2 | 0.01% |
| parked (no unit) | lifts; judge: out-of-region write | 1 | 0.01% |
| no unit yet | rise: x87 d9 e5 | 2 | 0.01% |
| fail | fail: edx | 4 | 0.01% |
| parked (no unit) | lifts; judge: compile_error | 1 | 0.01% |
| parked (no unit) | lifts; judge: eax | 2 | 0.01% |
| hand unit in progress | a hand unit, not finished | 6 | 0.01% |
| no unit yet | lifts; judge: fpu control word | 1 | 0.01% |
| weak | too few clean states (the original faults in most) | 2 | 0.00% |
| no unit yet | lifts; judge: eax | 1 | 0.00% |

## The sites weak and silver units miss, by why

Every instruction site a weak or silver unit never reached in a clean state, grouped by why no state reaches it (seek's own words, from tools/cow/aim.py). One row per unit and reason, with the addresses: [SITES.csv](SITES.csv).

| why | sites | units |
| --- | ---: | ---: |
| not aimed: no site list for these states yet: the census will make one | 12847 | 268 |
| aimed states ranked no higher: the try ranks no higher: weak, 3997/7420 reached | 2550 | 1 |
| aimed states FAILed at state None: memory | 2509 | 18 |
| aimed states FAILed at state None: fault | 1301 | 21 |
| aimed states ranked no higher: the try ranks no higher: weak, 125/1223 reached | 1088 | 1 |
| aimed states FAILed at state None: call args | 1028 | 14 |
| aimed states ranked no higher: the try ranks no higher: weak, 693/1597 reached | 495 | 1 |
| aimed states FAILed at state None: edx | 447 | 6 |
| aimed states FAILed at state None: st0 | 437 | 4 |
| aimed states FAILed at state None: no clean state | 367 | 14 |
| seek gave no states: seek gave no states | 319 | 24 |
| new states never ran: row budget | 220 | 3 |
| aimed states FAILed at state None: callee-saved register | 160 | 2 |
| aimed states ranked no higher: the try ranks no higher: weak, 510/803 reached | 148 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 445/541 reached | 96 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 1058/1138 reached | 80 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 173/478 reached | 70 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 317/933 reached | 69 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 577/1124 reached | 58 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 855/916 reached | 56 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 1012/1080 reached | 48 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 481/552 reached | 46 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 164/387 reached | 44 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 305/321 reached | 43 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 78/509 reached | 42 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 187/224 reached | 37 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 108/196 reached | 36 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 258/352 reached | 35 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 207/267 reached | 35 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 81/117 reached | 33 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 128/161 reached | 31 | 1 |
| seek made a state for it; the judge's run went elsewhere | 29 | 4 |
| aimed states ranked no higher: the try ranks no higher: silver, 306/339 reached | 28 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 152/317 reached | 28 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 173/198 reached | 25 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 977/982 reached | 24 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 83/106 reached | 22 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 167/281 reached | 21 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 127/150 reached | 20 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 72/193 reached | 19 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 232/1078 reached | 18 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 22/70 reached | 16 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 1199/1215 reached | 16 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 67/104 reached | 15 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 166/181 reached | 15 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 355/601 reached | 15 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 539/553 reached | 14 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 231/327 reached | 13 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 199/255 reached | 12 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 55/127 reached | 12 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 1526/1538 reached | 12 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 44/62 reached | 12 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 94/123 reached | 12 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 48/127 reached | 11 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 50/95 reached | 11 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 54/158 reached | 10 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 123/141 reached | 10 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 47/65 reached | 9 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 136/254 reached | 9 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 52/543 reached | 9 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 75/85 reached | 9 | 1 |
| seek: DeadEnd.__init__() missing 1 required positional a | 9 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 94/103 reached | 9 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 288/388 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 41/219 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 132/139 reached | 7 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 272/279 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 200/206 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 68/68 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 47/266 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 191/197 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 41/53 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 202/207 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 253/260 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 46/50 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 509/519 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 52/130 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 32/90 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 29/121 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 95/98 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 1315/1318 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 262/264 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 53/78 reached | 2 | 2 |
| aimed states ranked no higher: the try ranks no higher: silver, 59/61 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 399/401 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 50/207 reached | 2 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 30/95 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 472/473 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 133/275 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 555/561 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 40/41 reached | 1 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 104/125 reached | 1 | 1 |
| no site list yet (judged before the aim) | 0 | 29 |
| every site reached; too few clean states (the grind's) | 0 | 40 |
