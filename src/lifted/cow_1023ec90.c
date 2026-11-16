/* f_0x1023ec90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1023ec90(Guest* g)
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x2cu) != 0u)
    {
        eax = rd32(self + 0x2cu);
        edx = in_edx;
        goto L_1023ee82;
    }
    if (rd32(self + 0x20u) == 1u)
    {
        eax = rd32(self + 0x20u);
        edx = 1u;
        goto L_1023ee82;
    }
    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au)
    {
        eax = (uint32_t)(int16_t)arg1;
        edx = 1u;
        goto L_1023ee82;
    }
    t1 = rd32(COW_IMG(0x1023ee88u) + rd8(COW_IMG(0x1023eeb4u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x1023ecccu: goto L_1023eccc;
    case 0x1023ecf8u: goto L_1023ecf8;
    case 0x1023ed2eu: goto L_1023ed2e;
    case 0x1023ed3eu: goto L_1023ed3e;
    case 0x1023ed4du: goto L_1023ed4d;
    case 0x1023eda5u: goto L_1023eda5;
    case 0x1023edd1u: goto L_1023edd1;
    case 0x1023ee06u: goto L_1023ee06;
    case 0x1023ee58u: goto L_1023ee58;
    case 0x1023ee6du: eax = rd8(COW_IMG(0x1023eeb4u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1023ee6d;
    case 0x1023ee82u: eax = rd8(COW_IMG(0x1023eeb4u) + (uint32_t)(int16_t)arg1 - 1u); edx = 1u; goto L_1023ee82;
    default: rt_fatal(g, COW_IMG(0x1023ecc5u), "switch");
    }
    return 0;
L_1023eccc: ;
    if (rd32(self + 0x24u) == 0u)
    {
        eax = rd32(self + 0x24u);
        edx = 1u;
        goto L_1023ee82;
    }
    eax = rd32(self + 0x24u);
    eax = eax - 1u;
L_1023ecd8: ;
    wr32(self + 0x24u, eax);
    if ((int32_t)eax >= 0) goto L_1023edc3;
    wr32(self + 0x24u, 0u);
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t46 = cow_thiscall(g, COW_IMG(0x1023ec00u), self, 0);
    t47 = g->ecx;
    t48 = g->edx;
    g->edx = t48;
    t49 = cow_thiscall(g, COW_IMG(0x10037b30u), t47, 0);
    t50 = g->edx;
    g->edx = t50;
    return t49;
L_1023ecf8: ;
    if (rd32(self + 0x28u) != 0u)
    {
        eax = rd32(self + 0x28u);
        goto L_1023ed1c;
    }
    if (rd32(self + 0x24u) == 0u)
    {
        eax = rd32(self + 0x24u);
        edx = 1u;
        goto L_1023ee82;
    }
    eax = rd32(self + 0x24u);
    wr32(self + 0x24u, eax - 1u);
    g->eax = eax - 1u;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t36 = cow_thiscall(g, COW_IMG(0x1023ec00u), self, 0);
    t37 = g->ecx;
    t38 = g->edx;
    g->edx = t38;
    t39 = cow_thiscall(g, COW_IMG(0x10037b30u), t37, 0);
    t40 = g->edx;
    g->edx = t40;
    return t39;
L_1023ed1c: ;
    wr32(self + 0x28u, eax - 1u);
    g->eax = eax - 1u;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t41 = cow_thiscall(g, COW_IMG(0x1023ec00u), self, 0);
    t42 = g->ecx;
    t43 = g->edx;
    g->edx = t43;
    t44 = cow_thiscall(g, COW_IMG(0x10037b30u), t42, 0);
    t45 = g->edx;
    g->edx = t45;
    return t44;
L_1023ed2e: ;
    if (rd32(self + 0x24u) == 0u)
    {
        eax = rd32(self + 0x24u);
        edx = 1u;
        goto L_1023ee82;
    }
    eax = rd32(self + 0x24u);
    eax = eax - 3u;
    goto L_1023ecd8;
L_1023ed3e: ;
    if (rd32(self + 0x24u) == 0x3du)
    {
        eax = rd32(self + 0x24u);
        edx = 1u;
        goto L_1023ee82;
    }
    eax = rd32(self + 0x24u);
    eax = eax + 1u;
L_1023edb4: ;
    wr32(self + 0x24u, eax);
    if ((int32_t)eax > 61)
    {
        wr32(self + 0x24u, 0x3du);
    }
L_1023edc3: ;
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t51 = cow_thiscall(g, COW_IMG(0x1023ec00u), self, 0);
    t52 = g->ecx;
    t53 = g->edx;
    g->edx = t53;
    t54 = cow_thiscall(g, COW_IMG(0x10037b30u), t52, 0);
    t55 = g->edx;
    g->edx = t55;
    return t54;
L_1023ed4d: ;
    if (rd32(self + 0x28u) != 2u)
    {
        eax = rd32(self + 0x28u);
        goto L_1023ed93;
    }
    if (rd32(self + 0x24u) == 0x3du) goto L_1023ed6f;
    eax = rd32(self + 0x24u);
    wr32(self + 0x24u, eax + 1u);
    g->eax = eax + 1u;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t24 = cow_thiscall(g, COW_IMG(0x1023ec00u), self, 0);
    t25 = g->ecx;
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x10037b30u), t25, 0);
    t28 = g->edx;
    g->edx = t28;
    return t27;
L_1023ed6f: ;
    if (rd32(self + 0x30u) == 0u)
    {
        eax = rd32(self + 0x30u);
        edx = 1u;
        goto L_1023ee82;
    }
    eax = rd32(self + 0x30u);
    wr32(self + 0x28u, 3u);
    wr32(self + 0x20u, 1u);
    wr32(self + 0x2cu, 1u);
    wr32(self + 0x38u, 1u);
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t29 = cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t30 = g->edx;
    g->edx = t30;
    return t29;
L_1023ed93: ;
    wr32(self + 0x28u, eax + 1u);
    g->eax = eax + 1u;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t31 = cow_thiscall(g, COW_IMG(0x1023ec00u), self, 0);
    t32 = g->ecx;
    t33 = g->edx;
    g->edx = t33;
    t34 = cow_thiscall(g, COW_IMG(0x10037b30u), t32, 0);
    t35 = g->edx;
    g->edx = t35;
    return t34;
L_1023eda5: ;
    if (rd32(self + 0x24u) == 0x3du)
    {
        eax = rd32(self + 0x24u);
        edx = 1u;
        goto L_1023ee82;
    }
    eax = rd32(self + 0x24u);
    eax = eax + 3u;
    goto L_1023edb4;
L_1023edd1: ;
    if ((int32_t)rd32(rd32(self + 0xc40u) + 0x14u) >= 0)
    {
        eax = rd32(rd32(self + 0xc40u) + 0x14u);
        edx = rd32(self + 0xc40u);
        if ((int32_t)eax > 61)
        {
            eax = 0x3du;
        }
    }
    else
    {
        edx = rd32(self + 0xc40u);
        eax = 0u;
    }
    if (rd32(self + 0x24u) == eax) goto L_1023ee82;
    wr32(self + 0x24u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, COW_IMG(0x1023ec00u), self, 0);
    t20 = g->ecx;
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x10037b30u), t20, 0);
    t23 = g->edx;
    g->edx = t23;
    return t22;
L_1023ee06: ;
    if ((uint32_t)(int16_t)arg2 - 1u == rd32(self + 0x28u))
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = 1u;
        goto L_1023ee82;
    }
    if ((uint32_t)(int16_t)arg2 - 1u != 3u) goto L_1023ee4c;
    if (rd32(self + 0x30u) == 0u)
    {
        eax = rd32(self + 0x30u);
        goto L_1023ee4f;
    }
    t8 = rd32(self + 8u);
    wr32(self + 0x28u, 3u);
    wr32(self + 0x20u, 1u);
    wr32(self + 0x2cu, 1u);
    wr32(self + 0x38u, 1u);
    wr16(t8 + 0x4cu, 3u);
    t9 = rd16(rd32(self + 8u) + 0x4cu);
    g->eax = t8;
    g->edx = t9;
    t10 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, COW_IMG(0x10118170u), t10, 1, t9);
    t12 = g->ecx;
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x10037b30u), t12, 0);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_1023ee4c: ;
    t16 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x28u, t16);
    eax = t16;
L_1023ee4f: ;
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_1023ee58: ;
    t5 = rd32(self + 8u);
    wr32(self + 0x20u, 1u);
    wr32(self + 0x2cu, 1u);
    wr8(t5 + 0x5du, 1u);
    g->eax = t5;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_1023ee6d: ;
    wr32(self + 0x20u, 1u);
    wr32(self + 0x2cu, 2u);
    t2 = rd32(self + 8u);
    wr8(t2 + 0x5du, 1u);
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10037bf0u), t2, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_1023ee82: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023ec90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023ec90(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
