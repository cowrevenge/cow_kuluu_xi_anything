/* f_0x10238d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10238d60(Guest* g)
{
    double d15;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x14u) == 1u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10238e04;
    }
    if ((uint32_t)(int16_t)arg1 - 3u > 3u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_10238e04;
    }
    t1 = rd32(COW_IMG(0x10238e0cu) + (uint32_t)(int16_t)arg1 * 4u - 0xcu);
    switch (t1 - RD)
    {
    case 0x10238d8au: goto L_10238d8a;
    case 0x10238da5u: goto L_10238da5;
    case 0x10238de5u: goto L_10238de5;
    case 0x10238df7u: goto L_10238df7;
    default: rt_fatal(g, COW_IMG(0x10238d83u), "switch");
    }
    return 0;
L_10238d8a: ;
    t16 = rd32(COW_IMG(0x10662da0u));
    g->esp = sp0 - 8u;
    t17 = cow_call_regs(g, COW_IMG(0x101c68a0u), (uint32_t)(int16_t)arg1 - 3u, t16, in_edx, 1, 0);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(self + 0x28u, 1u);
    wr32(self + 0x14u, 1u);
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x10037b90u), t18, 0);
    t21 = g->edx;
    g->edx = t21;
    return t20;
L_10238da5: ;
    t6 = rd32(COW_IMG(0x10662da0u));
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), (uint32_t)(int16_t)arg1 - 3u, t6, in_edx, 1, 0);
    t7 = g->ecx;
    eax = COW_IMG(0x103d3c84u);
    ecx = t7;
L_10238dba: ;
    t8 = rd8(eax);
    wr8(eax + self - COW_IMG(0x103d3c84u) + 0x18u, (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t8;
        goto L_10238dba;
    }
    g->edx = self + 0x18u - COW_IMG(0x103d3c84u);
    t9 = rd32(self + 0x38u);
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x101c5f30u), t9, 1, COW_IMG(0x103d3c84u));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(self + 0x28u, 0xffffffffu);
    wr32(self + 0x14u, 1u);
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10037bf0u), t11, 0);
    t14 = g->edx;
    d15 = cow_take_float(g);
    g->edx = t14;
    fpush(g, d15);
    return t13;
L_10238de5: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 5u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10238df7: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 4u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_10238e04: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10238d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10238d60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
