/* f_0x101a68c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101a68c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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
    uint32_t t19;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 1u > 0x10u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_101a699b;
    }
    t1 = rd32(COW_IMG(0x101a69a0u) + rd8(COW_IMG(0x101a69bcu) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x101a68e1u: goto L_101a68e1;
    case 0x101a692bu: goto L_101a692b;
    case 0x101a694eu: goto L_101a694e;
    case 0x101a6962u: goto L_101a6962;
    case 0x101a697bu: goto L_101a697b;
    case 0x101a698du: goto L_101a698d;
    case 0x101a699bu: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_101a699b;
    default: rt_fatal(g, COW_IMG(0x101a68dau), "switch");
    }
    return 0;
L_101a68e1: ;
    if (rd32(self + 0x20u) != 0u)
    {
        eax = rd32(self + 0x20u);
        goto L_101a691a;
    }
    if ((uint32_t)(int16_t)arg2 == 0x15u)
    {
        eax = (uint32_t)(int16_t)arg2;
        goto L_101a6982;
    }
    if ((uint32_t)(int16_t)arg2 == 0x16u)
    {
        eax = (uint32_t)(int16_t)arg2;
        goto L_101a6994;
    }
    t11 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x1cu, t11);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037aaf8u), 1u, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101a691a: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t18 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 1u);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_101a692b: ;
    if (rd32(self + 0x20u) != 0u)
    {
        eax = rd32(self + 0x20u);
        goto L_101a6955;
    }
    eax = rd32(self + 0x20u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x101a27e0u), rd32(self + 0x14u), 0);
    t6 = rd32(self + 8u);
    g->edx = t6;
    t7 = cow_call_regs(g, COW_IMG(0x1015e790u), t5, COW_IMG(0x10621838u), g->edx, 0, 2, t6, 1u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_101a694e: ;
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        edx = in_edx;
        goto L_101a699b;
    }
    eax = rd32(self + 0x20u);
L_101a6955: ;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x101a6750u), eax, self, in_edx, 0, 1, 1u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_101a6962: ;
    t2 = (uint32_t)(int16_t)arg2 - 1u;
    g->eax = (uint32_t)(int16_t)arg2;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x101a6510u), self, 1, t2);
    t4 = g->edx;
    wr32(self + 0x68u, t2);
    g->edx = t4;
    return t3;
L_101a697b: ;
    if (rd32(self + 0x20u) != 0u)
    {
        eax = rd32(self + 0x20u);
        edx = in_edx;
        goto L_101a699b;
    }
    eax = rd32(self + 0x20u);
L_101a6982: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t16 = cow_call_regs(g, COW_IMG(0x101a69f0u), eax, self, g->edx, 1, 0);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_101a698d: ;
    if (rd32(self + 0x20u) != 0u)
    {
        eax = rd32(self + 0x20u);
        edx = in_edx;
        goto L_101a699b;
    }
    eax = rd32(self + 0x20u);
L_101a6994: ;
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x101a69d0u), eax, self, in_edx, 1, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
L_101a699b: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a68c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a68c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
