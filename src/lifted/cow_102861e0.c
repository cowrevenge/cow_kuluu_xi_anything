/* f_0x102861e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102861e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t178;
    uint32_t t179;
    uint32_t t18;
    uint32_t t180;
    uint32_t t181;
    uint32_t t182;
    uint32_t t183;
    uint32_t t184;
    uint32_t t185;
    uint32_t t186;
    uint32_t t187;
    uint32_t t188;
    uint32_t t189;
    uint32_t t19;
    uint32_t t190;
    uint32_t t191;
    uint32_t t192;
    uint32_t t193;
    uint32_t t194;
    uint32_t t195;
    uint32_t t196;
    uint32_t t197;
    uint32_t t198;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109a2788u));
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x109a2788u));
        g->eax = eax;
        g->ecx = self;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg2, in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->eax = rd32(COW_IMG(0x109a2788u));
        g->ecx = t2;
        t4 = rd32(COW_IMG(0x109a2788u));
        g->esp = sp0 - 0xcu;
        t5 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, t4, COW_IMG(0x103b8234u), t1, arg2, in_edi);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x10285f20u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t9 = g->ecx;
    t10 = g->edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t10, 1, 3, arg2, arg2, in_edi);
    t12 = g->edx;
    if ((int32_t)rd32(arg1 + 0x28u) <= (int32_t)rd32(arg1 + 0x24u))
    {
        eax = rd32(arg1 + 0x28u);
        edx = t12;
        ebx = rd32(arg1 + 0x24u);
        ebp = t11;
    }
    else
    {
        eax = rd32(arg1 + 0x28u);
        edx = t12;
        ebp = t11;
        ebx = eax;
    }
    t13 = rd32(arg1 + 0x1cu);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t13;
    g->esp = sp0 - 0xcu;
    t14 = cow_call_regs(g, COW_IMG(0x10286970u), g->eax, g->ecx, edx, 1, 4, t13, ebx, arg2, in_edi);
    t15 = g->ecx;
    t16 = rd32(arg1 + 0x20u);
    g->ebx = ebx;
    g->ecx = t15;
    g->esp = sp0 - 0x10u;
    t17 = cow_call_regs(g, COW_IMG(0x10286a80u), g->eax, g->ecx, t16, 1, 6, t16, ebx, arg2, t13, ebx, arg2);
    t18 = g->ecx;
    t19 = g->edx;
    g->ecx = t18;
    g->esp = sp0 - 0x20u;
    t20 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t19, 1, 3, arg2, t16, ebx);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 - ebp == ebx << 3u)
    {
        eax = t20 - ebp;
        ecx = t21;
        edx = t22;
        goto L_1028627c;
    }
    eax = t20 - ebp;
    ecx = t21;
    edx = t22;
    ebx = ebx << 3u;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b820cu), in_edi);
    t24 = g->ecx;
    t25 = g->edx;
    g->ecx = t24;
    t26 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t25, 1, 3, arg2, COW_IMG(0x103b820cu), in_edi);
    t27 = g->ecx;
    t28 = g->edx;
    g->ebx = ebx;
    g->eax = t26 - ebp;
    g->esp = sp0 - 0x1cu;
    t29 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), ebx);
    g->ebx = in_ebx;
    return t29 & 0xffffff00u;
L_1028627c: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t30 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t31 = g->ecx;
    t32 = g->edx;
    if ((int32_t)rd32(arg1 + 0x38u) <= (int32_t)rd32(arg1 + 0x34u))
    {
        ecx = t31;
        edx = t32;
        ebx = rd32(arg1 + 0x34u);
        ebp = t30;
    }
    else
    {
        eax = rd32(arg1 + 0x38u);
        ecx = t31;
        edx = t32;
        ebp = t30;
        ebx = eax;
    }
    t33 = rd32(arg1 + 0x2cu);
    g->ebx = ebx;
    g->eax = t33;
    g->esp = sp0 - 0xcu;
    t34 = cow_call_regs(g, COW_IMG(0x10286970u), g->eax, g->ecx, edx, 1, 4, t33, ebx, arg2, in_edi);
    t35 = g->edx;
    t36 = rd32(arg1 + 0x30u);
    g->ebx = ebx;
    g->ecx = t36;
    g->esp = sp0 - 0x10u;
    t37 = cow_call_regs(g, COW_IMG(0x10286a80u), g->eax, g->ecx, t35, 1, 6, t36, ebx, arg2, t33, ebx, arg2);
    t38 = g->ecx;
    t39 = g->edx;
    g->ecx = t38;
    g->esp = sp0 - 0x20u;
    t40 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t39, 1, 3, arg2, t36, ebx);
    t41 = g->ecx;
    t42 = g->edx;
    if (t40 - ebp == ebx << 3u)
    {
        eax = t40 - ebp;
        ecx = t41;
        edx = t42;
        goto L_102862e3;
    }
    eax = t40 - ebp;
    ecx = t41;
    edx = t42;
    ebx = ebx << 3u;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t43 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81bcu), in_edi);
    t44 = g->ecx;
    t45 = g->edx;
    g->ecx = t44;
    t46 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t45, 1, 3, arg2, COW_IMG(0x103b81bcu), in_edi);
    t47 = g->ecx;
    t48 = g->edx;
    g->ebx = ebx;
    g->eax = t46 - ebp;
    g->esp = sp0 - 0x1cu;
    t49 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), ebx);
    g->ebx = in_ebx;
    return t49 & 0xffffff00u;
L_102862e3: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t50 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t51 = g->ecx;
    t52 = g->edx;
    if ((int32_t)rd32(arg1 + 0x48u) <= (int32_t)rd32(arg1 + 0x44u))
    {
        eax = rd32(arg1 + 0x48u);
        ecx = t51;
        edx = t52;
        ebx = rd32(arg1 + 0x44u);
        ebp = t50;
    }
    else
    {
        eax = rd32(arg1 + 0x48u);
        ecx = t51;
        edx = t52;
        ebp = t50;
        ebx = eax;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t53 = cow_cdecl(g, COW_IMG(0x10286620u), 1, arg1);
    t54 = g->ecx;
    t55 = rd32(arg1 + 0x3cu);
    g->ebx = ebx;
    g->ecx = t54;
    t56 = cow_call_regs(g, COW_IMG(0x10286970u), g->eax, g->ecx, t55, 1, 4, t55, ebx, arg2, arg1);
    t57 = g->ecx;
    t58 = g->edx;
    g->ebx = ebx;
    g->ecx = t57;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10286a00u), g->eax, g->ecx, t58, 1, 3, 0x10u, arg2, t55);
    t59 = g->ecx;
    t60 = g->edx;
    t61 = rd32(arg1 + 0x40u);
    g->ebx = ebx;
    g->eax = t61;
    g->ecx = t59;
    t62 = cow_call_regs(g, COW_IMG(0x10286a80u), g->eax, g->ecx, t60, 1, 6, t61, ebx, arg2, 0x10u, arg2, t55);
    t63 = g->ecx;
    t64 = g->edx;
    g->ebx = ebx;
    g->ecx = t63;
    g->esp = sp0 - 0x30u;
    t65 = cow_call_regs(g, COW_IMG(0x10286b10u), g->eax, g->ecx, t64, 1, 3, 0x10u, arg2, t61);
    t66 = g->ecx;
    t67 = g->edx;
    g->ecx = t66;
    g->esp = sp0 - 0x34u;
    t68 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t67, 1, 3, arg2, 0x10u, arg2);
    t69 = g->ecx;
    t70 = g->edx;
    if (t68 - ebp == ebx * 8u + 0x80u)
    {
        eax = t68 - ebp;
        ecx = t69;
        edx = t70;
        goto L_10286364;
    }
    eax = t68 - ebp;
    ecx = t69;
    edx = t70;
    ebx = ebx * 8u + 0x80u;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t71 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8194u), in_edi);
    t72 = g->ecx;
    t73 = g->edx;
    g->ecx = t72;
    t74 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t73, 1, 3, arg2, COW_IMG(0x103b8194u), in_edi);
    t75 = g->ecx;
    t76 = g->edx;
    g->ebx = ebx;
    g->eax = t74 - ebp;
    g->esp = sp0 - 0x1cu;
    t77 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), ebx);
    g->ebx = in_ebx;
    return t77 & 0xffffff00u;
L_10286364: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t78 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t79 = g->edx;
    if ((int32_t)rd32(arg1 + 0x5cu) <= (int32_t)rd32(arg1 + 0x58u))
    {
        eax = rd32(arg1 + 0x5cu);
        edx = t79;
        ebx = rd32(arg1 + 0x58u);
        ebp = t78;
    }
    else
    {
        eax = rd32(arg1 + 0x5cu);
        edx = t79;
        ebp = t78;
        ebx = eax;
    }
    t80 = rd32(arg1 + 0x4cu);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t80;
    g->esp = sp0 - 0xcu;
    t81 = cow_call_regs(g, COW_IMG(0x10286970u), g->eax, g->ecx, edx, 1, 4, t80, ebx, arg2, in_edi);
    t82 = g->ecx;
    t83 = g->edx;
    g->ebx = ebx;
    g->ecx = t82;
    g->esp = sp0 - 0x1cu;
    t84 = cow_call_regs(g, COW_IMG(0x102867c0u), g->eax, g->ecx, t83, 1, 3, arg1, ebx, arg2);
    t85 = g->ecx;
    t86 = rd32(arg1 + 0x54u);
    g->ebx = ebx;
    g->ecx = t85;
    t87 = cow_call_regs(g, COW_IMG(0x10286a80u), g->eax, g->ecx, t86, 1, 6, t86, ebx, arg2, arg1, ebx, arg2);
    t88 = g->ecx;
    t89 = g->edx;
    g->ecx = t88;
    g->esp = sp0 - 0x2cu;
    t90 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t89, 1, 3, arg2, t86, ebx);
    t91 = g->ecx;
    t92 = g->edx;
    if (t90 - ebp == ebx * 0xcu)
    {
        eax = t90 - ebp;
        ecx = t91;
        edx = t92;
        goto L_102863d6;
    }
    eax = t90 - ebp;
    ecx = t91;
    edx = t92;
    ebx = ebx * 0xcu;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t93 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8170u), in_edi);
    t94 = g->ecx;
    t95 = g->edx;
    g->ecx = t94;
    t96 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t95, 1, 3, arg2, COW_IMG(0x103b8170u), in_edi);
    t97 = g->ecx;
    t98 = g->edx;
    g->ebx = ebx;
    g->eax = t96 - ebp;
    g->esp = sp0 - 0x1cu;
    t99 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), ebx);
    g->ebx = in_ebx;
    return t99 & 0xffffff00u;
L_102863d6: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t100 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t101 = g->ecx;
    t102 = g->edx;
    if ((int32_t)rd32(arg1 + 0x6cu) <= (int32_t)rd32(arg1 + 0x68u))
    {
        ecx = t101;
        edx = t102;
        ebx = rd32(arg1 + 0x68u);
        ebp = t100;
    }
    else
    {
        eax = rd32(arg1 + 0x6cu);
        ecx = t101;
        edx = t102;
        ebp = t100;
        ebx = eax;
    }
    t103 = rd32(arg1 + 0x60u);
    g->ebx = ebx;
    g->eax = t103;
    g->esp = sp0 - 0xcu;
    t104 = cow_call_regs(g, COW_IMG(0x10286970u), g->eax, g->ecx, edx, 1, 4, t103, ebx, arg2, in_edi);
    t105 = g->edx;
    t106 = rd32(arg1 + 0x64u);
    g->ebx = ebx;
    g->ecx = t106;
    g->esp = sp0 - 0x10u;
    t107 = cow_call_regs(g, COW_IMG(0x10286a80u), g->eax, g->ecx, t105, 1, 6, t106, ebx, arg2, t103, ebx, arg2);
    t108 = g->ecx;
    t109 = g->edx;
    g->ecx = t108;
    g->esp = sp0 - 0x20u;
    t110 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t109, 1, 3, arg2, t106, ebx);
    t111 = g->ecx;
    t112 = g->edx;
    if (t110 - ebp == ebx << 3u)
    {
        eax = t110 - ebp;
        ecx = t111;
        edx = t112;
        goto L_1028643d;
    }
    eax = t110 - ebp;
    ecx = t111;
    edx = t112;
    ebx = ebx << 3u;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t113 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b814cu), in_edi);
    t114 = g->ecx;
    t115 = g->edx;
    g->ecx = t114;
    t116 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t115, 1, 3, arg2, COW_IMG(0x103b814cu), in_edi);
    t117 = g->ecx;
    t118 = g->edx;
    g->ebx = ebx;
    g->eax = t116 - ebp;
    g->esp = sp0 - 0x1cu;
    t119 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), ebx);
    g->ebx = in_ebx;
    return t119 & 0xffffff00u;
L_1028643d: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t120 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t121 = g->ecx;
    if ((int32_t)rd32(arg1 + 0x80u) <= (int32_t)rd32(arg1 + 0x7cu))
    {
        eax = rd32(arg1 + 0x80u);
        ecx = t121;
        ebx = rd32(arg1 + 0x7cu);
        ebp = t120;
    }
    else
    {
        eax = rd32(arg1 + 0x80u);
        ecx = t121;
        ebp = t120;
        ebx = eax;
    }
    t122 = rd32(arg1 + 0x70u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10286970u), g->eax, g->ecx, t122, 1, 4, t122, ebx, arg2, in_edi);
    t123 = g->ecx;
    t124 = g->edx;
    t125 = rd32(arg1 + 0x74u);
    g->ebx = ebx;
    g->eax = t125;
    g->esp = sp0 - 0x10u;
    t126 = cow_call_regs(g, COW_IMG(0x10286a80u), g->eax, g->ecx, t124, 1, 6, t125, ebx, arg2, t122, ebx, arg2);
    t127 = g->edx;
    t128 = rd32(arg1 + 0x78u);
    g->ebx = ebx;
    g->ecx = t128;
    g->esp = sp0 - 0x1cu;
    t129 = cow_call_regs(g, COW_IMG(0x10286a80u), g->eax, g->ecx, t127, 1, 6, t128, ebx, arg2, t125, ebx, arg2);
    t130 = g->ecx;
    t131 = g->edx;
    g->ecx = t130;
    g->esp = sp0 - 0x2cu;
    t132 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t131, 1, 3, arg2, t128, ebx);
    t133 = g->ecx;
    t134 = g->edx;
    if (t132 - ebp == ebx * 0xcu)
    {
        eax = t132 - ebp;
        ecx = t133;
        edx = t134;
        goto L_102864b5;
    }
    eax = t132 - ebp;
    ecx = t133;
    edx = t134;
    ebx = ebx * 0xcu;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t135 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8128u), in_edi);
    t136 = g->ecx;
    t137 = g->edx;
    g->ecx = t136;
    t138 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t137, 1, 3, arg2, COW_IMG(0x103b8128u), in_edi);
    t139 = g->ecx;
    t140 = g->edx;
    g->ebx = ebx;
    g->eax = t138 - ebp;
    g->esp = sp0 - 0x1cu;
    t141 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), ebx);
    g->ebx = in_ebx;
    return t141 & 0xffffff00u;
L_102864b5: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t142 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t143 = g->ecx;
    if ((int32_t)rd32(arg1 + 0x94u) <= (int32_t)rd32(arg1 + 0x90u))
    {
        eax = rd32(arg1 + 0x94u);
        ecx = t143;
        ebx = rd32(arg1 + 0x90u);
        ebp = t142;
    }
    else
    {
        eax = rd32(arg1 + 0x94u);
        ecx = t143;
        ebp = t142;
        ebx = eax;
    }
    t144 = rd32(arg1 + 0x84u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10286970u), g->eax, g->ecx, t144, 1, 4, t144, ebx, arg2, in_edi);
    t145 = g->ecx;
    t146 = g->edx;
    t147 = rd32(arg1 + 0x88u);
    g->ebx = ebx;
    g->eax = t147;
    g->esp = sp0 - 0x10u;
    t148 = cow_call_regs(g, COW_IMG(0x10286a80u), g->eax, g->ecx, t146, 1, 6, t147, ebx, arg2, t144, ebx, arg2);
    t149 = g->edx;
    t150 = rd32(arg1 + 0x8cu);
    g->ebx = ebx;
    g->ecx = t150;
    g->esp = sp0 - 0x1cu;
    t151 = cow_call_regs(g, COW_IMG(0x10286a80u), g->eax, g->ecx, t149, 1, 6, t150, ebx, arg2, t147, ebx, arg2);
    t152 = g->ecx;
    t153 = g->edx;
    g->ecx = t152;
    g->esp = sp0 - 0x2cu;
    t154 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t153, 1, 3, arg2, t150, ebx);
    t155 = g->ecx;
    t156 = g->edx;
    if (t154 - ebp == ebx * 0xcu)
    {
        eax = t154 - ebp;
        ecx = t155;
        edx = t156;
        goto L_10286539;
    }
    eax = t154 - ebp;
    ecx = t155;
    edx = t156;
    ebx = ebx * 0xcu;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t157 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8104u), in_edi);
    t158 = g->ecx;
    t159 = g->edx;
    g->ecx = t158;
    t160 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t159, 1, 3, arg2, COW_IMG(0x103b8104u), in_edi);
    t161 = g->ecx;
    t162 = g->edx;
    g->ebx = ebx;
    g->eax = t160 - ebp;
    g->esp = sp0 - 0x1cu;
    t163 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), ebx);
    g->ebx = in_ebx;
    return t163 & 0xffffff00u;
L_10286539: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t164 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t165 = g->ecx;
    if ((int32_t)rd32(arg1 + 0x5cu) <= (int32_t)rd32(arg1 + 0x58u))
    {
        eax = rd32(arg1 + 0x5cu);
        ecx = t165;
        ebx = rd32(arg1 + 0x58u);
        ebp = t164;
    }
    else
    {
        eax = rd32(arg1 + 0x5cu);
        ecx = t165;
        ebp = t164;
        ebx = eax;
    }
    t166 = rd32(arg1 + 0x98u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10286a80u), g->eax, g->ecx, t166, 1, 6, t166, ebx, arg2, in_edi, in_esi, in_ebp);
    t167 = g->ecx;
    t168 = g->edx;
    t169 = rd32(arg1 + 0xa0u);
    g->ebx = ebx;
    g->eax = t169;
    g->ecx = t167;
    g->esp = sp0 - 0x10u;
    t170 = cow_call_regs(g, COW_IMG(0x10286a80u), g->eax, g->ecx, t168, 1, 6, t169, ebx, arg2, t166, ebx, arg2);
    t171 = g->ecx;
    t172 = g->edx;
    g->ecx = t171;
    g->esp = sp0 - 0x20u;
    t173 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t172, 1, 3, arg2, t169, ebx);
    t174 = g->ecx;
    t175 = g->edx;
    if (t173 - ebp == ebx << 3u)
    {
        eax = t173 - ebp;
        ecx = t174;
        edx = t175;
        goto L_102865a6;
    }
    eax = t173 - ebp;
    ecx = t174;
    edx = t175;
    ebx = ebx << 3u;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t176 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b80d8u), in_edi);
    t177 = g->ecx;
    t178 = g->edx;
    g->ecx = t177;
    t179 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t178, 1, 3, arg2, COW_IMG(0x103b80d8u), in_edi);
    t180 = g->ecx;
    t181 = g->edx;
    g->ebx = ebx;
    g->eax = t179 - ebp;
    g->esp = sp0 - 0x1cu;
    t182 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), ebx);
    g->ebx = in_ebx;
    return t182 & 0xffffff00u;
L_102865a6: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t183 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t184 = g->edx;
    if ((int32_t)rd32(arg1 + 0x5cu) <= (int32_t)rd32(arg1 + 0xa4u))
    {
        eax = rd32(arg1 + 0x5cu);
        edx = t184;
        ebx = rd32(arg1 + 0xa4u);
        ebp = t183;
    }
    else
    {
        eax = rd32(arg1 + 0x5cu);
        edx = t184;
        ebp = t183;
        ebx = eax;
    }
    t185 = rd32(arg1 + 0x9cu);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t185;
    g->esp = sp0 - 4u;
    t186 = cow_call_regs(g, COW_IMG(0x10286a80u), g->eax, g->ecx, edx, 1, 6, t185, ebx, arg2, in_edi, in_esi, in_ebp);
    t187 = g->ecx;
    t188 = g->edx;
    g->ecx = t187;
    g->esp = sp0 - 0x14u;
    t189 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t188, 1, 3, arg2, t185, ebx);
    t190 = g->ecx;
    t191 = g->edx;
    if (t189 - ebp == ebx * 4u)
    {
        eax = t189 - ebp;
        goto L_1028660c;
    }
    eax = t189 - ebp;
    ecx = t190;
    edx = t191;
    edi = ebx * 4u;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t192 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b80acu), in_edi);
    t193 = g->ecx;
    t194 = g->edx;
    g->ecx = t193;
    t195 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t194, 1, 3, arg2, COW_IMG(0x103b80acu), in_edi);
    t196 = g->ecx;
    t197 = g->edx;
    g->ebx = ebx;
    g->eax = t195 - ebp;
    g->esp = sp0 - 0x1cu;
    t198 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), edi);
    g->ebx = in_ebx;
    return t198 & 0xffffff00u;
L_1028660c: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102861e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102861e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
