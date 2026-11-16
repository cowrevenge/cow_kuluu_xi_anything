/* f_0x101ce360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ce360(Guest* g)
{
    double d36;
    double d38;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
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
    uint32_t t37;
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_101ce690;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x42u, 0x8fu, 1u, 0xffffffffu);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_101ce3dd;
    }
    eax = t4;
    edx = t6;
    g->eax = eax;
    g->edx = edx;
    t7 = rd32(COW_IMG(0x106631d4u));
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x101d5dc0u), t7, 1, self);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_101ce3d3;
    }
    eax = t8;
    edx = t10;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x101ccf50u), eax, self, g->edx, 0, 1, 5u);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_call_regs(g, COW_IMG(0x101ce1e0u), t11, self, g->edx, 0, 2, 1u, 5u);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_call_regs(g, COW_IMG(0x101d39a0u), t13, rd32(COW_IMG(0x106631d4u)), g->edx, 0, 1, 0x80808080u);
    t16 = g->edx;
    t17 = cow_thiscall(g, COW_IMG(0x101d56a0u), rd32(COW_IMG(0x106631d4u)), 1, 2u);
    return (t17 & 0xffffff00u) | 1u;
L_101ce3d3: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t18 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    return (t18 & 0xffffff00u) | 1u;
L_101ce3dd: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x42u, 0x90u, 1u, 0xffffffffu);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_101ce44b;
    }
    eax = t19;
    edx = t21;
    t22 = (eax & 0xffffff00u) | rd8(self + 5u);
    t23 = rd32(self + 0x10u);
    g->ecx = t23;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t24 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t23, t22);
    t25 = g->ecx;
    t26 = g->edx;
    if ((rd8(t24 + 0x11u) & 0x40u) == 0u)
    {
        eax = t24 + 0x10u;
        ecx = (t25 & 0xffffff00u) | rd8(t24 + 0x11u);
        edx = t26;
        goto L_101ce43d;
    }
    eax = t24 + 0x10u;
    edx = t26;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_call_regs(g, COW_IMG(0x101ccf50u), eax, self, g->edx, 0, 1, 6u);
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_call_regs(g, COW_IMG(0x101ce1e0u), t27, self, g->edx, 0, 2, 1u, 6u);
    t30 = g->edx;
    g->edx = t30;
    t31 = rd32(COW_IMG(0x106631d4u));
    t32 = cow_call_regs(g, COW_IMG(0x101d39a0u), t29, t31, g->edx, 0, 1, 0x80808080u);
    t33 = g->ecx;
    t34 = g->edx;
    t35 = cow_thiscall(g, COW_IMG(0x10037bf0u), t33, 0);
    d36 = cow_take_float(g);
    fpush(g, d36);
    return (t35 & 0xffffff00u) | 1u;
L_101ce43d: ;
    wr8(self + 0x2eu, 1u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t37 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    d38 = cow_take_float(g);
    fpush(g, d38);
    return (t37 & 0xffffff00u) | 1u;
L_101ce44b: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t39 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x42u, 0x34u, 0u, 0xffffffffu);
    t40 = g->ecx;
    t41 = g->edx;
    if ((uint8_t)t39 == 0u)
    {
        eax = t39;
        ecx = t40;
        edx = t41;
        edi = 0u;
    }
    else
    {
        eax = t39;
        edx = t41;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t42 = cow_call_regs(g, COW_IMG(0x101cd060u), eax, g->ecx, g->edx, 0, 1, 3u);
        t43 = g->edx;
        g->edx = t43;
        t44 = cow_thiscall(g, COW_IMG(0x101cd0a0u), self, 1, t42);
        t45 = g->ecx;
        t46 = g->edx;
        eax = (uint8_t)t44;
        ecx = t45;
        edx = t46;
        edi = (uint8_t)t44;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t47 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x42u, 0x33u, 0u, 0xffffffffu);
    t48 = g->ecx;
    t49 = g->edx;
    if ((uint8_t)t47 == 0u)
    {
        eax = t47;
        ecx = t48;
        edx = t49;
    }
    else
    {
        eax = t47;
        edx = t49;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t50 = cow_call_regs(g, COW_IMG(0x101cd060u), eax, g->ecx, g->edx, 0, 1, 1u);
        t51 = g->edx;
        g->edx = t51;
        t52 = cow_thiscall(g, COW_IMG(0x101cd0a0u), self, 1, t50);
        t53 = g->ecx;
        t54 = g->edx;
        eax = (uint8_t)t52;
        ecx = t53;
        edx = t54;
        edi = (uint8_t)t52;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t55 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x42u, 0x31u, 0u, 0xffffffffu);
    t56 = g->ecx;
    t57 = g->edx;
    if ((uint8_t)t55 == 0u)
    {
        eax = t55;
        ecx = t56;
        edx = t57;
    }
    else
    {
        eax = t55;
        edx = t57;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t58 = cow_call_regs(g, COW_IMG(0x101cd060u), eax, g->ecx, g->edx, 0, 1, 0u);
        t59 = g->edx;
        g->edx = t59;
        t60 = cow_thiscall(g, COW_IMG(0x101cd0a0u), self, 1, t58);
        t61 = g->ecx;
        t62 = g->edx;
        eax = (uint8_t)t60;
        ecx = t61;
        edx = t62;
        edi = (uint8_t)t60;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t63 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x42u, 0x32u, 0u, 0xffffffffu);
    t64 = g->ecx;
    t65 = g->edx;
    if ((uint8_t)t63 == 0u)
    {
        eax = t63;
        ecx = t64;
        edx = t65;
    }
    else
    {
        eax = t63;
        edx = t65;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t66 = cow_call_regs(g, COW_IMG(0x101cd060u), eax, g->ecx, g->edx, 0, 1, 2u);
        t67 = g->edx;
        g->edx = t67;
        t68 = cow_thiscall(g, COW_IMG(0x101cd0a0u), self, 1, t66);
        t69 = g->ecx;
        t70 = g->edx;
        eax = (uint8_t)t68;
        ecx = t69;
        edx = t70;
        edi = (uint8_t)t68;
    }
    if (edi == 0u) goto L_101ce512;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t71 = cow_thiscall(g, COW_IMG(0x101d56a0u), rd32(COW_IMG(0x106631d4u)), 1, 0u);
    return (t71 & 0xffffff00u) | 1u;
L_101ce512: ;
    g->edx = edx;
    t72 = rd32(self + 0x20u);
    g->esp = sp0 - 8u;
    t73 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x42u, 0x8du, 1u, 0xffffffffu);
    t74 = g->ecx;
    t75 = g->edx;
    if ((uint8_t)t73 == 0u)
    {
        eax = t73;
        ecx = t74;
        edx = t75;
        edi = t72;
    }
    else
    {
        ecx = t74;
        edx = t75;
        edi = t72;
        t76 = rd32(self + 0x20u) - 1u;
        t77 = rd32(self + 0x20u);
        wr32(self + 0x20u, t76);
        if ((int32_t)(t77 - 1u) >= 0)
        {
            eax = t76;
        }
        else
        {
            eax = t76;
            wr32(self + 0x20u, 3u);
        }
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t78 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x42u, 0x8eu, 1u, 0xffffffffu);
    t79 = g->edx;
    if ((uint8_t)t78 == 0u)
    {
        eax = t78;
        edx = t79;
    }
    else
    {
        edx = t79;
        t80 = rd32(self + 0x20u) + 1u;
        wr32(self + 0x20u, t80);
        if ((int32_t)t80 < 4)
        {
            eax = t80;
        }
        else
        {
            eax = t80;
            wr32(self + 0x20u, 0u);
        }
    }
    if (edi != rd32(self + 0x20u))
    {
        g->edx = edx;
        g->esp = sp0 - 8u;
        t81 = cow_thiscall(g, COW_IMG(0x101cebe0u), self, 0);
        t82 = g->edx;
        if ((uint8_t)t81 != 0u)
        {
            eax = t81;
        }
        else
        {
            edx = t82;
            g->esp = sp0 - 0x10u;
            t83 = cow_thiscall(g, COW_IMG(0x101ceaf0u), self, 0);
            t84 = t83 - (uint32_t)((int32_t)t83 >> 0x1fu);
            t85 = cow_thiscall(g, COW_IMG(0x101ceb40u), self, 0);
            t86 = t85 - (uint32_t)((int32_t)t85 >> 0x1fu);
            t87 = rd32(self + 0x20u);
            cow_thiscall(g, COW_IMG(0x101cdf50u), self, 1, t87);
            t88 = rd32(self + 0x1cu);
            t89 = rd32(self + 0x18u);
            t90 = rd32(self + 0x14u);
            t91 = (uint32_t)(int8_t)rd8(self + 6u);
            g->edx = t90;
            cow_thiscall(g, COW_IMG(0x101cdd90u), self, 4, t91, t90, t89, t88);
            t92 = g->edx;
            t93 = cow_thiscall(g, COW_IMG(0x101ceaf0u), self, 0);
            t94 = t93 - (uint32_t)((int32_t)t93 >> 0x1fu);
            t95 = cow_thiscall(g, COW_IMG(0x101ceb40u), self, 0);
            t96 = (uint32_t)((int32_t)t86 >> 1u) - (uint32_t)((int32_t)(t95 - (uint32_t)((int32_t)t95 >> 0x1fu)) >> 1u);
            t97 = (uint32_t)((int32_t)t84 >> 1u) - (uint32_t)((int32_t)t94 >> 1u);
            g->edx = (uint32_t)((int32_t)t95 >> 0x1fu);
            cow_thiscall(g, COW_IMG(0x101cd150u), self, 2, t97, t96);
            t98 = g->edx;
            g->edx = t98;
            t99 = cow_thiscall(g, COW_IMG(0x101cec00u), self, 0);
            t100 = g->edx;
            if ((uint8_t)t99 == 0u)
            {
                eax = t99;
                edx = t100;
            }
            else
            {
                edx = t100;
                t101 = rd32(self + 0x14u);
                wr32(self + 0x18u, 0u);
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t102 = cow_thiscall(g, COW_IMG(0x101ceaf0u), self, 0);
                t103 = g->edx;
                if ((int32_t)t101 >= (int32_t)(t102 + rd32(self + 0x14u))) goto L_101ce669;
                edx = t103;
                ebx = t101;
L_101ce60f: ;
                g->edx = edx;
                t104 = rd32(self + 0x1cu);
                g->esp = sp0 - 0x10u;
                t105 = cow_thiscall(g, COW_IMG(0x101ceb40u), self, 0);
                t106 = g->edx;
                if ((int32_t)t104 >= (int32_t)(t105 + rd32(self + 0x1cu)))
                {
                    edx = t106;
                    goto L_101ce65a;
                }
                eax = t105 + rd32(self + 0x1cu);
                edx = t106;
                edi = t104;
L_101ce620: ;
                if ((int32_t)ebx < 20)
                {
                    if ((int32_t)edi < 26)
                    {
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t107 = cow_thiscall(g, COW_IMG(0x101d5df0u), rd32(COW_IMG(0x106631d4u)), 2, ebx, edi);
                        t108 = g->edx;
                        if ((int32_t)t107 <= 0)
                        {
                            edx = t108;
                        }
                        else
                        {
                            eax = t107;
                            edx = t108;
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t109 = cow_thiscall(g, COW_IMG(0x101d5df0u), rd32(COW_IMG(0x106631d4u)), 2, ebx, edi);
                            t110 = g->edx;
                            wr32(self + 0x18u, t109);
                            edx = t110;
                        }
                    }
                }
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t111 = cow_thiscall(g, COW_IMG(0x101ceb40u), self, 0);
                t112 = g->edx;
                if ((int32_t)(edi + 1u) < (int32_t)(t111 + rd32(self + 0x1cu)))
                {
                    eax = t111 + rd32(self + 0x1cu);
                    edx = t112;
                    edi = edi + 1u;
                    goto L_101ce620;
                }
                edx = t112;
L_101ce65a: ;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t113 = cow_thiscall(g, COW_IMG(0x101ceaf0u), self, 0);
                t114 = g->edx;
                if ((int32_t)(ebx + 1u) < (int32_t)(t113 + rd32(self + 0x14u)))
                {
                    edx = t114;
                    ebx = ebx + 1u;
                    goto L_101ce60f;
                }
L_101ce669: ;
                t115 = rd32(self + 0x1cu);
                t116 = rd32(self + 0x18u);
                t117 = rd32(self + 0x14u);
                t118 = (uint32_t)(int8_t)rd8(self + 6u);
                g->eax = t117;
                g->edx = t116;
                g->esp = sp0 - 0x10u;
                t119 = cow_thiscall(g, COW_IMG(0x101cdd90u), self, 4, t118, t117, t116, t115);
                t120 = g->edx;
                eax = t119;
                edx = t120;
            }
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t121 = cow_thiscall(g, COW_IMG(0x101d56a0u), rd32(COW_IMG(0x106631d4u)), 1, 1u);
            eax = t121;
        }
    }
L_101ce690: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ce360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ce360(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
