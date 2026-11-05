/* f_100dc090 - hand a caller the clock's banked milliseconds.

   Reads the clock global and returns one field: the accumulator f_100dbf20 banks into and the drain at
   0x100dbf9f-0x100dbfca empties a thousand at a time. It is the same question f_100dc060 asks, answered
   in milliseconds rather than in the seconds-plus-milliseconds the other entry composes.

   Evidence
   - the object is the net clock ............ 0x100dc090 loads [0x10492e10]; layout/addresses.h
                                               COW_ADDR_FRAME_NET_CLOCK_PTR
   - the field is +0x10 ..................... mov eax,[eax+0x10] at 0x100dc095: CowFrameNetClock.ms_accum,
                                               added to at 0x100dbf9a by f_100dbf20 and cleared by
                                               f_100dbe30 at 0x100dbe44
   - no arguments, cdecl, bare `ret` ........ 0x100dc098 ret with no pop; the stack is never read
   - only eax is an output .................. two instructions write eax and nothing else

   Proof: tools/cow/cowdiff.py 0x100dc090 - PASS on eax, edx, callee-saved, esp, memory writes (there
   are none) and calls out, with every generated instruction site reached.

   Name: cow_net_clock_ms_accum (guess) - named for the field and the two instructions that move it.
*/
#include "cow.h"

uint32_t cow_net_clock_ms_accum(void)
{
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, rd32(COW_ADDR_FRAME_NET_CLOCK_PTR)); /* 0x100dc090 */
    return clock->ms_accum; /* 0x100dc095 */
}

/* COW_ADAPTER BEGIN - no arguments and a bare `ret`. The readability gate skips this block. */
void cow_adapter_100dc090(Guest* g)
{
    const uint32_t eax = cow_net_clock_ms_accum();
    rt_return(g, eax, 0);
}
/* COW_ADAPTER END */
