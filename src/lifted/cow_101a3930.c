/* f_0x101a3930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a3930(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 2u);
    t1 = g->edx;
    t2 = rd32(self + 0x24u);
    wr8(t2 + 0xcu, 0u);
    g->esp = sp0;
    g->edx = t1;
    return cow_tailcall(g, COW_IMG(0x1011a3d0u), t2, rd32(self + 8u), t1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a3930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a3930(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
