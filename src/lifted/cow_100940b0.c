/* f_0x100940b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100940b0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 4u, 1, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 8u, t1);
    wr32(sp0 - 0xcu, 0u);
    g->edx = t2;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 8u, 1, 0u);
    t3 = g->edx;
    wr32(sp0 - 0xcu, arg1);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1018bb10u), rd32(COW_IMG(0x1065cb04u)), 1, arg1);
    t5 = g->edx;
    wr32(sp0 - 0xcu, t4);
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x101874f0u), rd32(COW_IMG(0x1065cb04u)), 3, t4, rd32(sp0 - 8u), self);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100940b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100940b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
