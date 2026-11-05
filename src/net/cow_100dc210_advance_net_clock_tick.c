/* f_100dc210 - it lets the connection clock follow the millisecond tick, and counts the times the
   tick has come round behind it

   The original, line by line. The bytes are the 49 at 0x100dc210 in our own image
   (python tools/cow/peek_bytes.py 0x100dc210 --len 49 -> e8 eb fb ff ff 8b 15 10 2e 49 10 8b 4a 50 3b
   c8 73 04 89 42 50 c3 2b ca 83 f9 e0 ... c3), and every register the harness compares is accounted for.

     100dc210  e8 ebfbff  call 0x100dbe00        a one-instruction thunk, `jmp dword ptr [0x10329400]`;
                                                       the slot is an import and the import is winmm's
                                                       timeGetTime (python tools/cow/iat_slot.py
                                                       0x10329400) - the same callee f_100dc1f0 takes its
                                                       tick from. eax out is the tick; nothing here
                                                       loads anything before the call, so eax IN is
                                                       whatever the caller left.
     100dc215  8b 15 102e4910  mov edx, [0x10492e10]   the clock object (the global upstream calls
                                                       frame_net_clock - see layout/addresses.h)
     100dc21b  8b 4a 50        mov ecx, [edx+0x50]     the tick the clock was last set to
     100dc21e  3b c8           cmp ecx, eax
     100dc220  73 04           jae 0x100dc226          the stamp is NOT behind the live tick -> below
     100dc222  89 42 50        mov [edx+0x50], eax     time has moved on: restamp it
     100dc225  c3              ret                          and we are done - eax is still the tick,
                                                             edx still the clock
     100dc226  2b ca           sub ecx, eax            how far AHEAD of the live tick the stamp sits
     100dc228  83 f9 e0...     cmp ecx, 0xe0000000
     100dc22e  72 10           jb  0x100dc240          ahead by less than 0xE0000000 ms - about 43.5
                                                       days - is a small overshoot, and a clock must
                                                       not be put back for that: return untouched
     100dc230  8b 4a 4c        mov ecx, [edx+0x4c]     ahead by MORE than that cannot be an overshoot:
                                                       the 32-bit millisecond counter wraps every
                                                       2^32 ms (about 49.7 days), so the only way the
                                                       stamp can be that far ahead of the live tick is
                                                       that the tick has come round behind us
     100dc233  41              inc ecx                        count it
     100dc234  89 4a 4c        mov [edx+0x4c], ecx
     100dc237  8b 0d 102e4910  mov ecx, [0x10492e10]   the global is loaded AGAIN - the conversion
                                                       re-reads it for the same reason, not as an
                                                       optimisation
     100dc23d  89 41 50        mov [ecx+0x50], eax     and now the stale stamp is replaced
     100dc240  c3              ret

   Who calls it (python tools/cow/callers_of.py 0x100dc210 -> one code site, 0x100dbeef): inside
   f_100dbeb0 (0x100dbeb0-0x100dbef6), right after that routine republishes the frame timing from the
   same object - it calls 0x100dbf00, stores the answer at [clock+8], copies [clock+0x10] to
   [clock+4], sets [clock+0x54] to 1 - and then hands the clock to this entry before returning 1. So
   this is what the clock is left to once it has just been marked alive.

   Together with f_100dc1f0 (cow_stamp_net_clock_tick, which clears +0x4c and stamps +0x50 before any
   of this) the two entries say what the fields are: +0x50 is the last tick the clock was given and
   +0x4c counts the wraps over it. The two siblings that read them back agree: f_100dc250 is
   `mov eax,[0x10492e10] / mov eax,[eax+0x4c] / ret` and f_100dc260 the same for +0x50 - so both fields
   are handed to callers, and what the game does with the count is still not established.

   Proof. python tools/cow/cowdiff.py 0x100dc210: 406 states, 0 mismatches, 17/17 generated
   instruction sites reached, 812 clock answers taken from the harness's pinned timeGetTime (so the
   PASS does not depend on how long the two runs took). cow/seeds/100dc210.json names the tick each
   state gets and the stamp it is compared against, which is what puts both margins - 0xDFFFFFFF ahead
   and exactly 0xE0000000 ahead - under test instead of leaving them to the fuzzer.
   python tools/cow/mutate.py 0x100dc210 --list-file cow/mutations/100dc210.json: 7 of 8 mutants are
   caught (a dropped store, a store to the wrong field, a dropped increment, each comparison's boundary
   and direction, a wrong eax, a skipped call, and a dropped edx); the eighth is recorded there as an
   equivalent mutant - widening `stamped < tick` to `<=` makes the fast path store the value that is
   already in the field, which no state can observe.

   Name: cow_advance_net_clock_tick (guess). cow/names.csv carries the citations; the threshold is
   named for the comparison that uses it and the 43.5/49.7 day arithmetic that makes it a wrap test
   rather than a magic number is written above, not asserted.
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
