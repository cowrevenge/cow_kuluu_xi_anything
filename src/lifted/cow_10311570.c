/* f_0x10311570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10311570(Guest* g)
{
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_cf = g->cf;

    t1 = rd8(in_eax);
    wr8(COW_IMG(0x10456a2cu) + self, (uint8_t)((uint8_t)(in_eax >> 8u) + rd8(COW_IMG(0x10456a2cu) + self)));
    return cow_tailcall(g, rd32(((in_eax & 0xffffff00u) | (uint8_t)(in_cf + t1 + (uint8_t)in_eax)) + 0x12d0u), (in_eax & 0xffffff00u) | (uint8_t)(in_cf + t1 + (uint8_t)in_eax), self, in_edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10311570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10311570(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
