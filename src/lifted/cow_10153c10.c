/* f_0x10153c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10153c10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
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

    g->ebx = in_ebx & 0xffffff00u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10153b70u), self, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        goto L_10153c1e;
    }
    eax = t1;
    g->ebx = in_ebx;
    return eax;
L_10153c1e: ;
    if (!(rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 7u & 1u))
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 7u & 1u;
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        goto L_10153c3b;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 7u & 1u;
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    if (ecx == 2u) goto L_10153c4a;
    if (ecx == 3u) goto L_10153c4a;
L_10153c3b: ;
    if (ecx != 0u) goto L_10153c4a;
    g->ebx = in_ebx & 0xffffff00u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_stdcall(g, COW_IMG(0x10153af0u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        goto L_10153c90;
    }
    eax = t3;
    g->ebx = in_ebx;
    return eax;
L_10153c4a: ;
    if (eax == 0u) goto L_10153c58;
    if (ecx == 2u) goto L_10153c5d;
    if (ecx == 3u) goto L_10153c5d;
L_10153c58: ;
    if (ecx != 1u) goto L_10153c68;
L_10153c5d: ;
    g->ebx = in_ebx & 0xffffff00u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_stdcall(g, COW_IMG(0x10153b30u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_10153c90;
    }
    eax = t6;
    g->ebx = in_ebx;
    return eax;
L_10153c68: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 8u);
    t10 = g->ecx;
    t11 = g->edx;
    g->ebx = in_ebx & 0xffffff00u;
    g->ecx = t10;
    g->edx = t11;
    g->esp = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x10152ff0u), 2, 8u, t9);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
    }
    else
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        t15 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0xau);
        t16 = g->ecx;
        t17 = g->edx;
        g->ebx = in_ebx & 0xffffff00u;
        g->ecx = t16;
        g->edx = t17;
        g->esp = sp0 - 8u;
        t18 = cow_cdecl(g, COW_IMG(0x10152ff0u), 2, 0xau, t15);
        t19 = g->ecx;
        t20 = g->edx;
        eax = t18;
        ecx = t19;
        edx = t20;
    }
L_10153c90: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t21 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 6u);
    t22 = g->ecx;
    t23 = g->edx;
    g->ebx = in_ebx & 0xffffff00u;
    g->ecx = t22;
    g->edx = t23;
    g->esp = sp0 - 8u;
    t24 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x105786c8u), t21);
    t25 = g->ecx;
    t26 = g->edx;
    if ((uint8_t)t24 == 0u)
    {
        eax = t24;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = t24;
        ecx = t25;
        edx = t26;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        t27 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 7u);
        t28 = g->ecx;
        t29 = g->edx;
        g->ebx = in_ebx & 0xffffff00u;
        g->ecx = t28;
        g->edx = t29;
        g->esp = sp0 - 8u;
        t30 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x10578688u), t27);
        t31 = g->ecx;
        t32 = g->edx;
        if ((uint8_t)t30 == 0u)
        {
            eax = t30;
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            eax = t30;
            ecx = t31;
            edx = t32;
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 4u;
            t33 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 3u);
            t34 = g->ecx;
            t35 = g->edx;
            g->ebx = in_ebx & 0xffffff00u;
            g->ecx = t34;
            g->edx = t35;
            g->esp = sp0 - 8u;
            t36 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x105784b8u), t33);
            t37 = g->ecx;
            t38 = g->edx;
            if ((uint8_t)t36 == 0u)
            {
                eax = t36;
                ebx = in_ebx & 0xffffff00u;
            }
            else
            {
                eax = t36;
                ecx = t37;
                edx = t38;
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 4u;
                t39 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 4u);
                t40 = g->ecx;
                t41 = g->edx;
                g->ebx = in_ebx & 0xffffff00u;
                g->ecx = t40;
                g->edx = t41;
                g->esp = sp0 - 8u;
                t42 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x10578628u), t39);
                t43 = g->ecx;
                t44 = g->edx;
                if ((uint8_t)t42 == 0u)
                {
                    eax = t42;
                    ebx = in_ebx & 0xffffff00u;
                }
                else
                {
                    eax = t42;
                    ecx = t43;
                    edx = t44;
                    g->eax = eax;
                    g->ecx = ecx;
                    g->esp = sp0 - 4u;
                    t45 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 9u);
                    t46 = g->ecx;
                    t47 = g->edx;
                    g->ebx = in_ebx & 0xffffff00u;
                    g->ecx = t46;
                    g->edx = t47;
                    g->esp = sp0 - 8u;
                    t48 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x10578658u), t45);
                    t49 = g->ecx;
                    t50 = g->edx;
                    if ((uint8_t)t48 == 0u)
                    {
                        eax = t48;
                        ebx = in_ebx & 0xffffff00u;
                    }
                    else
                    {
                        eax = t48;
                        ecx = t49;
                        edx = t50;
                        g->eax = eax;
                        g->ecx = ecx;
                        g->esp = sp0 - 4u;
                        t51 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0xbu);
                        t52 = g->ecx;
                        t53 = g->edx;
                        g->ebx = in_ebx & 0xffffff00u;
                        g->ecx = t52;
                        g->edx = t53;
                        g->esp = sp0 - 8u;
                        t54 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x105784a8u), t51);
                        t55 = g->ecx;
                        t56 = g->edx;
                        if ((uint8_t)t54 == 0u)
                        {
                            eax = t54;
                            ebx = in_ebx & 0xffffff00u;
                        }
                        else
                        {
                            eax = t54;
                            ecx = t55;
                            edx = t56;
                            g->eax = eax;
                            g->ecx = ecx;
                            g->esp = sp0 - 4u;
                            t57 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0xcu);
                            t58 = g->ecx;
                            t59 = g->edx;
                            g->ebx = in_ebx & 0xffffff00u;
                            g->ecx = t58;
                            g->edx = t59;
                            g->esp = sp0 - 8u;
                            t60 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x10578508u), t57);
                            t61 = g->ecx;
                            t62 = g->edx;
                            if ((uint8_t)t60 == 0u)
                            {
                                eax = t60;
                                ebx = in_ebx & 0xffffff00u;
                            }
                            else
                            {
                                eax = t60;
                                ecx = t61;
                                edx = t62;
                                g->eax = eax;
                                g->ecx = ecx;
                                g->esp = sp0 - 4u;
                                t63 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0xdu);
                                t64 = g->ecx;
                                t65 = g->edx;
                                g->ebx = in_ebx & 0xffffff00u;
                                g->ecx = t64;
                                g->edx = t65;
                                g->esp = sp0 - 8u;
                                t66 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x10578518u), t63);
                                t67 = g->ecx;
                                t68 = g->edx;
                                if ((uint8_t)t66 == 0u)
                                {
                                    eax = t66;
                                    ebx = in_ebx & 0xffffff00u;
                                }
                                else
                                {
                                    eax = t66;
                                    ecx = t67;
                                    edx = t68;
                                    g->eax = eax;
                                    g->ecx = ecx;
                                    g->esp = sp0 - 4u;
                                    t69 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0xeu);
                                    t70 = g->ecx;
                                    t71 = g->edx;
                                    g->ebx = in_ebx & 0xffffff00u;
                                    g->ecx = t70;
                                    g->edx = t71;
                                    g->esp = sp0 - 8u;
                                    t72 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x10578698u), t69);
                                    t73 = g->ecx;
                                    t74 = g->edx;
                                    if ((uint8_t)t72 == 0u)
                                    {
                                        eax = t72;
                                        ebx = in_ebx & 0xffffff00u;
                                    }
                                    else
                                    {
                                        eax = t72;
                                        ecx = t73;
                                        edx = t74;
                                        g->eax = eax;
                                        g->ecx = ecx;
                                        g->esp = sp0 - 4u;
                                        t75 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 2u);
                                        t76 = g->ecx;
                                        t77 = g->edx;
                                        g->ebx = in_ebx & 0xffffff00u;
                                        g->ecx = t76;
                                        g->edx = t77;
                                        g->esp = sp0 - 8u;
                                        t78 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x10578618u), t75);
                                        t79 = g->ecx;
                                        t80 = g->edx;
                                        if ((uint8_t)t78 == 0u)
                                        {
                                            eax = t78;
                                            ebx = in_ebx & 0xffffff00u;
                                        }
                                        else
                                        {
                                            eax = t78;
                                            ecx = t79;
                                            edx = t80;
                                            g->eax = eax;
                                            g->ecx = ecx;
                                            g->esp = sp0 - 4u;
                                            t81 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0xfu);
                                            t82 = g->ecx;
                                            t83 = g->edx;
                                            g->ebx = in_ebx & 0xffffff00u;
                                            g->ecx = t82;
                                            g->edx = t83;
                                            g->esp = sp0 - 8u;
                                            t84 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x105784f8u), t81);
                                            t85 = g->ecx;
                                            t86 = g->edx;
                                            if ((uint8_t)t84 == 0u)
                                            {
                                                eax = t84;
                                                ebx = in_ebx & 0xffffff00u;
                                            }
                                            else
                                            {
                                                eax = t84;
                                                ecx = t85;
                                                edx = t86;
                                                g->eax = eax;
                                                g->ecx = ecx;
                                                g->esp = sp0 - 4u;
                                                t87 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0x10u);
                                                t88 = g->ecx;
                                                t89 = g->edx;
                                                g->ebx = in_ebx & 0xffffff00u;
                                                g->ecx = t88;
                                                g->edx = t89;
                                                g->esp = sp0 - 8u;
                                                t90 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x10578648u), t87);
                                                t91 = g->ecx;
                                                t92 = g->edx;
                                                if ((uint8_t)t90 == 0u)
                                                {
                                                    eax = t90;
                                                    ebx = in_ebx & 0xffffff00u;
                                                }
                                                else
                                                {
                                                    eax = t90;
                                                    ecx = t91;
                                                    edx = t92;
                                                    g->eax = eax;
                                                    g->ecx = ecx;
                                                    g->esp = sp0 - 4u;
                                                    t93 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0x11u);
                                                    t94 = g->ecx;
                                                    t95 = g->edx;
                                                    g->ebx = in_ebx & 0xffffff00u;
                                                    g->ecx = t94;
                                                    g->edx = t95;
                                                    g->esp = sp0 - 8u;
                                                    t96 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x10578528u), t93);
                                                    t97 = g->ecx;
                                                    t98 = g->edx;
                                                    if ((uint8_t)t96 == 0u)
                                                    {
                                                        eax = t96;
                                                        ebx = in_ebx & 0xffffff00u;
                                                    }
                                                    else
                                                    {
                                                        eax = t96;
                                                        ecx = t97;
                                                        edx = t98;
                                                        g->eax = eax;
                                                        g->ecx = ecx;
                                                        g->esp = sp0 - 4u;
                                                        t99 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0x12u);
                                                        t100 = g->ecx;
                                                        t101 = g->edx;
                                                        g->ebx = in_ebx & 0xffffff00u;
                                                        g->ecx = t100;
                                                        g->edx = t101;
                                                        g->esp = sp0 - 8u;
                                                        t102 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x10578668u), t99);
                                                        t103 = g->ecx;
                                                        t104 = g->edx;
                                                        if ((uint8_t)t102 == 0u)
                                                        {
                                                            eax = t102;
                                                            ebx = in_ebx & 0xffffff00u;
                                                        }
                                                        else
                                                        {
                                                            eax = t102;
                                                            ecx = t103;
                                                            edx = t104;
                                                            g->eax = eax;
                                                            g->ecx = ecx;
                                                            g->esp = sp0 - 4u;
                                                            t105 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0x13u);
                                                            t106 = g->ecx;
                                                            t107 = g->edx;
                                                            g->ebx = in_ebx & 0xffffff00u;
                                                            g->ecx = t106;
                                                            g->edx = t107;
                                                            g->esp = sp0 - 8u;
                                                            t108 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x105784d8u), t105);
                                                            t109 = g->ecx;
                                                            t110 = g->edx;
                                                            if ((uint8_t)t108 == 0u)
                                                            {
                                                                eax = t108;
                                                                ebx = in_ebx & 0xffffff00u;
                                                            }
                                                            else
                                                            {
                                                                eax = t108;
                                                                ecx = t109;
                                                                edx = t110;
                                                                g->eax = eax;
                                                                g->ecx = ecx;
                                                                g->esp = sp0 - 4u;
                                                                t111 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0x15u);
                                                                t112 = g->ecx;
                                                                t113 = g->edx;
                                                                g->ebx = in_ebx & 0xffffff00u;
                                                                g->ecx = t112;
                                                                g->edx = t113;
                                                                g->esp = sp0 - 8u;
                                                                t114 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x105784e8u), t111);
                                                                t115 = g->ecx;
                                                                t116 = g->edx;
                                                                if ((uint8_t)t114 == 0u)
                                                                {
                                                                    eax = t114;
                                                                    ebx = in_ebx & 0xffffff00u;
                                                                }
                                                                else
                                                                {
                                                                    eax = t114;
                                                                    ecx = t115;
                                                                    edx = t116;
                                                                    g->eax = eax;
                                                                    g->ecx = ecx;
                                                                    g->esp = sp0 - 4u;
                                                                    t117 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0x16u);
                                                                    t118 = g->ecx;
                                                                    t119 = g->edx;
                                                                    g->ebx = in_ebx & 0xffffff00u;
                                                                    g->ecx = t118;
                                                                    g->edx = t119;
                                                                    g->esp = sp0 - 8u;
                                                                    t120 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x105786b8u), t117);
                                                                    t121 = g->ecx;
                                                                    t122 = g->edx;
                                                                    if ((uint8_t)t120 == 0u)
                                                                    {
                                                                        eax = t120;
                                                                        ebx = in_ebx & 0xffffff00u;
                                                                    }
                                                                    else
                                                                    {
                                                                        eax = t120;
                                                                        ecx = t121;
                                                                        edx = t122;
                                                                        g->eax = eax;
                                                                        g->ecx = ecx;
                                                                        g->esp = sp0 - 4u;
                                                                        t123 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0x17u);
                                                                        t124 = g->ecx;
                                                                        t125 = g->edx;
                                                                        g->ebx = in_ebx & 0xffffff00u;
                                                                        g->ecx = t124;
                                                                        g->edx = t125;
                                                                        g->esp = sp0 - 8u;
                                                                        t126 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x105786a8u), t123);
                                                                        t127 = g->ecx;
                                                                        t128 = g->edx;
                                                                        if ((uint8_t)t126 == 0u)
                                                                        {
                                                                            eax = t126;
                                                                            ebx = in_ebx & 0xffffff00u;
                                                                        }
                                                                        else
                                                                        {
                                                                            eax = t126;
                                                                            ecx = t127;
                                                                            edx = t128;
                                                                            g->eax = eax;
                                                                            g->ecx = ecx;
                                                                            g->esp = sp0 - 4u;
                                                                            t129 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0x19u);
                                                                            t130 = g->ecx;
                                                                            t131 = g->edx;
                                                                            g->ebx = in_ebx & 0xffffff00u;
                                                                            g->ecx = t130;
                                                                            g->edx = t131;
                                                                            g->esp = sp0 - 8u;
                                                                            t132 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x105784c8u), t129);
                                                                            t133 = g->ecx;
                                                                            t134 = g->edx;
                                                                            if ((uint8_t)t132 == 0u)
                                                                            {
                                                                                eax = t132;
                                                                                ebx = in_ebx & 0xffffff00u;
                                                                            }
                                                                            else
                                                                            {
                                                                                eax = t132;
                                                                                ecx = t133;
                                                                                edx = t134;
                                                                                g->eax = eax;
                                                                                g->ecx = ecx;
                                                                                g->esp = sp0 - 4u;
                                                                                t135 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0x3du);
                                                                                t136 = g->ecx;
                                                                                t137 = g->edx;
                                                                                g->ebx = in_ebx & 0xffffff00u;
                                                                                g->esp = sp0 - 8u;
                                                                                t138 = cow_cdecl(g, COW_IMG(0x10153ef0u), 2, COW_IMG(0x10578498u), t135);
                                                                                if ((uint8_t)t138 == 0u)
                                                                                {
                                                                                    eax = t138;
                                                                                    ebx = in_ebx & 0xffffff00u;
                                                                                }
                                                                                else
                                                                                {
                                                                                    eax = t138;
                                                                                    ebx = (in_ebx & 0xffffff00u) | 1u;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10153c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10153c10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
