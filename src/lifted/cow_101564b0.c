/* f_0x101564b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101564b0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 4u) != 0u) goto L_101564bc;
    g->esp = sp0;
    return cow_tailcall(g, rd32(rd32(self) + 0x14u), rd32(self), self, in_edx);
L_101564bc: ;
    t1 = rd32(self + 0x20u);
    t2 = rd32(self + 0x24u);
    t3 = rd32(self + 0x30u);
    t4 = rd32(self + 0x2cu);
    t5 = rd32(self + 0x28u);
    g->eax = t5;
    g->edx = t4;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x101557c0u), 9, t5, t4, t3, arg1, arg2, arg3, arg4, t2, t1);
    t7 = g->edx;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101564b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101564b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
