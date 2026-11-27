# Why not gold

<!-- written by tools/cow/why_table.py (cycle step 8) - do not edit -->

Judge `401ff8958bf8`. Every function on the scoreboard that is not proven, by reason; 452 functions, 5.47% of the code bytes. One row per function: [WHY.csv](WHY.csv).

| state | reason | functions | % of code bytes |
| --- | --- | ---: | ---: |
| silver | states reach 70-99% of its blocks | 91 | 2.40% |
| weak | states reach 30-70% of its blocks | 14 | 0.66% |
| parked (no unit) | lifts; judge: not judged | 13 | 0.37% |
| no unit yet | lifts; judge: memory | 12 | 0.19% |
| parked (no unit) | lifts; judge: no clean state | 35 | 0.12% |
| parked (no unit) | rise: esp differs at X from X | 2 | 0.12% |
| parked (no unit) | rise: ret with esp off the return address at X | 11 | 0.11% |
| parked (no unit) | lifts; judge: memory | 11 | 0.11% |
| silver | states reach all of its blocks | 9 | 0.10% |
| parked (no unit) | lifts; judge: hang | 4 | 0.10% |
| timeout | timeout: timeout | 7 | 0.10% |
| parked (no unit) | rise: esp set to a non-frame value | 24 | 0.08% |
| fail | fail: memory | 11 | 0.08% |
| parked (no unit) | rise: tail jump with esp off the return address at X | 23 | 0.08% |
| weak | states reach under 30% of its blocks | 4 | 0.07% |
| parked (no unit) | rise: stack probe of a variable size | 5 | 0.06% |
| fail | fail: eax | 7 | 0.05% |
| fail | fail: no clean state | 49 | 0.05% |
| no unit yet | lifts; judge: not judged | 1 | 0.05% |
| no unit yet | rise: stack probe of a variable size | 1 | 0.04% |
| no unit yet | rise: fnstsw without a compare in the block | 10 | 0.04% |
| no unit yet | lifts; judge: compile_blocked | 2 | 0.04% |
| no unit yet | lifts; judge: no clean state | 7 | 0.04% |
| parked (no unit) | lifts; judge: edx | 2 | 0.04% |
| no unit yet | lifts; judge: st0 | 5 | 0.04% |
| no unit yet | rise: tail jump with esp off the return address at X | 4 | 0.03% |
| parked (no unit) | lifts; judge: callee-saved register | 2 | 0.03% |
| parked (no unit) | rise: switch target outside | 1 | 0.03% |
| stale | not judged by this judge yet | 2 | 0.03% |
| parked (no unit) | lifts; judge: fault | 2 | 0.03% |
| no unit yet | rise: ret with esp off the return address at X | 35 | 0.03% |
| parked (no unit) | lifts; judge: compile:X | 1 | 0.02% |
| no unit yet | rise: x87 stack differs at X | 3 | 0.02% |
| no unit yet | lifts; judge: callee-saved register | 1 | 0.02% |
| parked (no unit) | rise: verbatim instruction on esp: pushfd | 1 | 0.02% |
| no unit yet | rise: block reached before its predecessor (irreducible) | 14 | 0.01% |
| no unit yet | rise: esp set to a non-frame value | 2 | 0.01% |
| fail | fail: call args | 2 | 0.01% |
| parked (no unit) | lifts; judge: compile_blocked | 2 | 0.01% |
| no unit yet | rise: jump outside: X | 1 | 0.01% |
| fail | fail: callee-saved register | 2 | 0.01% |
| no unit yet | rise: x87 d9 e5 | 2 | 0.01% |
| fail | fail: fault | 3 | 0.01% |
| parked (no unit) | lifts; judge: compile_error | 1 | 0.01% |
| hand unit in progress | a hand unit, not finished | 6 | 0.01% |
| parked (no unit) | lifts; judge: out-of-region write | 1 | 0.00% |
| no unit yet | lifts; judge: compile:X | 1 | 0.00% |
| fail | fail: edx | 2 | 0.00% |
| parked (no unit) | lifts; judge: eax | 1 | 0.00% |

## The sites weak and silver units miss, by why

Every instruction site a weak or silver unit never reached in a clean state, grouped by why no state reaches it (seek's own words, from tools/cow/aim.py). One row per unit and reason, with the addresses: [SITES.csv](SITES.csv).

| why | sites | units |
| --- | ---: | ---: |
| aimed states FAILed at state 3176: st0 (3 state(s) shed first) | 1269 | 1 |
| seek gave no states: seek gave no states | 922 | 29 |
| aimed states ranked no higher: the original faults in every new state : nothing new was judged | 627 | 30 |
| new states never ran: row budget | 327 | 5 |
| aimed states FAILed at state 225: memory (8 state(s) shed first) | 264 | 1 |
| aimed states FAILed at state 1488: fault (3 state(s) shed first) | 159 | 1 |
| seek made a state for it; the judge's run went elsewhere | 107 | 9 |
| aimed states ranked no higher: the try ranks no higher: weak, 876/1292 reached | 93 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 294/313 reached | 62 | 1 |
| aimed states FAILed at state 48: memory (8 state(s) shed first) | 60 | 1 |
| aimed states ranked no higher: the try ranks no higher: hang, None reached | 55 | 1 |
| aimed states FAILed at state 0: no clean state (8 state(s) shed first) | 48 | 2 |
| aimed states ranked no higher: the try ranks no higher: silver, 802/933 reached | 39 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 881/916 reached | 37 | 1 |
| aimed states FAILed at state 16: fault (8 state(s) shed first) | 36 | 1 |
| aimed states FAILed at state 184: fault (3 state(s) shed first) | 35 | 1 |
| aimed states FAILed at state 239: fault (8 state(s) shed first) | 18 | 1 |
| not aimed: no site list for these states yet: the census will make one | 18 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 1037/1124 reached | 16 | 1 |
| aimed states FAILed at state 0: no clean state (6 state(s) shed first) | 16 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 93/107 reached | 14 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 22/55 reached | 14 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 231/241 reached | 10 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 475/543 reached | 9 | 1 |
| aimed states FAILed at state 0: no clean state (7 state(s) shed first) | 9 | 2 |
| aimed states FAILed at state 0: no clean state (5 state(s) shed first) | 8 | 2 |
| aimed states ranked no higher: the try ranks no higher: silver, 242/248 reached | 6 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 177/182 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 95/137 reached | 5 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 102/106 reached | 4 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 44/47 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: weak, 42/164 reached | 3 | 1 |
| aimed states ranked no higher: the try ranks no higher: silver, 456/456 reached | 2 | 1 |
| aimed states FAILed at state 9: eax (4 state(s) shed first) | 2 | 1 |
| every site reached; too few clean states (the grind's) | 0 | 7 |
| no site list yet (judged before the aim) | 0 | 4 |
| no site list from this judge yet | 0 | 1 |
