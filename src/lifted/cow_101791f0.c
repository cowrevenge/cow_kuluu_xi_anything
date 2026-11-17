/* f_0x101791f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101791f0(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t1) + 0xf4u), rd32(t1), 3, t1, 0u, 0u);
    t2 = rd32(self + 0x39454u);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->edx = t2;
    cow_thiscall(g, rd32(rd32(t3) + 0x130u), rd32(t3), 2, t3, t2);
    t4 = g->edx;
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t5) + 0xc8u), rd32(t5), 3, t5, 0x16u, 2u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t6, 0u, rd32(COW_IMG(0x10631f20u)), 0xcu);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t7) + 0x14cu), rd32(t7), 4, t7, 1u, rd32(COW_IMG(0x10639040u)), 0x18u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t8;
    g->edx = rd32(COW_IMG(0x10631f10u));
    t9 = rd32(COW_IMG(0x10631f10u));
    t10 = cow_thiscall(g, rd32(rd32(t8) + 0x154u), rd32(t8), 3, t8, t9, 0u);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, 0x18u, 0u, 0xcu);
    t13 = g->edx;
    g->edx = t13;
    return t12;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101791f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101791f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
