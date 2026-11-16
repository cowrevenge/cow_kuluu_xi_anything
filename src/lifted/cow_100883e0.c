/* f_0x100883e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100883e0(Guest* g)
{
    double d116;
    double d140;
    double d154;
    double d88;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_4;
    int64_t q120;
    uint32_t sf;
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
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
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
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if ((rd32(self + 0x1d0u) >> 8u & 2u) == 0u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10095750u), self, 1, 0xffu);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    ecx = t2;
    edx = t3;
    if (rd32(self + 0x170u) - 1u > 0x31u)
    {
        eax = rd32(self + 0x170u) - 1u;
        goto L_10088a62;
    }
    eax = rd32(self + 0x170u) - 1u;
    t4 = rd32(COW_IMG(0x10088ad4u) + rd8(COW_IMG(0x10088adcu) + eax) * 4u);
    switch (t4 - RD)
    {
    case 0x10088426u: goto L_10088426;
    case 0x10088a62u: ecx = rd8(COW_IMG(0x10088adcu) + eax); goto L_10088a62;
    default: rt_fatal(g, COW_IMG(0x1008841fu), "switch");
    }
    return;
L_10088426: ;
    if (rd8(self + 0x12bu) & 1u)
    {
        t5 = (rd32(self + 0x128u) & 0xff7fffffu) | 0x600000u;
        wr32(self + 0x128u, t5);
        edx = t5;
    }
    wr8(COW_IMG(0x10487e49u), 0u);
    if ((rd32(self + 0x120u) >> 8u & 4u) == 0u) goto L_10088466;
    eax = rd32(self + 0x120u);
    if ((eax & 0x1800u) == 0x800u) goto L_10088473;
L_10088466: ;
    if (!(rd8(self + 0x12bu) & 1u))
    {
        loc_4 = self;
        goto L_10088acf;
    }
L_10088473: ;
    t6 = rd32(self + 0x128u);
    if ((t6 >> 0x15u & 7u) > 3u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    eax = t6;
    ecx = t6 >> 0x15u & 7u;
    t7 = rd32(COW_IMG(0x10088b10u) + ecx * 4u);
    switch (t7 - RD)
    {
    case 0x10088491u: goto L_10088491;
    case 0x1008858fu: goto L_1008858f;
    case 0x100887aeu: goto L_100887ae;
    case 0x10088822u: goto L_10088822;
    default: rt_fatal(g, COW_IMG(0x1008848au), "switch");
    }
    return;
L_10088491: ;
    if ((int32_t)rd32(self + 0x170u) < 38)
    {
        ecx = rd32(self + 0x170u);
    }
    else
    {
        ecx = rd32(self + 0x170u);
        if ((int32_t)ecx <= 43)
        {
            t133 = (eax & 0xff7fffffu) | 0x600000u;
            wr32(self + 0x128u, t133);
            eax = t133;
        }
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t134 = cow_cdecl(g, COW_IMG(0x1008a0e0u), 1, 4u);
    t135 = g->ecx;
    t136 = g->edx;
    if (rd8(COW_IMG(0x104808fbu)) != 0u)
    {
        ecx = t135;
        edx = t136;
        goto L_100884dc;
    }
    eax = (t134 & 0xffffff00u) | rd8(COW_IMG(0x104808fbu));
    ecx = t135;
    edx = t136;
    if ((int32_t)rd32(self + 0x1dcu) <= 0) goto L_1008850b;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t137 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t138 = g->ecx;
    t139 = g->edx;
    d140 = cow_take_float(g);
    g->ecx = t138;
    g->edx = t139;
    fpush(g, d140);
    t141 = cow_call_regs(g, COW_IMG(0x10311c6cu), t137, g->ecx, g->edx, 1, 0);
    t142 = g->ecx;
    t143 = g->edx;
    wr32(self + 0x1dcu, rd32(self + 0x1dcu) - t141);
    ecx = t142;
    edx = t143;
L_100884dc: ;
    g->ebx = 0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t148 = cow_stdcall(g, COW_IMG(0x10088b50u), 0);
    t149 = g->ecx;
    t150 = g->edx;
    if ((uint8_t)t148 == 0u)
    {
        eax = t148;
        ecx = t149;
        edx = t150;
    }
    else
    {
        eax = t148;
        ecx = t149;
        edx = t150;
        wr8(COW_IMG(0x104808fbu), 1u);
    }
    if ((int16_t)rd16(self + 0x1e0u) <= 0) goto L_10088545;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t151 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t152 = g->ecx;
    t153 = g->edx;
    d154 = cow_take_float(g);
    fpush(g, d154);
    t155 = cow_call_regs(g, COW_IMG(0x10311c6cu), t151, g->ecx, g->edx, 1, 0);
    wr16(self + 0x1e0u, (uint16_t)(rd16(self + 0x1e0u) - (uint16_t)t155));
    g->ebx = in_ebx;
    return;
L_1008850b: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t144 = cow_cdecl(g, COW_IMG(0x10088320u), 3, 0u, 2u, 0u);
    t145 = g->ecx;
    t146 = g->edx;
    if ((uint8_t)t144 == 0u)
    {
        ecx = t145;
        edx = t146;
        goto L_100884dc;
    }
    t147 = (rd32(self + 0x128u) & 0xff3fffffu) | 0x200000u;
    wr32(self + 0x128u, t147);
    wr32(COW_IMG(0x10487ef8u), 0u);
    wr16(self + 0x1e2u, 0x708u);
    g->ebx = in_ebx;
    return;
L_10088545: ;
    g->ebx = 0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t156 = cow_stdcall(g, COW_IMG(0x10088b20u), 0);
    t157 = g->ecx;
    t158 = g->edx;
    if ((uint8_t)t156 != 0u)
    {
        ecx = t157;
        edx = t158;
        goto L_1008855a;
    }
    ecx = t157;
    edx = t158;
    if (rd8(COW_IMG(0x104808fbu)) == 0u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
L_1008855a: ;
    g->esp = sp0 - 0x10u;
    t159 = cow_cdecl(g, COW_IMG(0x10088320u), 3, 0xc9u, 3u, 0u);
    if ((uint8_t)t159 == 0u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
L_10088572: ;
    t160 = (rd32(self + 0x128u) & 0xff7fffffu) | 0x600000u;
    wr32(self + 0x128u, t160);
    g->ebx = in_ebx;
    return;
L_1008858f: ;
    if ((int32_t)rd32(self + 0x170u) < 39)
    {
        ecx = rd32(self + 0x170u);
        goto L_100885a3;
    }
    ecx = rd32(self + 0x170u);
    if ((int32_t)ecx <= 43) goto L_100887c3;
L_100885a3: ;
    if (ecx != 0x32u) goto L_10088607;
    if (rd16(self + 0x1e2u) == 0u) goto L_10088607;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t85 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t86 = g->ecx;
    t87 = g->edx;
    d88 = cow_take_float(g);
    g->ecx = t86;
    g->edx = t87;
    fpush(g, d88);
    t89 = cow_call_regs(g, COW_IMG(0x10311c6cu), t85, g->ecx, g->edx, 1, 0);
    t90 = g->ecx;
    t91 = g->edx;
    wr16(self + 0x1e2u, (uint16_t)(rd16(self + 0x1e2u) - (uint16_t)t89));
    if ((int16_t)rd16(self + 0x1e2u) > 0)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    ecx = t90;
    edx = t91;
    g->esp = sp0 - 0x10u;
    t92 = cow_cdecl(g, COW_IMG(0x10088320u), 3, 0xc9u, 3u, 0u);
    if ((uint8_t)t92 != 0u)
    {
        t93 = (rd32(self + 0x128u) & 0xff7fffffu) | 0x600000u;
        wr32(self + 0x128u, t93);
    }
    wr16(self + 0x1e2u, 0u);
    return;
L_10088607: ;
    t94 = rd32(COW_IMG(0x10487ef8u)) + 1u;
    t95 = rd32(COW_IMG(0x10487ef8u));
    wr32(COW_IMG(0x10487ef8u), t94);
    if ((t95 & 0x3fu) != 0u) goto L_10088660;
    ecx = (t95 & 0xffffff00u) | (t95 & 0x3fu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t96 = cow_stdcall(g, COW_IMG(0x10177730u), 0);
    t97 = g->ecx;
    t98 = g->edx;
    if ((uint8_t)t96 != 0u)
    {
        edx = t98;
        goto L_10088660;
    }
    ecx = t97;
    edx = t98;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t99 = cow_cdecl(g, COW_IMG(0x10088320u), 3, 0xc8u, 3u, 0u);
    t100 = g->edx;
    if ((uint8_t)t99 == 0u)
    {
        edx = t100;
        goto L_10088660;
    }
    edx = t100;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10127ea0u), 0);
    t101 = (rd32(self + 0x128u) & 0xff7fffffu) | 0x600000u;
    wr32(self + 0x128u, t101);
    return;
L_10088660: ;
    t102 = rd32(self + 0xa0u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(t102) + 0x29cu), t102, 2, 0x30687366u, t102);
    t103 = g->edx;
    if (rd32(COW_IMG(0x10487ee0u)) == 0u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    edx = t103;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10088bd0u), self, 0);
    t104 = g->ecx;
    t105 = g->edx;
    g->ebx = 0u;
    g->ecx = t104;
    g->edx = t105;
    t106 = cow_stdcall(g, COW_IMG(0x10088b20u), 0);
    t107 = g->ecx;
    t108 = g->edx;
    if ((uint8_t)t106 == 0u)
    {
        eax = t106;
        ecx = t107;
        edx = t108;
        edi = 0u;
    }
    else
    {
        eax = t106;
        ecx = t107;
        edx = t108;
        edi = 0xffffffffu;
    }
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t109 = cow_call_regs(g, COW_IMG(0x10088bb0u), eax, ecx, g->edx, 1, 0);
    t110 = g->ecx;
    t111 = g->edx;
    if ((uint8_t)t109 != 0u)
    {
        edx = t111;
        goto L_10088774;
    }
    eax = t109;
    ecx = t110;
    edx = t111;
    if (edi != 0u)
    {
        sf = (int32_t)edi < 0;
        goto L_1008875d;
    }
    g->ecx = rd32(COW_IMG(0x10487ee0u));
    g->edx = edx;
    t112 = rd32(COW_IMG(0x10487ee0u));
    g->esp = sp0 - 0x10u;
    t113 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t114 = g->ecx;
    t115 = g->edx;
    d116 = cow_take_float(g);
    g->edx = t115;
    fpush(g, d116);
    t117 = cow_call_regs(g, COW_IMG(0x10311c6cu), t113, g->ecx, g->edx, 1, 0);
    t118 = g->edx;
    t119 = rd32(t112 + 0x1cu) - t117;
    wr32(t112 + 0x1cu, t119);
    if ((int32_t)rd32(rd32(COW_IMG(0x10487ee0u)) + 0x1cu) > 0)
    {
        eax = rd32(COW_IMG(0x10487ee0u));
        ecx = rd32(rd32(COW_IMG(0x10487ee0u)) + 0x1cu);
        edx = t118;
        goto L_1008870f;
    }
    ecx = rd32(rd32(COW_IMG(0x10487ee0u)) + 0x1cu);
    edx = t118;
    loc_4 = self;
    loc_14 = 0u;
    loc_1c = 0x12cu;
L_100886d7: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t130 = cow_cdecl(g, COW_IMG(0x10088320u), 3, loc_1c, 3u, loc_14);
    t131 = g->edx;
    if ((uint8_t)t130 == 0u) goto L_10088acf;
    edx = t131;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10127ea0u), 0);
    t132 = (rd32(self + 0x128u) & 0xff5fffffu) | 0x400000u;
    wr32(self + 0x128u, t132);
    g->ebx = in_ebx;
    return;
L_1008870f: ;
    if (rd32(eax + 0x20u) != 0u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    if ((int32_t)ecx >= 420)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    q120 = (int64_t)cow_muls(0x88888889u, ecx);
    t121 = (uint32_t)((int32_t)(ecx + cow_qhi(q120)) >> 5u);
    t122 = t121 + (t121 >> 0x1fu);
    g->esp = sp0 - 0x10u;
    t123 = cow_cdecl(g, COW_IMG(0x10088320u), 3, t122, 5u, 0u);
    if ((uint8_t)t123 == 0u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    wr32(rd32(COW_IMG(0x10487ee0u)) + 0x20u, 1u);
    g->ebx = in_ebx;
    return;
L_1008875d: ;
    if (!sf) goto L_1008876c;
    loc_4 = self;
    loc_14 = 0u;
    loc_1c = 0xc8u;
    goto L_100886d7;
L_1008876c: ;
    if ((int32_t)edi <= 0)
    {
        loc_4 = self;
        goto L_10088acf;
    }
L_10088774: ;
    t124 = rd32(rd32(COW_IMG(0x10487ee0u)));
    if (rd32(rd32(COW_IMG(0x10487ee0u))) == 0u)
    {
        loc_4 = t124;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10487ee0u));
        loc_4 = t124;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        x0 = fr(g, fr(g, (double)(int32_t)rd32(ecx + 4u) * (double)rdf32(COW_IMG(0x1032a3c8u))) / (double)(int32_t)loc_4);
    }
    t125 = rd32(rd32(COW_IMG(0x10487edcu)));
    g->ecx = t125;
    g->edx = edx;
    t126 = rd32(COW_IMG(0x10487edcu));
    fpush(g, x0);
    g->esp = sp0 - 0x18u;
    t127 = cow_call_regs(g, COW_IMG(0x10311c6cu), t126, g->ecx, g->edx, 1, 0);
    t128 = g->ecx;
    t129 = g->edx;
    ecx = t128;
    edx = t129;
    loc_14 = t125;
    loc_1c = t127;
    goto L_100886d7;
L_100887ae: ;
    if ((int32_t)rd32(self + 0x170u) < 40)
    {
        ecx = rd32(self + 0x170u);
        goto L_100887d8;
    }
    ecx = rd32(self + 0x170u);
    if ((int32_t)ecx <= 43) goto L_100887c3;
    if (ecx != 0x32u) goto L_100887d8;
L_100887c3: ;
    t84 = (eax & 0xff7fffffu) | 0x600000u;
    wr32(self + 0x128u, t84);
    return;
L_100887d8: ;
    if (ecx == 0x26u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    t77 = rd32(self + 0xa0u);
    g->eax = rd32(t77);
    t78 = rd32(t77);
    g->esp = sp0 - 0x10u;
    t79 = cow_thiscall(g, rd32(t78 + 0x29cu), t77, 2, 0x37687366u, t77);
    t80 = rd32(self + 0xa0u);
    g->edx = rd32(t80);
    t81 = rd32(t80);
    cow_thiscall(g, rd32(t81 + 0x29cu), t80, 2, 0x38687366u, t80);
    t82 = g->edx;
    t83 = rd32(self + 0xa0u);
    cow_thiscall(g, rd32(rd32(t83) + 0x29cu), t83, 2, 0x39687366u, t83);
    goto L_10088572;
L_10088822: ;
    t8 = rd32(self + 0xa0u);
    g->edx = rd32(t8);
    t9 = rd32(t8);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(t9 + 0x29cu), t8, 2, 0x30687366u, t8);
    t10 = g->edx;
    t11 = rd32(self + 0xa0u);
    g->eax = rd32(t11);
    t12 = rd32(t11);
    t13 = cow_thiscall(g, rd32(t12 + 0x29cu), t11, 2, 0x37687366u, t11);
    t14 = rd32(self + 0xa0u);
    g->edx = rd32(t14);
    t15 = rd32(t14);
    cow_thiscall(g, rd32(t15 + 0x29cu), t14, 2, 0x38687366u, t14);
    t16 = g->edx;
    t17 = rd32(self + 0xa0u);
    g->edx = t16;
    cow_thiscall(g, rd32(rd32(t17) + 0x29cu), t17, 2, 0x39687366u, t17);
    t18 = g->ecx;
    t19 = g->edx;
    if ((int32_t)rd32(self + 0x170u) < 38)
    {
        ecx = t18;
        edx = t19;
        goto L_1008891b;
    }
    eax = rd32(self + 0x170u);
    ecx = t18;
    edx = t19;
    if ((int32_t)eax <= 43) goto L_1008888f;
    if (eax != 0x32u) goto L_1008891b;
L_1008888f: ;
    t20 = rd32(self + 0xa0u);
    g->eax = eax;
    g->edx = rd32(t20);
    t21 = rd32(t20);
    g->esp = sp0 - 0x10u;
    t22 = cow_thiscall(g, rd32(t21 + 0x2a0u), t20, 2, 0x32687366u, t20);
    t23 = g->edx;
    if ((uint8_t)t22 != 0u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    edx = t23;
    t24 = rd32(self + 0xa0u);
    g->eax = rd32(t24);
    t25 = rd32(t24);
    g->esp = sp0 - 0x10u;
    t26 = cow_thiscall(g, rd32(t25 + 0x2a0u), t24, 2, 0x33687366u, t24);
    if ((uint8_t)t26 != 0u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    eax = t26;
    t27 = rd32(self + 0xa0u);
    g->eax = eax;
    g->edx = rd32(t27);
    t28 = rd32(t27);
    g->esp = sp0 - 0x10u;
    t29 = cow_thiscall(g, rd32(t28 + 0x2a0u), t27, 2, 0x34687366u, t27);
    t30 = g->edx;
    if ((uint8_t)t29 != 0u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    edx = t30;
    t31 = rd32(self + 0xa0u);
    g->eax = rd32(t31);
    t32 = rd32(t31);
    g->esp = sp0 - 0x10u;
    t33 = cow_thiscall(g, rd32(t32 + 0x2a0u), t31, 2, 0x35687366u, t31);
    if ((uint8_t)t33 != 0u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    eax = t33;
    t34 = rd32(self + 0xa0u);
    g->eax = eax;
    g->edx = rd32(t34);
    t35 = rd32(t34);
    g->esp = sp0 - 0x10u;
    t36 = cow_thiscall(g, rd32(t35 + 0x2a0u), t34, 2, 0x36687366u, t34);
    t37 = g->ecx;
    t38 = g->edx;
    if ((uint8_t)t36 != 0u)
    {
        loc_4 = self;
        goto L_10088acf;
    }
    ecx = t37;
    edx = t38;
L_1008891b: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t39 = cow_cdecl(g, COW_IMG(0x10088320u), 3, 0u, 4u, 0u);
    t40 = g->edx;
    if ((uint8_t)t39 == 0u)
    {
        eax = t39;
        edx = t40;
    }
    else
    {
        t41 = rd32(self + 0xa0u);
        t42 = (rd32(self + 0x128u) & 0xff9fffffu) | 0x800000u;
        wr32(self + 0x128u, t42);
        g->edx = rd32(t41);
        t43 = rd32(t41);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t43 + 0x29cu), t41, 2, 0x30687366u, t41);
        t44 = g->edx;
        t45 = rd32(self + 0xa0u);
        g->eax = rd32(t45);
        t46 = rd32(t45);
        t47 = cow_thiscall(g, rd32(t46 + 0x29cu), t45, 2, 0x31687366u, t45);
        t48 = rd32(self + 0xa0u);
        g->edx = rd32(t48);
        t49 = rd32(t48);
        cow_thiscall(g, rd32(t49 + 0x29cu), t48, 2, 0x32687366u, t48);
        t50 = g->edx;
        t51 = rd32(self + 0xa0u);
        g->eax = rd32(t51);
        t52 = rd32(t51);
        t53 = cow_thiscall(g, rd32(t52 + 0x29cu), t51, 2, 0x33687366u, t51);
        t54 = rd32(self + 0xa0u);
        g->edx = rd32(t54);
        t55 = rd32(t54);
        cow_thiscall(g, rd32(t55 + 0x29cu), t54, 2, 0x34687366u, t54);
        t56 = g->edx;
        t57 = rd32(self + 0xa0u);
        g->eax = rd32(t57);
        t58 = rd32(t57);
        t59 = cow_thiscall(g, rd32(t58 + 0x29cu), t57, 2, 0x35687366u, t57);
        t60 = rd32(self + 0xa0u);
        g->edx = rd32(t60);
        t61 = rd32(t60);
        cow_thiscall(g, rd32(t61 + 0x29cu), t60, 2, 0x36687366u, t60);
        t62 = g->edx;
        t63 = rd32(self + 0xa0u);
        g->eax = rd32(t63);
        t64 = rd32(t63);
        t65 = cow_thiscall(g, rd32(t64 + 0x29cu), t63, 2, 0x37687366u, t63);
        t66 = rd32(self + 0xa0u);
        g->edx = rd32(t66);
        t67 = rd32(t66);
        cow_thiscall(g, rd32(t67 + 0x29cu), t66, 2, 0x38687366u, t66);
        t68 = g->edx;
        t69 = rd32(self + 0xa0u);
        g->edx = t68;
        cow_thiscall(g, rd32(rd32(t69) + 0x29cu), t69, 2, 0x39687366u, t69);
        t70 = g->ecx;
        t71 = g->edx;
        if (rd32(COW_IMG(0x10487edcu)) == 0u)
        {
            ecx = t70;
            edx = t71;
        }
        else
        {
            eax = rd32(COW_IMG(0x10487edcu));
            ecx = t70;
            edx = t71;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
            t72 = g->ecx;
            t73 = g->edx;
            wr32(COW_IMG(0x10487edcu), 0u);
            ecx = t72;
            edx = t73;
        }
        if (rd32(COW_IMG(0x10487ee0u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10487ee0u));
        }
        else
        {
            eax = rd32(COW_IMG(0x10487ee0u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t74 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
            t75 = g->edx;
            wr32(COW_IMG(0x10487ee0u), 0u);
            eax = t74;
            edx = t75;
        }
        wr32(self + 0x128u, rd32(self + 0x128u) & 0xfeffffffu);
    }
    t76 = rd32(COW_IMG(0x106643a8u));
    wr16(t76 + 0x3au, 0xffffu);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1008a0e0u), 1, 2u);
    return;
L_10088a62: ;
    if ((rd32(self + 0x128u) & 0xe00000u) >= 0x200000u)
    {
        edx = rd32(self + 0x128u) & 0xe00000u;
        wr16(rd32(COW_IMG(0x106643a8u)) + 0x3au, 0xffffu);
        if (rd32(COW_IMG(0x10487edcu)) != 0u)
        {
            eax = rd32(COW_IMG(0x10487edcu));
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
            t161 = g->ecx;
            t162 = g->edx;
            wr32(COW_IMG(0x10487edcu), 0u);
            ecx = t161;
            edx = t162;
        }
        if (rd32(COW_IMG(0x10487ee0u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10487ee0u));
        }
        else
        {
            eax = rd32(COW_IMG(0x10487ee0u));
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0x10u;
            t163 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
            t164 = g->ecx;
            wr32(COW_IMG(0x10487ee0u), 0u);
            eax = t163;
            ecx = t164;
        }
    }
    t165 = rd32(self + 0x128u) & 0xff1fffffu;
    wr32(self + 0x128u, t165);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1008a0e0u), 1, 2u);
    loc_4 = self;
L_10088acf: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100883e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100883e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
