/* f_0x102ee716 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102ee716(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    t1 = rd32(rd32(in_ebx + 0x14u) + 4u);
    if (rd32(rd32(in_ebx + 0x14u) + 4u) != 0u)
    {
        ecx = self;
        edx = in_edx;
        esi = rd32(rd32(in_ebx + 0x14u));
        edi = rd32(in_ebx + 0x14u);
        loc_8 = t1;
        goto L_102ee742;
    }
    eax = t1;
    edi = rd32(in_ebx + 0x14u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t2 = cow_thiscall(g, rd32(edi + 0xcu), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        goto L_102ee93b;
    }
    edx = t3;
    t4 = rd32(edi + 4u);
    ecx = in_ebx;
    esi = rd32(edi);
    loc_8 = t4;
L_102ee742: ;
    t5 = rd8(esi) << 8u;
    if (loc_8 != 1u)
    {
        esi = esi + 1u;
        loc_8 = loc_8 - 1u;
        loc_c = t5;
        goto L_102ee768;
    }
    eax = t5;
    loc_c = t5;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t6 = cow_thiscall(g, rd32(edi + 0xcu), ecx, 0);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        goto L_102ee93b;
    }
    edx = t7;
    t8 = rd32(edi + 4u);
    ecx = in_ebx;
    esi = rd32(edi);
    loc_8 = t8;
L_102ee768: ;
    t9 = loc_c + rd8(esi);
    eax = rd8(esi);
    esi = esi + 1u;
    loc_8 = loc_8 - 1u;
    loc_c = t9 - 2u;
L_102ee923: ;
    if ((int32_t)loc_c > 0) goto L_102ee77b;
    wr32(edi + 4u, loc_8);
    wr32(edi, esi);
    eax = (loc_8 & 0xffffff00u) | 1u;
L_102ee937: ;
    return eax;
L_102ee77b: ;
    if (loc_8 != 0u) goto L_102ee796;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t10 = cow_thiscall(g, rd32(edi + 0xcu), ecx, 0);
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        goto L_102ee93b;
    }
    t11 = rd32(edi + 4u);
    esi = rd32(edi);
    loc_8 = t11;
L_102ee796: ;
    t12 = rd8(esi);
    wr32(rd32(in_ebx) + 0x14u, 0x50u);
    t13 = rd32(in_ebx);
    wr32(t13 + 0x18u, t12 & 0xfu);
    t14 = rd32(in_ebx);
    wr32(t14 + 0x1cu, (uint32_t)((int32_t)t12 >> 4u));
    g->edx = t13;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, rd32(rd32(in_ebx) + 4u), t14, 0);
    t15 = g->edx;
    if ((int32_t)(t12 & 0xfu) < 4)
    {
        eax = t12 & 0xfu;
        ecx = 1u;
        edx = t15;
        esi = esi + 1u;
        loc_8 = loc_8 - 1u;
        loc_18 = (uint32_t)((int32_t)t12 >> 4u);
    }
    else
    {
        eax = t12 & 0xfu;
        edx = t15;
        esi = esi + 1u;
        loc_8 = loc_8 - 1u;
        loc_14 = t12 & 0xfu;
        loc_18 = (uint32_t)((int32_t)t12 >> 4u);
        wr32(rd32(in_ebx) + 0x14u, 0x1eu);
        t16 = rd32(in_ebx);
        wr32(t16 + 0x18u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, rd32(rd32(in_ebx)), t16, 0);
        t17 = g->edx;
        eax = loc_14;
        ecx = in_ebx;
        edx = t17;
    }
    t18 = eax * 4u + in_ebx + 0x90u;
    if (rd32(eax * 4u + in_ebx + 0x90u) != 0u)
    {
        eax = t18;
    }
    else
    {
        eax = t18;
        loc_14 = t18;
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t19 = cow_call_regs(g, COW_IMG(0x102f692au), g->eax, g->ecx, edx, 1, 1, in_ebx);
        t20 = g->edx;
        wr32(loc_14, t19);
        eax = loc_14;
        ecx = loc_14;
        edx = t20;
    }
    loc_14 = COW_IMG(0x10348738u);
    loc_1c = rd32(eax);
L_102ee810: ;
    if (loc_18 == 0u) goto L_102ee85f;
    if (loc_8 != 0u) goto L_102ee831;
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t21 = cow_thiscall(g, rd32(edi + 0xcu), ecx, 0);
    t22 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        eax = t21;
        goto L_102ee93b;
    }
    edx = t22;
    t23 = rd32(edi + 4u);
    ecx = in_ebx;
    esi = rd32(edi);
    loc_8 = t23;
L_102ee831: ;
    t24 = rd8(esi) << 8u;
    if (loc_8 != 1u)
    {
        esi = esi + 1u;
        loc_8 = loc_8 - 1u;
        loc_10 = t24;
        goto L_102ee857;
    }
    eax = t24;
    loc_10 = t24;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t25 = cow_thiscall(g, rd32(edi + 0xcu), ecx, 0);
    t26 = g->edx;
    if ((uint8_t)t25 == 0u)
    {
        eax = t25;
        goto L_102ee93b;
    }
    edx = t26;
    t27 = rd32(edi + 4u);
    esi = rd32(edi);
    loc_8 = t27;
L_102ee857: ;
    t28 = loc_10 + rd8(esi);
    loc_10 = t28;
L_102ee87f: ;
    wr16(loc_1c + rd32(loc_14) * 2u, (uint16_t)loc_10);
    if ((int32_t)(loc_14 + 4u) < (int32_t)COW_IMG(0x10348838u))
    {
        ecx = loc_1c;
        edx = (edx & 0xffff0000u) | (uint16_t)loc_10;
        esi = esi + 1u;
        loc_8 = loc_8 - 1u;
        loc_14 = loc_14 + 4u;
        goto L_102ee810;
    }
    ecx = loc_1c;
    edx = (edx & 0xffff0000u) | (uint16_t)loc_10;
    esi = esi + 1u;
    loc_8 = loc_8 - 1u;
    if ((int32_t)rd32(rd32(in_ebx) + 0x68u) < 2)
    {
        eax = rd32(in_ebx);
    }
    else
    {
        loc_14 = ecx + 4u;
        ecx = ecx + 4u;
        loc_10 = 8u;
L_102ee8be: ;
        t32 = rd16(ecx - 4u);
        t33 = rd32(in_ebx);
        wr32(t33 + 0x18u, t32);
        t34 = rd16(ecx - 2u);
        wr32(t33 + 0x1cu, t34);
        wr32(t33 + 0x20u, rd16(ecx));
        t35 = rd16(ecx + 2u);
        wr32(t33 + 0x24u, t35);
        t36 = rd16(ecx + 4u);
        wr32(t33 + 0x28u, t36);
        t37 = rd16(ecx + 6u);
        wr32(t33 + 0x2cu, t37);
        t38 = rd16(ecx + 8u);
        wr32(t33 + 0x30u, t38);
        t39 = rd16(ecx + 0xau);
        wr32(t33 + 0x34u, t39);
        wr32(rd32(in_ebx) + 0x14u, 0x5cu);
        g->eax = rd32(in_ebx);
        g->edx = t38;
        t40 = rd32(in_ebx);
        g->esp = sp0 - 0x2cu;
        t41 = cow_thiscall(g, rd32(t40 + 4u), t39, 0);
        t42 = g->edx;
        if (loc_10 != 1u)
        {
            loc_14 = loc_14 + 0x10u;
            loc_10 = loc_10 - 1u;
            goto L_102ee8bb;
        }
        eax = t41;
        ecx = 2u;
        edx = t42;
    }
    if (loc_18 == 0u)
    {
        loc_c = loc_c - 0x41u;
    }
    else
    {
        loc_c = loc_c - 0x41u;
        loc_c = loc_c - 0x40u;
    }
    goto L_102ee923;
L_102ee85f: ;
    if (loc_8 != 0u) goto L_102ee879;
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t29 = cow_thiscall(g, rd32(edi + 0xcu), ecx, 0);
    t30 = g->edx;
    if ((uint8_t)t29 == 0u)
    {
        eax = t29;
        goto L_102ee93b;
    }
    edx = t30;
    t31 = rd32(edi + 4u);
    esi = rd32(edi);
    loc_8 = t31;
L_102ee879: ;
    loc_10 = rd8(esi);
    goto L_102ee87f;
L_102ee8bb: ;
    ecx = loc_14;
    goto L_102ee8be;
L_102ee93b: ;
    eax = eax & 0xffffff00u;
    goto L_102ee937;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ee716(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ee716(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
