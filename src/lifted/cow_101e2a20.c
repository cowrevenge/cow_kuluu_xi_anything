/* f_0x101e2a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e2a20(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = rd32(rd32(COW_IMG(0x106634bcu)) + 8u);
    t2 = rd32(COW_IMG(0x106634bcu));
    wr32(sp0 + 4u, t1);
    return cow_tailcall(g, COW_IMG(0x1015e530u), t2, COW_IMG(0x10621838u), in_edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e2a20(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
