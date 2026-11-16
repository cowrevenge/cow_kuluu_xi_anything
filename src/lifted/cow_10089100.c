/* f_0x10089100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10089100(Guest* g)
{
    double d118;
    double d140;
    double d154;
    double d91;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_4;
    int64_t q122;
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
    uint32_t t116;
    uint32_t t117;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
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
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
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
    const uint32_t in_ebx = g->ebx;

    if ((rd32(self + 0x1d0u) >> 8u & 2u) == 0u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x100956f0u), self, 1, 0xffu);
    t2 = g->ecx;
    if ((uint8_t)t1 != 0u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    ecx = t2;
    if (rd32(self + 0x170u) - 1u > 0x3du)
    {
        eax = rd32(self + 0x170u) - 1u;
        ecx = ecx & 0xffffff00u;
        goto L_1008977e;
    }
    eax = rd32(self + 0x170u) - 1u;
    ecx = ecx & 0xffffff00u;
    t3 = rd32(COW_IMG(0x100897ecu) + rd8(COW_IMG(0x100897f8u) + eax) * 4u);
    switch (t3 - RD)
    {
    case 0x1008914au: goto L_1008914a;
    case 0x1008914cu: goto L_1008914c;
    case 0x1008977eu: goto L_1008977e;
    default: rt_fatal(g, COW_IMG(0x10089143u), "switch");
    }
    return;
L_1008914a: ;
    ecx = (ecx & 0xffffff00u) | 1u;
L_1008914c: ;
    t4 = rd32(self + 0x13cu);
    if (!(t4 >> 0xbu & 1u))
    {
        eax = t4;
        edx = t4 >> 0xbu;
    }
    else
    {
        eax = t4;
        edx = t4 >> 0xbu;
        t5 = (eax & 0xffff00ffu) | ((eax >> 8u & 0xfbu) << 8u >> 8u | 3u) << 8u;
        wr32(self + 0x13cu, t5);
        eax = t5;
    }
    wr8(COW_IMG(0x10487e49u), 0u);
    if ((uint8_t)ecx != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10089ff0u), self, 1, 0u);
        t6 = g->edx;
        edx = t6;
    }
    if ((rd32(self + 0x120u) >> 8u & 4u) == 0u) goto L_10089191;
    eax = rd32(self + 0x120u);
    if ((eax & 0x1800u) == 0x800u) goto L_100891a2;
L_10089191: ;
    if (!(rd32(self + 0x13cu) >> 0xbu & 1u))
    {
        loc_4 = self;
        goto L_100897e4;
    }
L_100891a2: ;
    t7 = rd32(self + 0x13cu);
    if ((t7 >> 8u & 7u) > 3u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    eax = t7;
    ecx = t7 >> 8u & 7u;
    t8 = rd32(COW_IMG(0x10089838u) + ecx * 4u);
    switch (t8 - RD)
    {
    case 0x100891c0u: goto L_100891c0;
    case 0x100892b8u: goto L_100892b8;
    case 0x100894bdu: goto L_100894bd;
    case 0x1008953au: goto L_1008953a;
    default: rt_fatal(g, COW_IMG(0x100891b9u), "switch");
    }
    return;
L_100891c0: ;
    if ((int32_t)rd32(self + 0x170u) >= 57)
    {
        ecx = rd32(self + 0x170u);
        if ((int32_t)ecx <= 62)
        {
            t135 = (eax & 0xffff00ffu) | ((eax >> 8u & 0xfbu) << 8u >> 8u | 3u) << 8u;
            wr32(self + 0x13cu, t135);
            eax = t135;
        }
    }
    t136 = rd32(self + 0x13cu) & 0xfffc0fffu;
    wr32(self + 0x13cu, t136);
    if (rd8(COW_IMG(0x1048315cu)) != 0u)
    {
        ecx = t136;
        goto L_1008920f;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1048315cu));
    ecx = t136;
    if ((int32_t)rd32(self + 0x1e4u) <= 0) goto L_1008923e;
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
    wr32(self + 0x1e4u, rd32(self + 0x1e4u) - t141);
    ecx = t142;
    edx = t143;
L_1008920f: ;
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
        wr8(COW_IMG(0x1048315cu), 1u);
    }
    if ((int16_t)rd16(self + 0x1e8u) <= 0) goto L_10089274;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t151 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t152 = g->ecx;
    t153 = g->edx;
    d154 = cow_take_float(g);
    fpush(g, d154);
    t155 = cow_call_regs(g, COW_IMG(0x10311c6cu), t151, g->ecx, g->edx, 1, 0);
    wr16(self + 0x1e8u, (uint16_t)(rd16(self + 0x1e8u) - (uint16_t)t155));
    g->ebx = in_ebx;
    return;
L_1008923e: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t144 = cow_cdecl(g, COW_IMG(0x10088380u), 3, 0u, 2u, 0u);
    t145 = g->ecx;
    t146 = g->edx;
    if ((uint8_t)t144 == 0u)
    {
        ecx = t145;
        edx = t146;
        goto L_1008920f;
    }
    t147 = (rd32(self + 0x13cu) & 0xffff00ffu) | ((rd32(self + 0x13cu) >> 8u & 0xf9u) << 8u >> 8u | 1u) << 8u;
    wr32(self + 0x13cu, t147);
    wr32(COW_IMG(0x10487ef8u), 0u);
    wr16(self + 0x1eau, 0x708u);
    g->ebx = in_ebx;
    return;
L_10089274: ;
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
        goto L_10089289;
    }
    ecx = t157;
    edx = t158;
    if (rd8(COW_IMG(0x1048315cu)) == 0u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
L_10089289: ;
    g->esp = sp0 - 0x10u;
    t159 = cow_cdecl(g, COW_IMG(0x10088380u), 3, 0xc9u, 3u, 0u);
    if ((uint8_t)t159 == 0u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
L_100892a1: ;
    t160 = (rd32(self + 0x13cu) & 0xffff00ffu) | ((rd32(self + 0x13cu) >> 8u & 0xfbu) << 8u >> 8u | 3u) << 8u;
    wr32(self + 0x13cu, t160);
    g->ebx = in_ebx;
    return;
L_100892b8: ;
    if ((int32_t)rd32(self + 0x170u) < 58) goto L_10089337;
    ecx = rd32(self + 0x170u);
    if ((int32_t)ecx > 62) goto L_100892d9;
    t87 = (eax & 0xffff00ffu) | ((eax >> 8u & 0xfbu) << 8u >> 8u | 3u) << 8u;
    wr32(self + 0x13cu, t87);
    return;
L_100892d9: ;
    if (ecx != 0x3au) goto L_10089337;
    if (rd16(self + 0x1eau) == 0u) goto L_10089337;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t88 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t89 = g->ecx;
    t90 = g->edx;
    d91 = cow_take_float(g);
    g->ecx = t89;
    g->edx = t90;
    fpush(g, d91);
    t92 = cow_call_regs(g, COW_IMG(0x10311c6cu), t88, g->ecx, g->edx, 1, 0);
    t93 = g->ecx;
    t94 = g->edx;
    wr16(self + 0x1eau, (uint16_t)(rd16(self + 0x1eau) - (uint16_t)t92));
    if ((int16_t)rd16(self + 0x1eau) > 0)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    ecx = t93;
    edx = t94;
    g->esp = sp0 - 0x10u;
    t95 = cow_cdecl(g, COW_IMG(0x10088380u), 3, 0xc9u, 3u, 0u);
    if ((uint8_t)t95 != 0u)
    {
        t96 = (rd32(self + 0x13cu) & 0xffff00ffu) | ((rd32(self + 0x13cu) >> 8u & 0xfbu) << 8u >> 8u | 3u) << 8u;
        wr32(self + 0x13cu, t96);
    }
    wr16(self + 0x1eau, 0u);
    return;
L_10089337: ;
    t97 = rd32(COW_IMG(0x10487ef8u)) + 1u;
    t98 = rd32(COW_IMG(0x10487ef8u));
    wr32(COW_IMG(0x10487ef8u), t97);
    if ((t98 & 0x3fu) != 0u) goto L_10089378;
    ecx = (t98 & 0xffffff00u) | (t98 & 0x3fu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t99 = cow_stdcall(g, COW_IMG(0x10177730u), 0);
    t100 = g->ecx;
    t101 = g->edx;
    if ((uint8_t)t99 != 0u)
    {
        edx = t101;
        goto L_10089378;
    }
    ecx = t100;
    edx = t101;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t102 = cow_cdecl(g, COW_IMG(0x10088380u), 3, 0xc8u, 3u, 0u);
    t103 = g->edx;
    if ((uint8_t)t102 == 0u)
    {
        edx = t103;
        goto L_10089378;
    }
    edx = t103;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10127ea0u), 0);
    goto L_100892a1;
L_10089378: ;
    t104 = rd32(self + 0xa0u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(t104) + 0x29cu), t104, 2, 0x30687366u, t104);
    t105 = g->edx;
    if (rd32(COW_IMG(0x10487ee8u)) == 0u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    edx = t105;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10089850u), self, 0);
    t106 = g->ecx;
    t107 = g->edx;
    g->ebx = 0u;
    g->ecx = t106;
    g->edx = t107;
    t108 = cow_stdcall(g, COW_IMG(0x10088b20u), 0);
    t109 = g->ecx;
    t110 = g->edx;
    if ((uint8_t)t108 == 0u)
    {
        eax = t108;
        ecx = t109;
        edx = t110;
        edi = 0u;
    }
    else
    {
        eax = t108;
        ecx = t109;
        edx = t110;
        edi = 0xffffffffu;
    }
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t111 = cow_call_regs(g, COW_IMG(0x10088bb0u), eax, ecx, g->edx, 1, 0);
    t112 = g->ecx;
    t113 = g->edx;
    if ((uint8_t)t111 != 0u)
    {
        edx = t113;
        goto L_10089456;
    }
    eax = t111;
    ecx = t112;
    edx = t113;
    if (edi != 0u)
    {
        sf = (int32_t)edi < 0;
        goto L_10089442;
    }
    g->ecx = rd32(COW_IMG(0x10487ee8u));
    g->edx = edx;
    t114 = rd32(COW_IMG(0x10487ee8u));
    g->esp = sp0 - 0x10u;
    t115 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t116 = g->ecx;
    t117 = g->edx;
    d118 = cow_take_float(g);
    g->edx = t117;
    fpush(g, d118);
    t119 = cow_call_regs(g, COW_IMG(0x10311c6cu), t115, g->ecx, g->edx, 1, 0);
    t120 = g->edx;
    t121 = rd32(t114 + 0x20u) - t119;
    wr32(t114 + 0x20u, t121);
    if ((int32_t)rd32(rd32(COW_IMG(0x10487ee8u)) + 0x20u) > 0)
    {
        eax = rd32(COW_IMG(0x10487ee8u));
        ecx = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x20u);
        edx = t120;
        goto L_100893f4;
    }
    ecx = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x20u);
    edx = t120;
    loc_4 = self;
    loc_14 = 0u;
    loc_1c = 0x12cu;
L_1008948b: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t132 = cow_cdecl(g, COW_IMG(0x10088380u), 3, loc_1c, 3u, loc_14);
    t133 = g->edx;
    if ((uint8_t)t132 == 0u) goto L_100897e4;
    edx = t133;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10127ea0u), 0);
    t134 = (rd32(self + 0x13cu) & 0xffff00ffu) | ((rd32(self + 0x13cu) >> 8u & 0xfau) << 8u >> 8u | 2u) << 8u;
    wr32(self + 0x13cu, t134);
    g->ebx = in_ebx;
    return;
L_100893f4: ;
    if (rd32(eax + 0x24u) != 0u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    if ((int32_t)ecx >= 420)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    q122 = (int64_t)cow_muls(0x88888889u, ecx);
    t123 = (uint32_t)((int32_t)(ecx + cow_qhi(q122)) >> 5u);
    t124 = t123 + (t123 >> 0x1fu);
    g->esp = sp0 - 0x10u;
    t125 = cow_cdecl(g, COW_IMG(0x10088380u), 3, t124, 5u, 0u);
    if ((uint8_t)t125 == 0u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    wr32(rd32(COW_IMG(0x10487ee8u)) + 0x24u, 1u);
    g->ebx = in_ebx;
    return;
L_10089442: ;
    if (!sf) goto L_1008944e;
    loc_4 = self;
    loc_14 = 0u;
    loc_1c = 0xc8u;
    goto L_1008948b;
L_1008944e: ;
    if ((int32_t)edi <= 0)
    {
        loc_4 = self;
        goto L_100897e4;
    }
L_10089456: ;
    t126 = rd32(rd32(COW_IMG(0x10487ee8u)));
    if (rd32(rd32(COW_IMG(0x10487ee8u))) == 0u)
    {
        loc_4 = t126;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10487ee8u));
        loc_4 = t126;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        x0 = fr(g, fr(g, (double)(int32_t)rd32(ecx + 4u) * (double)rdf32(COW_IMG(0x1032a3c8u))) / (double)(int32_t)loc_4);
    }
    t127 = rd32(rd32(COW_IMG(0x10487ee4u)));
    g->ecx = t127;
    g->edx = edx;
    t128 = rd32(COW_IMG(0x10487ee4u));
    fpush(g, x0);
    g->esp = sp0 - 0x18u;
    t129 = cow_call_regs(g, COW_IMG(0x10311c6cu), t128, g->ecx, g->edx, 1, 0);
    t130 = g->ecx;
    t131 = g->edx;
    ecx = t130;
    edx = t131;
    loc_14 = t127;
    loc_1c = t129;
    goto L_1008948b;
L_100894bd: ;
    if ((int32_t)rd32(self + 0x170u) < 58)
    {
        ecx = rd32(self + 0x170u);
        goto L_100894de;
    }
    ecx = rd32(self + 0x170u);
    if ((int32_t)ecx > 62) goto L_100894de;
    t78 = (eax & 0xffff00ffu) | ((eax >> 8u & 0xfbu) << 8u >> 8u | 3u) << 8u;
    wr32(self + 0x13cu, t78);
    return;
L_100894de: ;
    if (ecx == 0x39u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    t79 = rd32(self + 0xa0u);
    g->eax = rd32(t79);
    t80 = rd32(t79);
    g->esp = sp0 - 0x10u;
    t81 = cow_thiscall(g, rd32(t80 + 0x29cu), t79, 2, 0x37687366u, t79);
    t82 = rd32(self + 0xa0u);
    g->edx = rd32(t82);
    t83 = rd32(t82);
    cow_thiscall(g, rd32(t83 + 0x29cu), t82, 2, 0x38687366u, t82);
    t84 = g->edx;
    t85 = rd32(self + 0xa0u);
    cow_thiscall(g, rd32(rd32(t85) + 0x29cu), t85, 2, 0x39687366u, t85);
    t86 = (rd32(self + 0x13cu) & 0xffff00ffu) | ((rd32(self + 0x13cu) >> 8u & 0xfbu) << 8u >> 8u | 3u) << 8u;
    wr32(self + 0x13cu, t86);
    return;
L_1008953a: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x10089ff0u), self, 1, 1u);
    t10 = rd32(self + 0xa0u);
    g->edx = rd32(t10);
    t11 = rd32(t10);
    cow_thiscall(g, rd32(t11 + 0x29cu), t10, 2, 0x30687366u, t10);
    t12 = g->edx;
    t13 = rd32(self + 0xa0u);
    g->eax = rd32(t13);
    t14 = rd32(t13);
    t15 = cow_thiscall(g, rd32(t14 + 0x29cu), t13, 2, 0x37687366u, t13);
    t16 = rd32(self + 0xa0u);
    g->edx = rd32(t16);
    t17 = rd32(t16);
    cow_thiscall(g, rd32(t17 + 0x29cu), t16, 2, 0x38687366u, t16);
    t18 = g->edx;
    t19 = rd32(self + 0xa0u);
    g->edx = t18;
    cow_thiscall(g, rd32(rd32(t19) + 0x29cu), t19, 2, 0x39687366u, t19);
    t20 = g->ecx;
    t21 = g->edx;
    if ((int32_t)rd32(self + 0x170u) < 56)
    {
        ecx = t20;
        edx = t21;
        goto L_10089637;
    }
    eax = rd32(self + 0x170u);
    ecx = t20;
    edx = t21;
    if ((int32_t)eax > 62) goto L_10089637;
    t22 = rd32(self + 0xa0u);
    g->eax = eax;
    g->edx = rd32(t22);
    t23 = rd32(t22);
    g->esp = sp0 - 0x10u;
    t24 = cow_thiscall(g, rd32(t23 + 0x2a0u), t22, 2, 0x32687366u, t22);
    t25 = g->edx;
    if ((uint8_t)t24 != 0u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    edx = t25;
    t26 = rd32(self + 0xa0u);
    g->eax = rd32(t26);
    t27 = rd32(t26);
    g->esp = sp0 - 0x10u;
    t28 = cow_thiscall(g, rd32(t27 + 0x2a0u), t26, 2, 0x33687366u, t26);
    if ((uint8_t)t28 != 0u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    eax = t28;
    t29 = rd32(self + 0xa0u);
    g->eax = eax;
    g->edx = rd32(t29);
    t30 = rd32(t29);
    g->esp = sp0 - 0x10u;
    t31 = cow_thiscall(g, rd32(t30 + 0x2a0u), t29, 2, 0x34687366u, t29);
    t32 = g->edx;
    if ((uint8_t)t31 != 0u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    edx = t32;
    t33 = rd32(self + 0xa0u);
    g->eax = rd32(t33);
    t34 = rd32(t33);
    g->esp = sp0 - 0x10u;
    t35 = cow_thiscall(g, rd32(t34 + 0x2a0u), t33, 2, 0x35687366u, t33);
    if ((uint8_t)t35 != 0u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    eax = t35;
    t36 = rd32(self + 0xa0u);
    g->eax = eax;
    g->edx = rd32(t36);
    t37 = rd32(t36);
    g->esp = sp0 - 0x10u;
    t38 = cow_thiscall(g, rd32(t37 + 0x2a0u), t36, 2, 0x36687366u, t36);
    t39 = g->ecx;
    t40 = g->edx;
    if ((uint8_t)t38 != 0u)
    {
        loc_4 = self;
        goto L_100897e4;
    }
    ecx = t39;
    edx = t40;
L_10089637: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t41 = cow_cdecl(g, COW_IMG(0x10088380u), 3, 0u, 4u, 0u);
    t42 = g->edx;
    if ((uint8_t)t41 == 0u)
    {
        eax = t41;
        edx = t42;
    }
    else
    {
        t43 = rd32(self + 0xa0u);
        t44 = (rd32(self + 0x13cu) & 0xffff00ffu) | ((rd32(self + 0x13cu) >> 8u & 0xfcu) << 8u >> 8u | 4u) << 8u;
        wr32(self + 0x13cu, t44);
        g->edx = rd32(t43);
        t45 = rd32(t43);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t45 + 0x29cu), t43, 2, 0x30687366u, t43);
        t46 = g->edx;
        t47 = rd32(self + 0xa0u);
        g->eax = rd32(t47);
        t48 = rd32(t47);
        t49 = cow_thiscall(g, rd32(t48 + 0x29cu), t47, 2, 0x31687366u, t47);
        t50 = rd32(self + 0xa0u);
        g->edx = rd32(t50);
        t51 = rd32(t50);
        cow_thiscall(g, rd32(t51 + 0x29cu), t50, 2, 0x32687366u, t50);
        t52 = g->edx;
        t53 = rd32(self + 0xa0u);
        g->eax = rd32(t53);
        t54 = rd32(t53);
        t55 = cow_thiscall(g, rd32(t54 + 0x29cu), t53, 2, 0x33687366u, t53);
        t56 = rd32(self + 0xa0u);
        g->edx = rd32(t56);
        t57 = rd32(t56);
        cow_thiscall(g, rd32(t57 + 0x29cu), t56, 2, 0x34687366u, t56);
        t58 = g->edx;
        t59 = rd32(self + 0xa0u);
        g->eax = rd32(t59);
        t60 = rd32(t59);
        t61 = cow_thiscall(g, rd32(t60 + 0x29cu), t59, 2, 0x35687366u, t59);
        t62 = rd32(self + 0xa0u);
        g->edx = rd32(t62);
        t63 = rd32(t62);
        cow_thiscall(g, rd32(t63 + 0x29cu), t62, 2, 0x36687366u, t62);
        t64 = g->edx;
        t65 = rd32(self + 0xa0u);
        g->eax = rd32(t65);
        t66 = rd32(t65);
        t67 = cow_thiscall(g, rd32(t66 + 0x29cu), t65, 2, 0x37687366u, t65);
        t68 = rd32(self + 0xa0u);
        g->edx = rd32(t68);
        t69 = rd32(t68);
        cow_thiscall(g, rd32(t69 + 0x29cu), t68, 2, 0x38687366u, t68);
        t70 = g->edx;
        t71 = rd32(self + 0xa0u);
        g->edx = t70;
        cow_thiscall(g, rd32(rd32(t71) + 0x29cu), t71, 2, 0x39687366u, t71);
        t72 = g->ecx;
        t73 = g->edx;
        if (rd32(COW_IMG(0x10487ee4u)) == 0u)
        {
            ecx = t72;
            edx = t73;
        }
        else
        {
            eax = rd32(COW_IMG(0x10487ee4u));
            ecx = t72;
            edx = t73;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t74 = g->ecx;
            t75 = g->edx;
            wr32(COW_IMG(0x10487ee4u), 0u);
            ecx = t74;
            edx = t75;
        }
        if (rd32(COW_IMG(0x10487ee8u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10487ee8u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t76 = g->edx;
            wr32(COW_IMG(0x10487ee8u), 0u);
            edx = t76;
        }
        t77 = (rd32(self + 0x13cu) & 0xffff00ffu) | (rd32(self + 0x13cu) >> 8u & 0xf7u) << 8u;
        wr32(self + 0x13cu, t77);
        eax = t77;
    }
    wr16(rd32(COW_IMG(0x106643a8u)) + 0x3au, 0xffffu);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10089ff0u), self, 1, 1u);
    return;
L_1008977e: ;
    if ((rd32(self + 0x13cu) & 0x700u) < 0x100u)
    {
        edx = rd32(self + 0x13cu) & 0x700u;
    }
    else
    {
        edx = rd32(self + 0x13cu) & 0x700u;
        wr16(rd32(COW_IMG(0x106643a8u)) + 0x3au, 0xffffu);
        if (rd32(COW_IMG(0x10487ee4u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10487ee4u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t161 = g->ecx;
            t162 = g->edx;
            wr32(COW_IMG(0x10487ee4u), 0u);
            ecx = t161;
            edx = t162;
        }
        if (rd32(COW_IMG(0x10487ee8u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10487ee8u));
        }
        else
        {
            eax = rd32(COW_IMG(0x10487ee8u));
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t163 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t164 = g->edx;
            wr32(COW_IMG(0x10487ee8u), 0u);
            eax = t163;
            edx = t164;
        }
    }
    t165 = (rd32(self + 0x13cu) & 0xffff00ffu) | (rd32(self + 0x13cu) >> 8u & 0xf8u) << 8u;
    wr32(self + 0x13cu, t165);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10089ff0u), self, 1, 0u);
    loc_4 = self;
L_100897e4: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10089100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10089100(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
