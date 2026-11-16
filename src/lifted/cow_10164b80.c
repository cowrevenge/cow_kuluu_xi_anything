/* f_0x10164b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10164b80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x1066909cu)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1066909cu));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x1066909cu), 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x106690a0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106690a0u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x106690a0u), 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x10669050u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669050u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x10669050u), 0u);
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x10668facu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668facu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x10668facu), 0u);
        eax = t11;
        edx = t12;
    }
    if (rd32(COW_IMG(0x10668fb0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668fb0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t13 = rd32(ecx);
        g->esp = sp0 - 4u;
        t14 = cow_thiscall(g, rd32(t13), ecx, 1, 1u);
        t15 = g->edx;
        wr32(COW_IMG(0x10668fb0u), 0u);
        eax = t14;
        edx = t15;
    }
    if (rd32(COW_IMG(0x10668fb4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668fb4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t16 = rd32(ecx);
        g->esp = sp0 - 4u;
        t17 = cow_thiscall(g, rd32(t16), ecx, 1, 1u);
        t18 = g->edx;
        wr32(COW_IMG(0x10668fb4u), 0u);
        eax = t17;
        edx = t18;
    }
    if (rd32(COW_IMG(0x10668fb8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668fb8u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t19 = rd32(ecx);
        g->esp = sp0 - 4u;
        t20 = cow_thiscall(g, rd32(t19), ecx, 1, 1u);
        t21 = g->edx;
        wr32(COW_IMG(0x10668fb8u), 0u);
        eax = t20;
        edx = t21;
    }
    if (rd32(COW_IMG(0x10668fbcu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668fbcu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t22 = rd32(ecx);
        g->esp = sp0 - 4u;
        t23 = cow_thiscall(g, rd32(t22), ecx, 1, 1u);
        t24 = g->edx;
        wr32(COW_IMG(0x10668fbcu), 0u);
        eax = t23;
        edx = t24;
    }
    if (rd32(COW_IMG(0x10668fc0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668fc0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t25 = rd32(ecx);
        g->esp = sp0 - 4u;
        t26 = cow_thiscall(g, rd32(t25), ecx, 1, 1u);
        t27 = g->edx;
        wr32(COW_IMG(0x10668fc0u), 0u);
        eax = t26;
        edx = t27;
    }
    if (rd32(COW_IMG(0x10668fc4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668fc4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t28 = rd32(ecx);
        g->esp = sp0 - 4u;
        t29 = cow_thiscall(g, rd32(t28), ecx, 1, 1u);
        t30 = g->edx;
        wr32(COW_IMG(0x10668fc4u), 0u);
        eax = t29;
        edx = t30;
    }
    if (rd32(COW_IMG(0x10668fc8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668fc8u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t31 = rd32(ecx);
        g->esp = sp0 - 4u;
        t32 = cow_thiscall(g, rd32(t31), ecx, 1, 1u);
        t33 = g->edx;
        wr32(COW_IMG(0x10668fc8u), 0u);
        eax = t32;
        edx = t33;
    }
    if (rd32(COW_IMG(0x10669080u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669080u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t34 = rd32(ecx);
        g->esp = sp0 - 4u;
        t35 = cow_thiscall(g, rd32(t34), ecx, 1, 1u);
        t36 = g->edx;
        wr32(COW_IMG(0x10669080u), 0u);
        eax = t35;
        edx = t36;
    }
    if (rd32(COW_IMG(0x10669084u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669084u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t37 = rd32(ecx);
        g->esp = sp0 - 4u;
        t38 = cow_thiscall(g, rd32(t37), ecx, 1, 1u);
        t39 = g->edx;
        wr32(COW_IMG(0x10669084u), 0u);
        eax = t38;
        edx = t39;
    }
    if (rd32(COW_IMG(0x10669088u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669088u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t40 = rd32(ecx);
        g->esp = sp0 - 4u;
        t41 = cow_thiscall(g, rd32(t40), ecx, 1, 1u);
        t42 = g->edx;
        wr32(COW_IMG(0x10669088u), 0u);
        eax = t41;
        edx = t42;
    }
    if (rd32(COW_IMG(0x10668ff0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668ff0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t43 = rd32(ecx);
        g->esp = sp0 - 4u;
        t44 = cow_thiscall(g, rd32(t43), ecx, 1, 1u);
        t45 = g->edx;
        wr32(COW_IMG(0x10668ff0u), 0u);
        eax = t44;
        edx = t45;
    }
    if (rd32(COW_IMG(0x10668fccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668fccu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t46 = rd32(ecx);
        g->esp = sp0 - 4u;
        t47 = cow_thiscall(g, rd32(t46), ecx, 1, 1u);
        t48 = g->edx;
        wr32(COW_IMG(0x10668fccu), 0u);
        eax = t47;
        edx = t48;
    }
    if (rd32(COW_IMG(0x10669058u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669058u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t49 = rd32(ecx);
        g->esp = sp0 - 4u;
        t50 = cow_thiscall(g, rd32(t49), ecx, 1, 1u);
        t51 = g->edx;
        wr32(COW_IMG(0x10669058u), 0u);
        eax = t50;
        edx = t51;
    }
    if (rd32(COW_IMG(0x1066905cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066905cu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t52 = rd32(ecx);
        g->esp = sp0 - 4u;
        t53 = cow_thiscall(g, rd32(t52), ecx, 1, 1u);
        t54 = g->edx;
        wr32(COW_IMG(0x1066905cu), 0u);
        eax = t53;
        edx = t54;
    }
    if (rd32(COW_IMG(0x10669068u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669068u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t55 = rd32(ecx);
        g->esp = sp0 - 4u;
        t56 = cow_thiscall(g, rd32(t55), ecx, 1, 1u);
        t57 = g->edx;
        wr32(COW_IMG(0x10669068u), 0u);
        eax = t56;
        edx = t57;
    }
    if (rd32(COW_IMG(0x1066907cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066907cu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t58 = rd32(ecx);
        g->esp = sp0 - 4u;
        t59 = cow_thiscall(g, rd32(t58), ecx, 1, 1u);
        t60 = g->edx;
        wr32(COW_IMG(0x1066907cu), 0u);
        eax = t59;
        edx = t60;
    }
    if (rd32(COW_IMG(0x1066906cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066906cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t61 = rd32(ecx);
        g->esp = sp0 - 4u;
        t62 = cow_thiscall(g, rd32(t61), ecx, 1, 1u);
        t63 = g->edx;
        wr32(COW_IMG(0x1066906cu), 0u);
        eax = t62;
        edx = t63;
    }
    if (rd32(COW_IMG(0x10669070u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669070u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t64 = rd32(ecx);
        g->esp = sp0 - 4u;
        t65 = cow_thiscall(g, rd32(t64), ecx, 1, 1u);
        t66 = g->edx;
        wr32(COW_IMG(0x10669070u), 0u);
        eax = t65;
        edx = t66;
    }
    if (rd32(COW_IMG(0x10669074u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669074u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t67 = rd32(ecx);
        g->esp = sp0 - 4u;
        t68 = cow_thiscall(g, rd32(t67), ecx, 1, 1u);
        t69 = g->edx;
        wr32(COW_IMG(0x10669074u), 0u);
        eax = t68;
        edx = t69;
    }
    if (rd32(COW_IMG(0x10669078u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669078u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t70 = rd32(ecx);
        g->esp = sp0 - 4u;
        t71 = cow_thiscall(g, rd32(t70), ecx, 1, 1u);
        t72 = g->edx;
        wr32(COW_IMG(0x10669078u), 0u);
        eax = t71;
        edx = t72;
    }
    if (rd32(COW_IMG(0x10668ffcu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668ffcu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t73 = rd32(ecx);
        g->esp = sp0 - 4u;
        t74 = cow_thiscall(g, rd32(t73), ecx, 1, 1u);
        t75 = g->edx;
        wr32(COW_IMG(0x10668ffcu), 0u);
        eax = t74;
        edx = t75;
    }
    if (rd32(COW_IMG(0x10669000u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669000u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t76 = rd32(ecx);
        g->esp = sp0 - 4u;
        t77 = cow_thiscall(g, rd32(t76), ecx, 1, 1u);
        t78 = g->edx;
        wr32(COW_IMG(0x10669000u), 0u);
        eax = t77;
        edx = t78;
    }
    if (rd32(COW_IMG(0x10669004u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669004u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t79 = rd32(ecx);
        g->esp = sp0 - 4u;
        t80 = cow_thiscall(g, rd32(t79), ecx, 1, 1u);
        t81 = g->edx;
        wr32(COW_IMG(0x10669004u), 0u);
        eax = t80;
        edx = t81;
    }
    if (rd32(COW_IMG(0x1066900cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066900cu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t82 = rd32(ecx);
        g->esp = sp0 - 4u;
        t83 = cow_thiscall(g, rd32(t82), ecx, 1, 1u);
        t84 = g->edx;
        wr32(COW_IMG(0x1066900cu), 0u);
        eax = t83;
        edx = t84;
    }
    if (rd32(COW_IMG(0x1066901cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066901cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t85 = rd32(ecx);
        g->esp = sp0 - 4u;
        t86 = cow_thiscall(g, rd32(t85), ecx, 1, 1u);
        t87 = g->edx;
        wr32(COW_IMG(0x1066901cu), 0u);
        eax = t86;
        edx = t87;
    }
    if (rd32(COW_IMG(0x10669024u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669024u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t88 = rd32(ecx);
        g->esp = sp0 - 4u;
        t89 = cow_thiscall(g, rd32(t88), ecx, 1, 1u);
        t90 = g->edx;
        wr32(COW_IMG(0x10669024u), 0u);
        eax = t89;
        edx = t90;
    }
    if (rd32(COW_IMG(0x10669028u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669028u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t91 = rd32(ecx);
        g->esp = sp0 - 4u;
        t92 = cow_thiscall(g, rd32(t91), ecx, 1, 1u);
        t93 = g->edx;
        wr32(COW_IMG(0x10669028u), 0u);
        eax = t92;
        edx = t93;
    }
    if (rd32(COW_IMG(0x1066902cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066902cu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t94 = rd32(ecx);
        g->esp = sp0 - 4u;
        t95 = cow_thiscall(g, rd32(t94), ecx, 1, 1u);
        t96 = g->edx;
        wr32(COW_IMG(0x1066902cu), 0u);
        eax = t95;
        edx = t96;
    }
    if (rd32(COW_IMG(0x10669030u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669030u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t97 = rd32(ecx);
        g->esp = sp0 - 4u;
        t98 = cow_thiscall(g, rd32(t97), ecx, 1, 1u);
        t99 = g->edx;
        wr32(COW_IMG(0x10669030u), 0u);
        eax = t98;
        edx = t99;
    }
    if (rd32(COW_IMG(0x10669034u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669034u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t100 = rd32(ecx);
        g->esp = sp0 - 4u;
        t101 = cow_thiscall(g, rd32(t100), ecx, 1, 1u);
        t102 = g->edx;
        wr32(COW_IMG(0x10669034u), 0u);
        eax = t101;
        edx = t102;
    }
    if (rd32(COW_IMG(0x10669038u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669038u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t103 = rd32(ecx);
        g->esp = sp0 - 4u;
        t104 = cow_thiscall(g, rd32(t103), ecx, 1, 1u);
        t105 = g->edx;
        wr32(COW_IMG(0x10669038u), 0u);
        eax = t104;
        edx = t105;
    }
    if (rd32(COW_IMG(0x10669040u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669040u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t106 = rd32(ecx);
        g->esp = sp0 - 4u;
        t107 = cow_thiscall(g, rd32(t106), ecx, 1, 1u);
        t108 = g->edx;
        wr32(COW_IMG(0x10669040u), 0u);
        eax = t107;
        edx = t108;
    }
    if (rd32(COW_IMG(0x1066903cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066903cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t109 = rd32(ecx);
        g->esp = sp0 - 4u;
        t110 = cow_thiscall(g, rd32(t109), ecx, 1, 1u);
        t111 = g->edx;
        wr32(COW_IMG(0x1066903cu), 0u);
        eax = t110;
        edx = t111;
    }
    if (rd32(COW_IMG(0x10669048u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669048u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t112 = rd32(ecx);
        g->esp = sp0 - 4u;
        t113 = cow_thiscall(g, rd32(t112), ecx, 1, 1u);
        t114 = g->edx;
        wr32(COW_IMG(0x10669048u), 0u);
        eax = t113;
        edx = t114;
    }
    if (rd32(COW_IMG(0x1066904cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066904cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t115 = rd32(ecx);
        g->esp = sp0 - 4u;
        t116 = cow_thiscall(g, rd32(t115), ecx, 1, 1u);
        t117 = g->edx;
        wr32(COW_IMG(0x1066904cu), 0u);
        eax = t116;
        edx = t117;
    }
    if (rd32(COW_IMG(0x10669044u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669044u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t118 = rd32(ecx);
        g->esp = sp0 - 4u;
        t119 = cow_thiscall(g, rd32(t118), ecx, 1, 1u);
        t120 = g->edx;
        wr32(COW_IMG(0x10669044u), 0u);
        eax = t119;
        edx = t120;
    }
    if (rd32(COW_IMG(0x10668fd0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668fd0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t121 = rd32(ecx);
        g->esp = sp0 - 4u;
        t122 = cow_thiscall(g, rd32(t121), ecx, 1, 1u);
        t123 = g->edx;
        wr32(COW_IMG(0x10668fd0u), 0u);
        eax = t122;
        edx = t123;
    }
    if (rd32(COW_IMG(0x10668fd4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668fd4u));
        g->edx = rd32(ecx);
        t124 = rd32(ecx);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t124), ecx, 1, 1u);
        t125 = g->edx;
        wr32(COW_IMG(0x10668fd4u), 0u);
        edx = t125;
    }
    if (rd32(COW_IMG(0x10669008u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669008u));
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t126 = g->edx;
        edx = t126;
    }
    t127 = rd32(COW_IMG(0x1062194cu));
    wr32(COW_IMG(0x1066909cu), 0u);
    wr32(COW_IMG(0x106690a0u), 0u);
    wr32(COW_IMG(0x10669050u), 0u);
    wr32(COW_IMG(0x10668facu), 0u);
    wr32(COW_IMG(0x10668fb0u), 0u);
    wr32(COW_IMG(0x10668fb4u), 0u);
    wr32(COW_IMG(0x10668fb8u), 0u);
    wr32(COW_IMG(0x10668fbcu), 0u);
    wr32(COW_IMG(0x10668fc0u), 0u);
    wr32(COW_IMG(0x10668fc4u), 0u);
    wr32(COW_IMG(0x10668fc8u), 0u);
    wr32(COW_IMG(0x10669080u), 0u);
    wr32(COW_IMG(0x10669084u), 0u);
    wr32(COW_IMG(0x10669088u), 0u);
    wr32(COW_IMG(0x10668ff0u), 0u);
    wr32(COW_IMG(0x10668fccu), 0u);
    wr32(COW_IMG(0x10669058u), 0u);
    wr32(COW_IMG(0x1066905cu), 0u);
    wr32(COW_IMG(0x10669068u), 0u);
    wr32(COW_IMG(0x1066906cu), 0u);
    wr32(COW_IMG(0x10669070u), 0u);
    wr32(COW_IMG(0x10669074u), 0u);
    wr32(COW_IMG(0x10669078u), 0u);
    wr32(COW_IMG(0x10668ffcu), 0u);
    wr32(COW_IMG(0x10669000u), 0u);
    wr32(COW_IMG(0x10669004u), 0u);
    wr32(COW_IMG(0x1066900cu), 0u);
    wr32(COW_IMG(0x1066901cu), 0u);
    wr32(COW_IMG(0x10669024u), 0u);
    wr32(COW_IMG(0x10669028u), 0u);
    wr32(COW_IMG(0x1066902cu), 0u);
    wr32(COW_IMG(0x10669030u), 0u);
    wr32(COW_IMG(0x10669034u), 0u);
    wr32(COW_IMG(0x10669038u), 0u);
    wr32(COW_IMG(0x10669040u), 0u);
    wr32(COW_IMG(0x1066903cu), 0u);
    wr32(COW_IMG(0x10669048u), 0u);
    wr32(COW_IMG(0x1066904cu), 0u);
    wr32(COW_IMG(0x10669044u), 0u);
    wr32(COW_IMG(0x10668fd0u), 0u);
    wr32(COW_IMG(0x10668fd4u), 0u);
    wr32(COW_IMG(0x10669008u), 0u);
    if (t127 != 0u)
    {
        eax = t127;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t128 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t129 = g->edx;
        cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x1062194cu), 0);
        wr32(COW_IMG(0x1062194cu), 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10164b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10164b80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
