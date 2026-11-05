/* f_100dc060 - the clock as one number: its whole seconds and its banked milliseconds together.

   Reads the clock global once and returns seconds * COW_NET_CLOCK_MS_PER_SECOND + the millisecond
   accumulator, i.e. how long the clock has been running. It writes nothing.

   Evidence
   - the object is the net clock ............ 0x100dc060 loads [0x10492e10] once; layout/addresses.h
                                               COW_ADDR_FRAME_NET_CLOCK_PTR
   - both fields come from that ONE load .... ecx holds the object for the read at 0x100dc066 (+0x0c)
                                               and the one at 0x100dc069 (+0x10); unlike f_100dbf20
                                               this entry never re-reads the global, so the pair it
                                               returns is the pair one object held at one instant
   - the multiplier is 1000 ................. `lea eax,[eax+eax*4]` three times at 0x100dc06c-0x100dc072
                                               (×5×5×5 = ×125) and `lea eax,[ecx+eax*8]` at 0x100dc075,
                                               so seconds reach the sum as ×1000 - the same
                                               COW_NET_CLOCK_MS_PER_SECOND that f_100dbf20 carries
                                               against at 0x100dbfa4 and 0x100dbfca
   - no arguments, cdecl, bare `ret` ........ 0x100dc078 ret with no pop
   - only eax is an output .................. ecx and eax are the only registers the entry writes
   - twenty-eight callers ................. 0x100dc125 and 0x100e1485, 0x100e8d20, 0x100e8d2e,
                                               0x100e9dad, 0x100e9ffb, 0x100ea0a0, 0x100ea14f, ...
                                               (tools/cow/owner_index.py 0x100dc060). It is one of the
                                               clock's published faces, next to f_100dc040 and
                                               f_100dc080, and this is the one that answers "for how
                                               long".

   Proof: tools/cow/cowdiff.py 0x100dc060 - PASS on eax, edx, callee-saved, esp, memory writes and
   calls out, with every generated instruction site reached.

   Name: cow_net_clock_total_ms (guess) - from the arithmetic; that the callers want an elapsed
   milliseconds is supported by the shape, what each of the twenty-eight schedules with it is not
   established.
*/
#include "cow.h"

/* What the reading decided, handed to the adapter, which owns the loads and the ABI. Not a guest
   layout: it never appears in guest memory. */
typedef struct CowNetClockReading
{
    uint32_t eax; /* the entry's whole answer, in milliseconds */
} CowNetClockReading;

void cow_net_clock_total_ms(uint32_t seconds, uint32_t ms_accum, CowNetClockReading* out)
{
    /* 0x100dc06c-0x100dc075: `lea eax,[eax+eax*4]` three times and then `lea eax,[ecx+eax*8]` is one
       multiply by 1000 and an add, done in 32 bits - state 3 of the seeds is the one that overflows. */
    out->eax = ms_accum + seconds * COW_NET_CLOCK_MS_PER_SECOND;
}

/* COW_ADAPTER BEGIN - no arguments and a bare `ret`. The two fields come from the ONE pointer the
   entry loads at 0x100dc060, which is the reading that matters here: unlike f_100dbf20 this entry does
   not re-read the global, so the pair it converts is the pair one object held at one instant. The
   readability gate skips this block. */
void cow_adapter_100dc060(Guest* g)
{
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, rd32(COW_ADDR_FRAME_NET_CLOCK_PTR)); /* 0x100dc060 */
    CowNetClockReading reading;
    cow_net_clock_total_ms(clock->seconds, clock->ms_accum, &reading); /* 0x100dc066, 0x100dc069 */
    rt_return(g, reading.eax, 0);
}
/* COW_ADAPTER END */
