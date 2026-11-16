/* f_0x101a2e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101a2e80(Guest* g)
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
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
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

    g->edx = in_edx;
    t1 = rd32(self + 4u);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x101a1cc0u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    g->ebx = 1u;
    g->edx = t4;
    t5 = cow_call_regs(g, COW_IMG(0x10123a70u), t2, t3, g->edx, 1, 4, 0x3eu, 0x89u, 1u, 0xffffffffu);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_101a2efc;
    }
    eax = t5;
    edx = t7;
    g->ecx = self;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x101a33e0u), eax, g->ecx, edx, 1, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_101a2efc;
    }
    eax = t8;
    edx = t10;
    if (rd8(self + 0xcu) == 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xcu);
        goto L_101a2ee5;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xcu);
    wr8(self + 0x18u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037633cu));
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_101a2ecb: ;
    g->ebx = 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t42 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10376364u), 1u, 0u);
    t43 = g->ecx;
    t44 = g->edx;
    wr8(self + 0xcu, 1u);
    eax = t42;
    ecx = t43;
    edx = t44;
L_101a3024: ;
    g->ebx = 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t60 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x76u, 4u, 0xffffffffu);
    t61 = g->ecx;
    t62 = g->edx;
    if ((uint8_t)t60 == 0u)
    {
        eax = t60;
        ecx = t61;
        edx = t62;
        goto L_101a30a4;
    }
    eax = t60;
    edx = t62;
    g->ecx = self;
    g->esp = sp0 - 8u;
    t63 = cow_call_regs(g, COW_IMG(0x101a33e0u), eax, g->ecx, edx, 1, 0);
    t64 = g->ecx;
    t65 = g->edx;
    if ((uint8_t)t63 == 0u) goto L_101a32a1;
    eax = t63;
    ecx = t64;
    edx = t65;
    if (rd8(self + 0xcu) != 1u)
    {
        if (rd32(self + 0x10u) != 0u)
        {
            eax = rd32(self + 0x10u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t68 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
            t69 = g->edx;
            if (t68 - rd32(self + 0x10u) < 1u)
            {
                eax = t68 - rd32(self + 0x10u);
                edx = t69;
            }
            else
            {
                eax = t68 - rd32(self + 0x10u);
                edx = t69;
                wr8(self + 0x18u, 0u);
                wr8(self + 0xcu, 1u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t70 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037633cu));
                t71 = g->edx;
                g->ebx = 1u;
                g->edx = t71;
                t72 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10376364u), 1u, 0u);
                t73 = g->edx;
                eax = t72;
                edx = t73;
            }
        }
        else
        {
            eax = rd32(self + 0x10u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t66 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
            t67 = g->edx;
            wr32(self + 0x10u, t66);
            wr8(self + 0xdu, 1u);
            eax = t66;
            edx = t67;
        }
    }
L_101a3165: ;
    g->esp = sp0 - 8u;
    t91 = cow_call_regs(g, COW_IMG(0x101a33e0u), eax, g->ecx, edx, 1, 0);
    t92 = g->edx;
    if ((uint8_t)t91 != 0u)
    {
        eax = t91;
        edx = t92;
        g->ebx = 1u;
        g->esi = self;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t93 = cow_call_regs(g, COW_IMG(0x101a3550u), eax, self, g->edx, 1, 0);
        t94 = g->edx;
        if ((uint8_t)t93 == 0u)
        {
            eax = t93;
            edx = t94;
            if (rd8(self + 0xcu) == 1u) goto L_101a3191;
            if (rd8(self + 0xdu) != 1u) goto L_101a3211;
L_101a3191: ;
            g->ebx = 1u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t95 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x6cu, 9u, 0xau);
            t96 = g->edx;
            g->ebx = 1u;
            g->edx = t96;
            t97 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x6du, 0u, 1u);
            t98 = g->edx;
            g->ebx = 1u;
            g->edx = t98;
            t99 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x6eu, 1u, 2u);
            t100 = g->edx;
            g->ebx = 1u;
            g->edx = t100;
            t101 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x6fu, 2u, 3u);
            t102 = g->edx;
            g->ebx = 1u;
            g->edx = t102;
            t103 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x70u, 3u, 4u);
            t104 = g->edx;
            g->ebx = 1u;
            g->edx = t104;
            t105 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x71u, 4u, 5u);
            t106 = g->edx;
            g->ebx = 1u;
            g->edx = t106;
            t107 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x72u, 5u, 6u);
            t108 = g->edx;
            g->ebx = 1u;
            g->edx = t108;
            t109 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x73u, 6u, 7u);
            t110 = g->edx;
            g->ebx = 1u;
            g->edx = t110;
            t111 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x74u, 7u, 8u);
            t112 = g->edx;
            g->ebx = 1u;
            g->edx = t112;
            t113 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x75u, 8u, 9u);
            t114 = g->edx;
            eax = t113;
            edx = t114;
L_101a3211: ;
            if (rd8(self + 0xcu) == 2u) goto L_101a3221;
            if (rd8(self + 0xdu) != 2u) goto L_101a32a1;
L_101a3221: ;
            g->ebx = 1u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t115 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x62u, 9u, 0xau);
            t116 = g->edx;
            g->ebx = 1u;
            g->edx = t116;
            t117 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x63u, 0u, 1u);
            t118 = g->edx;
            g->ebx = 1u;
            g->edx = t118;
            t119 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x64u, 1u, 2u);
            t120 = g->edx;
            g->ebx = 1u;
            g->edx = t120;
            t121 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x65u, 2u, 3u);
            t122 = g->edx;
            g->ebx = 1u;
            g->edx = t122;
            t123 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x66u, 3u, 4u);
            t124 = g->edx;
            g->ebx = 1u;
            g->edx = t124;
            t125 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x67u, 4u, 5u);
            t126 = g->edx;
            g->ebx = 1u;
            g->edx = t126;
            t127 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x68u, 5u, 6u);
            t128 = g->edx;
            g->ebx = 1u;
            g->edx = t128;
            t129 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x69u, 6u, 7u);
            t130 = g->edx;
            g->ebx = 1u;
            g->edx = t130;
            t131 = cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x6au, 7u, 8u);
            t132 = g->edx;
            g->ebx = 1u;
            cow_thiscall(g, COW_IMG(0x101a3500u), self, 3, 0x6bu, 8u, 9u);
        }
    }
L_101a32a1: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_101a2ee5: ;
    wr8(self + 0xcu, 0u);
    wr8(self + 0x18u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10376364u));
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    goto L_101a3024;
L_101a2efc: ;
    g->ebx = 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x8au, 1u, 0xffffffffu);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        goto L_101a2f81;
    }
    eax = t16;
    edx = t18;
    g->ecx = self;
    g->esp = sp0 - 8u;
    t19 = cow_call_regs(g, COW_IMG(0x101a33e0u), eax, g->ecx, edx, 1, 0);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_101a2f81;
    }
    eax = t19;
    edx = t21;
    if (rd8(self + 0xcu) == 2u) goto L_101a2f65;
    g->ecx = self;
    g->esp = sp0 - 8u;
    t22 = cow_call_regs(g, COW_IMG(0x101a33e0u), eax, g->ecx, edx, 1, 0);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        goto L_101a2f5b;
    }
    eax = t22;
    edx = t24;
    wr8(self + 0x18u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t25 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10376364u));
    t26 = g->edx;
    eax = t25;
    edx = t26;
L_101a2f40: ;
    g->ebx = 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t57 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037633cu), 1u, 0u);
    t58 = g->ecx;
    t59 = g->edx;
    wr8(self + 0xcu, 2u);
    eax = t57;
    ecx = t58;
    edx = t59;
    goto L_101a3024;
L_101a2f5b: ;
    if (rd8(self + 0xcu) != 2u) goto L_101a3024;
L_101a2f65: ;
    wr8(self + 0xcu, 0u);
    wr8(self + 0x18u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037633cu));
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    goto L_101a3024;
L_101a2f81: ;
    g->ebx = 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t30 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x89u, 4u, 0xffffffffu);
    t31 = g->ecx;
    t32 = g->edx;
    if ((uint8_t)t30 == 0u)
    {
        eax = t30;
        ecx = t31;
        edx = t32;
        goto L_101a2fcf;
    }
    eax = t30;
    edx = t32;
    g->ecx = self;
    g->esp = sp0 - 8u;
    t33 = cow_call_regs(g, COW_IMG(0x101a33e0u), eax, g->ecx, edx, 1, 0);
    t34 = g->ecx;
    t35 = g->edx;
    if ((uint8_t)t33 == 0u)
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        goto L_101a2fcf;
    }
    eax = t33;
    ecx = t34;
    edx = t35;
    if (rd8(self + 0xcu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xcu);
        goto L_101a3024;
    }
    if (rd32(self + 0x14u) != 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_101a2fbb;
    }
    eax = rd32(self + 0x14u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t36 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t37 = g->ecx;
    t38 = g->edx;
    wr32(self + 0x14u, t36);
    eax = t36;
    ecx = t37;
    edx = t38;
    goto L_101a3024;
L_101a2fbb: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t39 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t40 = g->ecx;
    t41 = g->edx;
    if (t39 - rd32(self + 0x14u) < 1u)
    {
        eax = t39 - rd32(self + 0x14u);
        ecx = t40;
        edx = t41;
        goto L_101a3024;
    }
    eax = t39 - rd32(self + 0x14u);
    edx = t41;
    wr8(self + 0x18u, 1u);
    goto L_101a2ecb;
L_101a2fcf: ;
    g->ebx = 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t45 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x8au, 4u, 0xffffffffu);
    t46 = g->ecx;
    t47 = g->edx;
    if ((uint8_t)t45 == 0u)
    {
        eax = t45;
        ecx = t46;
        edx = t47;
        goto L_101a301d;
    }
    eax = t45;
    edx = t47;
    g->ecx = self;
    g->esp = sp0 - 8u;
    t48 = cow_call_regs(g, COW_IMG(0x101a33e0u), eax, g->ecx, edx, 1, 0);
    t49 = g->ecx;
    t50 = g->edx;
    if ((uint8_t)t48 == 0u)
    {
        eax = t48;
        ecx = t49;
        edx = t50;
        goto L_101a301d;
    }
    eax = t48;
    ecx = t49;
    edx = t50;
    if (rd8(self + 0xcu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xcu);
        goto L_101a3024;
    }
    if (rd32(self + 0x14u) != 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_101a3009;
    }
    eax = rd32(self + 0x14u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t51 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t52 = g->ecx;
    t53 = g->edx;
    wr32(self + 0x14u, t51);
    eax = t51;
    ecx = t52;
    edx = t53;
    goto L_101a3024;
L_101a3009: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t54 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t55 = g->ecx;
    t56 = g->edx;
    if (t54 - rd32(self + 0x14u) < 1u)
    {
        eax = t54 - rd32(self + 0x14u);
        ecx = t55;
        edx = t56;
        goto L_101a3024;
    }
    eax = t54 - rd32(self + 0x14u);
    edx = t56;
    wr8(self + 0x18u, 1u);
    goto L_101a2f40;
L_101a301d: ;
    wr32(self + 0x14u, 0u);
    goto L_101a3024;
L_101a30a4: ;
    g->ebx = 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t74 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x77u, 4u, 0xffffffffu);
    t75 = g->edx;
    if ((uint8_t)t74 == 0u)
    {
        eax = t74;
        edx = t75;
        goto L_101a311d;
    }
    eax = t74;
    edx = t75;
    g->ecx = self;
    g->esp = sp0 - 8u;
    t76 = cow_call_regs(g, COW_IMG(0x101a33e0u), eax, g->ecx, edx, 1, 0);
    t77 = g->ecx;
    t78 = g->edx;
    if ((uint8_t)t76 == 0u) goto L_101a32a1;
    eax = t76;
    ecx = t77;
    edx = t78;
    if (rd8(self + 0xcu) != 2u)
    {
        if (rd32(self + 0x10u) != 0u)
        {
            eax = rd32(self + 0x10u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t81 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
            t82 = g->edx;
            if (t81 - rd32(self + 0x10u) < 1u)
            {
                eax = t81 - rd32(self + 0x10u);
                edx = t82;
            }
            else
            {
                eax = t81 - rd32(self + 0x10u);
                edx = t82;
                wr8(self + 0x18u, 0u);
                wr8(self + 0xcu, 2u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t83 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10376364u));
                t84 = g->edx;
                g->ebx = 1u;
                g->edx = t84;
                t85 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037633cu), 1u, 0u);
                t86 = g->edx;
                eax = t85;
                edx = t86;
            }
        }
        else
        {
            eax = rd32(self + 0x10u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t79 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
            t80 = g->edx;
            wr32(self + 0x10u, t79);
            wr8(self + 0xdu, 2u);
            eax = t79;
            edx = t80;
        }
    }
    goto L_101a3165;
L_101a311d: ;
    if (rd8(self + 0xcu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xcu);
        goto L_101a315a;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xcu);
    if (rd8(self + 0x18u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x18u);
        goto L_101a315a;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x18u);
    wr8(self + 0xcu, 0u);
    wr8(self + 0xdu, 0u);
    wr32(self + 0x10u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t87 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10376364u));
    t88 = g->edx;
    g->edx = t88;
    t89 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037633cu));
    t90 = g->edx;
    eax = t89;
    edx = t90;
    goto L_101a3165;
L_101a315a: ;
    wr8(self + 0xdu, 0u);
    wr32(self + 0x10u, 0u);
    goto L_101a3165;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a2e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a2e80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
