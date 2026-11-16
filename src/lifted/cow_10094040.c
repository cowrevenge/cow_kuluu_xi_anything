/* f_0x10094040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10094040(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 4u, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 8u, 0);
    t3 = g->edx;
    wr32(sp0 - 0xcu, arg2 * 0x3cu);
    g->edx = t3;
    cow_thiscall(g, COW_IMG(0x1018bbe0u), sp0 - 4u, 1, arg2 * 0x3cu);
    t4 = g->edx;
    wr32(sp0 - 0xcu, arg3 * 0x3cu);
    cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 8u, 1, arg3 * 0x3cu);
    t5 = rd32(sp0 - 8u);
    wr32(sp0 - 0xcu, t5);
    t6 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t6);
    wr32(sp0 - 0x14u, arg1);
    g->edx = t5;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x1018bb10u), rd32(COW_IMG(0x1065cb04u)), 1, arg1);
    t8 = g->edx;
    wr32(sp0 - 0x14u, t7);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101874f0u), rd32(COW_IMG(0x1065cb04u)), 3, t7, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10094040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10094040(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
