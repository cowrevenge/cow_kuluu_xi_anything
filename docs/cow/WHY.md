# Why not gold

<!-- written by tools/cow/why_table.py (cycle step 8) - do not edit -->

Judge `e39543763510`. Every function on the scoreboard that is not proven, by reason; 4379 functions, 55.78% of the code bytes. One row per function: [WHY.csv](WHY.csv).

| state | reason | functions | % of code bytes |
| --- | --- | ---: | ---: |
| silver | states reach 70-99% of its blocks | 1501 | 18.80% |
| weak | states reach 30-70% of its blocks | 600 | 10.29% |
| weak | states reach under 30% of its blocks | 156 | 4.87% |
| no unit yet | lifts; judge: no clean state | 255 | 4.85% |
| no unit yet | rise: esp differs at X | 47 | 3.59% |
| no unit yet | lifts; judge: memory | 121 | 1.87% |
| no unit yet | lifts; judge: not judged | 79 | 1.32% |
| fail | fail: memory | 128 | 1.01% |
| no unit yet | lifts; judge: fault | 68 | 0.94% |
| fail | fail: eax | 145 | 0.70% |
| no unit yet | rise: x87 stack differs at X | 7 | 0.65% |
| fail | fail: callee-saved register | 59 | 0.63% |
| fail | fail: no clean state | 176 | 0.62% |
| no unit yet | lifts; judge: callee-saved register | 34 | 0.57% |
| fail | fail: fault | 80 | 0.50% |
| no unit yet | lifts; judge: st0 | 30 | 0.50% |
| fail | fail: out-of-region write | 68 | 0.50% |
| no unit yet | lifts; judge: edx | 30 | 0.27% |
| no unit yet | rise: ret with esp off the return address at X | 51 | 0.26% |
| no unit yet | lifts; judge: out-of-region overflow | 26 | 0.24% |
| no unit yet | lifts; judge: eax | 29 | 0.23% |
| fail | fail: edx | 49 | 0.20% |
| no unit yet | lifts; judge: call count | 5 | 0.19% |
| silver | states reach all of its blocks | 37 | 0.19% |
| stale | not judged by this judge yet | 28 | 0.17% |
| timeout | timeout: timeout | 16 | 0.17% |
| no unit yet | lifts; judge: hang | 9 | 0.17% |
| parked (no unit) | lifts; judge: no clean state | 294 | 0.16% |
| no unit yet | rise: stack probe of a variable size | 11 | 0.16% |
| timeout | timeout: wall timeout | 11 | 0.16% |
| no unit yet | lifts; judge: out-of-region write | 11 | 0.15% |
| fail | fail: call count | 19 | 0.12% |
| no unit yet | rise: esp set to a non-frame value | 19 | 0.11% |
| fail | fail: call args | 32 | 0.11% |
| no unit yet | rise: tail jump with esp off the return address at X | 13 | 0.09% |
| no unit yet | lifts; judge: vector register | 7 | 0.05% |
| weak | too few clean states (the original faults in most) | 10 | 0.05% |
| no unit yet | rise: fnstsw without a compare in the block | 10 | 0.04% |
| parked (no unit) | lifts; judge: memory | 21 | 0.04% |
| no unit yet | rise: switch target outside | 1 | 0.03% |
| no unit yet | rise: verbatim instruction on esp: pushfd | 2 | 0.03% |
| no unit yet | lifts; judge: compile:X | 2 | 0.02% |
| fail | fail: vector register | 3 | 0.02% |
| parked (no unit) | lifts; judge: not judged | 15 | 0.02% |
| fail | fail: out-of-region overflow | 3 | 0.02% |
| parked (no unit) | rise: tail jump with esp off the return address at X | 15 | 0.02% |
| no unit yet | lifts; judge: fpu control word | 2 | 0.01% |
| no unit yet | rise: jump outside: X | 1 | 0.01% |
| parked (no unit) | lifts; judge: out-of-region overflow | 4 | 0.01% |
| no unit yet | rise: x87 d9 e5 | 2 | 0.01% |
| no unit yet | lifts; judge: call args | 1 | 0.01% |
| fail | fail: st0 | 2 | 0.01% |
| parked (no unit) | lifts; judge: callee-saved register | 5 | 0.01% |
| parked (no unit) | rise: esp set to a non-frame value | 9 | 0.01% |
| hand unit in progress | a hand unit, not finished | 6 | 0.01% |
| parked (no unit) | lifts; judge: eax | 3 | 0.00% |
| no unit yet | rise has not tried it | 1 | 0.00% |
| parked (no unit) | rise: stack probe of a variable size | 1 | 0.00% |
| parked (no unit) | rise: call arguments reach above the frame | 3 | 0.00% |
| fail | fail: esp | 2 | 0.00% |
| parked (no unit) | lifts; judge: edx | 1 | 0.00% |
| parked (no unit) | rise: ret with esp off the return address at X | 1 | 0.00% |
| parked (no unit) | lifts; judge: fault | 1 | 0.00% |
| parked (no unit) | lifts; judge: out-of-region write | 1 | 0.00% |

## The sites weak and silver units miss, by why

Every instruction site a weak or silver unit never reached in a clean state, grouped by why no state reaches it (seek's own words, from tools/cow/aim.py). One row per unit and reason, with the addresses: [SITES.csv](SITES.csv).

| why | sites | units |
| --- | ---: | ---: |
| seek: cannot send the branch that way | 43892 | 1140 |
| seek made a state for it; the judge's run went elsewhere | 29981 | 1045 |
| seek: switch | 15834 | 260 |
| seek: time budget | 5395 | 34 |
| seek: esp differs at X | 5194 | 34 |
| seek: too many steps (a loop it cannot leave) | 1553 | 50 |
| seek: a branch on what ret_10094891_95 returned, and tha | 745 | 1 |
| seek: more than 256 memory writes | 485 | 34 |
| seek: call arguments reach above the frame | 470 | 3 |
| seek: a branch on what ret_101959c5_0 returned, and that | 449 | 1 |
| seek has not looked at it yet | 372 | 16 |
| seek: a branch on what ret_100f5fa9_1 returned, and that | 189 | 1 |
| seek: an expression too deep to evaluate | 140 | 6 |
| seek: too slow (over 90 s) | 125 | 13 |
| seek: returned before the target | 112 | 8 |
| seek: ret with esp off the return address at X | 98 | 3 |
| seek: a branch on what ret_100edbaa_3 returned, and that | 97 | 1 |
| seek: a branch on what ret_101f80f3_1 returned, and that | 91 | 1 |
| seek: a branch on what ret_10202617_6 returned, and that | 85 | 1 |
| seek: a branch on what ret_100f1f20_0 returned, and that | 84 | 1 |
| seek: a branch on what ret_100f6d15_0 returned, and that | 78 | 1 |
| seek: a branch on what ret_10315302_1 returned, and that | 78 | 1 |
| seek: a branch on what ret_1018e1e9_0 returned, and that | 77 | 1 |
| seek: a branch on what ret_100ed8a8_0 returned, and that | 76 | 1 |
| seek: a branch on what ret_1021a925_2 returned, and that | 76 | 1 |
| seek: an argument decided two ways | 72 | 7 |
| seek: a branch on what ret_101ac791_3 returned, and that | 72 | 1 |
| seek: a branch on what ret_1010f083_4 returned, and that | 71 | 1 |
| seek: a branch on what ret_101b3d62_2 returned, and that | 67 | 1 |
| seek: %x format | 65 | 5 |
| seek: a branch on what ret_101d7881_1 returned, and that | 65 | 1 |
| seek: a branch on what ret_100f69ad_1 returned, and that | 64 | 1 |
| seek: a branch on what ret_101c6ef7_4 returned, and that | 63 | 1 |
| seek: a branch on what ret_101c730a_0 returned, and that | 59 | 1 |
| seek: a branch on what ret_101c6d02_1 returned, and that | 58 | 1 |
| seek: a branch on what ret_101cc872_1 returned, and that | 58 | 1 |
| seek: a branch on what ret_101d6e92_1 returned, and that | 58 | 1 |
| seek: a branch on what ret_102027d8_5 returned, and that | 58 | 1 |
| seek: a branch on what ret_100f52d2_0 returned, and that | 57 | 1 |
| seek: a branch on what ret_101b3a43_2 returned, and that | 55 | 1 |
| seek: a branch on what ret_101b3e62_2 returned, and that | 55 | 1 |
| seek: a branch on what ret_10115088_0 returned, and that | 54 | 1 |
| seek: a branch on what ret_10072aaa_0 returned, and that | 51 | 1 |
| seek: a branch on what ret_10244ba4_2 returned, and that | 51 | 1 |
| seek: a branch on what ret_10072b40_0 returned, and that | 50 | 1 |
| seek: a branch on what ret_100f5da1_1 returned, and that | 50 | 1 |
| seek: a branch on what ret_100f5b99_1 returned, and that | 49 | 1 |
| seek: a branch on what ret_101b37af_2 returned, and that | 49 | 1 |
| seek: a branch on what ret_10195593_0 returned, and that | 48 | 1 |
| seek: a branch on what ret_10195657_0 returned, and that | 48 | 1 |
| seek: a branch on what ret_1019e8a5_1 returned, and that | 48 | 1 |
| seek: a branch on what ret_1021639d_12 returned, and tha | 48 | 1 |
| seek: a branch on what ret_10114359_0 returned, and that | 47 | 1 |
| seek: a branch on what ret_1024d7d1_1 returned, and that | 47 | 1 |
| seek: a branch on what ret_100f6433_1 returned, and that | 46 | 1 |
| seek: a branch on what ret_100fa18b_0 returned, and that | 46 | 1 |
| seek: a branch on what ret_101b9c93_0 returned, and that | 46 | 1 |
| seek: a branch on what ret_10178940_0 returned, and that | 44 | 1 |
| seek: a branch on what ret_1018e330_1 returned, and that | 42 | 1 |
| seek: a branch on what ret_101b9be8_0 returned, and that | 41 | 1 |
| seek: a branch on what ret_100f5c95_1 returned, and that | 40 | 1 |
| seek: a branch on what ret_1022deed_1 returned, and that | 39 | 1 |
| seek: a branch on what ret_1025389f_0 returned, and that | 39 | 1 |
| seek: a branch on what ret_100f43f6_0 returned, and that | 38 | 1 |
| seek: a branch on what ret_1019639e_0 returned, and that | 38 | 1 |
| seek: a branch on what ret_100acbb8_0 returned, and that | 37 | 1 |
| seek: a branch on what ret_100ee34e_3 returned, and that | 37 | 1 |
| seek: a branch on what ret_100f160a_1 returned, and that | 37 | 1 |
| seek: a branch on what ret_10114a8b_1 returned, and that | 37 | 1 |
| seek: a branch on what ret_101d0d9c_0 returned, and that | 36 | 1 |
| seek: a branch on what ret_100f3fa9_0 returned, and that | 35 | 1 |
| seek: a branch on what ret_100f4136_0 returned, and that | 35 | 1 |
| seek: a branch on what ret_100f5ecf_0 returned, and that | 35 | 1 |
| seek: a branch on what ret_100f4ad8_1 returned, and that | 33 | 1 |
| seek: a branch on what ret_1000ee1f_0 returned, and that | 32 | 1 |
| seek: a branch on what ret_101c73fa_0 returned, and that | 32 | 1 |
| seek: a branch on what ret_1022eb94_6 returned, and that | 32 | 1 |
| seek: a branch on what ret_100ee468_5 returned, and that | 31 | 1 |
| seek: a branch on what ret_100f6b84_0 returned, and that | 31 | 1 |
| seek: a branch on what ret_101ba42b_3 returned, and that | 31 | 1 |
| seek: a branch on what ret_1001ff29_31 returned, and tha | 29 | 1 |
| seek: a branch on what ret_1023c5b5_0 returned, and that | 28 | 1 |
| seek: a branch on what ret_101ccaae_4 returned, and that | 27 | 1 |
| seek: a branch on what ret_10061543_0 returned, and that | 26 | 1 |
| seek: a branch on what ret_10094891_97 returned, and tha | 26 | 1 |
| seek: a branch on what ret_100f3f5b_0 returned, and that | 25 | 1 |
| seek: a branch on what ret_1019641e_0 returned, and that | 25 | 1 |
| seek: a branch on what ret_10061745_0 returned, and that | 24 | 1 |
| seek: a branch on what ret_10252670_0 returned, and that | 24 | 1 |
| seek: a branch on what ret_100ee3c8_2 returned, and that | 23 | 1 |
| seek: a branch on what ret_10154934_1 returned, and that | 23 | 1 |
| seek: a branch on what ret_101b4399_1 returned, and that | 23 | 1 |
| seek: a branch on what ret_101c7bf8_1 returned, and that | 23 | 1 |
| seek: a branch on what ret_1001459f_2 returned, and that | 22 | 1 |
| seek: a branch on what ret_100b8669_0 returned, and that | 22 | 1 |
| seek: a branch on what ret_100b9068_1 returned, and that | 22 | 1 |
| seek: a branch on what ret_101b9b62_0 returned, and that | 22 | 1 |
| seek: a branch on what ret_101bf862_3 returned, and that | 22 | 1 |
| seek: a branch on what ret_100edb26_2 returned, and that | 21 | 1 |
| seek: a branch on what ret_100f4018_0 returned, and that | 21 | 1 |
| seek: a branch on what ret_100f41a5_0 returned, and that | 21 | 1 |
| seek: a branch on what ret_102956d7_0 returned, and that | 21 | 1 |
| seek: a branch on what ret_100f3e7b_0 returned, and that | 20 | 1 |
| seek: a branch on what ret_1010f15b_1 returned, and that | 20 | 1 |
| seek: a branch on what ret_101c6e01_1 returned, and that | 20 | 1 |
| seek: a branch on what ret_101cc974_1 returned, and that | 20 | 1 |
| seek: a branch on what ret_101d6f91_1 returned, and that | 20 | 1 |
| seek: a branch on what ret_1023d25d_7 returned, and that | 20 | 1 |
| seek: a branch on what ret_1025340f_1 returned, and that | 20 | 1 |
| seek: a branch on what ret_100ae2ac_2 returned, and that | 19 | 1 |
| seek: a branch on what ret_100c8372_10 returned, and tha | 19 | 1 |
| seek: a branch on what ret_101ba4f5_3 returned, and that | 19 | 1 |
| seek: a branch on what ret_101ccca1_0 returned, and that | 19 | 1 |
| seek: a branch on what ret_102160bb_2 returned, and that | 19 | 1 |
| seek: a branch on what ret_100611f3_0 returned, and that | 18 | 1 |
| seek: a branch on what ret_100f40e9_0 returned, and that | 18 | 1 |
| seek: a branch on what ret_100f50e7_0 returned, and that | 18 | 1 |
| seek: a branch on what ret_101b43f1_1 returned, and that | 17 | 1 |
| seek: a branch on what ret_101ce394_2 returned, and that | 17 | 1 |
| seek: a branch on what ret_10014537_8 returned, and that | 16 | 1 |
| seek: a branch on what ret_100ed852_4 returned, and that | 16 | 1 |
| seek: a branch on what ret_100ee569_2 returned, and that | 16 | 1 |
| seek: a branch on what ret_100ee518_2 returned, and that | 15 | 1 |
| seek: a branch on what ret_10114556_1 returned, and that | 15 | 1 |
| seek: a branch on what ret_101b9aba_4 returned, and that | 15 | 1 |
| seek: a branch on what ret_1021a199_11 returned, and tha | 15 | 1 |
| seek: a branch on what ret_100f556a_0 returned, and that | 14 | 1 |
| seek: a branch on what ret_100f65cd_0 returned, and that | 14 | 1 |
| seek: a branch on what ret_10061393_0 returned, and that | 13 | 1 |
| seek: a branch on what ret_100ee0de_2 returned, and that | 13 | 1 |
| seek: a branch on what ret_100eefe9_2 returned, and that | 13 | 1 |
| seek: a branch on what ret_10094891_96 returned, and tha | 12 | 1 |
| seek: a branch on what ret_100edb65_0 returned, and that | 12 | 1 |
| seek: a branch on what ret_100ee4da_2 returned, and that | 12 | 1 |
| seek: a branch on what ret_100db09d_7 returned, and that | 11 | 1 |
| seek: a branch on what ret_100eeea7_0 returned, and that | 11 | 1 |
| seek: a branch on what ret_101a1d64_1 returned, and that | 11 | 1 |
| seek: a branch on what ret_100eef03_0 returned, and that | 10 | 1 |
| seek: a branch on what ret_10061483_1 returned, and that | 9 | 1 |
| seek: a branch on what ret_1008b134_0 returned, and that | 9 | 1 |
| seek: a branch on what ret_100e3247_0 returned, and that | 9 | 1 |
| seek: a branch on what ret_100eeee4_0 returned, and that | 9 | 1 |
| seek: a branch on what ret_100eef3b_0 returned, and that | 9 | 1 |
| seek: a branch on what ret_100eefa9_0 returned, and that | 9 | 1 |
| seek: a branch on what ret_1011d9ed_0 returned, and that | 9 | 1 |
| seek: a branch on what ret_1014a626_0 returned, and that | 9 | 1 |
| seek: a branch on what ret_1014afe6_0 returned, and that | 9 | 1 |
| seek: a branch on what ret_1014b8d6_0 returned, and that | 9 | 1 |
| seek: a branch on what ret_1014bd36_0 returned, and that | 9 | 1 |
| seek: a branch on what ret_100612e2_1 returned, and that | 7 | 1 |
| seek: a branch on what ret_10061677_2 returned, and that | 7 | 1 |
| seek: a branch on what ret_10061690_2 returned, and that | 7 | 1 |
| seek: a branch on what ret_10064294_3 returned, and that | 7 | 1 |
| seek: a branch on what ret_10072bf8_2 returned, and that | 7 | 1 |
| seek: a branch on what ret_100ee10c_0 returned, and that | 7 | 1 |
| seek: a branch on what ret_1010f1d9_1 returned, and that | 7 | 1 |
| seek: a branch on what ret_10178a8e_0 returned, and that | 7 | 1 |
| seek: a branch on what ret_1018e12d_2 returned, and that | 7 | 1 |
| seek: a branch on what ret_100617df_1 returned, and that | 6 | 1 |
| seek: a branch on what ret_101ac791_4 returned, and that | 6 | 1 |
| seek: a branch on what ret_102164db_2 returned, and that | 6 | 1 |
| seek: a branch on what ret_10252a7c_0 returned, and that | 6 | 1 |
| seek: a branch on what ret_1000172a_0 returned, and that | 5 | 1 |
| seek: a branch on what ret_10112e83_0 returned, and that | 5 | 1 |
| seek: a branch on what ret_10112edc_0 returned, and that | 5 | 1 |
| seek: a branch on what ret_10112f30_0 returned, and that | 5 | 1 |
| seek: a branch on what ret_10112f52_0 returned, and that | 5 | 1 |
| seek: a branch on what ret_1011312a_0 returned, and that | 5 | 1 |
| seek: a branch on what ret_10113178_0 returned, and that | 5 | 1 |
| seek: a branch on what ret_101c5b63_0 returned, and that | 4 | 1 |
| seek: a branch on what ret_10252f65_1 returned, and that | 4 | 1 |
| seek: a branch on what ret_10195543_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_10195975_2 returned, and that | 3 | 1 |
| seek: a branch on what ret_101d10f1_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_101d7881_2 returned, and that | 3 | 1 |
| seek: a branch on what ret_10250e0b_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_102511b8_0 returned, and that | 3 | 1 |
| seek: a branch on what ret_10061279_1 returned, and that | 1 | 1 |
| seek: a branch on what ret_100b85b0_1 returned, and that | 1 | 1 |
| seek: a branch on what ret_101091ee_0 returned, and that | 1 | 1 |
| seek: a branch on what ret_10178940_1 returned, and that | 1 | 1 |
| seek: a branch on what ret_101c6ef7_3 returned, and that | 1 | 1 |
| seek: a branch on what ret_101cc784_2 returned, and that | 1 | 1 |
| every site reached; too few clean states (the grind's) | 0 | 45 |
