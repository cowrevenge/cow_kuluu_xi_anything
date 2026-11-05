/* f_100dc210 - let the connection clock follow the live millisecond tick, and count the times the
   tick has come round behind it.

   Take the tick from winmm, compare it with the tick the clock was last given, and either restamp or -
   when the stamp is too far ahead to be a mere overshoot - count a wrap and restamp. The caller decides
   what the count means; this only keeps it honest. Returns the tick in eax and the clock in edx.

   Evidence
   - callee is winmm!timeGetTime ......... 0x100dc210 calls 0x100dbe00, a one-instruction
                                           `jmp [0x10329400]`; tools/cow/iat_slot.py 0x10329400 names the
                                           import. Nothing loads eax before it, so eax IN is whatever the
                                           caller left, and the conversion does not invent a value for it.
   - the object is the frame net clock .... read from 0x10492e10 at 0x100dc215 and loaded a SECOND time
                                           at 0x100dc237; the re-read is reproduced deliberately (the
                                           unwinder/handler in between could republish the global), not
                                           optimised away. layout/addresses.h
                                           COW_ADDR_FRAME_NET_CLOCK_PTR.
   - +0x50 = last tick the clock was given  read 0x100dc21b, written 0x100dc222 and 0x100dc23d;
                                           sibling f_100dc260 returns [clock+0x50] to callers.
   - +0x4c = count of wraps over it         inc'd and stored at 0x100dc233-0x100dc234; cleared and
                                           started by f_100dc1f0 (cow_stamp_net_clock_tick); sibling
                                           f_100dc250 returns it. What the game does with the count is
                                           NOT established.
   - 0xE0000000 is a wrap margin, not a     cmp/jb at 0x100dc228-0x100dc22e. 2^32 ms is ~49.7 days and
     magic number                              0xE0000000 ms is ~43.5 days, so a stamp further ahead
                                           than that cannot be an overshoot: the only way is that the
                                           32-bit tick wrapped behind us. The day arithmetic is our
                                           reading (guess); the comparison itself is the game's.
   - one caller, on the frame-timing path .. tools/cow/callers_of.py 0x100dc210 -> 0x100dbeef, inside
                                           f_100dbeb0 after it republishes frame timing from the same
                                           object (calls 0x100dbf00, stores at [clock+8], copies
                                           [clock+0x10]->[clock+4], sets [clock+0x54]=1) - so this is
                                           what the clock is left at once it has been marked alive.

   Proof: tools/cow/cowdiff.py 0x100dc210 - 406 states, 0 mismatches, 17/17 instruction sites reached,
   812 tick answers taken from the harness's pinned timeGetTime, so the PASS does not depend on how long
   the two runs took. cow/seeds/100dc210.json names each state's tick and stamp, which is what puts both
   margins (0xDFFFFFFF ahead, and exactly 0xE0000000 ahead) under test instead of leaving them to luck.
   tools/cow/mutate.py 0x100dc210 --list-file cow/mutations/100dc210.json - 7 of 8 mutants caught; the
   eighth is recorded there as an equivalent mutant (widening `stamped < tick` to `<=` makes the fast
   path store the value already in the field, which no state can observe).

   Name: cow_advance_net_clock_tick (guess). cow/names.csv carries the citations.
*/
#include "cow.h"

/* The register contract cowdiff checks: eax out is the tick the callee answered with - no instruction
   after the call writes eax - and edx out is the clock object as read at 0x100dc215 on every path, so
   both are handed back rather than left to chance. ebx/esi/edi/ebp are untouched, and the function
   takes no arguments (a bare `ret`, and its caller cleans nothing). */
uint32_t cow_advance_net_clock_tick(uint32_t* clock_addr_out)
{
    const uint32_t tick = cow_call_net_clock_tick_at_top(); /* 0x100dc210, through the winmm thunk */

    const uint32_t clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dc215 */
    *clock_addr_out = clock_addr; /* what every path leaves in edx */
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, clock_addr);

    const uint32_t stamped = clock->tick_ms; /* 0x100dc21b */

    if (stamped < tick)
    {
        clock->tick_ms = tick; /* 0x100dc222: the live tick has overtaken the stamp */
        return tick;
    }

    if (stamped - tick < COW_NET_CLOCK_WRAP_MS)
    {
        return tick; /* 0x100dc22e: ahead by less than the wrap margin - leave a clock alone */
    }

    clock->tick_wrap_count += 1u; /* 0x100dc230-0x100dc234: the tick has come round behind us */

    clock = COW_AS(CowFrameNetClock, rd32(COW_ADDR_FRAME_NET_CLOCK_PTR)); /* 0x100dc237: loaded again */
    clock->tick_ms = tick; /* 0x100dc23d */
    return tick;
}

/* COW_ADAPTER BEGIN - cdecl with no arguments: the entry's first instruction is the call, so nothing
   is read from the caller's stack and the only word the `ret` pops is the return address (rt_return's
   pop of 0 does the esp += 4 the generated body does). The readability gate skips this block. */
void cow_adapter_100dc210(Guest* g)
{
    uint32_t clock_addr = 0u;
    const uint32_t eax = cow_advance_net_clock_tick(&clock_addr);
    g->edx = clock_addr; /* 0x100dc215, on every path */
    rt_return(g, eax, 0);
}
/* COW_ADAPTER END */
