/* f_0x1019b200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1019b200(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
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
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self + 0x20u) != 0u) goto L_1019b3b9;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x20u);
    if (rd8(self + 0x21u) != 0u) goto L_1019b3b5;
    if (rd8(self + 0x22u) != 0u) goto L_1019b3b5;
    if ((uint16_t)arg1 != 5u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_1019b396;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 0xeu)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_1019b52b;
    }
    t1 = rd32(COW_IMG(0x1019b534u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1019b249u: goto L_1019b249;
    case 0x1019b252u: goto L_1019b252;
    case 0x1019b263u: goto L_1019b263;
    case 0x1019b275u: goto L_1019b275;
    case 0x1019b27eu: goto L_1019b27e;
    case 0x1019b28fu: goto L_1019b28f;
    case 0x1019b2a1u: goto L_1019b2a1;
    case 0x1019b2b3u: goto L_1019b2b3;
    case 0x1019b2d9u: goto L_1019b2d9;
    case 0x1019b2f1u: goto L_1019b2f1;
    case 0x1019b309u: goto L_1019b309;
    case 0x1019b344u: goto L_1019b344;
    case 0x1019b358u: goto L_1019b358;
    case 0x1019b36du: goto L_1019b36d;
    case 0x1019b381u: goto L_1019b381;
    default: rt_fatal(g, COW_IMG(0x1019b242u), "switch");
    }
    return 0;
L_1019b249: ;
    t32 = rd32(self + 0x30u);
    wr8(self + 0x20u, 1u);
    eax = t32;
L_1019b2ba: ;
    t33 = rd32(self + 8u);
    wr32(self + 0x24u, eax);
    wr8(t33 + 0x62u, 0u);
    t34 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t35 = rd32(self + 8u);
    wr32(self + 0x40u, t34);
    wr8(t35 + 0x85u, 0u);
    g->ebx = in_ebx;
    g->edx = t34;
    return t35;
L_1019b252: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t30 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x3fu, 0u);
    t31 = g->edx;
    g->ebx = in_ebx;
    g->edx = t31;
    return t30;
L_1019b263: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t28 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x3fu, 1u);
    t29 = g->edx;
    g->ebx = in_ebx;
    g->edx = t29;
    return t28;
L_1019b275: ;
    t27 = rd32(self + 0x28u);
    wr8(self + 0x21u, 1u);
    eax = t27;
    goto L_1019b2ba;
L_1019b27e: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t25 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x42u, 0u);
    t26 = g->edx;
    g->ebx = in_ebx;
    g->edx = t26;
    return t25;
L_1019b28f: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x42u, 1u);
    t24 = g->edx;
    g->ebx = in_ebx;
    g->edx = t24;
    return t23;
L_1019b2a1: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t21 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x42u, 2u);
    t22 = g->edx;
    g->ebx = in_ebx;
    g->edx = t22;
    return t21;
L_1019b2b3: ;
    t20 = rd32(self + 0x2cu);
    wr8(self + 0x22u, 1u);
    eax = t20;
    goto L_1019b2ba;
L_1019b2d9: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t18 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a730u), 1u, 0u);
    t19 = g->edx;
    g->ebx = in_ebx;
    g->edx = t19;
    return t18;
L_1019b2f1: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a71cu), 1u, 0u);
    t17 = g->edx;
    g->ebx = in_ebx;
    g->edx = t17;
    return t16;
L_1019b309: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, 0x8fu);
    t11 = g->ecx;
    t12 = g->edx;
    g->ebx = 0u;
    g->edx = t12;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x106626d8u), t10, 0xbu, 0x8fu, in_edi);
    t13 = g->edx;
    g->ebx = 0u;
    g->edx = t13;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10196f30u), 0u, COW_IMG(0x106626d8u), 0u, 0u, 1u, 0u);
    t15 = g->edx;
    g->ebx = in_ebx;
    g->edx = t15;
    return t14;
L_1019b344: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x9du, 0u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_1019b358: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x9du, 1u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_1019b36d: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x9eu, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_1019b381: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x9eu, 1u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_1019b396: ;
    if ((uint16_t)eax != 6u)
    {
        edx = in_edx;
        goto L_1019b52b;
    }
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t36 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a6f4u));
    t37 = g->edx;
    g->ebx = in_ebx;
    g->edx = t37;
    return t36;
L_1019b3b5: ;
    if ((uint8_t)eax == 0u) goto L_1019b42a;
L_1019b3b9: ;
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_1019b52b;
    }
    t56 = rd32(COW_IMG(0x1019b570u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t56 - RD)
    {
    case 0x1019b3cfu: goto L_1019b3cf;
    case 0x1019b3dfu: goto L_1019b3df;
    case 0x1019b404u: goto L_1019b404;
    case 0x1019b514u: goto L_1019b514;
    default: rt_fatal(g, COW_IMG(0x1019b3c8u), "switch");
    }
    return 0;
L_1019b3cf: ;
    t72 = rd32(self + 0x24u);
    g->esp = sp0 - 0xcu;
    t73 = cow_call_regs(g, COW_IMG(0x10193830u), t72, g->ecx, g->edx, 1, 2, 0x3eu, t72);
    wr8(self + 0x20u, 0u);
    eax = t73;
L_1019b453: ;
    wr8(rd32(self + 8u) + 0x62u, 1u);
    t74 = rd32(self + 8u);
    wr8(t74 + 0x85u, 1u);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t74;
    return (eax & 0xffffff00u) | 1u;
L_1019b3df: ;
    if ((int32_t)rd32(self + 0x24u) <= 0)
    {
        eax = rd32(self + 0x24u);
        edx = in_edx;
        goto L_1019b4ed;
    }
    eax = rd32(self + 0x24u);
    wr32(self + 0x24u, eax - 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t63 = cow_call_regs(g, COW_IMG(0x10193830u), eax - 1u, g->ecx, g->edx, 1, 2, 0x3eu, eax - 1u);
    t64 = g->edx;
    t65 = (t63 & 0xffff0000u) | rd16(self + 0x40u);
    eax = t65;
    edx = t64;
    loc_14 = t65;
L_1019b51a: ;
    t67 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t68 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t67, g->edx, 0, 2, loc_14, 0u);
    t69 = g->edx;
    g->edi = t67;
    g->edx = t69;
    t70 = cow_thiscall(g, COW_IMG(0x101186a0u), t67, 0);
    t71 = g->edx;
    eax = t70;
    edx = t71;
L_1019b52b: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1019b404: ;
    if ((int32_t)rd32(self + 0x24u) >= 25)
    {
        eax = rd32(self + 0x24u);
        ecx = self;
        edx = in_edx;
        goto L_1019b50c;
    }
    eax = rd32(self + 0x24u);
    wr32(self + 0x24u, eax + 1u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t58 = cow_call_regs(g, COW_IMG(0x10193830u), eax + 1u, g->ecx, g->edx, 1, 2, 0x3eu, eax + 1u);
    t59 = g->ecx;
    t60 = g->edx;
    t61 = (t59 & 0xffff0000u) | rd16(self + 0x40u);
    eax = t58;
    edx = t60;
    loc_14 = t61;
    goto L_1019b51a;
L_1019b42a: ;
    if (rd8(self + 0x21u) == 0u) goto L_1019b4ad;
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_1019b52b;
    }
    t38 = rd32(COW_IMG(0x1019b588u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t38 - RD)
    {
    case 0x1019b445u: goto L_1019b445;
    case 0x1019b46du: goto L_1019b46d;
    case 0x1019b48eu: goto L_1019b48e;
    case 0x1019b514u: goto L_1019b514;
    default: rt_fatal(g, COW_IMG(0x1019b43eu), "switch");
    }
    return 0;
L_1019b445: ;
    t46 = rd32(self + 0x24u);
    g->esp = sp0 - 0xcu;
    t47 = cow_call_regs(g, COW_IMG(0x10193830u), t46, g->ecx, g->edx, 1, 2, 0x40u, t46);
    wr8(self + 0x21u, 0u);
    eax = t47;
    goto L_1019b453;
L_1019b46d: ;
    if ((int32_t)rd32(self + 0x24u) <= 0)
    {
        eax = rd32(self + 0x24u);
        edx = in_edx;
        goto L_1019b4ed;
    }
    eax = rd32(self + 0x24u);
    wr32(self + 0x24u, eax - 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t43 = cow_call_regs(g, COW_IMG(0x10193830u), eax - 1u, g->ecx, g->edx, 1, 2, 0x40u, eax - 1u);
    t44 = g->edx;
    t45 = (t43 & 0xffff0000u) | rd16(self + 0x40u);
    eax = t45;
    edx = t44;
    loc_14 = t45;
    goto L_1019b51a;
L_1019b48e: ;
    if ((int32_t)rd32(self + 0x24u) >= 3)
    {
        eax = rd32(self + 0x24u);
        ecx = self;
        edx = in_edx;
        goto L_1019b50c;
    }
    eax = rd32(self + 0x24u);
    wr32(self + 0x24u, eax + 1u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t39 = cow_call_regs(g, COW_IMG(0x10193830u), eax + 1u, g->ecx, g->edx, 1, 2, 0x40u, eax + 1u);
    t40 = g->ecx;
    t41 = g->edx;
    t42 = (t40 & 0xffff0000u) | rd16(self + 0x40u);
    eax = t39;
    edx = t41;
    loc_14 = t42;
    goto L_1019b51a;
L_1019b4ad: ;
    if (rd8(self + 0x22u) == 0u)
    {
        edx = in_edx;
        goto L_1019b52b;
    }
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_1019b52b;
    }
    t48 = rd32(COW_IMG(0x1019b5a0u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t48 - RD)
    {
    case 0x1019b4c4u: goto L_1019b4c4;
    case 0x1019b4d7u: goto L_1019b4d7;
    case 0x1019b4f5u: goto L_1019b4f5;
    case 0x1019b514u: goto L_1019b514;
    default: rt_fatal(g, COW_IMG(0x1019b4bdu), "switch");
    }
    return 0;
L_1019b4c4: ;
    t54 = rd32(self + 0x24u);
    g->esp = sp0 - 0xcu;
    t55 = cow_call_regs(g, COW_IMG(0x10193830u), t54, g->ecx, g->edx, 1, 2, 0x43u, t54);
    wr8(self + 0x22u, 0u);
    eax = t55;
    goto L_1019b453;
L_1019b4d7: ;
    if ((int32_t)rd32(self + 0x24u) <= 0)
    {
        eax = rd32(self + 0x24u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x24u);
        wr32(self + 0x24u, eax - 1u);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t52 = cow_call_regs(g, COW_IMG(0x10193830u), eax - 1u, g->ecx, g->edx, 1, 2, 0x43u, eax - 1u);
        t53 = g->edx;
        eax = t52;
        edx = t53;
    }
L_1019b4ed: ;
    t66 = (eax & 0xffff0000u) | rd16(self + 0x40u);
    eax = t66;
    loc_14 = t66;
    goto L_1019b51a;
L_1019b4f5: ;
    if ((int32_t)rd32(self + 0x24u) >= 5)
    {
        eax = rd32(self + 0x24u);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x24u);
        wr32(self + 0x24u, eax + 1u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t49 = cow_call_regs(g, COW_IMG(0x10193830u), eax + 1u, g->ecx, g->edx, 1, 2, 0x43u, eax + 1u);
        t50 = g->ecx;
        t51 = g->edx;
        eax = t49;
        ecx = t50;
        edx = t51;
    }
L_1019b50c: ;
    t62 = (ecx & 0xffff0000u) | rd16(self + 0x40u);
    loc_14 = t62;
    goto L_1019b51a;
L_1019b514: ;
    t57 = (in_edx & 0xffff0000u) | rd16(self + 0x40u);
    eax = (uint32_t)(int16_t)arg1 - 1u;
    edx = t57;
    loc_14 = t57;
    goto L_1019b51a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019b200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019b200(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
