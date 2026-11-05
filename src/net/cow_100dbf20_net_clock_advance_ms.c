/* f_100dbf20 - take the millisecond tick and bank what it added into the clock.

   Asks the system for the tick, measures it against the tick the clock last saw, and banks that much
   into the millisecond accumulator - first asking the accumulator's own drift for help when the gap is
   longer than it should be, then draining whole seconds out of the accumulator one at a time. A tick
   that has gone backwards is not banked at all. It is the entry that gives the clock its name's
   meaning: everything else in the cluster reads what this one leaves.

   Evidence
   - the object is the net clock ............ four loads of [0x10492e10]: 0x100dbf27, 0x100dbf47,
                                               0x100dbf8c, 0x100dbf9f, and again at 0x100dbfb5 and
                                               0x100dbfc2 inside the drain. The entry re-loads the
                                               global before nearly every access, so the conversion
                                               re-loads it at the same places rather than caching one
                                               pointer
   - the tick is an import, not a callee .... 0x100dbf22 calls 0x100dbe00, one instruction
                                               `jmp dword ptr [0x10329400]`, whose hint/name record
                                               reads timeGetTime (tools/cow/iat_slot.py). Bridged:
                                               cow_call_net_clock_tick_at
   - the gap is measured by a callee ........ 0x100dbf35 calls the converted f_100dbf00
                                               (cow_clock_window_delta) with the words pushed at
                                               0x100dbf2f-0x100dbf33: COW_NET_CLOCK_WINDOW_OPEN, the
                                               stored tick, the new one; the caller cleans them with
                                               `add esp,0xc` at 0x100dbf3a
   - a backwards gap banks nothing ........... 0x100dbf3f `test eax,eax` / 0x100dbf41 `jl 0x100dbfcc`
                                               - SIGNED, so the whole accounting is skipped and the
                                               entry returns that negative delta in eax with the
                                               caller's edx, having written only tick_last
   - the stored tick is updated first ........ 0x100dbf3d `mov [edi],esi` through the pointer loaded at
                                               0x100dbf27, before the delta is looked at, so a skipped
                                               accounting still consumes the tick
   - drift is a millisecond bank ............. +0x14 is read at 0x100dbf4d and only spent when it is
                                               non-zero AND the gap exceeds COW_NET_CLOCK_DRIFT_MAX
                                               (0x100dbf50-0x100dbf57). A positive drift is spent into
                                               the gap (0x100dbf87 `add eax,ecx`) and reduced by the
                                               same amount (0x100dbf85 `sub edx,ecx`); a negative drift
                                               takes the gap back. Either way the movement is capped by
                                               COW_NET_CLOCK_DRIFT_MAX on both sides
                                               (0x100dbf5f-0x100dbf7a), which is what names the field
   - a long gap is measured SIGNED ........... 0x100dbf54 `cmp eax,0x14 / jle` - so a delta above
                                               0x7fffffff is not "long", it is negative, and the
                                               `jl` above already took it
   - the drain is one millisecond loop ....... 0x100dbf9f-0x100dbfca: while the accumulator reaches
                                               COW_NET_CLOCK_MS_PER_SECOND, add one to seconds
                                               (0x100dbfae-0x100dbfb2) and subtract the same thousand
                                               from it (0x100dbfba-0x100dbfbf adds COW_NET_CLOCK_MS_NEG,
                                               the word loaded at 0x100dbfa9, which is also what edx
                                               ends up holding whenever the body ran). Every pass
                                               re-loads the global
   - eax and edx are both outputs ............ on the banked paths eax is the clock object as loaded by
                                               the test at 0x100dbf9f or 0x100dbfc2, not a value; on the
                                               skipped path it is the delta. edx is the drift that was
                                               read (or spent) on the banked paths and the caller's on
                                               the skipped one. Neither is "the return value" in the
                                               sense a C function has one
   - the save block is real stack traffic .... 0x100dbf20-0x100dbf21 push esi/edi and 0x100dbfcc-0x100dbfcd
                                               pop them; esi carries the tick between 0x100dbf2d and
                                               0x100dbf2f/0x100dbf9a, edi carries the object pointer
   - four callers ............................ 0x100dbeb0 (the pump below it in this cluster) and
                                               0x100dc120, 0x100dc130, 0x100dc140
                                               (tools/cow/owner_index.py 0x100dbf20)

   Proof: tools/cow/cowdiff.py 0x100dbf20 - PASS on eax, edx, callee-saved, esp, memory writes (address,
   size, value, order - which is what pins the drain's per-pass pair of stores and the four reloads) and
   calls out: 61 of 64 instruction sites. The three that are never reached are dead, not untested:
   0x100dbf71 (`mov ecx,esi`), its `jmp` at 0x100dbf73 and 0x100dbf83 (`mov ecx,eax`) sit below the
   0x100dbf57 `jle` that admits only gaps above COW_NET_CLOCK_DRIFT_MAX, and both values they can load
   are capped at that limit in absolute value, so the comparisons above them can never ask for them.
   cow/seeds/100dbf20.json exists because the interesting states are narrow: a tick that has
   gone backwards, a gap at or under the drift limit, and a drift large enough to be capped in each of
   its two directions.

   Name: cow_net_clock_advance_ms (guess) - from what it does to the accumulator and the seconds counter;
   that the game schedules frames from the result is supported by f_100dbeb0 calling it once a pump, not
   by anything that reads it back.
*/
#include "cow.h"

/* What the reading decided about the drift, handed to the adapter, which owns the memory effects. Not a
   guest layout: it never appears in guest memory. It exists so the clamp - the part a later unit of the
   same shape will be trusted to have gotten right - is one readable function, while the stores, the
   reloads and the register outcomes stay where the ABI work belongs. */
typedef struct CowNetClockAccounting
{
    int spent;          /* the clamp ran, so the store at 0x100dbf89 is owed */
    int32_t drift;      /* what that store takes (and what edx ends up holding) */
    uint32_t delta;     /* the milliseconds to bank at 0x100dbf9a */
} CowNetClockAccounting;

void cow_net_clock_advance_ms(uint32_t delta_in, int32_t drift_in, CowNetClockAccounting* out)
{
    out->spent = 0;
    out->drift = drift_in;
    out->delta = delta_in;

    /* 0x100dbf50-0x100dbf57: no bank, or a gap short enough not to need one */
    if (drift_in == 0 || (int32_t)delta_in <= COW_NET_CLOCK_DRIFT_MAX)
    {
        return;
    }

    int32_t spend = drift_in;
    if (drift_in < 0)
    {
        /* 0x100dbf59-0x100dbf73: a debt takes gap back, capped at the limit and at the gap */
        if (spend < -COW_NET_CLOCK_DRIFT_MAX)
        {
            spend = -COW_NET_CLOCK_DRIFT_MAX; /* 0x100dbf64 */
        }
        const int32_t neg_delta = -(int32_t)delta_in; /* 0x100dbf69-0x100dbf6b */
        if (spend < neg_delta)
        {
            spend = neg_delta; /* 0x100dbf71: the debt never takes back more than the gap holds -
                                  the jge at 0x100dbf6f keeps it whenever it is the LARGER of the two,
                                  which is the direction that mattered enough to be misread once */
        }
    }
    else
    {
        /* 0x100dbf75-0x100dbf83: a credit gives gap to the delta, capped the same two ways */
        if (spend > COW_NET_CLOCK_DRIFT_MAX)
        {
            spend = COW_NET_CLOCK_DRIFT_MAX; /* 0x100dbf7a */
        }
        if (spend > (int32_t)delta_in)
        {
            spend = (int32_t)delta_in; /* 0x100dbf83 */
        }
    }

    out->drift = drift_in - spend;              /* 0x100dbf85 */
    out->delta = delta_in + (uint32_t)spend;    /* 0x100dbf87 */
    out->spent = 1;
}

/* COW_ADAPTER BEGIN - cdecl, no arguments: the only word the entry's `ret` pops is the return address
   (rt_return's pop of 0 does the `esp += 4` the generated body does). The stores below are the entry's
   own memory effects in the original's order and from the original's own loads, because cowdiff
   compares the guest memory trace byte for byte and this entry writes the clock from five different
   places. The readability gate skips this block. */
void cow_adapter_100dbf20(Guest* g)
{
    g->esp -= 4u; /* 0x100dbf20: push esi */
    wr32(g->esp, g->esi);
    g->esp -= 4u; /* 0x100dbf21: push edi */
    wr32(g->esp, g->edi);

    const uint32_t tick = cow_call_net_clock_tick_at(COW_ADDR_NET_CLOCK_ADVANCE_TICK_RETURN); /* 0x100dbf22 */

    uint32_t clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dbf27 */
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, clock_addr);

    g->esp -= 4u; /* 0x100dbf2f: push esi - the new tick goes on the stack BEFORE the stored one is
                     read, and that order is not decoration: on a state where the clock pointer is junk
                     the entry faults at the read, with this one write already made */
    wr32(g->esp, tick);

    const uint32_t previous = clock->tick_last; /* 0x100dbf30 */
    g->esp -= 4u; /* 0x100dbf32: push eax - the tick it was measured against */
    wr32(g->esp, previous);
    g->esp -= 4u; /* 0x100dbf33: push -1 - the open window, where the pump pushes a 1000 ms one */
    wr32(g->esp, COW_NET_CLOCK_WINDOW_OPEN);

    const uint32_t delta = cow_call_clock_window_delta_at(COW_ADDR_CLOCK_WINDOW_DELTA_RETURN_ADVANCE); /* 0x100dbf35 */
    g->esp += 4u * 3u; /* 0x100dbf3a: add esp,0xc - the callee is cdecl and popped only its address */

    clock->tick_last = tick; /* 0x100dbf3d, on every path, through the pointer loaded at 0x100dbf27 */

    uint32_t eax_out = delta; /* the path that banks nothing returns the delta it measured */

    if ((int32_t)delta >= 0) /* 0x100dbf3f-0x100dbf41: signed - a tick that went backwards is dropped */
    {
        clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dbf47 */
        clock = COW_AS(CowFrameNetClock, clock_addr);

        CowNetClockAccounting spend;
        cow_net_clock_advance_ms(delta, clock->drift, &spend); /* 0x100dbf4d reads the drift */
        g->edx = (uint32_t)spend.drift; /* 0x100dbf4d, and 0x100dbf85 when the clamp ran */

        if (spend.spent)
        {
            clock->drift = (uint32_t)spend.drift; /* 0x100dbf89 */
            clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dbf8c */
            clock = COW_AS(CowFrameNetClock, clock_addr);
        }

        clock->ms_accum = clock->ms_accum + spend.delta; /* 0x100dbf92-0x100dbf9c */

        clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dbf9f */
        clock = COW_AS(CowFrameNetClock, clock_addr);
        eax_out = clock_addr; /* what the entry hands back on every banked path */

        while (clock->ms_accum >= COW_NET_CLOCK_MS_PER_SECOND) /* 0x100dbfa4, and 0x100dbfc7 after a pass */
        {
            g->edx = COW_NET_CLOCK_MS_NEG; /* 0x100dbfa9, once per pass */
            clock->seconds += 1u; /* 0x100dbfae-0x100dbfb2 */

            clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dbfb5 */
            clock = COW_AS(CowFrameNetClock, clock_addr);
            clock->ms_accum = clock->ms_accum + COW_NET_CLOCK_MS_NEG; /* 0x100dbfba-0x100dbfbf */

            clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dbfc2 */
            clock = COW_AS(CowFrameNetClock, clock_addr);
            eax_out = clock_addr;
        }
    }

    g->edi = rd32(g->esp); /* 0x100dbfcc: pop edi */
    g->esp += 4u;
    g->esi = rd32(g->esp); /* 0x100dbfcd: pop esi */
    g->esp += 4u;

    rt_return(g, eax_out, 0);
}
/* COW_ADAPTER END */
