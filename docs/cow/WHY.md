# Why not gold

<!-- written by tools/cow/why_table.py (cycle step 8) - do not edit -->

Judge `15c934038e44`. Every function on the scoreboard that is not proven, by reason; 1185 functions, 21.05% of the code bytes. One row per function: [WHY.csv](WHY.csv).

| state | reason | functions | % of code bytes |
| --- | --- | ---: | ---: |
| silver | states reach 70-99% of its blocks | 401 | 10.54% |
| weak | states reach 30-70% of its blocks | 58 | 2.22% |
| weak | states reach under 30% of its blocks | 13 | 1.37% |
| no unit yet | lifts; judge: memory | 62 | 1.29% |
| no unit yet | lifts; judge: no clean state | 64 | 0.85% |
| no unit yet | lifts; judge: not judged | 18 | 0.75% |
| no unit yet | lifts; judge: fault | 42 | 0.61% |
| fail | fail: memory | 34 | 0.44% |
| silver | states reach all of its blocks | 34 | 0.30% |
| no unit yet | lifts; judge: st0 | 15 | 0.29% |
| timeout | timeout: timeout | 14 | 0.23% |
| stale | not judged by this judge yet | 9 | 0.17% |
| no unit yet | rise: stack probe of a variable size | 11 | 0.16% |
| no unit yet | lifts; judge: hang | 7 | 0.15% |
| no unit yet | lifts; judge: edx | 15 | 0.15% |
| no unit yet | rise: ret with esp off the return address at X | 46 | 0.14% |
| no unit yet | rise: tail jump with esp off the return address at X | 16 | 0.12% |
| fail | fail: no clean state | 59 | 0.12% |
| no unit yet | lifts; judge: callee-saved register | 7 | 0.12% |
| no unit yet | rise: esp differs at X from X | 2 | 0.12% |
| fail | fail: fault | 17 | 0.11% |
| no unit yet | rise: esp set to a non-frame value | 19 | 0.11% |
| fail | fail: eax | 12 | 0.09% |
| fail | fail: callee-saved register | 11 | 0.07% |
| no unit yet | lifts; judge: compile_blocked | 6 | 0.05% |
| parked (no unit) | lifts; judge: no clean state | 83 | 0.05% |
| weak | too few clean states (the original faults in most) | 6 | 0.04% |
| no unit yet | rise: fnstsw without a compare in the block | 10 | 0.04% |
| fail | fail: edx | 9 | 0.04% |
| no unit yet | lifts; judge: call count | 2 | 0.03% |
| no unit yet | rise: switch target outside | 1 | 0.03% |
| no unit yet | rise: verbatim instruction on esp: pushfd | 2 | 0.03% |
| no unit yet | lifts; judge: eax | 5 | 0.03% |
| no unit yet | lifts; judge: compile:X | 2 | 0.02% |
| fail | fail: call args | 4 | 0.02% |
| no unit yet | rise: x87 stack differs at X | 3 | 0.02% |
| no unit yet | lifts; judge: out-of-region write | 2 | 0.02% |
| parked (no unit) | rise: tail jump with esp off the return address at X | 15 | 0.02% |
| no unit yet | rise: block reached before its predecessor (irreducible) | 14 | 0.01% |
| no unit yet | lifts; judge: vector register | 2 | 0.01% |
| no unit yet | rise: jump outside: X | 1 | 0.01% |
| parked (no unit) | rise: esp set to a non-frame value | 10 | 0.01% |
| no unit yet | rise: x87 d9 e5 | 2 | 0.01% |
| no unit yet | lifts; judge: compile_error | 1 | 0.01% |
| hand unit in progress | a hand unit, not finished | 6 | 0.01% |
| no unit yet | lifts; judge: fpu control word | 1 | 0.01% |
| parked (no unit) | lifts; judge: not judged | 2 | 0.00% |
| parked (no unit) | rise: stack probe of a variable size | 1 | 0.00% |
| parked (no unit) | lifts; judge: memory | 1 | 0.00% |
| parked (no unit) | lifts; judge: compile_blocked | 4 | 0.00% |
| parked (no unit) | lifts; judge: edx | 1 | 0.00% |
| parked (no unit) | lifts; judge: callee-saved register | 1 | 0.00% |
| parked (no unit) | lifts; judge: fault | 1 | 0.00% |
| parked (no unit) | lifts; judge: eax | 1 | 0.00% |

## The sites weak and silver units miss, by why

Every instruction site a weak or silver unit never reached in a clean state, grouped by why no state reaches it (seek's own words, from tools/cow/aim.py). One row per unit and reason, with the addresses: [SITES.csv](SITES.csv).

| why | sites | units |
| --- | ---: | ---: |
| seek made a state for it; the judge's run went elsewhere | 24859 | 421 |
| seek: cannot send the branch that way | 715 | 10 |
| seek: an indirect call whose cleanup the code does not s | 412 | 8 |
| seek has not looked at it yet | 188 | 13 |
| seek: a read or write in the null page | 183 | 32 |
| seek: more than 256 memory writes | 101 | 2 |
| seek: an expression too deep to evaluate | 66 | 2 |
| seek: switch | 25 | 1 |
| seek: a branch on what ret_101b21b3_1 returned, and that | 13 | 1 |
| seek: a branch on what ret_101b06f6_0 returned, and that | 10 | 1 |
| seek: a branch on what ret_10153480_0 returned, and that | 9 | 1 |
| seek: a branch on what ret_100651e8_2 returned, and that | 8 | 1 |
| seek: a branch on what ret_101b06f6_2 returned, and that | 8 | 1 |
| seek: a branch on what ret_101b2209_0 returned, and that | 8 | 1 |
| seek: a branch on what ret_101b06f6_3 returned, and that | 7 | 1 |
| seek: a branch on what ret_100651e8_1 returned, and that | 6 | 1 |
| seek: esp differs at X from X | 6 | 1 |
| seek: a branch on what ret_1029f30c_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f366_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f471_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f4cb_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f525_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f57f_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f5d9_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f633_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_101b21b3_2 returned, and that | 5 | 1 |
| seek: a branch on what ret_101f960c_2 returned, and that | 5 | 1 |
| seek: a branch on what ret_102be615_0 returned, and that | 5 | 1 |
| seek: time budget | 4 | 1 |
| seek: too slow (over 90 s) | 4 | 1 |
| seek: a branch on what ret_101b027e_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b06f6_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b071f_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b09b2_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b09c0_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b0fbb_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b26c3_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b2844_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b43f1_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_1029f366_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_1029f471_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_1029f4cb_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_1029f525_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_1029f57f_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_1029f5d9_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_1029f633_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_102be615_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_102be917_5 returned, and that | 4 | 1 |
| seek: a branch on what ret_101b26c3_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_101b43f1_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_101f960c_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029d947_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029d9a1_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029d9fb_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029da55_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029daaf_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029dd97_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ddf1_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029de4b_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029dea8_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029df02_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029df5c_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029dfb9_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e016_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e073_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e0d0_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e12d_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e18a_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e1e7_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e244_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e2a1_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e2fc_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e5b8_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e612_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e66c_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e6c6_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e720_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e77a_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ebf0_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ec4a_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029eca4_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ecfe_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ed58_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029f2b2_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029f3bc_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029f7a4_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1000ee1f_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_100651e8_3 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b0274_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b032a_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b071f_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b07d7_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b09b2_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b0a54_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b0d12_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b0d5b_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b0fbb_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b1906_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b1b13_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b2b74_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b2c88_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b2d91_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b2d91_3 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b32aa_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b32aa_3 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b32ff_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_101b32ff_3 returned, and that | 2 | 1 |
| seek: a branch on what ret_100651e8_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101b061c_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101b0691_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101b0777_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101b0c1c_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101b0cd6_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101b21e7_0 returned, and that | 1 | 1 |
| every site reached; too few clean states (the grind's) | 0 | 34 |
| no site list yet (judged before the aim) | 0 | 8 |
