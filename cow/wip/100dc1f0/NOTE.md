# wip 100dc1f0 - cow_stamp_net_clock_tick

Moved out of `src/net/` by `tools/cow/reverify.py`'s first full run: the source writes
`clock->cleared_before_tick`, which is not a member of `CowFrameNetClock` in
`layout/structs.h`, so it does not compile. Because the build discovers sources from the
tree, this one file failed the fresh build of every unit cowdiff verifies - the cached
object in `build/` had been masking it.

To finish: give the field its real offset and the instruction that proves it in
`layout/structs.h` (the surrounding fields each cite their instruction), restore this
file to `src/net/`, and re-gate. Its seeds and mutations are in `cow/seeds/` and
`cow/mutations/`; the ledger row keeps the oracle citations.
