# Why not gold

<!-- written by tools/cow/why_table.py (cycle step 8) - do not edit -->

Judge `401ff8958bf8`. Every function on the scoreboard that is not proven, by reason; 457 functions, 5.61% of the code bytes. One row per function: [WHY.csv](WHY.csv).

| state | reason | functions | % of code bytes |
| --- | --- | ---: | ---: |
| silver | states reach 70-99% of its blocks | 91 | 2.46% |
| weak | states reach 30-70% of its blocks | 15 | 0.69% |
| parked (no unit) | lifts; judge: not judged | 13 | 0.27% |
| no unit yet | lifts; judge: memory | 14 | 0.23% |
| parked (no unit) | lifts; judge: no clean state | 34 | 0.12% |
| parked (no unit) | lifts; judge: compile_blocked | 5 | 0.12% |
| parked (no unit) | rise: esp differs at X from X | 2 | 0.12% |
| silver | states reach all of its blocks | 10 | 0.11% |
| parked (no unit) | rise: ret with esp off the return address at X | 11 | 0.11% |
| parked (no unit) | lifts; judge: memory | 10 | 0.10% |
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
| not aimed: stopped moving: 1 round(s) with these states and these tools | 4390 | 105 |
| aimed states ranked no higher: the original faults in every new state : nothing new was judged | 118 | 1 |
| seek made a state for it; the judge's run went elsewhere | 19 | 1 |
| every site reached; too few clean states (the grind's) | 0 | 8 |
| no site list yet (judged before the aim) | 0 | 4 |
| no site list from this judge yet | 0 | 1 |
