/* f_100dc1b0 - tell the clock how far ahead of itself it should be.

   Two absolute positions are handed in - a second and a millisecond the caller expects the clock to
   have reached - and the entry turns the distance from where the clock actually is into its drift:
   whole seconds worth a thousand milliseconds each, plus the leftover milliseconds. That drift is what
   f_100dbf20 later spends, capped at COW_NET_CLOCK_DRIFT_MAX a step, when a frame's gap is longer than
   it should be.

   Evidence
   - the object is the net clock ............ two loads of [0x10492e10]: 0x100dc1b0 and 0x100dc1cc; the
                                               first serves the seconds/accumulator reads and the drift
                                               store, the second the pair read afterwards - the entry
                                               re-loads rather than reusing, and the conversion follows
   - arg0 is a second, arg1 a millisecond ... read at 0x100dc1b6 (`[esp+4]`) and 0x100dc1d1 (`[esp+8]`)
                                               and subtracted from +0x0c and +0x10 respectively, so they
                                               are the same two quantities the clock itself keeps
   - the seconds are worth 1000 ms ........... 0x100dc1bd-0x100dc1c6: `lea eax,[eax+eax*4]` three times
                                               (×125) and `shl eax,3` (×8) - the same COW_NET_CLOCK_
                                               MS_PER_SECOND expressed as shifts, which is why f_100dc060
                                               (its ×1000 by three leas and a ×8) is the mirror image
   - and the leftover is added on top ........ 0x100dc1d5-0x100dc1dd: (arg1 - [clock+0x10]) is added to
                                               what was just stored at +0x14, THROUGH A RE-READ of the
                                               field at 0x100dc1da: the entry writes the seconds'
                                               contribution first and then folds the milliseconds into
                                               it, in two separate stores of the same field
   - +0x14 is the drift ..................... stored at 0x100dc1c9 and 0x100dc1df; read by f_100dbf20 at
                                               0x100dbf4d and moved by its clamp, which is what names
                                               the field
   - eax and edx are both outputs ........... edx holds the drift as the entry last read it back
                                               (0x100dc1da) and nothing after writes it, so the caller
                                               sees the value it just caused to be stored; eax at the
                                               `mov al,1` (0x100dc1e2) is the object pointer loaded at
                                               0x100dc1cc with its low byte forced to 1 - a bare 1
                                               would be a difference from the game
   - cdecl, two arguments, bare `ret` ....... 0x100dc1e4 ret with no pop: the caller cleans
   - one caller ............................. 0x100fbd28 (tools/cow/owner_index.py 0x100dc1b0), and the
                                               entry is the setter that pairs with f_100dc0a0/f_100dc0e0,
                                               which ask the same clock how far ahead it is rather than
                                               saying so

   Proof: tools/cow/cowdiff.py 0x100dc1b0 - PASS on eax, edx, callee-saved, esp, memory writes (address,
   size and value - which is what pins the drift's final word at +0x14; the trace cannot see the FIRST of
   the two stores to that field, and cow/mutations/100dc1b0.json M1 says so rather than pretending) and
   calls out.
   cow/seeds/100dc1b0.json exists because the interesting states are a caller AHEAD of the clock and
   one BEHIND it, in both fields, which fuzzed arguments hit only rarely.

   Name: cow_net_clock_set_drift (guess) - from the field it writes and the field it reads that spends
   it. That the caller's two numbers are a target position is supported by the subtraction against the
   clock's own seconds and accumulator; who sets the target is not established.
*/
#include "cow.h"

/* What the reading decided, handed to the adapter, which owns the loads, the two stores and the
   registers. Not a guest layout: it never appears in guest memory. */
typedef struct CowNetClockDrift
{
    uint32_t from_seconds; /* the caller's seconds, worth COW_NET_CLOCK_MS_PER_SECOND each (0x100dc1ba-0x100dc1c6) */
    uint32_t total;        /* what the second store leaves at +0x14 (0x100dc1df) */
} CowNetClockDrift;

void cow_net_clock_set_drift(uint32_t want_seconds, uint32_t seconds, uint32_t want_ms,
                             uint32_t ms_accum, CowNetClockDrift* out)
{
    const uint32_t lead = want_seconds - seconds;  /* 0x100dc1ba */
    uint32_t d = lead * COW_NET_CLOCK_MS_PER_SECOND; /* 0x100dc1bd-0x100dc1c6 */
    out->from_seconds = d;
    d = d + (want_ms - ms_accum);                  /* 0x100dc1d8-0x100dc1dd, onto what was just stored */
    out->total = d;
}

/* COW_ADAPTER BEGIN - cdecl, two arguments, bare `ret`: the caller cleans them, so rt_return's pop of 0
   does only the `esp += 4` for the return address. The two stores to +0x14 are separate, in the
   original's order, and each follows its own load of the global, because cowdiff compares the guest
   memory trace byte for byte. The readability gate skips this block. */
void cow_adapter_100dc1b0(Guest* g)
{
    const uint32_t want_seconds = rt_arg(g, 0); /* 0x100dc1b6 */
    const uint32_t want_ms = rt_arg(g, 1);      /* 0x100dc1d1 */

    uint32_t clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dc1b0 */
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, clock_addr);

    CowNetClockDrift drift;
    cow_net_clock_set_drift(want_seconds, clock->seconds, want_ms, clock->ms_accum, &drift);

    clock->drift = drift.from_seconds; /* 0x100dc1c9 */

    clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dc1cc */
    clock = COW_AS(CowFrameNetClock, clock_addr);
    clock->drift = drift.total;        /* 0x100dc1df, onto the value re-read at 0x100dc1da */
    g->edx = drift.total;              /* what that read left in edx, and what the entry hands back */

    rt_return(g, (clock_addr & ~0xffu) | 1u, 0); /* 0x100dc1e2: `mov al,1` over the object pointer */
}
/* COW_ADAPTER END */
