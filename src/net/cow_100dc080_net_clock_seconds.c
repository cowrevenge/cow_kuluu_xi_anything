/* f_100dc080 - hand a caller the clock's whole seconds.

   Reads the clock global and returns one field: the counter f_100dbf20 carries once per
   COW_NET_CLOCK_MS_PER_SECOND drained out of the millisecond accumulator. It converts nothing - the
   milliseconds are the caller's problem (f_100dc060 does that arithmetic for the ones that ask).

   Evidence
   - the object is the net clock ............ 0x100dc080 loads [0x10492e10]; layout/addresses.h
                                               COW_ADDR_FRAME_NET_CLOCK_PTR, published by f_100dbe50
   - the field is +0x0c ..................... mov eax,[eax+0xc] at 0x100dc085, which is
                                               CowFrameNetClock.seconds: written by f_100dbe30
                                               (0x100dbe42) when the clock is stood up and
                                               incremented by f_100dbf20 at 0x100dbfb1-0x100dbfb2
   - no arguments, cdecl, bare `ret` ........ 0x100dc088 ret with no pop; the stack is never read
   - only eax is an output .................. the two instructions write eax and nothing else

   Proof: tools/cow/cowdiff.py 0x100dc080 - PASS on eax, edx, callee-saved, esp, memory writes and
   calls out, with every generated instruction site reached.

   Name: cow_net_clock_seconds (guess) - named for the field and the instruction that carries into it.
*/
#include "cow.h"

uint32_t cow_net_clock_seconds(void)
{
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, rd32(COW_ADDR_FRAME_NET_CLOCK_PTR)); /* 0x100dc080 */
    return clock->seconds; /* 0x100dc085 */
}

/* COW_ADAPTER BEGIN - no arguments and a bare `ret`. The readability gate skips this block. */
void cow_adapter_100dc080(Guest* g)
{
    const uint32_t eax = cow_net_clock_seconds();
    rt_return(g, eax, 0);
}
/* COW_ADAPTER END */
