/* f_0x1013e880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013e880(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_1013eaf0;
    }
    t1 = rd32(COW_IMG(0x1013eafcu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1013e8b4u: goto L_1013e8b4;
    case 0x1013e944u: goto L_1013e944;
    case 0x1013e954u: goto L_1013e954;
    case 0x1013e982u: goto L_1013e982;
    case 0x1013e9c4u: goto L_1013e9c4;
    case 0x1013e9f1u: goto L_1013e9f1;
    case 0x1013ea57u: goto L_1013ea57;
    case 0x1013eabeu: goto L_1013eabe;
    case 0x1013eaf0u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_1013eaf0;
    default: rt_fatal(g, COW_IMG(0x1013e8adu), "switch");
    }
    return 0;
L_1013e8b4: ;
    wr16(self + 0x15eu, (uint16_t)(arg2 - 1u));
    t41 = (uint16_t)(arg2 - 1u);
    if (rd16(self + t41 * 0x20u + 0x1cu) == 0u)
    {
        eax = arg2 - 1u;
        edx = arg2;
        goto L_1013eaf0;
    }
    ecx = t41;
    edi = t41 << 5u;
    if ((uint16_t)(arg2 - 1u) >= rd16(self + 0x15cu))
    {
        eax = arg2 - 1u;
        edx = arg2;
        goto L_1013eaf0;
    }
    if (rd16(ecx * 0x20u + self + 0x20u) != 0xffffu) goto L_1013e900;
    ecx = ecx * 0x20u + 0x20u;
    g->eax = arg2 - 1u;
    g->edx = arg2;
    g->esp = sp0 - 0x14u;
    t42 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t43 = g->edx;
    g->ebx = in_ebx;
    g->edx = t43;
    return t42;
L_1013e900: ;
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, (uint32_t)(int16_t)arg2);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->ebx = 0u;
    g->edi = edi;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, (uint32_t)(int16_t)arg2, 1u, 1u);
    t44 = self + rd16(self + 0x15eu) * 0x20u + 0x1cu;
    wr32(sp0 - 0x18u, t44);
    t45 = rd32(sp0 - 6u);
    wr32(sp0 - 0x1cu, t45);
    t46 = rd32(sp0 - 4u);
    wr32(sp0 - 0x20u, t46);
    g->eax = t44;
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x1013f340u), rd32(COW_IMG(0x1057821cu)), 3, t46, t45, t44);
    t48 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t48;
    return t47;
L_1013e944: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t39 = cow_thiscall(g, COW_IMG(0x1013f090u), self, 0);
    t40 = g->edx;
    g->ebx = in_ebx;
    g->edx = t40;
    return t39;
L_1013e954: ;
    if (rd16(self + 0x15eu) == 0u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
    }
    else
    {
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t33 = cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
        t34 = g->edx;
        eax = t33;
        edx = t34;
    }
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    g->ebx = 0u;
    g->edx = edx;
    t35 = rd32(self + 8u);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10118db0u), eax, t35, g->edx, 0, 2, 1u, 0u);
    t36 = g->ecx;
    t37 = g->edx;
    t38 = rd32(self + 8u);
    wr8(self + 0x160u, rd8(t38 + 0x4cu));
    g->ebx = in_ebx;
    g->edx = t37;
    return t38;
L_1013e982: ;
    if (rd16(self + 0x15eu) == rd16(self + 0x15cu) - 1u)
    {
        eax = rd16(self + 0x15eu);
        ecx = self;
        edx = rd16(self + 0x15cu) - 1u;
    }
    else
    {
        eax = rd16(self + 0x15eu);
        edx = rd16(self + 0x15cu) - 1u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t26 = cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
        t27 = g->ecx;
        t28 = g->edx;
        eax = t26;
        ecx = t27;
        edx = t28;
    }
    wr32(sp0 - 0x18u, 0u);
    t29 = (ecx & 0xffff0000u) | rd16(self + 0x15cu);
    wr32(sp0 - 0x1cu, t29);
    g->ebx = 0u;
    g->esp = sp0 - 0x14u;
    t30 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, t29, 0u);
    t31 = rd8(rd32(self + 8u) + 0x4cu);
    t32 = rd32(self + 8u);
    wr8(self + 0x160u, (uint8_t)t31);
    g->ebx = in_ebx;
    g->edx = t32;
    return (t30 & 0xffffff00u) | t31;
L_1013e9c4: ;
    if (rd16(self + 0x15eu) == (uint32_t)(int16_t)arg2 - 1u)
    {
        ecx = rd16(self + 0x15eu);
        edx = (uint32_t)(int16_t)arg2 - 1u;
    }
    else
    {
        ecx = rd16(self + 0x15eu);
        g->edx = (uint32_t)(int16_t)arg2 - 1u;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t23 = g->ecx;
        t24 = g->edx;
        ecx = t23;
        edx = t24;
    }
    t25 = rd32(self + 8u);
    wr8(self + 0x160u, rd8(t25 + 0x4cu));
    g->ebx = in_ebx;
    g->edx = edx;
    return t25;
L_1013e9f1: ;
    if (rd16(self + 0x15cu) == 0u)
    {
        edx = in_edx;
        goto L_1013ea30;
    }
    eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(self + 0x15cu);
    if ((int32_t)((uint32_t)(int16_t)arg2 - 1u) < (int32_t)(uint16_t)eax)
    {
        edx = (uint32_t)(int16_t)arg2 - 1u;
        goto L_1013ea30;
    }
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, eax);
    g->ebx = 0u;
    g->edx = (uint32_t)(int16_t)arg2 - 1u;
    g->esp = sp0 - 0x14u;
    t17 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, eax, 0u);
    t18 = g->edx;
    t19 = rd8(rd32(self + 8u) + 0x4cu);
    wr8(self + 0x160u, (uint8_t)t19);
    g->ebx = in_ebx;
    g->edx = (t18 & 0xffffff00u) | t19;
    return t17;
L_1013ea30: ;
    if (rd8(self + 0x160u) == (uint16_t)arg2)
    {
        eax = rd8(self + 0x160u);
    }
    else
    {
        eax = rd8(self + 0x160u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t20 = cow_thiscall(g, COW_IMG(0x10037b30u), arg2, 0);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    t22 = rd8(rd32(self + 8u) + 0x4cu);
    wr8(self + 0x160u, (uint8_t)t22);
    g->ebx = in_ebx;
    g->edx = (edx & 0xffffff00u) | t22;
    return eax;
L_1013ea57: ;
    if ((int16_t)rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u) <= 0)
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u);
        ecx = rd32(COW_IMG(0x104e1d4cu));
        edx = in_edx;
        goto L_1013eaa1;
    }
    eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u);
    ecx = rd32(COW_IMG(0x104e1d4cu));
    if ((int16_t)eax > (int32_t)rd16(self + 0x15cu))
    {
        eax = (uint32_t)(int16_t)eax;
        edx = rd16(self + 0x15cu);
        goto L_1013eaa1;
    }
    eax = (uint32_t)(int16_t)eax;
    edx = rd16(self + 0x15cu);
    if (rd8(ecx + 0x4eu) == 0u) goto L_1013eaf0;
    if (rd8(self + 0x160u) == eax) goto L_1013eaf0;
    ecx = rd8(self + 0x160u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t12 = rd8(rd32(self + 8u) + 0x4cu);
    t13 = rd32(self + 8u);
    wr8(self + 0x160u, (uint8_t)t12);
    g->edx = t13;
    return (t11 & 0xffffff00u) | t12;
L_1013eaa1: ;
    wr8(ecx + 0x4cu, 0u);
    wr32(sp0 - 0x18u, 0u);
    t14 = (ecx & 0xffff0000u) | rd16(self + 0x15cu);
    wr32(sp0 - 0x1cu, t14);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t15 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, t14, 0u);
    t16 = g->edx;
    g->ebx = in_ebx;
    g->edx = t16;
    return t15;
L_1013eabe: ;
    if (rd32(self + 0x164u) == 0u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x18u, 2u);
        g->edx = rd32(COW_IMG(0x105781f8u));
        t2 = rd32(COW_IMG(0x105781f8u));
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x102211b0u), t2 + 0x20u, 1, 2u);
        t3 = g->edx;
        wr32(sp0 - 0x18u, 0u);
        t4 = rd32(rd32(self + 0x164u) + 8u);
        wr32(sp0 - 0x1cu, t4);
        g->eax = rd32(self + 0x164u);
        t5 = rd32(self + 0x164u);
        t6 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t3, 2, t4, 0u);
        t7 = g->ecx;
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_thiscall(g, COW_IMG(0x10037e90u), t7, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
L_1013eaf0: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013e880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013e880(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
