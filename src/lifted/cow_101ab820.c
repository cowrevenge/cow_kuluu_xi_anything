/* f_0x101ab820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ab820(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
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

    if (rd8(self) != 0u)
    {
        if (rd32(rd32(COW_IMG(0x1057876cu)) + 0xc4u) == 0u)
        {
            eax = rd32(COW_IMG(0x1057876cu));
            ecx = rd32(rd32(COW_IMG(0x1057876cu)) + 0xc4u);
            edx = in_edx;
            goto L_101ab853;
        }
        if (rd32(COW_IMG(0x10662d40u)) == 0u) goto L_101abb37;
        ecx = rd32(COW_IMG(0x10662d40u));
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_thiscall(g, COW_IMG(0x101b5c90u), ecx, 0);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 == 0u) goto L_101abb37;
        eax = t1;
        ecx = t2;
        edx = t3;
L_101ab853: ;
        g->edx = edx;
        g->esp = sp0;
        t4 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x2bu, 0u, 0xffffffffu);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint8_t)t4 == 0u)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            goto L_101ab86b;
        }
        edx = t6;
        loc_4 = 2u;
L_101ab8b1: ;
        g->edx = edx;
        g->esp = sp0;
        t16 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, loc_4);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
L_101ab8bb: ;
        g->edx = edx;
        g->esp = sp0;
        t19 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x93u, 1u, 0xffffffffu);
        t20 = g->ecx;
        t21 = g->edx;
        if ((uint8_t)t19 == 0u)
        {
            eax = t19;
            ecx = t20;
            edx = t21;
        }
        else
        {
            edx = t21;
            g->edx = edx;
            g->esp = sp0;
            t22 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 5u);
            t23 = g->ecx;
            t24 = g->edx;
            eax = t22;
            ecx = t23;
            edx = t24;
        }
        g->edx = edx;
        g->esp = sp0;
        t25 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x93u, 0u, 0xffffffffu);
        t26 = g->ecx;
        t27 = g->edx;
        if ((uint8_t)t25 == 0u)
        {
            eax = t25;
            ecx = t26;
            edx = t27;
        }
        else
        {
            edx = t27;
            g->edx = edx;
            g->esp = sp0;
            t28 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0x1du);
            t29 = g->ecx;
            t30 = g->edx;
            eax = t28;
            ecx = t29;
            edx = t30;
        }
        g->edx = edx;
        g->esp = sp0;
        t31 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x93u, 5u, 0xffffffffu);
        t32 = g->ecx;
        t33 = g->edx;
        if ((uint8_t)t31 == 0u)
        {
            eax = t31;
            ecx = t32;
            edx = t33;
        }
        else
        {
            edx = t33;
            g->edx = edx;
            g->esp = sp0;
            t34 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0x20u);
            t35 = g->ecx;
            t36 = g->edx;
            eax = t34;
            ecx = t35;
            edx = t36;
        }
        g->edx = edx;
        g->esp = sp0;
        t37 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x94u, 1u, 0xffffffffu);
        t38 = g->ecx;
        t39 = g->edx;
        if ((uint8_t)t37 == 0u)
        {
            eax = t37;
            ecx = t38;
            edx = t39;
        }
        else
        {
            edx = t39;
            g->edx = edx;
            g->esp = sp0;
            t40 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 6u);
            t41 = g->ecx;
            t42 = g->edx;
            eax = t40;
            ecx = t41;
            edx = t42;
        }
        g->edx = edx;
        g->esp = sp0;
        t43 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x94u, 1u, 0u);
        t44 = g->ecx;
        t45 = g->edx;
        if ((uint8_t)t43 != 0u)
        {
            edx = t45;
            goto L_101ab975;
        }
        eax = t43;
        ecx = t44;
        edx = t45;
        g->edx = edx;
        g->esp = sp0;
        t46 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x8cu, 1u, 0xffffffffu);
        t47 = g->ecx;
        t48 = g->edx;
        if ((uint8_t)t46 == 0u)
        {
            ecx = t47;
            edx = t48;
            goto L_101ab981;
        }
        edx = t48;
L_101ab975: ;
        g->edx = edx;
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0x1eu);
        t49 = g->ecx;
        t50 = g->edx;
        ecx = t49;
        edx = t50;
L_101ab981: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t51 = cow_stdcall(g, COW_IMG(0x1025e040u), 0);
        t52 = g->ecx;
        t53 = g->edx;
        if ((uint8_t)t51 == 0u)
        {
            eax = t51;
            ecx = t52;
            edx = t53;
        }
        else
        {
            eax = t51;
            ecx = t52;
            edx = t53;
        }
        g->edx = edx;
        g->esp = sp0 - 8u;
        t54 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 2, 0x3eu, 0x94u);
        t55 = g->ecx;
        t56 = g->edx;
        if ((uint8_t)t54 == 0u)
        {
            eax = t54;
            ecx = t55;
            edx = t56;
        }
        else
        {
            edx = t56;
            g->edx = edx;
            g->esp = sp0;
            t57 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0x1fu);
            t58 = g->ecx;
            t59 = g->edx;
            eax = t57;
            ecx = t58;
            edx = t59;
        }
        g->edx = edx;
        g->esp = sp0;
        t60 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x18u, 1u, 0xffffffffu);
        t61 = g->ecx;
        t62 = g->edx;
        if ((uint8_t)t60 == 0u)
        {
            eax = t60;
            ecx = t61;
            edx = t62;
        }
        else
        {
            edx = t62;
            g->edx = edx;
            g->esp = sp0;
            t63 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 7u);
            t64 = g->ecx;
            t65 = g->edx;
            eax = t63;
            ecx = t64;
            edx = t65;
        }
        g->edx = edx;
        g->esp = sp0;
        t66 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x11u, 1u, 0xffffffffu);
        t67 = g->ecx;
        t68 = g->edx;
        if ((uint8_t)t66 == 0u)
        {
            eax = t66;
            ecx = t67;
            edx = t68;
        }
        else
        {
            edx = t68;
            g->edx = edx;
            g->esp = sp0;
            t69 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 8u);
            t70 = g->ecx;
            t71 = g->edx;
            eax = t69;
            ecx = t70;
            edx = t71;
        }
        g->edx = edx;
        g->esp = sp0;
        t72 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x1eu, 1u, 0xffffffffu);
        t73 = g->ecx;
        t74 = g->edx;
        if ((uint8_t)t72 == 0u)
        {
            eax = t72;
            ecx = t73;
            edx = t74;
        }
        else
        {
            edx = t74;
            g->edx = edx;
            g->esp = sp0;
            t75 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0x11u);
            t76 = g->ecx;
            t77 = g->edx;
            eax = t75;
            ecx = t76;
            edx = t77;
        }
        g->edx = edx;
        g->esp = sp0;
        t78 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x1fu, 1u, 0xffffffffu);
        t79 = g->ecx;
        t80 = g->edx;
        if ((uint8_t)t78 == 0u)
        {
            eax = t78;
            ecx = t79;
            edx = t80;
        }
        else
        {
            edx = t80;
            g->edx = edx;
            g->esp = sp0;
            t81 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0x15u);
            t82 = g->ecx;
            t83 = g->edx;
            eax = t81;
            ecx = t82;
            edx = t83;
        }
        g->edx = edx;
        g->esp = sp0;
        t84 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x14u, 1u, 0xffffffffu);
        t85 = g->ecx;
        t86 = g->edx;
        if ((uint8_t)t84 == 0u)
        {
            eax = t84;
            ecx = t85;
            edx = t86;
        }
        else
        {
            edx = t86;
            g->edx = edx;
            g->esp = sp0;
            t87 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0x12u);
            t88 = g->ecx;
            t89 = g->edx;
            eax = t87;
            ecx = t88;
            edx = t89;
        }
        g->edx = edx;
        g->esp = sp0;
        t90 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x86u, 1u, 0xffffffffu);
        t91 = g->ecx;
        t92 = g->edx;
        if ((uint8_t)t90 == 0u)
        {
            eax = t90;
            ecx = t91;
            edx = t92;
        }
        else
        {
            edx = t92;
            g->edx = edx;
            g->esp = sp0;
            t93 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0xau);
            t94 = g->ecx;
            t95 = g->edx;
            eax = t93;
            ecx = t94;
            edx = t95;
        }
        g->edx = edx;
        g->esp = sp0;
        t96 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x85u, 1u, 0xffffffffu);
        t97 = g->ecx;
        t98 = g->edx;
        if ((uint8_t)t96 == 0u)
        {
            eax = t96;
            ecx = t97;
            edx = t98;
        }
        else
        {
            edx = t98;
            g->edx = edx;
            g->esp = sp0;
            t99 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0xbu);
            t100 = g->ecx;
            t101 = g->edx;
            eax = t99;
            ecx = t100;
            edx = t101;
        }
        g->edx = edx;
        g->esp = sp0;
        t102 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x22u, 1u, 0xffffffffu);
        t103 = g->ecx;
        t104 = g->edx;
        if ((uint8_t)t102 == 0u)
        {
            eax = t102;
            ecx = t103;
            edx = t104;
        }
        else
        {
            edx = t104;
            g->edx = edx;
            g->esp = sp0;
            t105 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0xcu);
            t106 = g->ecx;
            t107 = g->edx;
            eax = t105;
            ecx = t106;
            edx = t107;
        }
        g->edx = edx;
        g->esp = sp0;
        t108 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x24u, 1u, 0xffffffffu);
        t109 = g->ecx;
        t110 = g->edx;
        if ((uint8_t)t108 == 0u)
        {
            eax = t108;
            ecx = t109;
            edx = t110;
        }
        else
        {
            edx = t110;
            g->edx = edx;
            g->esp = sp0;
            t111 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0xeu);
            t112 = g->ecx;
            t113 = g->edx;
            eax = t111;
            ecx = t112;
            edx = t113;
        }
        g->edx = edx;
        g->esp = sp0;
        t114 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x25u, 1u, 0xffffffffu);
        t115 = g->ecx;
        t116 = g->edx;
        if ((uint8_t)t114 == 0u)
        {
            eax = t114;
            ecx = t115;
            edx = t116;
        }
        else
        {
            edx = t116;
            g->edx = edx;
            g->esp = sp0;
            t117 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0xfu);
            t118 = g->ecx;
            t119 = g->edx;
            eax = t117;
            ecx = t118;
            edx = t119;
        }
        g->edx = edx;
        g->esp = sp0;
        t120 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x26u, 1u, 0xffffffffu);
        t121 = g->ecx;
        t122 = g->edx;
        if ((uint8_t)t120 == 0u)
        {
            eax = t120;
            ecx = t121;
            edx = t122;
        }
        else
        {
            edx = t122;
            g->edx = edx;
            g->esp = sp0;
            t123 = cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0x10u);
            t124 = g->ecx;
            t125 = g->edx;
            eax = t123;
            ecx = t124;
            edx = t125;
        }
        g->edx = edx;
        g->esp = sp0;
        t126 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x2fu, 1u, 0xffffffffu);
        t127 = g->edx;
        if ((uint8_t)t126 != 0u)
        {
            edx = t127;
            g->esp = sp0;
            cow_thiscall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), 1, 0x13u);
        }
    }
L_101abb37: ;
    return;
L_101ab86b: ;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x2cu, 0u, 0xffffffffu);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_101ab883;
    }
    edx = t9;
    loc_4 = 1u;
    goto L_101ab8b1;
L_101ab883: ;
    g->edx = edx;
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x2eu, 0u, 0xffffffffu);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_101ab89b;
    }
    edx = t12;
    loc_4 = 4u;
    goto L_101ab8b1;
L_101ab89b: ;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x2du, 0u, 0xffffffffu);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_101ab8bb;
    }
    edx = t15;
    loc_4 = 3u;
    goto L_101ab8b1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ab820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ab820(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
