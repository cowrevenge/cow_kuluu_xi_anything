/* f_0x10135020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10135020(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e2cu)), 2, 0u, 1u);
    t1 = g->edx;
    g->edx = t1;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e30u)), 2, 0u, 1u);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e34u)), 2, 0u, 1u);
    t3 = g->edx;
    g->edx = t3;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e3cu)), 2, 0u, 1u);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e40u)), 2, 0u, 1u);
    t5 = g->edx;
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e44u)), 2, 0u, 1u);
    t6 = g->edx;
    g->edx = t6;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e48u)), 2, 0u, 1u);
    t7 = g->edx;
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e4cu)), 2, 0u, 1u);
    t8 = g->edx;
    g->edx = t8;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e50u)), 2, 0u, 1u);
    t9 = g->edx;
    g->edx = t9;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e54u)), 2, 0u, 1u);
    t10 = g->edx;
    g->edx = t10;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e58u)), 2, 0u, 1u);
    t11 = g->edx;
    g->edx = t11;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e5cu)), 2, 0u, 1u);
    t12 = g->edx;
    g->edx = t12;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e60u)), 2, 0u, 1u);
    t13 = g->edx;
    g->edx = t13;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e64u)), 2, 0u, 1u);
    t14 = g->edx;
    g->edx = t14;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e68u)), 2, 0u, 1u);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e6cu)), 2, 0u, 1u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10135020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10135020(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
