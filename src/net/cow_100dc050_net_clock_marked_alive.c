/* f_100dc050 - hand a caller the clock's "marked alive" flag.

   Reads the clock global and returns one field: the flag f_100dbeb0 raises when it pumps the clock
   and f_100dbe50 clears when the clock is stood up. What reads it and acts on it is not established;
   that these are the only two writers, and that this hands it out, is.

   Evidence
   - the object is the net clock ............ 0x100dc050 loads [0x10492e10]; layout/addresses.h
                                               COW_ADDR_FRAME_NET_CLOCK_PTR
   - the field is +0x54 ..................... mov eax,[eax+0x54] at 0x100dc055. Written by f_100dbeb0
                                               (`mov dword ptr [eax+0x54], 1` at 0x100dbee8, right
                                               before it advances the tick) and by f_100dbe50
                                               (`mov dword ptr [eax+0x54], 0` at 0x100dbe91); no
                                               other code site writes it
   - no arguments, cdecl, bare `ret` ........ 0x100dc058 ret with no pop
   - only eax is an output .................. the two instructions write eax only

   Proof: tools/cow/cowdiff.py 0x100dc050 - PASS on eax, edx, callee-saved, esp, memory writes and
   calls out, with every generated instruction site reached.

   Name: cow_net_clock_marked_alive (guess) - named for what the two writers do to it, which is all
   the reading supports.
*/
#include "cow.h"

uint32_t cow_net_clock_marked_alive(void)
{
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, rd32(COW_ADDR_FRAME_NET_CLOCK_PTR)); /* 0x100dc050 */
    return clock->marked_alive; /* 0x100dc055 */
}

/* COW_ADAPTER BEGIN - no arguments and a bare `ret`. The readability gate skips this block. */
void cow_adapter_100dc050(Guest* g)
{
    const uint32_t eax = cow_net_clock_marked_alive();
    rt_return(g, eax, 0);
}
/* COW_ADAPTER END */
