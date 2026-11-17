/* f_0x102e8984 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e8984(Guest* g)
{
    uint32_t edx;
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
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x470u) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        t1 = rd32(self + 8u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0xd0u), rd32(rd32(self + 8u)), 1, t1);
        t2 = rd32(self + 8u);
        g->edx = self + 0x474u;
        cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0xa0u), rd32(rd32(self + 8u)), 2, t2, self + 0x474u);
        t3 = g->edx;
        t4 = rd32(self + 0x14u);
        t5 = rd32(self + 8u);
        g->edx = t3;
        cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0xc8u), rd32(rd32(self + 8u)), 3, t5, 7u, t4);
        t6 = g->edx;
        t7 = rd32(self + 8u);
        g->edx = t6;
        cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0xd4u), rd32(rd32(self + 8u)), 2, t7, self + 0x470u);
        t8 = g->edx;
        edx = t8;
    }
    t9 = rd32(self + 0x470u);
    t10 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0xdcu), rd32(rd32(self + 8u)), 2, t10, t9);
    t11 = rd32(self + 8u);
    g->edx = self + 0x28u;
    cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x80u), rd32(rd32(self + 8u)), 2, t11, self + 0x28u);
    t12 = g->edx;
    t13 = rd32(self + 8u);
    cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x84u), rd32(rd32(self + 8u)), 2, t13, self + 0x2cu);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e8984(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e8984(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
