/* f_0x1019c9b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1019c9b0(Guest* g)
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
    uint32_t t87;
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
        goto L_1019cc6d;
    }
    ebx = rd32(rd32(self + 8u) + 0x88u);
    edi = rd32(self + 8u);
    t1 = rd32(COW_IMG(0x1019cc74u) + rd8(COW_IMG(0x1019cc98u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x1019c9dcu: ecx = rd8(COW_IMG(0x1019cc98u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1019c9dc;
    case 0x1019ca1cu: ecx = rd8(COW_IMG(0x1019cc98u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1019ca1c;
    case 0x1019ca68u: goto L_1019ca68;
    case 0x1019caa8u: ecx = rd8(COW_IMG(0x1019cc98u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1019caa8;
    case 0x1019cae2u: goto L_1019cae2;
    case 0x1019cb70u: goto L_1019cb70;
    case 0x1019cbf7u: goto L_1019cbf7;
    case 0x1019cc57u: goto L_1019cc57;
    case 0x1019cc6du: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_1019cc6d;
    default: rt_fatal(g, COW_IMG(0x1019c9d5u), "switch");
    }
    return 0;
L_1019c9dc: ;
    if ((uint16_t)arg2 != 0x1au)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_1019cc68;
    }
    if ((int32_t)(rd32(self + 0x14u) + 0xeu) >= (int32_t)rd32(self + 0x24u))
    {
        eax = rd32(self + 0x14u);
        ecx = edi;
        edx = rd32(self + 0x14u) + 0xeu;
        loc_14 = 0xeu;
        goto L_1019ca56;
    }
    eax = rd32(self + 0x14u);
    ecx = edi;
    edx = rd32(self + 0x14u) + 0xeu;
    wr32(self + 0x14u, eax + 1u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t75 = cow_call_regs(g, COW_IMG(0x10118db0u), eax + 1u, ecx, g->edx, 0, 2, 0xeu, 0u);
    t76 = g->edx;
    g->edi = edi;
    g->edx = t76;
    t77 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t78 = g->ecx;
    t79 = g->edx;
    g->edx = t79;
    cow_thiscall(g, COW_IMG(0x10037b30u), t78, 0);
    t80 = g->edx;
    t81 = rd32(self + 0x14u);
    wr32(ebx + 0x14u, t81);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t80;
    return t81;
L_1019ca1c: ;
    if ((uint16_t)arg2 != 0x10u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_1019cc68;
    }
    if ((int32_t)rd32(self + 0x14u) <= 0)
    {
        eax = rd32(self + 0x14u);
        ecx = edi;
        edx = in_edx;
        loc_14 = 1u;
        goto L_1019ca56;
    }
    eax = rd32(self + 0x14u);
    ecx = edi;
    wr32(self + 0x14u, eax - 1u);
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t67 = cow_call_regs(g, COW_IMG(0x10118db0u), eax - 1u, ecx, g->edx, 0, 2, 1u, 0u);
    t68 = g->edx;
    g->edi = edi;
    g->edx = t68;
    t69 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t70 = g->ecx;
    t71 = g->edx;
    g->edx = t71;
    t72 = cow_thiscall(g, COW_IMG(0x10037b30u), t70, 0);
    t73 = g->edx;
    t74 = rd32(self + 0x14u);
    wr32(ebx + 0x14u, t74);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t73;
    return t72;
L_1019ca56: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t82 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, loc_14, 0u);
    t83 = g->edx;
    g->edi = edi;
    g->edx = t83;
    t84 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t85 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t85;
    return t84;
L_1019ca68: ;
    if ((int32_t)(rd32(self + 0x14u) + 0xeu) >= (int32_t)rd32(self + 0x24u))
    {
        eax = rd32(self + 0x14u);
        edx = rd32(self + 0x14u) + 0xeu;
        goto L_1019cc6d;
    }
    eax = rd32(self + 0x14u);
    ecx = rd32(self + 0x24u);
    edx = rd32(self + 0x14u) + 0xeu;
    wr32(self + 0x14u, eax + 1u);
    g->eax = eax + 1u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t58 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t59 = g->edx;
    t60 = rd32(self + 8u);
    t61 = (t58 & 0xffff0000u) | (uint16_t)(rd16(t60 + 0x4cu) - 1u);
    g->ebx = ebx;
    g->edx = t59;
    t62 = cow_call_regs(g, COW_IMG(0x10118db0u), t61, t60, g->edx, 0, 2, t61, 0u);
    t63 = g->edx;
    g->edi = t60;
    g->edx = t63;
    t64 = cow_thiscall(g, COW_IMG(0x101186a0u), t60, 0);
    t65 = g->edx;
    t66 = rd32(self + 0x14u);
    wr32(ebx + 0x14u, t66);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t65;
    return t64;
L_1019caa8: ;
    if ((int32_t)rd32(self + 0x14u) <= 0)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
        goto L_1019cc6d;
    }
    eax = rd32(self + 0x14u);
    wr32(self + 0x14u, eax - 1u);
    g->eax = eax - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t50 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t51 = g->edx;
    t52 = rd32(self + 8u);
    t53 = (t51 & 0xffff0000u) | (uint16_t)(rd16(t52 + 0x4cu) + 1u);
    g->ebx = ebx;
    g->edx = t53;
    t54 = cow_call_regs(g, COW_IMG(0x10118db0u), t50, t52, g->edx, 0, 2, t53, 0u);
    t55 = g->edx;
    g->edi = t52;
    g->edx = t55;
    cow_thiscall(g, COW_IMG(0x101186a0u), t52, 0);
    t56 = g->edx;
    t57 = rd32(self + 0x14u);
    wr32(ebx + 0x14u, t57);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t56;
    return t57;
L_1019cae2: ;
    if ((int32_t)(rd32(self + 0x14u) - 0xeu) < 0)
    {
        eax = rd32(self + 0x14u) - 0xeu;
        ecx = rd32(self + 0x14u);
        goto L_1019cb20;
    }
    eax = rd32(self + 0x14u) - 0xeu;
    wr32(self + 0x14u, eax);
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
    t30 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, loc_14, 0u);
    t31 = g->edx;
    g->edi = edi;
    g->edx = t31;
    t32 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t33 = g->ecx;
    t34 = g->edx;
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x10037b30u), t33, 0);
    t36 = g->edx;
    t37 = rd32(self + 0x14u);
    wr32(ebx + 0x14u, t37);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t36;
    return t35;
L_1019cb20: ;
    if (ecx == 0u)
    {
        ecx = edi;
        goto L_1019cb50;
    }
    ecx = edi;
    wr32(self + 0x14u, 0u);
    g->ebx = ebx;
    g->edx = arg2 + 1u;
    g->esp = sp0 - 0xcu;
    t38 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, arg2 + 1u, 0u);
    t39 = g->edx;
    g->edi = edi;
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t41 = g->ecx;
    t42 = g->edx;
    g->edx = t42;
    cow_thiscall(g, COW_IMG(0x10037b30u), t41, 0);
    t43 = g->edx;
    t44 = rd32(self + 0x14u);
    wr32(ebx + 0x14u, t44);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t43;
    return t44;
L_1019cb50: ;
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t45 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 1u, 0u);
    t46 = g->edx;
    g->edi = edi;
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t48 = g->ecx;
    t49 = g->edx;
    if ((uint16_t)arg2 != 0x10u)
    {
        eax = t47;
        ecx = t48;
        edx = t49;
        goto L_1019cc68;
    }
    eax = t47;
    edx = t49;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1019cb70: ;
    if ((int32_t)(rd32(self + 0x14u) + 0xeu) >= (int32_t)(rd32(self + 0x24u) - 0xfu))
    {
        ecx = rd32(self + 0x24u);
        edx = rd32(self + 0x14u);
        goto L_1019cbac;
    }
    eax = rd32(self + 0x14u) + 0xeu;
    edx = rd32(self + 0x14u);
    wr32(self + 0x14u, eax);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, arg2 - 1u, 0u);
    t11 = g->edx;
    g->edi = edi;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t13 = g->ecx;
    t14 = g->edx;
    t15 = cow_thiscall(g, COW_IMG(0x10037b30u), t13, 0);
    t16 = rd32(self + 0x14u);
    wr32(ebx + 0x14u, t16);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t16;
    return t15;
L_1019cbac: ;
    if (edx == ecx - 0xeu)
    {
        eax = ecx - 0xeu;
        ecx = edi;
        goto L_1019cbdb;
    }
    eax = ecx - 0xeu;
    ecx = edi;
    wr32(self + 0x14u, eax);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x10118db0u), arg2 - 1u, ecx, g->edx, 0, 2, arg2 - 1u, 0u);
    t18 = g->edx;
    g->edi = edi;
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t20 = g->ecx;
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x10037b30u), t20, 0);
    t23 = g->edx;
    t24 = rd32(self + 0x14u);
    wr32(ebx + 0x14u, t24);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t23;
    return t22;
L_1019cbdb: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t25 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 0xeu, 0u);
    t26 = g->edx;
    g->edi = edi;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint16_t)arg2 != 0x1au)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        goto L_1019cc68;
    }
    eax = t27;
    edx = t29;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1019cbf7: ;
    if ((int32_t)rd32(self + 0x14u) >= (int32_t)rd32(ebx + 0x14u))
    {
        eax = rd32(self + 0x14u);
        ecx = (uint32_t)(int16_t)rd16(edi + 0x4cu);
        zf = rd32(self + 0x14u) == rd32(ebx + 0x14u);
        sf = (int32_t)(rd32(self + 0x14u) - rd32(ebx + 0x14u)) < 0;
        of = ((rd32(self + 0x14u) ^ rd32(ebx + 0x14u)) & (rd32(self + 0x14u) ^ rd32(self + 0x14u) - rd32(ebx + 0x14u))) >> 0x1fu;
        ebx = rd32(ebx + 0x14u);
        goto L_1019cc2d;
    }
    eax = rd32(self + 0x14u);
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
    wr32(self + 0x14u, ebx);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t5;
    return t4;
L_1019cc2d: ;
    if (zf || sf != of)
    {
        edx = in_edx;
        goto L_1019cc6d;
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
    wr32(self + 0x14u, ebx);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t9;
    return t8;
L_1019cc57: ;
    if ((int32_t)(rd32(self + 0x14u) + 0xeu) > (int32_t)rd32(self + 0x24u))
    {
        eax = rd32(self + 0x14u);
        edx = rd32(self + 0x14u) + 0xeu;
        goto L_1019cc6d;
    }
    eax = rd32(self + 0x14u);
    ecx = rd32(self + 0x24u);
    edx = rd32(self + 0x14u) + 0xeu;
    if ((int32_t)eax < 0) goto L_1019cc6d;
L_1019cc68: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t86 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t87 = g->edx;
    eax = t86;
    edx = t87;
L_1019cc6d: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019c9b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019c9b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
