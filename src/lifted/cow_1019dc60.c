/* f_0x1019dc60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1019dc60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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

    if (rd8(self + 0x24u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x24u);
        goto L_1019dd03;
    }
    if ((uint32_t)(int16_t)arg1 - 1u > 5u) goto L_1019dd94;
    t1 = rd32(COW_IMG(0x1019dd9cu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1019dc85u: goto L_1019dc85;
    case 0x1019dcb0u: goto L_1019dcb0;
    case 0x1019dcd9u: goto L_1019dcd9;
    case 0x1019dd7cu: goto L_1019dd7c;
    default: rt_fatal(g, COW_IMG(0x1019dc7eu), "switch");
    }
    return;
L_1019dc85: ;
    t9 = rd32(self + 0x40u);
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x10193830u), t9, g->ecx, g->edx, 1, 2, 0xa8u, t9);
    wr8(self + 0x24u, 0u);
    eax = t10;
L_1019dc97: ;
    wr8(rd32(self + 8u) + 0x62u, 1u);
    wr8(rd32(self + 8u) + 0x85u, 1u);
    return;
L_1019dcb0: ;
    if ((int32_t)rd32(self + 0x40u) <= 0)
    {
        eax = rd32(self + 0x40u);
        edx = in_edx;
        goto L_1019dd50;
    }
    eax = rd32(self + 0x40u);
    wr32(self + 0x40u, eax - 1u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x10193830u), eax - 1u, g->ecx, g->edx, 1, 2, 0xa8u, eax - 1u);
    t7 = g->edx;
    t8 = (t6 & 0xffff0000u) | rd16(self + 0x44u);
    eax = t8;
    edx = t7;
    loc_10 = t8;
L_1019dd83: ;
    t20 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t20, g->edx, 0, 2, loc_10, 0u);
    t22 = g->edx;
    cow_thiscall(g, COW_IMG(0x101186a0u), t20, 0);
L_1019dd94: ;
    return;
L_1019dcd9: ;
    if ((int32_t)rd32(self + 0x40u) >= 100)
    {
        eax = rd32(self + 0x40u);
        ecx = self;
        edx = in_edx;
        goto L_1019dd73;
    }
    eax = rd32(self + 0x40u);
    wr32(self + 0x40u, eax + 1u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10193830u), eax + 1u, g->ecx, g->edx, 1, 2, 0xa8u, eax + 1u);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = (t3 & 0xffff0000u) | rd16(self + 0x44u);
    eax = t2;
    edx = t4;
    loc_10 = t5;
    goto L_1019dd83;
L_1019dd03: ;
    if (rd8(self + 0x2cu) == 0u) goto L_1019dd94;
    if ((uint32_t)(int16_t)arg1 - 1u > 5u) goto L_1019dd94;
    t11 = rd32(COW_IMG(0x1019ddb4u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t11 - RD)
    {
    case 0x1019dd20u: goto L_1019dd20;
    case 0x1019dd37u: goto L_1019dd37;
    case 0x1019dd59u: goto L_1019dd59;
    case 0x1019dd7cu: goto L_1019dd7c;
    default: rt_fatal(g, COW_IMG(0x1019dd19u), "switch");
    }
    return;
L_1019dd20: ;
    t23 = rd32(self + 0x40u);
    g->esp = sp0 - 8u;
    t24 = cow_call_regs(g, COW_IMG(0x10193830u), t23, g->ecx, g->edx, 1, 2, 0xabu, t23);
    wr8(self + 0x2cu, 0u);
    eax = t24;
    goto L_1019dc97;
L_1019dd37: ;
    if ((int32_t)rd32(self + 0x40u) <= 0)
    {
        eax = rd32(self + 0x40u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x40u);
        wr32(self + 0x40u, eax - 1u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t17 = cow_call_regs(g, COW_IMG(0x10193830u), eax - 1u, g->ecx, g->edx, 1, 2, 0xabu, eax - 1u);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    }
L_1019dd50: ;
    t19 = (eax & 0xffff0000u) | rd16(self + 0x44u);
    eax = t19;
    loc_10 = t19;
    goto L_1019dd83;
L_1019dd59: ;
    if ((int32_t)rd32(self + 0x40u) >= 5)
    {
        eax = rd32(self + 0x40u);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x40u);
        wr32(self + 0x40u, eax + 1u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t13 = cow_call_regs(g, COW_IMG(0x10193830u), eax + 1u, g->ecx, g->edx, 1, 2, 0xabu, eax + 1u);
        t14 = g->ecx;
        t15 = g->edx;
        eax = t13;
        ecx = t14;
        edx = t15;
    }
L_1019dd73: ;
    t16 = (ecx & 0xffff0000u) | rd16(self + 0x44u);
    loc_10 = t16;
    goto L_1019dd83;
L_1019dd7c: ;
    t12 = (in_edx & 0xffff0000u) | rd16(self + 0x44u);
    eax = (uint32_t)(int16_t)arg1 - 1u;
    edx = t12;
    loc_10 = t12;
    goto L_1019dd83;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019dc60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019dc60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
