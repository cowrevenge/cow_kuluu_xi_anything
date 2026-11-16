/* f_0x10161c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10161c20(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0x18u);
    wr32(self + 0x5cu, 0u);
    g->eax = t1;
    g->esp = sp0 - 4u;
    t2 = cow_fastcall(g, COW_IMG(0x1018ebc0u), rd32(t1 + 0x64044u), in_edx, 0);
    t3 = g->edx;
    t4 = cow_fastcall(g, COW_IMG(0x101295d0u), rd32(self + 0x18u), t3, 4, 8u, 0u, 0u, 0u);
    t5 = g->edx;
    t6 = rd32(self + 0x18u);
    wr32(self + 0x5cu, t4);
    g->edx = t5;
    t7 = cow_call_regs(g, COW_IMG(0x1018ebf0u), t4, rd32(t6 + 0x64044u), g->edx, 1, 0);
    t8 = g->edx;
    g->esp = sp0;
    g->edx = t8;
    return cow_tailcall(g, COW_IMG(0x10162d60u), t7, self, t8);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10161c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10161c20(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
