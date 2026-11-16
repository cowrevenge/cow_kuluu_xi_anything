/* f_0x1022b5a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1022b5a0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = (uint16_t)rd32(sp0 + 4u);
    t2 = cow_call_regs(g, COW_IMG(0x1022bda0u), t1, self, in_edx, 1, 1, t1);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1022bf00u), t2, 1, t1);
    t5 = g->edx;
    t6 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, t4);
    wr32(sp0 + 8u, t6);
    g->edx = t5;
    return cow_tailcall(g, COW_IMG(0x1022b5d0u), t4, t6, t5);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b5a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022b5a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
