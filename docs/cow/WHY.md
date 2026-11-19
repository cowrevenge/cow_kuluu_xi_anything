# Why not gold

<!-- written by tools/cow/why_table.py (cycle step 8) - do not edit -->

Judge `5b10bdaae575`. Every function on the scoreboard that is not proven, by reason; 1790 functions, 27.75% of the code bytes. One row per function: [WHY.csv](WHY.csv).

| state | reason | functions | % of code bytes |
| --- | --- | ---: | ---: |
| silver | states reach 70-99% of its blocks | 549 | 10.15% |
| weak | states reach 30-70% of its blocks | 116 | 4.36% |
| no unit yet | lifts; judge: no clean state | 144 | 2.99% |
| no unit yet | rise: esp differs at X from X | 15 | 1.62% |
| no unit yet | lifts; judge: memory | 82 | 1.40% |
| weak | states reach under 30% of its blocks | 27 | 1.08% |
| no unit yet | lifts; judge: fault | 61 | 0.76% |
| no unit yet | lifts; judge: not judged | 26 | 0.75% |
| no unit yet | rise: x87 stack differs at X | 7 | 0.65% |
| fail | fail: memory | 47 | 0.56% |
| no unit yet | lifts; judge: st0 | 31 | 0.54% |
| silver | states reach all of its blocks | 34 | 0.31% |
| fail | fail: no clean state | 118 | 0.28% |
| no unit yet | lifts; judge: edx | 25 | 0.23% |
| no unit yet | lifts; judge: hang | 9 | 0.17% |
| fail | fail: fault | 24 | 0.17% |
| fail | fail: eax | 54 | 0.16% |
| no unit yet | rise: stack probe of a variable size | 11 | 0.16% |
| stale | not judged by this judge yet | 8 | 0.15% |
| no unit yet | rise: ret with esp off the return address at X | 46 | 0.14% |
| timeout | timeout: timeout | 10 | 0.12% |
| no unit yet | rise: tail jump with esp off the return address at X | 16 | 0.12% |
| no unit yet | rise: esp set to a non-frame value | 19 | 0.11% |
| parked (no unit) | lifts; judge: no clean state | 162 | 0.10% |
| no unit yet | lifts; judge: eax | 17 | 0.10% |
| no unit yet | lifts; judge: callee-saved register | 6 | 0.09% |
| fail | fail: callee-saved register | 12 | 0.06% |
| no unit yet | lifts; judge: compile_blocked | 9 | 0.05% |
| no unit yet | lifts; judge: call count | 4 | 0.04% |
| fail | fail: edx | 9 | 0.04% |
| no unit yet | rise: fnstsw without a compare in the block | 10 | 0.04% |
| fail | fail: call args | 12 | 0.03% |
| no unit yet | rise: switch target outside | 1 | 0.03% |
| no unit yet | rise: verbatim instruction on esp: pushfd | 2 | 0.03% |
| no unit yet | lifts; judge: compile:X | 2 | 0.02% |
| timeout | timeout: wall timeout | 2 | 0.02% |
| no unit yet | lifts; judge: out-of-region write | 2 | 0.02% |
| parked (no unit) | lifts; judge: memory | 9 | 0.02% |
| parked (no unit) | rise: tail jump with esp off the return address at X | 15 | 0.02% |
| no unit yet | lifts; judge: vector register | 2 | 0.01% |
| no unit yet | rise: jump outside: X | 1 | 0.01% |
| no unit yet | rise: x87 d9 e5 | 2 | 0.01% |
| no unit yet | lifts; judge: compile_error | 1 | 0.01% |
| parked (no unit) | rise: esp set to a non-frame value | 9 | 0.01% |
| hand unit in progress | a hand unit, not finished | 6 | 0.01% |
| no unit yet | lifts; judge: fpu control word | 1 | 0.01% |
| fail | fail: call count | 2 | 0.00% |
| parked (no unit) | rise: stack probe of a variable size | 1 | 0.00% |
| parked (no unit) | lifts; judge: not judged | 1 | 0.00% |
| parked (no unit) | lifts; judge: compile_blocked | 6 | 0.00% |
| weak | too few clean states (the original faults in most) | 1 | 0.00% |
| parked (no unit) | lifts; judge: edx | 1 | 0.00% |
| parked (no unit) | lifts; judge: callee-saved register | 1 | 0.00% |
| parked (no unit) | lifts; judge: fault | 1 | 0.00% |
| parked (no unit) | lifts; judge: eax | 1 | 0.00% |

## The sites weak and silver units miss, by why

Every instruction site a weak or silver unit never reached in a clean state, grouped by why no state reaches it (seek's own words, from tools/cow/aim.py). One row per unit and reason, with the addresses: [SITES.csv](SITES.csv).

| why | sites | units |
| --- | ---: | ---: |
| seek made a state for it; the judge's run went elsewhere | 36750 | 619 |
| seek has not looked at it yet | 760 | 15 |
| seek: an expression too deep to evaluate | 284 | 4 |
| seek: call arguments reach above the frame | 269 | 2 |
| seek: cannot send the branch that way | 266 | 7 |
| seek: esp differs at X from X | 155 | 4 |
| seek: more than 256 memory writes | 92 | 2 |
| seek: an indirect call whose cleanup the code does not s | 80 | 8 |
| seek: a branch on what ret_101b21b3_1 returned, and that | 63 | 1 |
| seek: a branch on what ret_1019a457_5 returned, and that | 25 | 1 |
| seek: a branch on what ret_101b3d62_1 returned, and that | 23 | 1 |
| seek: a branch on what ret_101b3e62_1 returned, and that | 23 | 1 |
| seek: a branch on what ret_101b3f28_1 returned, and that | 15 | 1 |
| seek: a branch on what ret_101c0ae9_2 returned, and that | 15 | 1 |
| seek: a branch on what ret_100edb26_2 returned, and that | 14 | 1 |
| seek: a branch on what ret_101c09ef_2 returned, and that | 14 | 1 |
| seek: a branch on what ret_101c0d20_2 returned, and that | 14 | 1 |
| seek: a branch on what ret_101b3741_1 returned, and that | 13 | 1 |
| seek: a branch on what ret_100651e8_4 returned, and that | 11 | 1 |
| seek: a branch on what ret_1022a828_1 returned, and that | 11 | 1 |
| seek: a branch on what ret_1022a878_1 returned, and that | 11 | 1 |
| seek: a branch on what ret_1019a4a7_0 returned, and that | 10 | 1 |
| seek: a branch on what ret_100ed852_0 returned, and that | 9 | 1 |
| seek: a branch on what ret_10153480_1 returned, and that | 9 | 1 |
| seek: a branch on what ret_101b26c3_1 returned, and that | 9 | 1 |
| seek: a branch on what ret_101b43f1_1 returned, and that | 9 | 1 |
| seek: a branch on what ret_100ee0de_2 returned, and that | 8 | 1 |
| seek: a branch on what ret_100eefe9_2 returned, and that | 8 | 1 |
| seek: a branch on what ret_101f960c_4 returned, and that | 8 | 1 |
| seek: a branch on what ret_100e7e22_0 returned, and that | 7 | 1 |
| seek: a branch on what ret_100e8112_0 returned, and that | 7 | 1 |
| seek: a branch on what ret_100f4ad8_1 returned, and that | 7 | 1 |
| seek: esp differs at X from 101b | 7 | 1 |
| seek: a branch on what ret_101b2592_0 returned, and that | 7 | 1 |
| seek: a branch on what ret_101b2844_1 returned, and that | 7 | 1 |
| seek: a branch on what ret_1029f366_1 returned, and that | 7 | 1 |
| seek: a branch on what ret_1029f471_1 returned, and that | 7 | 1 |
| seek: a branch on what ret_1029f4cb_1 returned, and that | 7 | 1 |
| seek: a branch on what ret_1029f525_1 returned, and that | 7 | 1 |
| seek: a branch on what ret_1029f57f_1 returned, and that | 7 | 1 |
| seek: a branch on what ret_1029f5d9_1 returned, and that | 7 | 1 |
| seek: a branch on what ret_1029f633_1 returned, and that | 7 | 1 |
| seek: a branch on what ret_100ee48a_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_100eeea7_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_100eef03_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_100f1a6f_1 returned, and that | 6 | 1 |
| seek: a branch on what ret_100f1acf_1 returned, and that | 6 | 1 |
| seek: a branch on what ret_101b38e3_1 returned, and that | 6 | 1 |
| seek: a branch on what ret_101c0c7a_1 returned, and that | 6 | 1 |
| seek: a branch on what ret_10294d3c_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_102953bc_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f30c_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f366_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f3bc_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f471_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f4cb_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f525_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f57f_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f5d9_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f633_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1029f7a4_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_100f17fe_1 returned, and that | 5 | 1 |
| seek: a branch on what ret_101987e5_3 returned, and that | 5 | 1 |
| seek: a branch on what ret_101b3a43_1 returned, and that | 5 | 1 |
| seek: a branch on what ret_101b3c2b_1 returned, and that | 5 | 1 |
| seek: a branch on what ret_101b4399_1 returned, and that | 5 | 1 |
| seek: a branch on what ret_1023c5b5_0 returned, and that | 5 | 1 |
| seek: a branch on what ret_10244af0_0 returned, and that | 5 | 1 |
| seek: a branch on what ret_10244b24_0 returned, and that | 5 | 1 |
| seek: a branch on what ret_100ed8a8_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_100efef5_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_100f1a29_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_100f6b84_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101957ca_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101bf862_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101c0a16_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_101c0cb4_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_102160ed_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_1024499d_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_10244a0b_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_10244ba4_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_102956d7_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_100031fd_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_100651e8_2 returned, and that | 3 | 1 |
| seek: a branch on what ret_100db09d_6 returned, and that | 3 | 1 |
| seek: a branch on what ret_100e68ee_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_100e6966_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_100f160a_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_100fb692_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_10195666_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_101956b7_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_101956c1_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_10196593_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_101a2366_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_101b38f7_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_101b3a53_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_101b3cd9_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_101c0b13_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_101c0b20_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_102160bb_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029d8ed_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029d947_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029d9a1_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029d9fb_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029da55_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029daaf_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029dd97_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029dd97_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ddf1_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ddf1_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029de4b_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029de4b_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029dea8_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029dea8_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029df02_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029df02_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029df5c_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029df5c_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029dfb9_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029dfb9_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e016_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e016_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e073_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e073_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e0d0_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e0d0_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e12d_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e12d_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e18a_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e18a_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e1e7_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e1e7_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e244_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e244_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e2a1_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e2a1_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e2fc_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e2fc_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e357_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e5b8_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e5b8_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e612_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e612_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e66c_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e66c_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e6c6_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e6c6_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e720_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e720_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e77a_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e77a_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e8ea_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e944_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e99e_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029e9f8_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ea53_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029eaae_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ebf0_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ebf0_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ec4a_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ec4a_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029eca4_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029eca4_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ecfe_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ecfe_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ed58_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ed58_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029edb2_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ef22_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029ef7e_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029efbd_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029f01a_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029f074_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029f0d1_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029f12e_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029f2b2_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029f2b2_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1029f30c_1 returned, and that | 3 | 1 |
| seek: a branch on what ret_1000172a_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_1000590e_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_1000ee1f_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_100651e8_5 returned, and that | 2 | 1 |
| seek: a branch on what ret_100db09d_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_100e68aa_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_100eded0_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_100ee3a0_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_100ee518_2 returned, and that | 2 | 1 |
| seek: a branch on what ret_100f1673_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_100f6446_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_100f6c56_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_100f6cae_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101126d3_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_101126d3_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_10195657_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_10195829_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_10195875_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_10196543_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_10196557_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_10196571_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_102164db_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_10238588_0 returned, and that | 2 | 1 |
| seek: a branch on what ret_10245e69_0 returned, and that | 2 | 1 |
| seek: an argument decided two ways | 2 | 1 |
| seek: a branch on what ret_102c5c6c_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_102c5e58_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_102c6067_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_102c6167_1 returned, and that | 2 | 1 |
| seek: a branch on what ret_100651e8_3 returned, and that | 1 | 1 |
| seek: a branch on what ret_100e7b32_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_101956b7_1 returned, and that | 1 | 1 |
| every site reached; too few clean states (the grind's) | 0 | 29 |
| no site list yet (judged before the aim) | 0 | 8 |
