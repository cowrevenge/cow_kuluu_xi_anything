/* f_0x1018a340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1018a340(Guest* g)
{
    double d103;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_34;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
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
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x34u, sp0 - 0x14u);
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10189c60u), self, 1, sp0 - 0x14u);
    t1 = g->edx;
    if (rd32(self + 0x2cu) != 0u)
    {
        edx = t1;
    }
    else
    {
        eax = rd32(self + 0x2cu);
        edx = t1;
        if (rd8(self + 0x35u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x35u);
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, COW_IMG(0x1018a220u), self, 0);
            t2 = g->edx;
            edx = t2;
        }
    }
    if (rd32(self + 0x30u) == 0u)
    {
        eax = rd32(self + 0x30u);
        if (rd8(self + 0x35u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x35u);
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, COW_IMG(0x1018a260u), self, 0);
            t3 = g->edx;
            edx = t3;
        }
    }
    if (rd32(self + 0x30u) != 0u)
    {
        ecx = rd32(self + 0x30u);
        if (rd32(ecx) != 0u)
        {
            if (rd32(self + 0x2cu) != 0u)
            {
                eax = rd32(self + 0x2cu);
                if (rd32(eax) != 0u)
                {
                    if (ecx != eax)
                    {
                        wr32(sp0 - 0x34u, sp0 - 0x1cu);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x30u;
                        t4 = cow_thiscall(g, COW_IMG(0x10189c60u), self, 1, sp0 - 0x1cu);
                        t5 = g->edx;
                        g->edx = t5;
                        t6 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x18u, 0);
                        t7 = g->edx;
                        cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x20u, 0);
                        wr32(sp0 - 0x34u, sp0 - 8u);
                        t8 = rd32(rd32(self + 0x2cu));
                        g->eax = t8;
                        g->edx = sp0 - 8u;
                        t9 = cow_thiscall(g, COW_IMG(0x10072180u), t8, 1, sp0 - 8u);
                        t10 = g->edx;
                        wr32(sp0 - 0x34u, rd32(t9));
                        g->edx = t10;
                        cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x18u, 1, rd32(t9));
                        t11 = g->edx;
                        wr32(sp0 - 0x34u, sp0 - 8u);
                        t12 = rd32(rd32(self + 0x30u));
                        g->eax = t12;
                        g->edx = t11;
                        t13 = cow_thiscall(g, COW_IMG(0x10072180u), t12, 1, sp0 - 8u);
                        t14 = g->edx;
                        wr32(sp0 - 0x34u, rd32(t13));
                        g->eax = rd32(t13);
                        t15 = rd32(t13);
                        t16 = cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x20u, 1, t15);
                        t17 = rd32(sp0 - 0x1cu) - rd32(sp0 - 0x18u);
                        wr32(sp0 - 0x34u, t17);
                        cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x1cu, 1, t17);
                        t18 = rd32(sp0 - 0x20u) - rd32(sp0 - 0x18u);
                        wr32(sp0 - 0x34u, t18);
                        g->edx = rd32(sp0 - 0x18u);
                        t19 = rd32(sp0 - 0x18u);
                        cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x20u, 1, t18);
                        t20 = g->edx;
                        if ((int32_t)rd32(sp0 - 0x20u) >= 0)
                        {
                            edx = t20;
                        }
                        else
                        {
                            eax = rd32(sp0 - 0x20u);
                            edx = t20;
                            wr32(sp0 - 0x34u, 0x4f1a00u);
                            g->eax = eax;
                            g->esp = sp0 - 0x30u;
                            t21 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x10u, 1, 0x4f1a00u);
                            t22 = rd32(sp0 - 0x10u) + rd32(sp0 - 0x20u);
                            wr32(sp0 - 0x34u, t22);
                            g->edx = t22;
                            cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x20u, 1, t22);
                            t23 = g->edx;
                            edx = t23;
                        }
                        if ((int32_t)rd32(sp0 - 0x1cu) < 0)
                        {
                            eax = rd32(sp0 - 0x1cu);
                            wr32(sp0 - 0x34u, 0x4f1a00u);
                            g->edx = edx;
                            g->esp = sp0 - 0x30u;
                            cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x10u, 1, 0x4f1a00u);
                            t24 = g->edx;
                            t25 = rd32(sp0 - 0x10u) + rd32(sp0 - 0x1cu);
                            wr32(sp0 - 0x34u, t25);
                            cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x1cu, 1, t25);
                        }
                        if ((int32_t)rd32(sp0 - 0x1cu) <= (int32_t)rd32(sp0 - 0x20u))
                        {
                            edx = rd32(sp0 - 0x20u);
                        }
                        else
                        {
                            eax = rd32(sp0 - 0x1cu);
                            edx = rd32(sp0 - 0x20u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x30u;
                            t26 = cow_thiscall(g, COW_IMG(0x1018a220u), self, 0);
                            t27 = g->edx;
                            g->edx = t27;
                            cow_thiscall(g, COW_IMG(0x1018a260u), self, 0);
                            t28 = g->edx;
                            edx = t28;
                        }
                    }
                }
            }
        }
    }
    if (rd32(self + 0x24u) == 0u)
    {
        eax = rd32(self + 0x24u);
        goto L_1018a587;
    }
    eax = rd32(self + 0x24u);
    if (rd32(self + 0x28u) == eax) goto L_1018a595;
    wr32(sp0 - 0x34u, sp0 - 0x1cu);
    g->eax = sp0 - 0x1cu;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t29 = cow_thiscall(g, COW_IMG(0x10189c60u), self, 1, sp0 - 0x1cu);
    t30 = g->edx;
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x18u, 0);
    t32 = g->edx;
    t33 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x20u, 0);
    wr32(sp0 - 0x34u, sp0 - 8u);
    g->edx = sp0 - 8u;
    t34 = cow_thiscall(g, COW_IMG(0x10072180u), rd32(self + 0x24u), 1, sp0 - 8u);
    t35 = g->edx;
    wr32(sp0 - 0x34u, rd32(t34));
    g->edx = t35;
    cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x18u, 1, rd32(t34));
    t36 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x10072180u), rd32(self + 0x28u), 1, sp0 - 8u);
    t38 = g->edx;
    wr32(sp0 - 0x34u, rd32(t37));
    g->eax = rd32(t37);
    g->edx = t38;
    t39 = rd32(t37);
    t40 = cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x20u, 1, t39);
    t41 = g->edx;
    t42 = rd32(sp0 - 0x1cu) - rd32(sp0 - 0x18u);
    wr32(sp0 - 0x34u, t42);
    t43 = cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x1cu, 1, t42);
    t44 = rd32(sp0 - 0x20u) - rd32(sp0 - 0x18u);
    wr32(sp0 - 0x34u, t44);
    g->edx = t44;
    cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x20u, 1, t44);
    t45 = g->edx;
    if ((int32_t)rd32(sp0 - 0x20u) >= 0)
    {
        edx = t45;
    }
    else
    {
        eax = rd32(sp0 - 0x20u);
        edx = t45;
        wr32(sp0 - 0x34u, 0x4f1a00u);
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x10u, 1, 0x4f1a00u);
        t46 = g->edx;
        t47 = rd32(sp0 - 0x10u) + rd32(sp0 - 0x20u);
        wr32(sp0 - 0x34u, t47);
        g->edx = t46;
        cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x20u, 1, t47);
        t48 = g->edx;
        edx = t48;
    }
    if ((int32_t)rd32(sp0 - 0x1cu) < 0)
    {
        eax = rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x34u, 0x4f1a00u);
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x10u, 1, 0x4f1a00u);
        t49 = rd32(sp0 - 0x10u) + rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x34u, t49);
        g->edx = rd32(sp0 - 0x1cu);
        t50 = rd32(sp0 - 0x1cu);
        cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x1cu, 1, t49);
        t51 = g->edx;
        edx = t51;
    }
    if ((int32_t)rd32(sp0 - 0x1cu) <= (int32_t)rd32(sp0 - 0x20u))
    {
        eax = rd32(sp0 - 0x1cu);
        goto L_1018a595;
    }
    eax = rd32(sp0 - 0x1cu);
L_1018a587: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t52 = cow_thiscall(g, COW_IMG(0x1018a2a0u), self, 0);
    t53 = g->edx;
    g->edx = t53;
    t54 = cow_thiscall(g, COW_IMG(0x1018a2c0u), self, 0);
    t55 = g->edx;
    eax = t54;
    edx = t55;
L_1018a595: ;
    if (rd32(self + 0x24u) == 0u) goto L_1018a757;
    ebx = rd32(self + 0x28u);
    edi = rd32(self + 0x24u);
    if (ebx == 0u) goto L_1018a757;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x1018ada0u), self, 0);
    t56 = g->edx;
    if (edi == ebx) goto L_1018a751;
    edx = t56;
    wr32(sp0 - 0x34u, ebx + 0x30u);
    wr32(sp0 - 0xcu, edi + 0x30u);
    wr32(sp0 - 0x38u, edi + 0x30u);
    wr32(sp0 - 8u, ebx + 0x30u);
    g->esp = sp0 - 0x30u;
    t57 = cow_call_regs(g, COW_IMG(0x1018aeb0u), ebx + 0x30u, self, edx, 0, 2, edi + 0x30u, ebx + 0x30u);
    t58 = g->edx;
    wr32(self + 0x20u, t57);
    g->edx = t58;
    t59 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x1cu, 0);
    t60 = g->edx;
    t61 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x20u, 0);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    t62 = cow_thiscall(g, COW_IMG(0x10072180u), edi, 1, sp0 - 0x10u);
    t63 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->edx = t63;
    t64 = rd32(t62);
    t65 = cow_thiscall(g, COW_IMG(0x10072180u), ebx, 1, sp0 - 0x18u);
    t66 = g->edx;
    if ((int32_t)rd32(t65) >= (int32_t)t64)
    {
        edx = t66;
        wr32(sp0 - 0x34u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t77 = cow_thiscall(g, COW_IMG(0x10072180u), edi, 1, sp0 - 4u);
        t78 = g->edx;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        t79 = rd32(t77);
        t80 = cow_thiscall(g, COW_IMG(0x10072180u), ebx, 1, sp0 - 0x18u);
        t81 = rd32(t80) - t79;
        wr32(sp0 - 0x34u, t81);
        g->edx = t81;
        cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x10u, 1, t81);
        t82 = g->edx;
        t83 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x34u, t83);
        eax = t83;
        edx = t82;
        loc_34 = t83;
    }
    else
    {
        eax = t65;
        edx = t66;
        wr32(sp0 - 0x34u, 0x4f1a00u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t67 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x18u, 1, 0x4f1a00u);
        t68 = g->edx;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        t69 = cow_thiscall(g, COW_IMG(0x10072180u), edi, 1, sp0 - 0x10u);
        t70 = rd32(sp0 - 0x18u) - rd32(t69);
        wr32(sp0 - 0x34u, t70);
        g->edx = t70;
        cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x18u, 1, t70);
        t71 = g->edx;
        wr32(sp0 - 0x34u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->edx = t71;
        t72 = cow_thiscall(g, COW_IMG(0x10072180u), ebx, 1, sp0 - 4u);
        t73 = g->edx;
        t74 = rd32(t72) + rd32(sp0 - 0x18u);
        wr32(sp0 - 0x34u, t74);
        g->eax = t74;
        t75 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x10u, 1, t74);
        t76 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x34u, t76);
        eax = t75;
        edx = t76;
        loc_34 = t76;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t84 = cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x1cu, 1, loc_34);
    t85 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 4u);
    g->edx = t85;
    t86 = cow_thiscall(g, COW_IMG(0x10072180u), edi, 1, sp0 - 4u);
    t87 = g->edx;
    if ((int32_t)rd32(sp0 - 0x14u) >= (int32_t)rd32(t86))
    {
        eax = rd32(t86);
        wr32(sp0 - 0x34u, sp0 - 4u);
        g->eax = eax;
        g->edx = sp0 - 4u;
        g->esp = sp0 - 0x30u;
        t97 = cow_thiscall(g, COW_IMG(0x10072180u), edi, 1, sp0 - 4u);
        t98 = g->edx;
        t99 = rd32(sp0 - 0x14u) - rd32(t97);
        wr32(sp0 - 0x34u, t99);
        g->eax = rd32(t97);
        t100 = rd32(t97);
        t101 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x10u, 1, t99);
        t102 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x34u, t102);
        eax = t101;
        edx = t102;
        loc_34 = t102;
    }
    else
    {
        eax = rd32(t86);
        edx = t87;
        wr32(sp0 - 0x34u, 0x4f1a00u);
        g->eax = eax;
        g->esp = sp0 - 0x30u;
        t88 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x18u, 1, 0x4f1a00u);
        wr32(sp0 - 0x34u, sp0 - 4u);
        g->edx = sp0 - 4u;
        t89 = cow_thiscall(g, COW_IMG(0x10072180u), edi, 1, sp0 - 4u);
        t90 = g->edx;
        t91 = rd32(sp0 - 0x18u) - rd32(t89);
        wr32(sp0 - 0x34u, t91);
        cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x18u, 1, t91);
        t92 = rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u);
        wr32(sp0 - 0x34u, t92);
        g->eax = t92;
        g->edx = rd32(sp0 - 0x14u);
        t93 = rd32(sp0 - 0x14u);
        t94 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x10u, 1, t92);
        t95 = g->edx;
        t96 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x34u, t96);
        eax = t94;
        edx = t95;
        loc_34 = t96;
    }
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x20u, 1, loc_34);
    if (rd32(sp0 - 0x1cu) != 0u)
    {
        d103 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 0x20u) / (double)(int32_t)rd32(sp0 - 0x1cu));
        wrf32(sp0 - 0x18u, (float)d103);
    }
    else
    {
        wr32(sp0 - 0x18u, 0u);
    }
    t104 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x34u, t104);
    t105 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x38u, t105);
    t106 = rd32(sp0 - 8u);
    wr32(sp0 - 0x3cu, t106);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10189490u), rd32(self + 0x20u), 3, t106, t105, t104);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return;
L_1018a751: ;
    wr32(self + 0x20u, edi + 0x30u);
L_1018a757: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018a340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018a340(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
