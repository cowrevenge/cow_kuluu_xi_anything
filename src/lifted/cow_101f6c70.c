/* f_0x101f6c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101f6c70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = (uint32_t)(int16_t)rd32(sp0 + 4u);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    if (t1 - 1u > 0x1au)
    {
        eax = t1 - 1u;
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
        ebp = t2;
        goto L_101f6f2d;
    }
    eax = t1 - 1u;
    ebp = t2;
    t3 = rd32(COW_IMG(0x101f6fccu) + rd8(COW_IMG(0x101f6ff8u) + eax) * 4u);
    switch (t3 - RD)
    {
    case 0x101f6c9bu: goto L_101f6c9b;
    case 0x101f6cd8u: goto L_101f6cd8;
    case 0x101f6d06u: ecx = rd8(COW_IMG(0x101f6ff8u) + eax); goto L_101f6d06;
    case 0x101f6d27u: ecx = rd8(COW_IMG(0x101f6ff8u) + eax); goto L_101f6d27;
    case 0x101f6d5eu: ecx = rd8(COW_IMG(0x101f6ff8u) + eax); edx = in_edx; goto L_101f6d5e;
    case 0x101f6d9bu: goto L_101f6d9b;
    case 0x101f6e2cu: ecx = rd8(COW_IMG(0x101f6ff8u) + eax); goto L_101f6e2c;
    case 0x101f6e5eu: ecx = rd8(COW_IMG(0x101f6ff8u) + eax); goto L_101f6e5e;
    case 0x101f6e95u: ecx = rd8(COW_IMG(0x101f6ff8u) + eax); edx = in_edx; goto L_101f6e95;
    case 0x101f6ef7u: goto L_101f6ef7;
    case 0x101f6f2du: edx = in_edx; ebx = in_ebx & 0xffffff00u; goto L_101f6f2d;
    default: rt_fatal(g, COW_IMG(0x101f6c94u), "switch");
    }
    return;
L_101f6c9b: ;
    if ((int16_t)rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u) <= 0)
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u);
        ecx = rd32(COW_IMG(0x104e1d4cu));
        goto L_101f6ccf;
    }
    eax = (eax & 0xffff0000u) | rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u);
    ecx = rd32(COW_IMG(0x104e1d4cu));
    if ((int16_t)eax > (int16_t)rd16(self + 0x20u)) goto L_101f6ccf;
    if (rd8(ecx + 0x4eu) == 0u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(ecx + 0x4eu);
        goto L_101f6f2b;
    }
    edx = (in_edx & 0xffffff00u) | rd8(ecx + 0x4eu);
    if (rd16(self + 0x24u) == (uint16_t)eax) goto L_101f6f2b;
L_101f6cc5: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t61 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    eax = t61;
L_101f6f20: ;
    t62 = rd16(rd32(self + 8u) + 0x4cu);
    t63 = rd32(self + 8u);
    wr16(self + 0x24u, (uint16_t)t62);
    eax = (eax & 0xffff0000u) | t62;
    edx = t63;
L_101f6f2b: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
L_101f6f2d: ;
    g->eax = eax;
    g->edx = edx;
    t64 = rd16(self + 0x20u);
    g->esp = sp0 - 0x10u;
    t65 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t66 = g->edx;
    if ((int32_t)t65 >= (int16_t)t64)
    {
        eax = t65;
        edx = t66;
        edi = (in_edi & 0xffff0000u) | t64;
        t67 = (edi & 0xffff0000u) | (uint16_t)((uint16_t)edi - rd16(self + 0x1eu));
        g->ebx = ebx;
        g->esp = sp0 - 0x10u;
        t68 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, t67, 0u);
        wr16(self + 0x24u, rd16(rd32(self + 8u) + 0x4cu));
        ebx = (ebx & 0xffffff00u) | 1u;
    }
    g->eax = arg2;
    g->edx = rd32(self);
    t69 = rd32(self);
    g->esp = sp0 - 0x10u;
    t70 = cow_thiscall(g, rd32(t69 + 0x58u), self, 2, ebp, arg2);
    t71 = g->edx;
    if (rd32(self + 8u) != 0u)
    {
        eax = t70;
        edx = t71;
        if (rd32(sp0 + 4u) == 5u)
        {
            if ((uint8_t)eax == 0u)
            {
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t72 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
                t73 = g->edx;
                if (rd32(self + 0x38u) == 0u)
                {
                    eax = t72;
                    edx = t73;
                }
                else
                {
                    eax = t72;
                    ecx = rd32(self + 0x38u);
                    edx = t73;
                    if (rd16(self + 0x20u) != 0u)
                    {
                        ecx = (ecx & 0xffff0000u) | rd16(self + 0x20u);
                        if ((int32_t)eax >= 0)
                        {
                            if ((int32_t)eax < (int16_t)ecx)
                            {
                                g->eax = eax;
                                g->edx = rd32(self);
                                t74 = rd32(self);
                                g->esp = sp0 - 0xcu;
                                t75 = cow_thiscall(g, rd32(t74 + 0x5cu), self, 1, eax);
                                t76 = g->ecx;
                                t77 = g->edx;
                                if ((uint8_t)t75 == 0u)
                                {
                                    eax = t75;
                                    ecx = t76;
                                    edx = t77;
                                    g->eax = eax;
                                    g->edx = edx;
                                    g->esp = sp0 - 0xcu;
                                    t80 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
                                    t81 = g->edx;
                                    eax = t80;
                                    edx = t81;
                                }
                                else
                                {
                                    eax = t75;
                                    ecx = t76;
                                    edx = t77;
                                    g->eax = eax;
                                    g->edx = edx;
                                    g->esp = sp0 - 0xcu;
                                    t78 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
                                    t79 = g->edx;
                                    eax = t78;
                                    edx = t79;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((uint8_t)ebx != 0u)
        {
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x101f6720u), self, 1, 0u);
        }
    }
    g->ebx = in_ebx;
    return;
L_101f6ccf: ;
    wr8(ecx + 0x4cu, 0u);
    edx = in_edx;
    goto L_101f6f2b;
L_101f6cd8: ;
    if (rd16(rd32(self + 8u) + 0x4cu) != 1u)
    {
        eax = 1u;
        ecx = rd32(self + 8u);
        edx = in_edx;
        goto L_101f6cc5;
    }
    ecx = rd32(self + 8u);
    if (rd16(self + 0x24u) != 1u)
    {
        eax = 1u;
        edx = in_edx;
        goto L_101f6cc5;
    }
    wr16(self + 0x1eu, (uint16_t)(rd16(self + 0x1eu) - 1u));
    if ((int16_t)rd16(self + 0x1eu) >= 0)
    {
        eax = 1u;
        goto L_101f6f14;
    }
    wr16(self + 0x1eu, 0u);
    eax = 1u;
    edx = in_edx;
L_101f6f19: ;
    g->esp = sp0 - 0xcu;
    t60 = cow_call_regs(g, COW_IMG(0x101f66b0u), eax, self, edx, 1, 0);
    eax = t60;
    goto L_101f6f20;
L_101f6d06: ;
    wr16(self + 0x1eu, (uint16_t)(rd16(self + 0x1eu) - 1u));
    if ((int16_t)rd16(self + 0x1eu) >= 0) goto L_101f6e4d;
    wr16(self + 0x1eu, 0u);
    g->esp = sp0 - 0xcu;
    t52 = cow_call_regs(g, COW_IMG(0x101f66b0u), eax, self, in_edx, 1, 0);
    t53 = g->edx;
    eax = t52;
    edx = t53;
    goto L_101f6f2b;
L_101f6d27: ;
    if (rd8(self + 0x47u) != 0u) goto L_101f6d49;
    eax = (eax & 0xffffff00u) | rd8(self + 0x47u);
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = in_edx;
    g->esp = sp0;
    t39 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0xa8u, 4u, 0xffffffffu, in_esi, in_ebp, in_ebx);
    t40 = g->edx;
    if ((uint8_t)t39 == 0u)
    {
        eax = t39;
        edx = t40;
        ebx = in_ebx & 0xffffff00u;
        goto L_101f6f2d;
    }
L_101f6d49: ;
    g->eax = arg2;
    g->edx = rd32(self);
    t41 = rd32(self);
    g->esp = sp0 - 0xcu;
    t42 = cow_thiscall(g, rd32(t41 + 0x6cu), self, 2, ebp, arg2);
    t43 = g->ecx;
    t44 = g->edx;
    if ((uint8_t)t42 != 0u)
    {
        eax = t42;
        edx = t44;
        ebx = in_ebx & 0xffffff00u;
        goto L_101f6f2d;
    }
    eax = t42;
    ecx = t43;
    edx = t44;
L_101f6d5e: ;
    if (rd16(self + 0x1eu) != 0u) goto L_101f6d78;
    if (rd16(self + 0x24u) == 1u) goto L_101f6d7d;
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = edx;
    t45 = rd32(self + 8u);
    g->esp = sp0 - 0xcu;
    t46 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t45, g->edx, 0, 2, 1u, 0u);
    t47 = g->ecx;
    t48 = g->edx;
    eax = t46;
    ecx = t47;
    edx = t48;
L_101f6d78: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t49 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
L_101f6d7d: ;
    wr16(self + 0x1eu, (uint16_t)(rd16(self + 0x1eu) - rd16(self + 0x18u)));
    if ((int16_t)rd16(self + 0x1eu) < 0)
    {
        wr16(self + 0x1eu, 0u);
    }
    goto L_101f6f19;
L_101f6d9b: ;
    if (rd16(rd32(self + 8u) + 0x4cu) != rd16(self + 0x18u))
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        ecx = rd32(self + 8u);
        goto L_101f6df6;
    }
    eax = (eax & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    ecx = rd32(self + 8u);
    if (rd16(self + 0x24u) != (uint16_t)eax) goto L_101f6df6;
    wr16(self + 0x1eu, (uint16_t)(rd16(self + 0x1eu) + 1u));
    if ((int16_t)rd16(self + 0x1eu) <= (int16_t)rd16(self + 0x22u))
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x22u);
        ecx = (ecx & 0xffff0000u) | rd16(self + 0x1eu);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t28 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t29 = g->edx;
        t30 = cow_call_regs(g, COW_IMG(0x101f66b0u), t28, self, t29, 1, 0);
        t31 = g->edx;
        t32 = rd16(rd32(self + 8u) + 0x4cu);
        wr16(self + 0x24u, (uint16_t)t32);
        eax = t30;
        edx = (t31 & 0xffff0000u) | t32;
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x22u);
        wr16(self + 0x1eu, (uint16_t)eax);
        g->esp = sp0 - 0xcu;
        t25 = cow_call_regs(g, COW_IMG(0x101f66b0u), eax, self, in_edx, 1, 0);
        t26 = g->edx;
        t27 = rd16(rd32(self + 8u) + 0x4cu);
        wr16(self + 0x24u, (uint16_t)t27);
        eax = t25;
        edx = (t26 & 0xffff0000u) | t27;
    }
    goto L_101f6f2b;
L_101f6df6: ;
    if ((int16_t)eax <= (int16_t)rd16(self + 0x20u))
    {
        edx = (in_edx & 0xffff0000u) | rd16(self + 0x20u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t36 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t37 = g->edx;
        t38 = rd16(rd32(self + 8u) + 0x4cu);
        wr16(self + 0x24u, (uint16_t)t38);
        eax = t36;
        edx = (t37 & 0xffff0000u) | t38;
    }
    else
    {
        edx = (in_edx & 0xffff0000u) | rd16(self + 0x20u);
        g->ebx = in_ebx & 0xffffff00u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t33 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, edx, 0u);
        t34 = g->edx;
        t35 = rd16(rd32(self + 8u) + 0x4cu);
        wr16(self + 0x24u, (uint16_t)t35);
        eax = t33;
        edx = (t34 & 0xffff0000u) | t35;
    }
    goto L_101f6f2b;
L_101f6e2c: ;
    wr16(self + 0x1eu, (uint16_t)(rd16(self + 0x1eu) + 1u));
    if ((int16_t)rd16(self + 0x1eu) <= (int16_t)rd16(self + 0x22u))
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x22u);
        ecx = (ecx & 0xffff0000u) | rd16(self + 0x1eu);
        goto L_101f6e4d;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x22u);
    wr16(self + 0x1eu, (uint16_t)eax);
    g->esp = sp0 - 0xcu;
    t23 = cow_call_regs(g, COW_IMG(0x101f66b0u), eax, self, in_edx, 1, 0);
    t24 = g->edx;
    eax = t23;
    edx = t24;
    goto L_101f6f2b;
L_101f6e4d: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t54 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t55 = g->edx;
    t56 = cow_call_regs(g, COW_IMG(0x101f66b0u), t54, self, t55, 1, 0);
    t57 = g->edx;
    eax = t56;
    edx = t57;
    goto L_101f6f2b;
L_101f6e5e: ;
    if (rd8(self + 0x47u) != 0u)
    {
        edx = in_edx;
        goto L_101f6e80;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x47u);
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = in_edx;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0xa8u, 4u, 0xffffffffu, in_esi, in_ebp, in_ebx);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        ebx = in_ebx & 0xffffff00u;
        goto L_101f6f2d;
    }
    edx = t7;
L_101f6e80: ;
    g->eax = rd32(self);
    g->edx = edx;
    t8 = rd32(self);
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, rd32(t8 + 0x6cu), self, 2, ebp, arg2);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        edx = t11;
        ebx = in_ebx & 0xffffff00u;
        goto L_101f6f2d;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
L_101f6e95: ;
    if (rd16(self + 0x1eu) != rd16(self + 0x22u))
    {
        edx = (edx & 0xffff0000u) | rd16(self + 0x1eu);
        goto L_101f6ec5;
    }
    edx = (edx & 0xffff0000u) | rd16(self + 0x1eu);
    if ((int16_t)rd16(self + 0x20u) <= 0)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x20u);
        goto L_101f6eca;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x20u);
    if (rd16(self + 0x24u) == (uint16_t)eax)
    {
        ecx = (ecx & 0xffff0000u) | rd16(self + 0x24u);
        goto L_101f6eca;
    }
    ecx = (ecx & 0xffff0000u) | rd16(self + 0x24u);
    if ((uint16_t)ecx == rd16(self + 0x18u))
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x18u);
        goto L_101f6eca;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x18u);
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = edx;
    t12 = rd32(self + 8u);
    g->esp = sp0 - 0xcu;
    t13 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t12, g->edx, 0, 2, eax, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
L_101f6ec5: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
L_101f6eca: ;
    t19 = rd16(self + 0x18u);
    wr16(self + 0x1eu, (uint16_t)(t19 + rd16(self + 0x1eu)));
    if ((int16_t)rd16(self + 0x1eu) <= (int16_t)rd16(self + 0x22u))
    {
        eax = ((eax | t19) & 0xffff0000u) | rd16(self + 0x22u);
    }
    else
    {
        eax = ((eax | t19) & 0xffff0000u) | rd16(self + 0x22u);
        wr16(self + 0x1eu, (uint16_t)eax);
    }
    g->esp = sp0 - 0xcu;
    t20 = cow_call_regs(g, COW_IMG(0x101f66b0u), eax, self, edx, 1, 0);
    t21 = g->edx;
    t22 = rd16(rd32(self + 8u) + 0x4cu);
    wr16(self + 0x24u, (uint16_t)t22);
    eax = t20;
    edx = (t21 & 0xffff0000u) | t22;
    goto L_101f6f2b;
L_101f6ef7: ;
    t4 = rd32(rd32(rd32(self + 8u) + 0x88u) + 0x14u);
    t5 = rd32(rd32(self + 8u) + 0x88u);
    wr16(self + 0x1eu, (uint16_t)t4);
    if ((int16_t)t4 >= 0)
    {
        eax = t4;
        ecx = t5;
        goto L_101f6f14;
    }
    eax = t4;
    wr16(self + 0x1eu, 0u);
    edx = in_edx;
    goto L_101f6f19;
L_101f6f14: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t58 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t59 = g->edx;
    eax = t58;
    edx = t59;
    goto L_101f6f19;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f6c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f6c70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
