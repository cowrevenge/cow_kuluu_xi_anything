# Journal

## 2026-11-12 (System 2 install)
- Phase 0: hand loop retired (loopy clear); cow/reverify.json -> cow/wip/reverify-legacy-judge.json; LOOP.md marked PAUSED.
- Blocked, then unblocked: system2.patch failed on tools/cow/cowdiff.c:979. Sole cause was my own c4353da7 (SEH fault detail); reverted as 6d1de293, not hand-merged.
- Install: judge2 selftest 52/0, conveyor selftest 25/0, judge id 8d58abb5a6fe -> INSTALLED. judge_selftest/run.py on MSVC: LEGACY 16/0 wrong, V2 29/0 wrong, SELF 29/0 wrong, OK.
- World fix, OLD command line: 10010350, 100298d0, 100298f0, 10029930 all COWDIFF PASS grade=exact judge=1 (each previously FAIL at state 0, @00993b60 10313417/00000000). 10010350 --self PASS.
- RETUSE OK: 21838 functions -> cow/retuse.json. judged as: f32 2, f64 101, strict 10976, u16 78, u32 4787, u64 28, u8 477, void 5389.
- void per Ghidra: 11602   of those: no direct caller 4858, a caller reads eax 924, relaxed 5820.
- Judge id after retuse: 7f9969cd916e (retuse.json is a judge file). 10010350 --judge 2: contract void (eax_dead=0xffffffff edx_dead=1 stack_args=0), PASS grade=exact judge=2.
- Step 6 (40 units = 20 old-fail + 20 old-pass): TIERS gold 30, silver 1, weak 3, fail 5, hang 1; 30/40 pass in 236s. self control re-ran 2 failing rows against themselves: 0 are harness noise.
- Old failures that are now gold include the 10010350/100298d0/100298f0/10029930 family; remaining patterns: no clean state 3, eax 2, hang 1 (0x10017bd0), blank 4 (incl. 0x10014c90).
