/* f_100dc040 - hand a caller the clock's milliseconds-since-last-frame.

   Reads the clock global and returns one field. It does not advance, clamp or clear anything; the
   value is whatever f_100dbeb0 left there.

   Evidence
   - the object is the net clock ............ 0x100dc040 loads [0x10492e10]; layout/addresses.h
                                               COW_ADDR_FRAME_NET_CLOCK_PTR, published by f_100dbe50
   - the field is +0x08 ..................... mov eax,[eax+8] at 0x100dc045. It is the field
                                               f_100dbeb0 stores at 0x100dbed5 (the answer of
                                               f_100dbf00 over the 1000 ms window), that f_100dbfe0
                                               adds into a sample at 0x100dbffa, and that
                                               vendor/xi-on-anything host/frame.c:293 documents as
                                               "the milliseconds since its last frame"
   - no arguments, cdecl, bare `ret` ........ 0x100dc048 ret with no pop; nothing reads the caller's
                                               stack
   - only eax is an output .................. the two instructions write eax and nothing else, so
                                               edx and the callee-saved registers come back as the
                                               caller left them

   Proof: tools/cow/cowdiff.py 0x100dc040 - PASS on eax, edx, callee-saved, esp, memory writes and
   calls out, with every generated instruction site reached.

   Name: cow_net_clock_ms_since_frame (guess) - named for the field it reads and the instruction that
   writes that field, not for a use nobody has read.
*/
#include "cow.h"

uint32_t cow_net_clock_ms_since_frame(void)
{
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, rd32(COW_ADDR_FRAME_NET_CLOCK_PTR)); /* 0x100dc040 */
    return clock->ms_since_frame; /* 0x100dc045 */
}

/* COW_ADAPTER BEGIN - no arguments and a bare `ret`: rt_return's pop of 0 does the esp += 4 the
   generated body's own `ret` does. The readability gate skips this block. */
void cow_adapter_100dc040(Guest* g)
{
    const uint32_t eax = cow_net_clock_ms_since_frame();
    rt_return(g, eax, 0);
}
/* COW_ADAPTER END */
