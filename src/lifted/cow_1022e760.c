/* f_0x1022e760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1022e760(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if (rd32(self + 0x64u) == 0u)
    {
        eax = rd32(self + 0x64u);
        goto L_1022ea24;
    }
    eax = rd32(self + 0x64u);
    if (eax == 1u) goto L_1022e7ad;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_1022ea4b;
    }
    if ((int16_t)rd16(sp0 + 4u) < 5)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u);
        edx = in_edx;
        goto L_1022ea4b;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u);
    if ((int32_t)eax > 6)
    {
        edx = in_edx;
        goto L_1022ea4b;
    }
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10221c60u), self, 0);
    t2 = g->edx;
    t3 = cow_fastcall(g, COW_IMG(0x10221cb0u), self, t2, 0);
    t4 = g->edx;
    wr32(self + 0x64u, 1u);
    g->edx = t4;
    return t3;
L_1022e7ad: ;
    if ((uint32_t)(int16_t)rd32(sp0 + 4u) - 3u > 6u)
    {
        eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 3u;
        ebx = rd32(sp0 + 4u);
        ebp = rd32(sp0 + 8u);
        edi = (uint32_t)(int16_t)rd32(sp0 + 4u);
        goto L_1022e99c;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 3u;
    ebx = rd32(sp0 + 4u);
    ebp = rd32(sp0 + 8u);
    edi = (uint32_t)(int16_t)rd32(sp0 + 4u);
    t5 = rd32(COW_IMG(0x1022ea54u) + eax * 4u);
    switch (t5 - RD)
    {
    case 0x1022e7cbu: goto L_1022e7cb;
    case 0x1022e830u: goto L_1022e830;
    case 0x1022e8dfu: goto L_1022e8df;
    case 0x1022e97au: goto L_1022e97a;
    case 0x1022e99cu: goto L_1022e99c;
    case 0x1022ea3bu: edx = in_edx; goto L_1022ea3b;
    default: rt_fatal(g, COW_IMG(0x1022e7c4u), "switch");
    }
    return 0;
L_1022e7cb: ;
    if ((uint32_t)(int16_t)rd32(sp0 + 8u) == 9u)
    {
        ecx = rd32(sp0 + 8u);
        goto L_1022e81f;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 8u) - 9u;
    ecx = rd32(sp0 + 8u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1022e80e;
    }
    t55 = rd32(self + 0x30u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t56 = cow_thiscall(g, COW_IMG(0x1022df70u), self, 1, t55);
    t57 = g->edx;
    if ((int32_t)t56 < -6)
    {
        eax = t56;
        edx = t57;
        goto L_1022e7f2;
    }
    eax = t56;
    edx = t57;
    if ((int32_t)eax < 0) goto L_1022ea4b;
L_1022e7f2: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t58 = cow_thiscall(g, COW_IMG(0x10221c50u), self, 0);
    t59 = g->edx;
    g->edx = t59;
    t60 = cow_thiscall(g, COW_IMG(0x10221c90u), self, 0);
    t61 = g->edx;
    wr32(self + 0x64u, 2u);
    g->ebx = in_ebx;
    g->edx = t61;
    return t60;
L_1022e80e: ;
    g->eax = eax;
    g->edx = rd32(self);
    t62 = rd32(self);
    g->esp = sp0 - 0x10u;
    t63 = cow_thiscall(g, rd32(t62 + 0x18u), self, 2, 3u, ecx);
    t64 = g->edx;
    g->ebx = in_ebx;
    g->edx = t64;
    return t63;
L_1022e81f: ;
    g->eax = rd32(self);
    g->edx = in_edx;
    t65 = rd32(self);
    g->esp = sp0 - 0x10u;
    t66 = cow_thiscall(g, rd32(t65 + 0x18u), self, 2, 4u, ecx);
    t67 = g->edx;
    g->ebx = in_ebx;
    g->edx = t67;
    return t66;
L_1022e830: ;
    g->ebx = ebx;
    g->esp = sp0 - 4u;
    t30 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, self, g->edx, 1, 7, 0x3eu, 0xa8u, 4u, 0xffffffffu, in_edi, in_esi, in_ebp);
    if ((uint8_t)t30 == 0u) goto L_1022e85c;
    eax = t30;
    t31 = rd32(sp0 + 8u);
    g->eax = eax;
    g->edx = t31;
    g->esp = sp0 - 0x10u;
    t32 = cow_thiscall(g, COW_IMG(0x1022e710u), self, 2, 0x19u, t31);
    t33 = g->edx;
    g->ebx = in_ebx;
    g->edx = t33;
    return t32;
L_1022e85c: ;
    t34 = rd32(self + 0x6cu) + 1u;
    wr32(self + 0x6cu, t34);
    if ((int32_t)t34 < 15)
    {
        eax = t34;
        ecx = t34;
    }
    else
    {
        eax = t34;
        ecx = t34;
        wr32(self + 0x6cu, 0u);
    }
    if ((int32_t)rd32(self + 0x6cu) < 3)
    {
        edx = rd32(self + 0x6cu);
        goto L_1022e8c8;
    }
    edx = rd32(self + 0x6cu);
    t35 = (uint32_t)(int8_t)rd8(COW_IMG(0x10386984u) + edx);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t36 = cow_cdecl(g, COW_IMG(0x1022dad0u), 1, t35);
    t37 = g->ecx;
    t38 = g->edx;
    if ((uint8_t)t36 != 0u)
    {
        eax = t36;
        ecx = t37;
        edx = t38;
        goto L_1022e8a2;
    }
    t39 = rd32(sp0 + 8u);
    g->eax = t39;
    g->edx = rd32(self);
    t40 = rd32(self);
    g->esp = sp0 - 0x10u;
    t41 = cow_thiscall(g, rd32(t40 + 0x18u), self, 2, 3u, t39);
    t42 = g->edx;
    g->ebx = in_ebx;
    g->edx = t42;
    return t41;
L_1022e8a2: ;
    if (edx != 0xbu) goto L_1022e8c8;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t43 = cow_stdcall(g, COW_IMG(0x10098a90u), 0);
    t44 = g->edx;
    if (t43 >= 0x154u)
    {
        eax = t43;
        edx = t44;
        goto L_1022e8c8;
    }
    t45 = rd32(sp0 + 8u);
    g->eax = t45;
    g->edx = rd32(self);
    t46 = rd32(self);
    g->esp = sp0 - 0x10u;
    t47 = cow_thiscall(g, rd32(t46 + 0x18u), self, 2, 3u, t45);
    t48 = g->edx;
    g->ebx = in_ebx;
    g->edx = t48;
    return t47;
L_1022e8c8: ;
    t49 = rd32(self + 0x6cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t50 = cow_fastcall(g, COW_IMG(0x1022dd30u), self, edx, 1, t49);
    t51 = g->ecx;
    t52 = g->edx;
    g->edx = t52;
    t53 = cow_thiscall(g, COW_IMG(0x10037b30u), t51, 0);
    t54 = g->edx;
    g->ebx = in_ebx;
    g->edx = t54;
    return t53;
L_1022e8df: ;
    g->ebx = ebx;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, self, g->edx, 1, 7, 0x3eu, 0xa8u, 4u, 0xffffffffu, in_edi, in_esi, in_ebp);
    t10 = g->ecx;
    if ((uint8_t)t9 == 0u)
    {
        ecx = t10;
        goto L_1022e90b;
    }
    eax = t9;
    t11 = rd32(sp0 + 8u);
    g->eax = eax;
    g->edx = t11;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, COW_IMG(0x1022e710u), self, 2, 0x18u, t11);
    t13 = g->edx;
    g->ebx = in_ebx;
    g->edx = t13;
    return t12;
L_1022e90b: ;
    t14 = rd32(self + 0x6cu) - 1u;
    t15 = rd32(self + 0x6cu);
    wr32(self + 0x6cu, t14);
    if ((int32_t)(t15 - 1u) >= 0)
    {
        eax = t14;
    }
    else
    {
        eax = t14;
        wr32(self + 0x6cu, 0xeu);
    }
    if ((int32_t)rd32(self + 0x6cu) < 3)
    {
        edx = rd32(self + 0x6cu);
        goto L_1022e8c8;
    }
    edx = rd32(self + 0x6cu);
    t16 = (uint32_t)(int8_t)rd8(COW_IMG(0x10386984u) + edx);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_cdecl(g, COW_IMG(0x1022dad0u), 1, t16);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_1022e94c;
    }
    t20 = rd32(sp0 + 8u);
    g->eax = t20;
    g->edx = rd32(self);
    t21 = rd32(self);
    g->esp = sp0 - 0x10u;
    t22 = cow_thiscall(g, rd32(t21 + 0x18u), self, 2, 4u, t20);
    t23 = g->edx;
    g->ebx = in_ebx;
    g->edx = t23;
    return t22;
L_1022e94c: ;
    if (edx != 0xbu) goto L_1022e8c8;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t24 = cow_stdcall(g, COW_IMG(0x10098a90u), 0);
    t25 = g->edx;
    if (t24 >= 0x154u)
    {
        eax = t24;
        edx = t25;
        goto L_1022e8c8;
    }
    t26 = rd32(sp0 + 8u);
    g->eax = t26;
    g->edx = rd32(self);
    t27 = rd32(self);
    g->esp = sp0 - 0x10u;
    t28 = cow_thiscall(g, rd32(t27 + 0x18u), self, 2, 4u, t26);
    t29 = g->edx;
    g->ebx = in_ebx;
    g->edx = t29;
    return t28;
L_1022e97a: ;
    if ((int16_t)ebp < 9)
    {
        eax = (uint32_t)(int16_t)ebp;
        goto L_1022e995;
    }
    eax = (uint32_t)(int16_t)ebp;
    if ((int32_t)eax > 10) goto L_1022e995;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x10221cd0u), self, 0);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_1022e995: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t8 = cow_fastcall(g, COW_IMG(0x10221ce0u), self, in_edx, 0);
    eax = t8;
L_1022e99c: ;
    t68 = rd16(self + 0x60u);
    t69 = rd32(self + 0x30u);
    wr8(self + 0x5cu, rd8(self + 0x5cu) | 8u);
    wr32(sp0 + 4u, t69);
    wr16(sp0 + 8u, (uint16_t)t68);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10222150u), self, 2, ebx, ebp);
    t70 = g->ecx;
    if ((int32_t)edi <= 0)
    {
        ecx = t70;
    }
    else
    {
        ecx = t70;
        if ((int32_t)edi <= 2) goto L_1022e9ce;
        if (edi != 9u) goto L_1022ea09;
        ebx = 1u;
L_1022e9ce: ;
        t71 = rd32(self + 0x30u);
        g->edx = 0u;
        g->esp = sp0 - 0x10u;
        t72 = cow_thiscall(g, COW_IMG(0x1022df70u), self, 1, t71);
        t73 = g->ecx;
        t74 = g->edx;
        if (t72 == 0xfffffffeu)
        {
            eax = t72;
            edx = t74;
            goto L_1022e9fc;
        }
        eax = t72;
        ecx = t73;
        edx = t74;
        if (eax != 0xffffffffu) goto L_1022ea09;
        if (rd16(sp0 + 8u) == (uint16_t)edx)
        {
            loc_14 = ebp;
            goto L_1022e9ff;
        }
        loc_14 = ebp;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10222150u), self, 2, 1u, loc_14);
        t75 = g->ecx;
        wr16(self + 0x60u, 2u);
        ecx = t75;
    }
L_1022ea09: ;
    if (rd32(sp0 + 4u) == rd32(self + 0x30u))
    {
        eax = rd32(self + 0x30u);
        edx = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(self + 0x30u);
        edx = rd32(sp0 + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t77 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t78 = g->edx;
        eax = t77;
        edx = t78;
    }
    wr8(self + 0x5cu, rd8(self + 0x5cu) & 0xf7u);
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_1022e9fc: ;
    loc_14 = ebp;
L_1022e9ff: ;
    wr16(self + 0x60u, (uint16_t)edx);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10222150u), self, 2, ebx, loc_14);
    t76 = g->ecx;
    ecx = t76;
    goto L_1022ea09;
L_1022ea24: ;
    if (rd16(sp0 + 4u) != 6u)
    {
        edx = in_edx;
        goto L_1022ea4b;
    }
    g->eax = rd32(COW_IMG(0x105781f8u));
    g->edx = in_edx;
    t79 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 0x10u;
    t80 = cow_thiscall(g, COW_IMG(0x10221300u), t79 + 0x20u, 1, 1u);
    t81 = g->edx;
    eax = t80;
    edx = t81;
L_1022ea3b: ;
    t82 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t83 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t82, 1u);
    t84 = g->edx;
    eax = t83;
    edx = t84;
L_1022ea4b: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022e760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022e760(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
