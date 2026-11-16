/* f_0x101fd1d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fd1d0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = cow_thiscall(g, COW_IMG(0x101ebfd0u), rd32(COW_IMG(0x1066369cu)), 0);
    t2 = g->edx;
    g->edx = t2;
    return cow_tailcall(g, COW_IMG(0x101ec2d0u), t1, rd32(COW_IMG(0x106636a0u)), t2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fd1d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fd1d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
