/* f_0x100108b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100108b0(Guest* g)
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
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t156;
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
    uint32_t t164;
    uint32_t t165;
    uint32_t t166;
    uint32_t t167;
    uint32_t t168;
    uint32_t t169;
    uint32_t t17;
    uint32_t t170;
    uint32_t t171;
    uint32_t t172;
    uint32_t t173;
    uint32_t t174;
    uint32_t t175;
    uint32_t t176;
    uint32_t t177;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x10329c14u));
    if (rd32(COW_IMG(0x10456d1cu)) == 0u)
    {
        eax = in_eax;
        ecx = rd32(COW_IMG(0x10456d1cu));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10456d1cu));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(t1 + 0x18u), ecx, 1, 1u);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(COW_IMG(0x10456d1cu), 0u);
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_stdcall(g, COW_IMG(0x1021d460u), 0);
    t6 = g->edx;
    if (rd32(COW_IMG(0x10669098u)) == 0u)
    {
        eax = t5;
        ecx = rd32(COW_IMG(0x10669098u));
        edx = t6;
    }
    else
    {
        eax = t5;
        ecx = rd32(COW_IMG(0x10669098u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t7 = rd32(ecx);
        g->esp = sp0 - 8u;
        t8 = cow_thiscall(g, rd32(t7 + 0x18u), ecx, 1, 1u);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(COW_IMG(0x10669098u), 0u);
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_stdcall(g, COW_IMG(0x102217b0u), 0);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x1015d9e0u), COW_IMG(0x10621838u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    t16 = cow_call_regs(g, COW_IMG(0x10164b80u), g->eax, g->ecx, t15, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    t19 = cow_call_regs(g, COW_IMG(0x1021bbd0u), g->eax, g->ecx, t18, 1, 0);
    t20 = g->ecx;
    t21 = g->edx;
    if (rd32(COW_IMG(0x106631d4u)) == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
    }
    else
    {
        eax = t19;
        edx = t21;
        esi = rd32(COW_IMG(0x106631d4u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t22 = cow_thiscall(g, COW_IMG(0x101d2f00u), esi, 0);
        t23 = g->ecx;
        t24 = g->edx;
        g->ecx = t23;
        g->edx = t24;
        t25 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        t26 = g->ecx;
        t27 = g->edx;
        wr32(COW_IMG(0x106631d4u), 0u);
        eax = t25;
        ecx = t26;
        edx = t27;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t28 = cow_call_regs(g, COW_IMG(0x101d1e90u), g->eax, g->ecx, edx, 1, 0);
    t29 = g->ecx;
    t30 = g->edx;
    g->edx = t30;
    t31 = cow_stdcall(g, COW_IMG(0x1025e0d0u), 0);
    t32 = g->edx;
    g->ecx = t31;
    g->edx = t32;
    t33 = cow_stdcall(g, COW_IMG(0x1025e0f0u), 0);
    t34 = g->ecx;
    t35 = g->edx;
    g->ecx = t34;
    cow_call_regs(g, COW_IMG(0x10166810u), g->eax, g->ecx, t35, 1, 0);
    t36 = g->ecx;
    t37 = g->edx;
    if (rd32(COW_IMG(0x104e1d44u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d44u));
        ecx = t36;
        edx = t37;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d44u));
        ecx = t36;
        edx = t37;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t38 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t39 = g->ecx;
        t40 = g->edx;
        wr32(COW_IMG(0x104e1d44u), 0u);
        eax = t38;
        ecx = t39;
        edx = t40;
    }
    if (rd32(COW_IMG(0x104e1b90u)) != 0u)
    {
        esi = rd32(COW_IMG(0x104e1b90u));
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t41 = cow_fastcall(g, COW_IMG(0x1011c810u), esi, edx, 0);
        t42 = g->ecx;
        t43 = g->edx;
        wr32(COW_IMG(0x104e1b90u), 0u);
        g->ecx = t42;
        g->edx = t43;
        t44 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t45 = g->ecx;
        t46 = g->edx;
        wr32(COW_IMG(0x104e1b90u), 0u);
        eax = t44;
        ecx = t45;
        edx = t46;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t47 = cow_call_regs(g, COW_IMG(0x101b92b0u), g->eax, g->ecx, edx, 1, 0);
    t48 = g->ecx;
    t49 = g->edx;
    g->ecx = t48;
    t50 = cow_call_regs(g, COW_IMG(0x101a8d50u), g->eax, g->ecx, t49, 1, 0);
    t51 = g->ecx;
    t52 = g->edx;
    g->ecx = t51;
    t53 = cow_call_regs(g, COW_IMG(0x101a8c80u), g->eax, g->ecx, t52, 1, 0);
    t54 = g->ecx;
    t55 = g->edx;
    g->ecx = t54;
    t56 = cow_call_regs(g, COW_IMG(0x101aa000u), g->eax, g->ecx, t55, 1, 0);
    t57 = g->ecx;
    t58 = g->edx;
    g->ecx = t57;
    g->edx = t58;
    t59 = cow_stdcall(g, COW_IMG(0x101ab0b0u), 0);
    t60 = g->ecx;
    t61 = g->edx;
    t62 = cow_call_regs(g, COW_IMG(0x101ab520u), g->eax, g->ecx, t61, 1, 0);
    t63 = g->edx;
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = t62;
        edx = t63;
    }
    else
    {
        ecx = rd32(self + 0x1cu);
        edx = t63;
        g->eax = rd32(ecx);
        g->edx = edx;
        t64 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t65 = cow_thiscall(g, rd32(t64 + 0x18u), ecx, 1, 1u);
        t66 = g->edx;
        wr32(self + 0x1cu, 0u);
        eax = t65;
        edx = t66;
    }
    if (rd32(self + 0x20u) != 0u)
    {
        ecx = rd32(self + 0x20u);
        g->eax = eax;
        g->edx = rd32(ecx);
        t67 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t68 = cow_thiscall(g, rd32(t67 + 0x18u), ecx, 1, 1u);
        t69 = g->edx;
        wr32(self + 0x20u, 0u);
        eax = t68;
        edx = t69;
    }
    if (rd32(COW_IMG(0x1047d688u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047d688u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t70 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t71 = cow_thiscall(g, rd32(t70 + 0x18u), ecx, 1, 1u);
        t72 = g->edx;
        wr32(COW_IMG(0x1047d688u), 0u);
        eax = t71;
        edx = t72;
    }
    if (rd32(COW_IMG(0x1047d68cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047d68cu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t73 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t74 = cow_thiscall(g, rd32(t73 + 0x18u), ecx, 1, 1u);
        t75 = g->edx;
        wr32(COW_IMG(0x1047d68cu), 0u);
        eax = t74;
        edx = t75;
    }
    if (rd32(COW_IMG(0x1045690cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1045690cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t76 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t77 = cow_thiscall(g, rd32(t76 + 0x18u), ecx, 1, 1u);
        t78 = g->edx;
        wr32(COW_IMG(0x1045690cu), 0u);
        eax = t77;
        edx = t78;
    }
    if (rd32(COW_IMG(0x10456c0cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10456c0cu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t79 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t80 = cow_thiscall(g, rd32(t79 + 0x18u), ecx, 1, 1u);
        t81 = g->edx;
        wr32(COW_IMG(0x10456c0cu), 0u);
        eax = t80;
        edx = t81;
    }
    if (rd32(COW_IMG(0x10456d18u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10456d18u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t82 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t83 = cow_thiscall(g, rd32(t82), ecx, 1, 1u);
        t84 = g->edx;
        wr32(COW_IMG(0x10456d18u), 0u);
        eax = t83;
        edx = t84;
    }
    if (rd32(COW_IMG(0x104e1bf4u)) != 0u)
    {
        esi = rd32(COW_IMG(0x104e1bf4u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t85 = cow_thiscall(g, COW_IMG(0x1011c880u), esi, 0);
        t86 = g->ecx;
        t87 = g->edx;
        g->edx = t87;
        t88 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t89 = g->edx;
        wr32(COW_IMG(0x104e1bf4u), 0u);
        eax = t88;
        edx = t89;
    }
    if (rd32(COW_IMG(0x10578158u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10578158u));
        g->eax = eax;
        g->ecx = esi;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t90 = cow_stdcall(g, COW_IMG(0x101271b0u), 0);
        t91 = g->ecx;
        t92 = g->edx;
        g->edx = t92;
        t93 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t94 = g->edx;
        wr32(COW_IMG(0x10578158u), 0u);
        eax = t93;
        edx = t94;
    }
    if (rd32(COW_IMG(0x1057815cu)) != 0u)
    {
        esi = rd32(COW_IMG(0x1057815cu));
        g->eax = eax;
        g->ecx = esi;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t95 = cow_stdcall(g, COW_IMG(0x101271b0u), 0);
        t96 = g->ecx;
        t97 = g->edx;
        g->edx = t97;
        t98 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t99 = g->edx;
        wr32(COW_IMG(0x1057815cu), 0u);
        eax = t98;
        edx = t99;
    }
    if (rd32(COW_IMG(0x10578160u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10578160u));
        g->eax = eax;
        g->ecx = esi;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t100 = cow_stdcall(g, COW_IMG(0x10127ef0u), 0);
        t101 = g->ecx;
        t102 = g->edx;
        g->edx = t102;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t103 = g->edx;
        wr32(COW_IMG(0x10578160u), 0u);
        edx = t103;
    }
    if (rd32(COW_IMG(0x10456794u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10456794u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t104 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t105 = g->edx;
        g->edx = t105;
        cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x10456794u), 0);
        t106 = g->edx;
        wr32(COW_IMG(0x10456794u), 0u);
        edx = t106;
    }
    if (rd32(COW_IMG(0x104568a0u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104568a0u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t107 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t108 = g->edx;
        g->edx = t108;
        cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x104568a0u), 0);
        t109 = g->edx;
        wr32(COW_IMG(0x104568a0u), 0u);
        edx = t109;
    }
    if (rd32(COW_IMG(0x104568f0u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104568f0u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t110 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t111 = g->edx;
        g->edx = t111;
        cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x104568f0u), 0);
        t112 = g->edx;
        wr32(COW_IMG(0x104568f0u), 0u);
        edx = t112;
    }
    if (rd32(COW_IMG(0x10456790u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10456790u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t113 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t114 = g->edx;
        g->edx = t114;
        cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x10456790u), 0);
        t115 = g->edx;
        wr32(COW_IMG(0x10456790u), 0u);
        edx = t115;
    }
    if (rd32(COW_IMG(0x104568e8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104568e8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t116 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t117 = g->edx;
        g->edx = t117;
        cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x104568e8u), 0);
        t118 = g->edx;
        wr32(COW_IMG(0x104568e8u), 0u);
        edx = t118;
    }
    if (rd32(COW_IMG(0x104568ecu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104568ecu));
    }
    else
    {
        eax = rd32(COW_IMG(0x104568ecu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t119 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t120 = g->edx;
        g->edx = t120;
        t121 = cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x104568ecu), 0);
        t122 = g->edx;
        wr32(COW_IMG(0x104568ecu), 0u);
        eax = t121;
        edx = t122;
    }
    if (rd32(COW_IMG(0x1047d128u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047d128u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t123 = rd32(ecx);
        g->esp = sp0 - 8u;
        t124 = cow_thiscall(g, rd32(t123 + 0x18u), ecx, 1, 1u);
        t125 = g->edx;
        wr32(COW_IMG(0x1047d128u), 0u);
        eax = t124;
        edx = t125;
    }
    if (rd32(COW_IMG(0x1047d140u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047d140u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t126 = rd32(ecx);
        g->esp = sp0 - 8u;
        t127 = cow_thiscall(g, rd32(t126 + 0x18u), ecx, 1, 1u);
        t128 = g->edx;
        wr32(COW_IMG(0x1047d140u), 0u);
        eax = t127;
        edx = t128;
    }
    if (rd32(COW_IMG(0x1047b970u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047b970u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t129 = rd32(ecx);
        g->esp = sp0 - 8u;
        t130 = cow_thiscall(g, rd32(t129 + 0x18u), ecx, 1, 1u);
        t131 = g->edx;
        wr32(COW_IMG(0x1047b970u), 0u);
        eax = t130;
        edx = t131;
    }
    if (rd32(COW_IMG(0x1047b974u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047b974u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t132 = rd32(ecx);
        g->esp = sp0 - 8u;
        t133 = cow_thiscall(g, rd32(t132 + 0x18u), ecx, 1, 1u);
        t134 = g->edx;
        wr32(COW_IMG(0x1047b974u), 0u);
        eax = t133;
        edx = t134;
    }
    if (rd32(COW_IMG(0x1045b774u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1045b774u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1045b774u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t135 = rd32(ecx);
        g->esp = sp0 - 8u;
        t136 = cow_thiscall(g, rd32(t135 + 0x18u), ecx, 1, 1u);
        t137 = g->ecx;
        t138 = g->edx;
        wr32(COW_IMG(0x1045b774u), 0u);
        eax = t136;
        ecx = t137;
        edx = t138;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t139 = cow_stdcall(g, COW_IMG(0x1006cca0u), 0);
    t140 = g->edx;
    if (rd32(COW_IMG(0x10669424u)) == 0u)
    {
        eax = t139;
        edx = t140;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10669424u));
        edx = t140;
        g->eax = rd32(ecx);
        g->edx = edx;
        t141 = rd32(ecx);
        g->esp = sp0 - 8u;
        t142 = cow_thiscall(g, rd32(t141), ecx, 1, 1u);
        t143 = g->edx;
        wr32(COW_IMG(0x10669424u), 0u);
        eax = t142;
        edx = t143;
    }
    if (rd32(COW_IMG(0x10455af8u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10455af8u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10455af8u));
        g->edx = rd32(ecx);
        t144 = rd32(ecx);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t144), ecx, 1, 1u);
        t145 = g->ecx;
        t146 = g->edx;
        wr32(COW_IMG(0x10455af8u), 0u);
        ecx = t145;
        edx = t146;
    }
    t147 = rd32(COW_IMG(0x10456938u));
    wr32(COW_IMG(0x1045692cu), 0u);
    if (t147 != 0u)
    {
        eax = t147;
        g->edx = edx;
        t148 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t148 + 8u), t148, 1, eax);
        t149 = g->ecx;
        t150 = g->edx;
        wr32(COW_IMG(0x10456938u), 0u);
        ecx = t149;
        edx = t150;
    }
    if (rd32(COW_IMG(0x1045693cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1045693cu));
        g->edx = rd32(eax);
        t151 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t151 + 8u), ecx, 1, eax);
        t152 = g->ecx;
        t153 = g->edx;
        wr32(COW_IMG(0x1045693cu), 0u);
        ecx = t152;
        edx = t153;
    }
    if (rd32(COW_IMG(0x10456940u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10456940u));
        g->edx = edx;
        t154 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t154 + 8u), t154, 1, eax);
        t155 = g->ecx;
        t156 = g->edx;
        wr32(COW_IMG(0x10456940u), 0u);
        ecx = t155;
        edx = t156;
    }
    if (rd32(COW_IMG(0x10456944u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456944u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10456944u));
        g->eax = eax;
        g->edx = rd32(eax);
        t157 = rd32(eax);
        g->esp = sp0 - 8u;
        t158 = cow_thiscall(g, rd32(t157 + 8u), ecx, 1, eax);
        t159 = g->edx;
        wr32(COW_IMG(0x10456944u), 0u);
        eax = t158;
        edx = t159;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t160 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t161 = g->edx;
    g->edx = t161;
    t162 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t163 = g->edx;
    g->edx = t163;
    t164 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t165 = g->edx;
    g->edx = t165;
    t166 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t167 = g->edx;
    g->edx = t167;
    t168 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t169 = g->edx;
    g->edx = t169;
    t170 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t171 = g->edx;
    g->edx = t171;
    t172 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t173 = g->edx;
    g->edx = t173;
    t174 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t175 = g->edx;
    g->edx = t175;
    t176 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t177 = g->edx;
    g->esp = sp0;
    g->edx = t177;
    cow_tailcall(g, COW_IMG(0x100279a0u), t176, self + 0x54u, t177);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100108b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100108b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
