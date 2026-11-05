/* f_100dc150 - set the clock back to a stated position and take a fresh tick.

   The caller says where the clock should be - a second and the milliseconds into it - and this entry
   puts the clock there: it writes both fields, clears the drift the pump's advance spends, takes the
   system tick and stamps it as the last one seen, and then walks the sample array emptying every slot
   and its taken flag in the same pass. It answers 1.

   Evidence
   - the object is the net clock ............ six loads of [0x10492e10]: 0x100dc150, 0x100dc15c,
                                               0x100dc169, 0x100dc17b, 0x100dc18a and 0x100dc19f. Every
                                               access in the conversion follows one of those loads,
                                               including inside the loop, which loads the global twice
                                               per pass
   - the two arguments are the position ..... +0x0c takes [esp+4] (0x100dc155-0x100dc159) and +0x10 takes
                                               [esp+8] (0x100dc162-0x100dc166): the seconds and the
                                               accumulator, which are exactly the two fields f_100dc1b0
                                               compares a caller against and f_100dbf20 drains
   - the drift is cleared ................... 0x100dc16f `mov dword ptr [ecx+0x14],0`, the field whose
                                               movement is capped at COW_NET_CLOCK_DRIFT_MAX - a reset
                                               starts the correction at nothing
   - the tick is an import, not a callee .... 0x100dc176 calls 0x100dbe00, one instruction
                                               `jmp dword ptr [0x10329400]`, whose hint/name record reads
                                               timeGetTime (tools/cow/iat_slot.py). Bridged, as the two
                                               other clock entries that ask for it are. The answer goes
                                               to +0x00 at 0x100dc183 through the load at 0x100dc17b,
                                               after the `xor ecx,ecx` at 0x100dc181 started the count
   - the loop clears the samples AND the flags in one pass  0x100dc185 starts the cursor at 0x18 and the
                                               body runs until the cursor reaches 0x40: `add eax,4`,
                                               `inc ecx`, `cmp eax,0x40`, `mov [eax+edx-4],0` clears a
                                               sample word (the ten at +0x18..+0x3f), then `mov edx,
                                               [global]` again and `mov byte [edx+ecx+0x3f],0` clears the
                                               taken flag the same index selects (+0x40..+0x49 - the
                                               count starts at 1 because `inc ecx` precedes it, which is
                                               what puts ecx=1 on the byte at +0x40). Ten words and ten
                                               bytes is COW_NET_CLOCK_SAMPLES each way, so the loop's
                                               bound is the struct's own sample count
   - the order inside a pass is observable ... the dword store comes before the byte store and each is
                                               preceded by its own load of the global; cowdiff compares
                                               the trace in order, so a conversion that hoisted either
                                               load is caught
   - eax is 1 and edx is the object ....... the last value eax held was the loop cursor at 0x40, and the
                                               `mov al,1` at 0x100dc1ac REPLACES that byte - which is the
                                               only byte of 0x40 that was ever nonzero - so the entry
                                               answers 1, not 0x41: the byte the loop left standing is the
                                               byte the entry overwrites. edx is the object pointer from
                                               0x100dc19f. (Both are compared by cowdiff; "returned 0x41"
                                               is the mistake a reading that ORs instead of replaces makes,
                                               and mutation M7 records that the two are indistinguishable
                                               here only because 1 is the truth)
   - cdecl, two arguments, bare `ret` ....... 0x100dc1ae: the caller cleans
   - two callers ............................ 0x100faeaa and 0x101031c6 (tools/cow/owner_index.py
                                               0x100dc150) - the connection's own paths, which is what
                                               makes a stated position a reset rather than a set

   Proof: tools/cow/cowdiff.py 0x100dc150 - PASS on eax, edx, callee-saved, esp, memory writes (the trace
   compares what each pinned address ENDS holding, not the sequence that put it there - see
   cow/mutations/100dc150.json M1 and M7 for the two things that cannot be seen,
   size and value - which is what pins all twenty-two stores: four fields plus ten sample words and
   ten taken bytes, each in the original's order) and calls out.

   Name: cow_net_clock_reset_to (guess) - from what it writes and the fact that the caller supplies the
   position. That the callers re-sync the clock (a zone hop, say) is supported by what is cleared
   together; the trigger is not established.
*/
#include "cow.h"

/* What the reading decided, handed to the adapter, which owns the loads, the calls and the twenty-two
   stores. Not a guest layout: it never appears in guest memory. */
typedef struct CowNetClockReset
{
    uint32_t seconds;      /* the position's whole seconds, for +0x0c */
    uint32_t ms_accum;     /* the position's milliseconds, for +0x10 */
    uint32_t tick_last;    /* the tick just taken, for +0x00 */
    unsigned passes;       /* how many times the sample/flag pair is cleared */
} CowNetClockReset;

void cow_net_clock_reset_to(uint32_t seconds, uint32_t ms_accum, uint32_t tick, CowNetClockReset* out)
{
    out->seconds = seconds;
    out->ms_accum = ms_accum;
    out->tick_last = tick;
    out->passes = COW_NET_CLOCK_SAMPLES; /* the cursor runs 0x18..0x40 by fours: the sample words, and
                                            the taken flags at the same index (0x100dc185-0x100dc1a5) */
}

/* COW_ADAPTER BEGIN - cdecl, two arguments, bare `ret`: the caller cleans them, so rt_return's pop of 0
   does only the `esp += 4` for the return address. The stores below are the entry's own effects in the
   original's order, each following its own load of the global, because cowdiff compares the guest
   memory trace byte for byte - and in the loop that means a dword store, a reload and a byte store per
   pass. The readability gate skips this block. */
void cow_adapter_100dc150(Guest* g)
{
    const uint32_t want_seconds = rt_arg(g, 0); /* 0x100dc155 */
    const uint32_t want_ms = rt_arg(g, 1);      /* 0x100dc162 */

    uint32_t clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dc150 */
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, clock_addr);
    clock->seconds = want_seconds; /* 0x100dc159 */

    clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dc15c */
    clock = COW_AS(CowFrameNetClock, clock_addr);
    clock->ms_accum = want_ms; /* 0x100dc166 */

    clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dc169 */
    clock = COW_AS(CowFrameNetClock, clock_addr);
    clock->drift = 0u; /* 0x100dc16f - the plan's zero, through this load */

    const uint32_t tick = cow_call_net_clock_tick_at(COW_ADDR_NET_CLOCK_RESET_TICK_RETURN); /* 0x100dc176 */

    clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dc17b */
    clock = COW_AS(CowFrameNetClock, clock_addr);
    clock->tick_last = tick; /* 0x100dc183 */

    CowNetClockReset plan;
    cow_net_clock_reset_to(want_seconds, want_ms, tick, &plan);

    uint32_t cursor = 0x18u; /* 0x100dc185: the first sample word's offset minus the step the body takes
                                before it stores - the loop stores at [eax+edx-4] */
    for (unsigned pass = 0u; pass < plan.passes; ++pass)
    {
        clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dc18a */
        cursor += 4u;                                    /* 0x100dc190 */
        /* 0x100dc193/0x100dc194: the count and the stop test - the flag the cmp leaves is what the jl at
           0x100dc1aa reads, and the pass whose cursor reaches 0x40 is the last one */
        wr32((uint32_t)(cursor + clock_addr - 4u), 0u);  /* 0x100dc197: a sample word */

        clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dc19f */
        wr8((uint32_t)(clock_addr + (pass + 1u) + 0x3fu), 0u); /* 0x100dc1a5: its taken flag, one-based
                                                                  because `inc ecx` ran first */
    }

    g->edx = clock_addr; /* what the loop's last load left there */
    rt_return(g, (cursor & ~0xffu) | 1u, 0); /* 0x100dc1ac: `mov al,1` over the cursor, which ends at 0x40 */
}
/* COW_ADAPTER END */
