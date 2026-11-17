/* f_0x100c4c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100c4c20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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

    g->eax = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, rd32(t1 + 0x1bcu), self, 0);
    g->edx = rd32(self);
    t3 = rd32(self);
    t4 = cow_thiscall(g, rd32(t3 + 0x1c0u), self, 0);
    t5 = g->edx;
    if (rd32(self + 0x5c4u) == 0u)
    {
        eax = rd32(self + 0x5c4u);
        edx = t5;
        loc_4 = t2;
        goto L_100c4cd9;
    }
    edx = t5;
    ebx = t4;
    loc_4 = t2;
    edi = self + 0x5c8u;
    eax = 0u;
    ecx = 0x5bu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t6 = rd32(self + 0x5c4u);
    t7 = rd32(rd32(self + 0x5c4u) + 0x30u);
    wr16(self + 0x69cu, 0u);
    wr32(self + 0x5e0u, t7);
    g->eax = t6;
    g->esp = sp0 - 0x14u;
    t8 = cow_thiscall(g, COW_IMG(0x100279b0u), self + 0x608u, 0);
    t9 = rd32(ebx + 8u);
    g->edx = t9;
    cow_thiscall(g, COW_IMG(0x10027c20u), self + 0x608u, 1, t9);
    t10 = g->edx;
    t11 = rd32(ebx + 4u);
    g->eax = t11;
    g->edx = t10;
    t12 = cow_thiscall(g, COW_IMG(0x10027bd0u), self + 0x608u, 1, t11);
    t13 = g->edx;
    t14 = cow_thiscall(g, COW_IMG(0x10027b80u), self + 0x608u, 1, rd32(ebx));
    g->edx = loc_4;
    cow_thiscall(g, COW_IMG(0x10027cf0u), self + 0x608u, 1, loc_4);
    t15 = g->edx;
    if (rd32(self + 0x774u) != 0u)
    {
        eax = rd32(self + 0x774u);
        edx = t15;
        goto L_100c4cd2;
    }
    edx = t15;
    t16 = rd32(self + 0x770u);
    g->eax = t16;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, COW_IMG(0x101844c0u), rd32(COW_IMG(0x10631f24u)), 2, self + 0x5c8u, t16);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_100c4cd2: ;
    wr32(self + 0x774u, eax - 1u);
    eax = eax - 1u;
L_100c4cd9: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c4c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c4c20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
