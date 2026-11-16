/* f_0x10197be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10197be0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t of;
    uint32_t sf;
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
    uint32_t t85;
    uint32_t t86;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_10197ea7;
    }
    ebx = rd32(rd32(self + 8u) + 0x88u);
    edi = rd32(self + 8u);
    t1 = rd32(COW_IMG(0x10197eb0u) + rd8(COW_IMG(0x10197ed8u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x10197c0cu: ecx = rd8(COW_IMG(0x10197ed8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10197c0c;
    case 0x10197c4cu: ecx = rd8(COW_IMG(0x10197ed8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10197c4c;
    case 0x10197c86u: goto L_10197c86;
    case 0x10197cc6u: ecx = rd8(COW_IMG(0x10197ed8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10197cc6;
    case 0x10197d00u: goto L_10197d00;
    case 0x10197d1au: goto L_10197d1a;
    case 0x10197da8u: goto L_10197da8;
    case 0x10197e31u: goto L_10197e31;
    case 0x10197e91u: goto L_10197e91;
    case 0x10197ea7u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_10197ea7;
    default: rt_fatal(g, COW_IMG(0x10197c05u), "switch");
    }
    return 0;
L_10197c0c: ;
    if ((uint16_t)arg2 != 0x1au)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_10197ea2;
    }
    if ((int32_t)(rd32(self + 0x18u) + 0xeu) >= (int32_t)rd32(self + 0x14u))
    {
        eax = rd32(self + 0x18u);
        edx = rd32(self + 0x18u) + 0xeu;
    }
    else
    {
        eax = rd32(self + 0x18u);
        ecx = rd32(self + 0x14u);
        edx = rd32(self + 0x18u) + 0xeu;
        wr32(self + 0x18u, eax + 1u);
        wr32(ebx + 0x14u, eax + 1u);
        g->eax = eax + 1u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t78 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t79 = g->edx;
        eax = t78;
        edx = t79;
    }
    t80 = rd32(self + 8u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t81 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t80, g->edx, 0, 2, 0xeu, 0u);
    t82 = g->edx;
    g->edi = edi;
    g->edx = t82;
    t83 = cow_thiscall(g, COW_IMG(0x101186a0u), t80, 0);
    t84 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t84;
    return t83;
L_10197c4c: ;
    if ((uint16_t)arg2 != 0x10u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_10197ea2;
    }
    if ((int32_t)rd32(self + 0x18u) <= 0)
    {
        eax = rd32(self + 0x18u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x18u);
        wr32(self + 0x18u, eax - 1u);
        wr32(ebx + 0x14u, eax - 1u);
        g->eax = eax - 1u;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t71 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t72 = g->edx;
        eax = t71;
        edx = t72;
    }
    t73 = rd32(self + 8u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t74 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t73, g->edx, 0, 2, 1u, 0u);
    t75 = g->edx;
    g->edi = edi;
    g->edx = t75;
    t76 = cow_thiscall(g, COW_IMG(0x101186a0u), t73, 0);
    t77 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t77;
    return t76;
L_10197c86: ;
    if ((int32_t)(rd32(self + 0x18u) + 0xeu) >= (int32_t)rd32(self + 0x14u))
    {
        eax = rd32(self + 0x18u);
        edx = rd32(self + 0x14u);
        goto L_10197ea7;
    }
    eax = rd32(self + 0x18u);
    ecx = rd32(self + 0x18u) + 0xeu;
    edx = rd32(self + 0x14u);
    wr32(self + 0x18u, eax + 1u);
    g->eax = eax + 1u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t63 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t64 = g->edx;
    t65 = rd32(self + 8u);
    t66 = (t64 & 0xffff0000u) | (uint16_t)(rd16(t65 + 0x4cu) - 1u);
    g->ebx = ebx;
    g->edx = t66;
    t67 = cow_call_regs(g, COW_IMG(0x10118db0u), t63, t65, g->edx, 0, 2, t66, 0u);
    t68 = g->edx;
    g->edi = t65;
    g->edx = t68;
    cow_thiscall(g, COW_IMG(0x101186a0u), t65, 0);
    t69 = g->edx;
    t70 = rd32(self + 0x18u);
    wr32(ebx + 0x14u, t70);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t69;
    return t70;
L_10197cc6: ;
    if ((int32_t)rd32(self + 0x18u) <= 0)
    {
        eax = rd32(self + 0x18u);
        edx = in_edx;
        goto L_10197ea7;
    }
    eax = rd32(self + 0x18u);
    wr32(self + 0x18u, eax - 1u);
    g->eax = eax - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t54 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t55 = g->ecx;
    t56 = g->edx;
    t57 = (t55 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 8u) + 0x4cu) + 1u);
    t58 = rd32(self + 8u);
    g->ebx = ebx;
    g->edx = t56;
    t59 = cow_call_regs(g, COW_IMG(0x10118db0u), t54, t58, g->edx, 0, 2, t57, 0u);
    t60 = g->edx;
    g->edi = t58;
    t61 = cow_thiscall(g, COW_IMG(0x101186a0u), t58, 0);
    t62 = rd32(self + 0x18u);
    wr32(ebx + 0x14u, t62);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t62;
    return t61;
L_10197d00: ;
    t49 = (uint32_t)(int16_t)arg2 + rd32(self + 0x18u) - 1u;
    g->eax = rd32(self);
    g->edx = rd32(self + 0x18u);
    t50 = rd32(self);
    t51 = rd32(self + 0x18u);
    g->esp = sp0 - 0xcu;
    t52 = cow_thiscall(g, rd32(t50 + 0x4cu), self, 1, t49);
    t53 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t53;
    return t52;
L_10197d1a: ;
    if ((int32_t)(rd32(self + 0x18u) - 0xeu) < 0)
    {
        eax = rd32(self + 0x18u) - 0xeu;
        ecx = rd32(self + 0x18u);
        goto L_10197d58;
    }
    eax = rd32(self + 0x18u) - 0xeu;
    wr32(self + 0x18u, eax);
    if ((uint16_t)arg2 == 0x10u)
    {
        ecx = edi;
        eax = arg2;
        loc_14 = 1u;
    }
    else
    {
        ecx = edi;
        eax = arg2 + 1u;
        loc_14 = arg2 + 1u;
    }
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t29 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, loc_14, 0u);
    t30 = g->edx;
    g->edi = edi;
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t32 = g->ecx;
    t33 = g->edx;
    t34 = cow_thiscall(g, COW_IMG(0x10037b30u), t32, 0);
    t35 = rd32(self + 0x18u);
    wr32(ebx + 0x14u, t35);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t35;
    return t34;
L_10197d58: ;
    if (ecx == 0u)
    {
        ecx = edi;
        goto L_10197d88;
    }
    ecx = edi;
    wr32(self + 0x18u, 0u);
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t36 = cow_call_regs(g, COW_IMG(0x10118db0u), arg2 + 1u, ecx, g->edx, 0, 2, arg2 + 1u, 0u);
    t37 = g->edx;
    g->edi = edi;
    g->edx = t37;
    t38 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t39 = g->ecx;
    t40 = g->edx;
    g->edx = t40;
    t41 = cow_thiscall(g, COW_IMG(0x10037b30u), t39, 0);
    t42 = g->edx;
    t43 = rd32(self + 0x18u);
    wr32(ebx + 0x14u, t43);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t42;
    return t41;
L_10197d88: ;
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t44 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 1u, 0u);
    t45 = g->edx;
    g->edi = edi;
    g->edx = t45;
    t46 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t47 = g->ecx;
    t48 = g->edx;
    if ((uint16_t)arg2 != 0x10u)
    {
        eax = t46;
        ecx = t47;
        edx = t48;
        goto L_10197ea2;
    }
    eax = t46;
    edx = t48;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10197da8: ;
    if ((int32_t)(rd32(self + 0x18u) + 0xeu) >= (int32_t)(rd32(self + 0x14u) - 0xfu))
    {
        ecx = rd32(self + 0x18u);
        edx = rd32(self + 0x14u);
        goto L_10197de4;
    }
    eax = rd32(self + 0x18u) + 0xeu;
    wr32(self + 0x18u, eax);
    g->ebx = ebx;
    g->edx = arg2 - 1u;
    g->esp = sp0 - 0xcu;
    t10 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, arg2 - 1u, 0u);
    t11 = g->edx;
    g->edi = edi;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t13 = g->ecx;
    t14 = g->edx;
    g->edx = t14;
    cow_thiscall(g, COW_IMG(0x10037b30u), t13, 0);
    t15 = g->edx;
    t16 = rd32(self + 0x18u);
    wr32(ebx + 0x14u, t16);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t15;
    return t16;
L_10197de4: ;
    if (ecx == edx - 0xeu)
    {
        eax = edx - 0xeu;
        goto L_10197e13;
    }
    eax = edx - 0xeu;
    wr32(self + 0x18u, eax);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, arg2 - 1u, 0u);
    t18 = g->edx;
    g->edi = edi;
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t20 = g->ecx;
    t21 = g->edx;
    t22 = cow_thiscall(g, COW_IMG(0x10037b30u), t20, 0);
    t23 = rd32(self + 0x18u);
    wr32(ebx + 0x14u, t23);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t23;
    return t22;
L_10197e13: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t24 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, 0xeu, 0u);
    t25 = g->edx;
    g->edi = edi;
    g->edx = t25;
    t26 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint16_t)arg2 != 0x1au)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        goto L_10197ea2;
    }
    eax = t26;
    edx = t28;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10197e31: ;
    if ((int32_t)rd32(self + 0x18u) >= (int32_t)rd32(ebx + 0x14u))
    {
        eax = rd32(self + 0x18u);
        ecx = (uint32_t)(int16_t)rd16(edi + 0x4cu);
        zf = rd32(self + 0x18u) == rd32(ebx + 0x14u);
        sf = (int32_t)(rd32(self + 0x18u) - rd32(ebx + 0x14u)) < 0;
        of = ((rd32(self + 0x18u) ^ rd32(ebx + 0x14u)) & (rd32(self + 0x18u) ^ rd32(self + 0x18u) - rd32(ebx + 0x14u))) >> 0x1fu;
        ebx = rd32(ebx + 0x14u);
        goto L_10197e67;
    }
    eax = rd32(self + 0x18u);
    ecx = (uint32_t)(int16_t)rd16(edi + 0x4cu);
    ebx = rd32(ebx + 0x14u);
    if ((int32_t)(eax + ecx - ebx) >= 1)
    {
        ecx = eax + ecx - ebx;
        eax = eax - ebx;
    }
    else
    {
        eax = eax - ebx;
        ecx = 1u;
    }
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, ecx, 0u);
    t3 = g->edx;
    g->edi = edi;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t5 = g->edx;
    wr32(self + 0x18u, ebx);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t5;
    return t4;
L_10197e67: ;
    if (zf || sf != of)
    {
        edx = in_edx;
        goto L_10197ea7;
    }
    if ((int32_t)(eax + ecx - ebx) <= 14)
    {
        ecx = eax + ecx - ebx;
        eax = eax - ebx;
    }
    else
    {
        eax = eax - ebx;
        ecx = 0xeu;
    }
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, ecx, 0u);
    t7 = g->edx;
    g->edi = edi;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t9 = g->edx;
    wr32(self + 0x18u, ebx);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t9;
    return t8;
L_10197e91: ;
    if ((int32_t)(rd32(self + 0x18u) + 0xeu) > (int32_t)rd32(self + 0x14u))
    {
        eax = rd32(self + 0x18u);
        edx = rd32(self + 0x14u);
        goto L_10197ea7;
    }
    eax = rd32(self + 0x18u);
    ecx = rd32(self + 0x18u) + 0xeu;
    edx = rd32(self + 0x14u);
    if ((int32_t)eax < 0) goto L_10197ea7;
L_10197ea2: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t85 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t86 = g->edx;
    eax = t85;
    edx = t86;
L_10197ea7: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10197be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10197be0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
