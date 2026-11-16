/* f_0x101d1e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d1e90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t130;
    uint32_t t131;
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

    if (rd32(COW_IMG(0x10663180u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        esi = rd32(COW_IMG(0x10663180u));
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x101c8230u), esi, 0);
        t2 = g->ecx;
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t5 = g->edx;
        wr32(COW_IMG(0x10663180u), 0u);
        eax = t4;
        edx = t5;
    }
    if (rd32(COW_IMG(0x10663184u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10663184u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t6 = cow_thiscall(g, COW_IMG(0x101c8230u), esi, 0);
        t7 = g->ecx;
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t10 = g->edx;
        wr32(COW_IMG(0x10663184u), 0u);
        eax = t9;
        edx = t10;
    }
    if (rd32(COW_IMG(0x106634ccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106634ccu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t11 = rd32(ecx);
        g->esp = sp0 - 8u;
        t12 = cow_thiscall(g, rd32(t11), ecx, 1, 1u);
        t13 = g->edx;
        wr32(COW_IMG(0x106634ccu), 0u);
        eax = t12;
        edx = t13;
    }
    if (rd32(COW_IMG(0x106634bcu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x106634bcu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x106634bcu));
        g->edx = rd32(ecx);
        t14 = rd32(ecx);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t14), ecx, 1, 1u);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(COW_IMG(0x106634bcu), 0u);
        ecx = t15;
        edx = t16;
    }
    if (rd32(COW_IMG(0x10664424u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10664424u));
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(COW_IMG(0x10664424u), 0u);
        ecx = t17;
        edx = t18;
    }
    if (rd32(COW_IMG(0x10664428u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10664428u));
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t19 = g->ecx;
        t20 = g->edx;
        wr32(COW_IMG(0x10664428u), 0u);
        ecx = t19;
        edx = t20;
    }
    if (rd32(COW_IMG(0x10664420u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10664420u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10664420u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t21 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t22 = g->edx;
        wr32(COW_IMG(0x10664420u), 0u);
        eax = t21;
        edx = t22;
    }
    if (rd32(COW_IMG(0x1066441cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066441cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t23 = rd32(ecx);
        g->esp = sp0 - 8u;
        t24 = cow_thiscall(g, rd32(t23), ecx, 1, 1u);
        t25 = g->edx;
        wr32(COW_IMG(0x1066441cu), 0u);
        eax = t24;
        edx = t25;
    }
    if (rd32(COW_IMG(0x10664418u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664418u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t26 = rd32(ecx);
        g->esp = sp0 - 8u;
        t27 = cow_thiscall(g, rd32(t26), ecx, 1, 1u);
        t28 = g->edx;
        wr32(COW_IMG(0x10664418u), 0u);
        eax = t27;
        edx = t28;
    }
    if (rd32(COW_IMG(0x10664414u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664414u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t29 = rd32(ecx);
        g->esp = sp0 - 8u;
        t30 = cow_thiscall(g, rd32(t29), ecx, 1, 1u);
        t31 = g->edx;
        wr32(COW_IMG(0x10664414u), 0u);
        eax = t30;
        edx = t31;
    }
    if (rd32(COW_IMG(0x10664410u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664410u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t32 = rd32(ecx);
        g->esp = sp0 - 8u;
        t33 = cow_thiscall(g, rd32(t32), ecx, 1, 1u);
        t34 = g->edx;
        wr32(COW_IMG(0x10664410u), 0u);
        eax = t33;
        edx = t34;
    }
    if (rd32(COW_IMG(0x1066440cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066440cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t35 = rd32(ecx);
        g->esp = sp0 - 8u;
        t36 = cow_thiscall(g, rd32(t35), ecx, 1, 1u);
        t37 = g->edx;
        wr32(COW_IMG(0x1066440cu), 0u);
        eax = t36;
        edx = t37;
    }
    if (rd32(COW_IMG(0x10664408u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664408u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t38 = rd32(ecx);
        g->esp = sp0 - 8u;
        t39 = cow_thiscall(g, rd32(t38), ecx, 1, 1u);
        t40 = g->edx;
        wr32(COW_IMG(0x10664408u), 0u);
        eax = t39;
        edx = t40;
    }
    if (rd32(COW_IMG(0x1066378cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066378cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t41 = rd32(ecx);
        g->esp = sp0 - 8u;
        t42 = cow_thiscall(g, rd32(t41), ecx, 1, 1u);
        t43 = g->edx;
        wr32(COW_IMG(0x1066378cu), 0u);
        eax = t42;
        edx = t43;
    }
    if (rd32(COW_IMG(0x10663788u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663788u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t44 = rd32(ecx);
        g->esp = sp0 - 8u;
        t45 = cow_thiscall(g, rd32(t44), ecx, 1, 1u);
        t46 = g->edx;
        wr32(COW_IMG(0x10663788u), 0u);
        eax = t45;
        edx = t46;
    }
    if (rd32(COW_IMG(0x10663784u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663784u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t47 = rd32(ecx);
        g->esp = sp0 - 8u;
        t48 = cow_thiscall(g, rd32(t47), ecx, 1, 1u);
        t49 = g->edx;
        wr32(COW_IMG(0x10663784u), 0u);
        eax = t48;
        edx = t49;
    }
    if (rd32(COW_IMG(0x10663888u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663888u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t50 = rd32(ecx);
        g->esp = sp0 - 8u;
        t51 = cow_thiscall(g, rd32(t50), ecx, 1, 1u);
        t52 = g->edx;
        wr32(COW_IMG(0x10663888u), 0u);
        eax = t51;
        edx = t52;
    }
    if (rd32(COW_IMG(0x10663648u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663648u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t53 = rd32(ecx);
        g->esp = sp0 - 8u;
        t54 = cow_thiscall(g, rd32(t53), ecx, 1, 1u);
        t55 = g->edx;
        wr32(COW_IMG(0x10663648u), 0u);
        eax = t54;
        edx = t55;
    }
    if (rd32(COW_IMG(0x10663520u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663520u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t56 = rd32(ecx);
        g->esp = sp0 - 8u;
        t57 = cow_thiscall(g, rd32(t56), ecx, 1, 1u);
        t58 = g->edx;
        wr32(COW_IMG(0x10663520u), 0u);
        eax = t57;
        edx = t58;
    }
    if (rd32(COW_IMG(0x10663524u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663524u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t59 = rd32(ecx);
        g->esp = sp0 - 8u;
        t60 = cow_thiscall(g, rd32(t59), ecx, 1, 1u);
        t61 = g->edx;
        wr32(COW_IMG(0x10663524u), 0u);
        eax = t60;
        edx = t61;
    }
    if (rd32(COW_IMG(0x10663684u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663684u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t62 = rd32(ecx);
        g->esp = sp0 - 8u;
        t63 = cow_thiscall(g, rd32(t62), ecx, 1, 1u);
        t64 = g->edx;
        wr32(COW_IMG(0x10663684u), 0u);
        eax = t63;
        edx = t64;
    }
    if (rd32(COW_IMG(0x10663494u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663494u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t65 = rd32(ecx);
        g->esp = sp0 - 8u;
        t66 = cow_thiscall(g, rd32(t65), ecx, 1, 1u);
        t67 = g->edx;
        wr32(COW_IMG(0x10663494u), 0u);
        eax = t66;
        edx = t67;
    }
    if (rd32(COW_IMG(0x10664494u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664494u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t68 = rd32(ecx);
        g->esp = sp0 - 8u;
        t69 = cow_thiscall(g, rd32(t68), ecx, 1, 1u);
        t70 = g->edx;
        wr32(COW_IMG(0x10664494u), 0u);
        eax = t69;
        edx = t70;
    }
    if (rd32(COW_IMG(0x10663accu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663accu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t71 = rd32(ecx);
        g->esp = sp0 - 8u;
        t72 = cow_thiscall(g, rd32(t71), ecx, 1, 1u);
        t73 = g->edx;
        wr32(COW_IMG(0x10663accu), 0u);
        eax = t72;
        edx = t73;
    }
    if (rd32(COW_IMG(0x10663ab8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663ab8u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t74 = rd32(ecx);
        g->esp = sp0 - 8u;
        t75 = cow_thiscall(g, rd32(t74), ecx, 1, 1u);
        t76 = g->edx;
        wr32(COW_IMG(0x10663ab8u), 0u);
        eax = t75;
        edx = t76;
    }
    if (rd32(COW_IMG(0x10664520u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664520u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t77 = rd32(ecx);
        g->esp = sp0 - 8u;
        t78 = cow_thiscall(g, rd32(t77), ecx, 1, 1u);
        t79 = g->edx;
        wr32(COW_IMG(0x10664520u), 0u);
        eax = t78;
        edx = t79;
    }
    if (rd32(COW_IMG(0x10664524u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664524u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t80 = rd32(ecx);
        g->esp = sp0 - 8u;
        t81 = cow_thiscall(g, rd32(t80), ecx, 1, 1u);
        t82 = g->edx;
        wr32(COW_IMG(0x10664524u), 0u);
        eax = t81;
        edx = t82;
    }
    if (rd32(COW_IMG(0x10664404u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664404u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t83 = rd32(ecx);
        g->esp = sp0 - 8u;
        t84 = cow_thiscall(g, rd32(t83), ecx, 1, 1u);
        t85 = g->edx;
        wr32(COW_IMG(0x10664404u), 0u);
        eax = t84;
        edx = t85;
    }
    if (rd32(COW_IMG(0x106634acu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106634acu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t86 = rd32(ecx);
        g->esp = sp0 - 8u;
        t87 = cow_thiscall(g, rd32(t86), ecx, 1, 1u);
        t88 = g->edx;
        wr32(COW_IMG(0x106634acu), 0u);
        eax = t87;
        edx = t88;
    }
    if (rd32(COW_IMG(0x10663468u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663468u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t89 = rd32(ecx);
        g->esp = sp0 - 8u;
        t90 = cow_thiscall(g, rd32(t89), ecx, 1, 1u);
        t91 = g->edx;
        wr32(COW_IMG(0x10663468u), 0u);
        eax = t90;
        edx = t91;
    }
    if (rd32(COW_IMG(0x10663740u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663740u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t92 = rd32(ecx);
        g->esp = sp0 - 8u;
        t93 = cow_thiscall(g, rd32(t92), ecx, 1, 1u);
        t94 = g->edx;
        wr32(COW_IMG(0x10663740u), 0u);
        eax = t93;
        edx = t94;
    }
    if (rd32(COW_IMG(0x10664508u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664508u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t95 = rd32(ecx);
        g->esp = sp0 - 8u;
        t96 = cow_thiscall(g, rd32(t95), ecx, 1, 1u);
        t97 = g->edx;
        wr32(COW_IMG(0x10664508u), 0u);
        eax = t96;
        edx = t97;
    }
    if (rd32(COW_IMG(0x10663480u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663480u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t98 = rd32(ecx);
        g->esp = sp0 - 8u;
        t99 = cow_thiscall(g, rd32(t98), ecx, 1, 1u);
        t100 = g->edx;
        wr32(COW_IMG(0x10663480u), 0u);
        eax = t99;
        edx = t100;
    }
    if (rd32(COW_IMG(0x106636acu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106636acu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t101 = rd32(ecx);
        g->esp = sp0 - 8u;
        t102 = cow_thiscall(g, rd32(t101), ecx, 1, 1u);
        t103 = g->edx;
        wr32(COW_IMG(0x106636acu), 0u);
        eax = t102;
        edx = t103;
    }
    if (rd32(COW_IMG(0x10663400u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663400u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t104 = rd32(ecx);
        g->esp = sp0 - 8u;
        t105 = cow_thiscall(g, rd32(t104), ecx, 1, 1u);
        t106 = g->edx;
        wr32(COW_IMG(0x10663400u), 0u);
        eax = t105;
        edx = t106;
    }
    if (rd32(COW_IMG(0x10664444u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664444u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t107 = rd32(ecx);
        g->esp = sp0 - 8u;
        t108 = cow_thiscall(g, rd32(t107), ecx, 1, 1u);
        t109 = g->edx;
        wr32(COW_IMG(0x10664444u), 0u);
        eax = t108;
        edx = t109;
    }
    if (rd32(COW_IMG(0x1066369cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066369cu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t110 = rd32(ecx);
        g->esp = sp0 - 8u;
        t111 = cow_thiscall(g, rd32(t110), ecx, 1, 1u);
        t112 = g->edx;
        wr32(COW_IMG(0x1066369cu), 0u);
        eax = t111;
        edx = t112;
    }
    if (rd32(COW_IMG(0x1066349cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066349cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t113 = rd32(ecx);
        g->esp = sp0 - 8u;
        t114 = cow_thiscall(g, rd32(t113), ecx, 1, 1u);
        t115 = g->edx;
        wr32(COW_IMG(0x1066349cu), 0u);
        eax = t114;
        edx = t115;
    }
    if (rd32(COW_IMG(0x1066442cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066442cu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t116 = rd32(ecx);
        g->esp = sp0 - 8u;
        t117 = cow_thiscall(g, rd32(t116), ecx, 1, 1u);
        t118 = g->edx;
        wr32(COW_IMG(0x1066442cu), 0u);
        eax = t117;
        edx = t118;
    }
    if (rd32(COW_IMG(0x1066443cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066443cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t119 = rd32(ecx);
        g->esp = sp0 - 8u;
        t120 = cow_thiscall(g, rd32(t119), ecx, 1, 1u);
        t121 = g->edx;
        wr32(COW_IMG(0x1066443cu), 0u);
        eax = t120;
        edx = t121;
    }
    if (rd32(COW_IMG(0x10663aacu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663aacu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t122 = rd32(ecx);
        g->esp = sp0 - 8u;
        t123 = cow_thiscall(g, rd32(t122), ecx, 1, 1u);
        t124 = g->edx;
        wr32(COW_IMG(0x10663aacu), 0u);
        eax = t123;
        edx = t124;
    }
    if (rd32(COW_IMG(0x10663698u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10663698u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10663698u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t125 = rd32(ecx);
        g->esp = sp0 - 8u;
        t126 = cow_thiscall(g, rd32(t125), ecx, 1, 1u);
        t127 = g->ecx;
        t128 = g->edx;
        wr32(COW_IMG(0x10663698u), 0u);
        eax = t126;
        ecx = t127;
        edx = t128;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t129 = cow_call_regs(g, COW_IMG(0x10201d80u), g->eax, g->ecx, edx, 1, 0);
    t130 = g->ecx;
    t131 = g->edx;
    g->esp = sp0;
    g->edx = t131;
    cow_tailcall(g, COW_IMG(0x101c8c00u), t129, t130, t131);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d1e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d1e90(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
