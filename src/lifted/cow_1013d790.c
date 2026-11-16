/* f_0x1013d790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1013d790(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_25c;
    uint32_t loc_264;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t199;
    uint32_t t2;
    uint32_t t20;
    uint32_t t200;
    uint32_t t201;
    uint32_t t202;
    uint32_t t203;
    uint32_t t204;
    uint32_t t205;
    uint32_t t206;
    uint32_t t207;
    uint32_t t208;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 636u);

    wr32(sp0 - 0x24cu, in_ebx);
    wr32(sp0 - 0x250u, in_ebp);
    wr32(sp0 - 0x254u, in_esi);
    wr32(sp0 - 0x258u, in_edi);
    wr8(sp0 - 0x240u, rd8(COW_IMG(0x103d3c84u)));
    edi = sp0 - 0x23fu;
    eax = 0u;
    ecx = 0x1du;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    if (rd32(self + 0x1cu) == 0u) goto L_1013e194;
    eax = rd32(self + 0x1cu);
    if (rd8(self + 0x33cu) != 0u) goto L_1013e194;
    t1 = rd32(self + 0x348u);
    wr8(self + 0x2cu, 0u);
    wr32(sp0 - 0x248u, self + 0xacu);
    wr8(self + 0xacu, 0u);
    wr8(self + 0x1b8u, 0u);
    wr8(self + 0x12cu, 0u);
    wr32(self + 0x338u, 0x80808080u);
    if (t1 != 0u)
    {
        ebx = t1;
    }
    else
    {
        if (rd8(self + 0x26u) == 0u)
        {
            ebx = 0u;
        }
        else
        {
            eax = (self + 0xacu & 0xffffff00u) | rd8(self + 0x26u);
            wr32(sp0 - 0x25cu, (uint8_t)eax);
            wr32(sp0 - 0x260u, arg1);
            g->eax = (uint8_t)eax;
            g->esp = sp0 - 0x258u;
            t2 = cow_cdecl(g, COW_IMG(0x101cb7a0u), 2, arg1, (uint8_t)eax);
            ebx = t2;
        }
    }
    if (rd32(rd32(self + 0x1cu) + 0x14b4u) == 0u) goto L_1013e194;
    ecx = rd32(self + 0x1cu);
    edx = rd32(rd32(self + 0x1cu) + 0x14b4u);
    if (rd16(edx) - 3u > 0x1cu)
    {
        eax = rd16(edx);
        goto L_1013dfb6;
    }
    eax = rd16(edx);
    esi = rd16(edx) - 3u;
    t3 = rd32(COW_IMG(0x1013e1a4u) + rd8(COW_IMG(0x1013e1dcu) + esi) * 4u);
    switch (t3 - RD)
    {
    case 0x1013d857u: edx = rd8(COW_IMG(0x1013e1dcu) + esi); goto L_1013d857;
    case 0x1013d89cu: edx = rd8(COW_IMG(0x1013e1dcu) + esi); goto L_1013d89c;
    case 0x1013d90bu: goto L_1013d90b;
    case 0x1013da8du: edx = rd8(COW_IMG(0x1013e1dcu) + esi); goto L_1013da8d;
    case 0x1013db0bu: edx = rd8(COW_IMG(0x1013e1dcu) + esi); goto L_1013db0b;
    case 0x1013dbb8u: edx = rd8(COW_IMG(0x1013e1dcu) + esi); goto L_1013dbb8;
    case 0x1013dc79u: edx = rd8(COW_IMG(0x1013e1dcu) + esi); goto L_1013dc79;
    case 0x1013dd07u: edx = rd8(COW_IMG(0x1013e1dcu) + esi); goto L_1013dd07;
    case 0x1013dd97u: edx = rd8(COW_IMG(0x1013e1dcu) + esi); goto L_1013dd97;
    case 0x1013ddcfu: edx = rd8(COW_IMG(0x1013e1dcu) + esi); goto L_1013ddcf;
    case 0x1013de72u: edx = rd8(COW_IMG(0x1013e1dcu) + esi); goto L_1013de72;
    case 0x1013df02u: edx = rd8(COW_IMG(0x1013e1dcu) + esi); goto L_1013df02;
    case 0x1013df5du: edx = rd8(COW_IMG(0x1013e1dcu) + esi); goto L_1013df5d;
    case 0x1013dfb6u: edx = rd8(COW_IMG(0x1013e1dcu) + esi); goto L_1013dfb6;
    default: rt_fatal(g, COW_IMG(0x1013d850u), "switch");
    }
    return;
L_1013d857: ;
    if (ebx != 0u)
    {
        wr32(sp0 - 0x25cu, self + 0x28u);
        wr32(sp0 - 0x260u, sp0 - 0x240u);
        wr32(sp0 - 0x264u, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x258u;
        t173 = cow_call_regs(g, COW_IMG(0x101cbac0u), sp0 - 0x240u, ecx, g->edx, 1, 3, ebx, sp0 - 0x240u, self + 0x28u);
        t174 = g->ecx;
        t175 = g->edx;
        if ((uint8_t)t173 != 0u)
        {
            eax = t173;
            ecx = t174;
            edx = t175;
            if (rd8(ebx + 8u) == 4u)
            {
                wr32(self + 0x338u, 0x80404040u);
            }
        }
        else
        {
            eax = t173;
            ecx = t174;
            edx = t175;
            wr32(self + 0x28u, 0x80808080u);
            wr8(self + 0x2cu, (uint8_t)eax);
        }
    }
L_1013e0d7: ;
    if (rd8(sp0 - 0x240u) != 0u)
    {
        wr32(sp0 - 0x25cu, sp0 - 0x240u);
        wr32(sp0 - 0x260u, COW_IMG(0x1036fdc4u));
        wr32(sp0 - 0x264u, self + 0x2cu);
        g->ebx = ebx;
        g->esp = sp0 - 0x250u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x2cu, COW_IMG(0x1036fdc4u), sp0 - 0x240u, in_edi, in_esi);
    }
    if (ebx != 0u)
    {
        if (rd8(self + 0xacu) == 0u)
        {
            wr32(sp0 - 0x25cu, ebx);
            t199 = rd16(rd32(rd32(self + 0x1cu) + 0x14b4u));
            wr32(sp0 - 0x260u, t199);
            t200 = (rd32(self + 0x1cu) & 0xffff0000u) | rd16(self + 0x24u);
            wr32(sp0 - 0x264u, t200);
            g->eax = rd32(rd32(self + 0x1cu) + 0x14b4u);
            t201 = rd32(rd32(self + 0x1cu) + 0x14b4u);
            g->esp = sp0 - 0x258u;
            t202 = cow_cdecl(g, COW_IMG(0x100fe320u), 3, t200, t199, ebx);
            if ((uint8_t)t202 != 0u)
            {
                wr32(sp0 - 0x25cu, 0x20u);
                wr32(sp0 - 0x260u, sp0 - 0x1c8u);
                wr32(sp0 - 0x264u, ebx);
                t203 = rd16(rd32(rd32(self + 0x1cu) + 0x14b4u));
                wr32(sp0 - 0x268u, t203);
                t204 = (rd32(self + 0x1cu) & 0xffff0000u) | rd16(self + 0x24u);
                wr32(sp0 - 0x26cu, t204);
                g->ecx = t204;
                g->esp = sp0 - 0x258u;
                cow_cdecl(g, COW_IMG(0x100fe460u), 5, t204, t203, ebx, sp0 - 0x1c8u, 0x20u);
                t205 = g->ecx;
                wr32(sp0 - 0x270u, sp0 - 0x1c8u);
                wr32(sp0 - 0x274u, COW_IMG(0x1036fed0u));
                wr32(sp0 - 0x278u, sp0 - 0x240u);
                g->ebx = ebx;
                g->ecx = t205;
                g->esp = sp0 - 0x264u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1036fed0u), sp0 - 0x1c8u, rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
                t206 = g->ecx;
                edi = sp0 - 0x240u;
                eax = 0u;
                ecx = 0xffffffffu;
                cf = sp0 - 0x258u < sp0 - 0x278u;
                pf = PARITY((uint8_t)(sp0 - 0x258u));
                af = (sp0 - 0x278u ^ sp0 - 0x258u) >> 4u & 1u;
                zf = sp0 == 0x258u;
                sf = (int32_t)(sp0 - 0x258u) < 0;
                of = ((sp0 - 0x278u ^ sp0 - 0x258u) & (sp0 - 0x258u ^ 0x20u)) >> 0x1fu;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                t207 = edi - ~ecx;
                t208 = rd32(sp0 - 0x248u);
                edi = t208;
                ecx = 0xffffffffu;
                cf = 0u;
                pf = PARITY(0xffu);
                af = 0u;
                zf = 0u;
                sf = 1u;
                of = 0u;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                esi = t207;
                edi = edi - 1u;
                ecx = ~ecx >> 2u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = ~ecx & 3u;
                while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            }
        }
    }
L_1013e194: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_1013d89c: ;
    if (ebx != 0u)
    {
        if (rd16(ebx) == 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(ebx);
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(ebx);
            if (!(rd8(ebx + 4u) & 1u))
            {
                t169 = rd16(ebx + 2u);
                wr32(sp0 - 0x25cu, t169);
                wr32(sp0 - 0x260u, (uint16_t)eax);
                wr32(sp0 - 0x264u, COW_IMG(0x1036fef8u));
                wr32(sp0 - 0x268u, sp0 - 0x240u);
                g->ebx = ebx;
                g->eax = (uint16_t)eax;
                g->ecx = t169;
                g->edx = sp0 - 0x240u;
                g->esp = sp0 - 0x254u;
                t170 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1036fef8u), (uint16_t)eax, t169, in_edi);
                t171 = g->ecx;
                t172 = g->edx;
                eax = t170;
                ecx = t171;
                edx = t172;
            }
            else
            {
                wr32(sp0 - 0x25cu, 0xb7u);
                wr32(sp0 - 0x260u, 0xbu);
                g->eax = eax;
                g->esp = sp0 - 0x258u;
                t163 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, 0xb7u);
                wr32(sp0 - 0x264u, t163);
                t164 = rd16(ebx + 2u);
                wr32(sp0 - 0x268u, t164);
                wr32(sp0 - 0x26cu, rd16(ebx));
                wr32(sp0 - 0x270u, COW_IMG(0x1036ff08u));
                wr32(sp0 - 0x274u, sp0 - 0x240u);
                g->ebx = ebx;
                g->eax = sp0 - 0x240u;
                g->ecx = t164;
                g->edx = rd16(ebx);
                t165 = rd16(ebx);
                g->esp = sp0 - 0x260u;
                t166 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1036ff08u), t165, t164, t163);
                t167 = g->ecx;
                t168 = g->edx;
                eax = t166;
                ecx = t167;
                edx = t168;
            }
        }
    }
    goto L_1013e0d7;
L_1013d90b: ;
    t125 = rd32(rd32(ecx + 0x14dcu));
    wr32(sp0 - 0x25cu, t125);
    t126 = (ecx & 0xffff0000u) | rd16(rd32(ecx + 0x14d0u));
    wr32(sp0 - 0x260u, t126);
    wr32(sp0 - 0x264u, self + 0x12cu);
    g->esp = sp0 - 0x258u;
    cow_stdcall(g, COW_IMG(0x1013ae30u), 3, self + 0x12cu, t126, t125);
    if (rd32(rd32(self + 0x1cu) + 0x14e4u) == 0u)
    {
        eax = rd32(rd32(self + 0x1cu) + 0x14e4u);
        ecx = rd32(self + 0x1cu);
    }
    else
    {
        eax = rd32(rd32(self + 0x1cu) + 0x14e4u);
        ecx = rd32(self + 0x1cu);
        if (rd16(eax) == 0xffu)
        {
            eax = (eax & 0xffff0000u) | rd16(eax);
            goto L_1013d942;
        }
        eax = (eax & 0xffff0000u) | rd16(eax);
        if ((uint16_t)eax != 0x30u) goto L_1013d945;
L_1013d942: ;
        wr8(self + 0x12cu, 0u);
    }
L_1013d945: ;
    t127 = (eax & 0xffff0000u) | rd8(rd32(ecx + 0x1550u));
    wr32(sp0 - 0x25cu, t127);
    wr32(sp0 - 0x260u, self + 0x278u);
    g->ebx = ebx;
    g->edx = rd32(ecx + 0x1550u);
    t128 = rd32(ecx + 0x1550u);
    g->esp = sp0 - 0x258u;
    cow_thiscall(g, COW_IMG(0x1013af90u), self, 2, self + 0x278u, t127);
    t129 = g->ecx;
    t130 = g->edx;
    if (ebx != 0u)
    {
        ecx = t129;
        edx = t130;
        if (rd8(ebx) == 1u)
        {
            wr32(sp0 - 0x25cu, ebx);
            wr32(sp0 - 0x260u, arg1);
            wr32(sp0 - 0x264u, sp0 - 0x240u);
            g->ebx = ebx;
            g->eax = arg1;
            g->esp = sp0 - 0x258u;
            t160 = cow_fastcall(g, COW_IMG(0x1013bbf0u), self, edx, 3, sp0 - 0x240u, arg1, ebx);
            t161 = g->ecx;
            t162 = g->edx;
            eax = t160;
            ecx = t161;
            edx = t162;
        }
        else
        {
            eax = rd8(ebx) - 1u;
            if (eax == 1u)
            {
                wr32(sp0 - 0x25cu, sp0 - 0x168u);
                t147 = rd32(self + 0x1cu);
                wr32(sp0 - 0x260u, t147);
                wr32(sp0 - 0x264u, ebx);
                t148 = rd16(rd32(rd32(self + 0x1cu) + 0x14b4u));
                wr32(sp0 - 0x268u, t148);
                t149 = (sp0 - 0x168u & 0xffff0000u) | rd16(self + 0x24u);
                wr32(sp0 - 0x26cu, t149);
                g->eax = t148;
                g->edx = rd32(rd32(self + 0x1cu) + 0x14b4u);
                t150 = rd32(rd32(self + 0x1cu) + 0x14b4u);
                g->esp = sp0 - 0x260u;
                t151 = cow_cdecl(g, COW_IMG(0x100fee70u), 3, t149, t148, ebx);
                t152 = g->edx;
                wr32(sp0 - 0x264u, t151);
                t153 = (t152 & 0xffff0000u) | rd16(self + 0x24u);
                wr32(sp0 - 0x268u, t153);
                g->ebx = ebx;
                g->esi = esi;
                g->edx = t153;
                g->esp = sp0 - 0x258u;
                t154 = cow_thiscall(g, COW_IMG(0x1013b170u), self, 4, t153, t151, rd32(sp0 - 0x260u), sp0 - 0x168u);
                t155 = g->edx;
                wr32(sp0 - 0x25cu, sp0 - 0x168u);
                wr32(sp0 - 0x260u, t154);
                wr32(sp0 - 0x264u, 0xc0u);
                wr32(sp0 - 0x268u, self + 0x1b8u);
                wr32(sp0 - 0x26cu, 0u);
                t156 = cow_call_regs(g, COW_IMG(0x1013b280u), self + 0x1b8u, self, g->edx, 0, 5, 0u, self + 0x1b8u, 0xc0u, t154, sp0 - 0x168u);
                wr32(sp0 - 0x25cu, sp0 - 0x168u);
                wr32(sp0 - 0x260u, t154);
                wr32(sp0 - 0x264u, 0x7du);
                wr32(sp0 - 0x268u, sp0 - 0x240u);
                wr32(sp0 - 0x26cu, 1u);
                g->edx = sp0 - 0x240u;
                t157 = cow_call_regs(g, COW_IMG(0x1013b280u), t156, self, g->edx, 0, 5, 1u, sp0 - 0x240u, 0x7du, t154, sp0 - 0x168u);
                t158 = g->ecx;
                t159 = g->edx;
                eax = t157;
                ecx = t158;
                edx = t159;
            }
            else
            {
                eax = eax - 1u;
                if (eax != 1u)
                {
                    eax = eax - 1u;
                }
                else
                {
                    wr32(sp0 - 0x25cu, sp0 - 0x168u);
                    t134 = rd32(self + 0x1cu);
                    wr32(sp0 - 0x260u, t134);
                    wr32(sp0 - 0x264u, ebx);
                    t135 = rd16(rd32(rd32(self + 0x1cu) + 0x14b4u));
                    wr32(sp0 - 0x268u, t135);
                    t136 = (sp0 - 0x168u & 0xffff0000u) | rd16(self + 0x24u);
                    wr32(sp0 - 0x26cu, t136);
                    g->eax = t135;
                    g->edx = rd32(rd32(self + 0x1cu) + 0x14b4u);
                    t137 = rd32(rd32(self + 0x1cu) + 0x14b4u);
                    g->esp = sp0 - 0x260u;
                    t138 = cow_cdecl(g, COW_IMG(0x100feef0u), 3, t136, t135, ebx);
                    t139 = g->edx;
                    wr32(sp0 - 0x264u, t138);
                    t140 = (t139 & 0xffff0000u) | rd16(self + 0x24u);
                    wr32(sp0 - 0x268u, t140);
                    g->ebx = ebx;
                    g->esi = esi;
                    g->edx = t140;
                    g->esp = sp0 - 0x258u;
                    t141 = cow_thiscall(g, COW_IMG(0x1013b0c0u), self, 4, t140, t138, rd32(sp0 - 0x260u), sp0 - 0x168u);
                    t142 = g->edx;
                    wr32(sp0 - 0x25cu, sp0 - 0x168u);
                    wr32(sp0 - 0x260u, t141);
                    wr32(sp0 - 0x264u, 0xc0u);
                    wr32(sp0 - 0x268u, self + 0x1b8u);
                    wr32(sp0 - 0x26cu, 0u);
                    t143 = cow_call_regs(g, COW_IMG(0x1013b280u), self + 0x1b8u, self, g->edx, 0, 5, 0u, self + 0x1b8u, 0xc0u, t141, sp0 - 0x168u);
                    wr32(sp0 - 0x25cu, sp0 - 0x168u);
                    wr32(sp0 - 0x260u, t141);
                    wr32(sp0 - 0x264u, 0x7du);
                    wr32(sp0 - 0x268u, sp0 - 0x240u);
                    wr32(sp0 - 0x26cu, 1u);
                    g->edx = sp0 - 0x240u;
                    t144 = cow_call_regs(g, COW_IMG(0x1013b280u), t143, self, g->edx, 0, 5, 1u, sp0 - 0x240u, 0x7du, t141, sp0 - 0x168u);
                    t145 = g->ecx;
                    t146 = g->edx;
                    eax = t144;
                    ecx = t145;
                    edx = t146;
                }
            }
        }
    }
    else
    {
        wr32(sp0 - 0x25cu, ebx);
        wr32(sp0 - 0x260u, arg1);
        wr32(sp0 - 0x264u, sp0 - 0x240u);
        g->ebx = ebx;
        g->eax = sp0 - 0x240u;
        g->esp = sp0 - 0x258u;
        t131 = cow_fastcall(g, COW_IMG(0x1013bbf0u), self, arg1, 3, sp0 - 0x240u, arg1, ebx);
        t132 = g->ecx;
        t133 = g->edx;
        eax = t131;
        ecx = t132;
        edx = t133;
    }
    goto L_1013e0d7;
L_1013da8d: ;
    if (rd32(ecx + 0x1510u) == 0u)
    {
        ecx = rd32(ecx + 0x1510u);
        goto L_1013dac5;
    }
    ecx = rd32(ecx + 0x1510u);
    if (rd16(ecx) > 7u) goto L_1013dac5;
    eax = (eax & 0xffff0000u) | rd16(ecx);
    t115 = (uint16_t)eax + 0x1fu;
    wr32(sp0 - 0x25cu, t115);
    wr32(sp0 - 0x260u, 0xefu);
    wr32(sp0 - 0x264u, COW_IMG(0x1036fef0u));
    wr32(sp0 - 0x268u, sp0 - 0x1c8u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = sp0 - 0x1c8u;
    g->esp = sp0 - 0x254u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1c8u, COW_IMG(0x1036fef0u), 0xefu, t115, in_edi);
    t116 = g->ecx;
    t117 = g->edx;
    ecx = t116;
    edx = t117;
L_1013dacd: ;
    if (rd32(rd32(self + 0x1cu) + 0x1514u) == 0u)
    {
        eax = rd32(rd32(self + 0x1cu) + 0x1514u);
    }
    else
    {
        eax = rd32(rd32(self + 0x1cu) + 0x1514u);
        wr32(sp0 - 0x25cu, rd16(eax));
        wr32(sp0 - 0x260u, sp0 - 0x1c8u);
        wr32(sp0 - 0x264u, 0x38u);
        wr32(sp0 - 0x268u, 0xau);
        g->eax = eax;
        g->ecx = rd16(eax);
        g->edx = sp0 - 0x1c8u;
        t118 = rd16(eax);
        g->esp = sp0 - 0x260u;
        t119 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x38u);
        t120 = g->ecx;
        t121 = g->edx;
        wr32(sp0 - 0x264u, t119);
        wr32(sp0 - 0x268u, sp0 - 0x240u);
        g->ebx = ebx;
        g->eax = sp0 - 0x240u;
        g->ecx = t120;
        g->edx = t121;
        g->esp = sp0 - 0x254u;
        t122 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, t119, sp0 - 0x1c8u, rd32(sp0 - 0x25cu), in_edi);
        t123 = g->ecx;
        t124 = g->edx;
        eax = t122;
        ecx = t123;
        edx = t124;
    }
    goto L_1013e0d7;
L_1013dac5: ;
    wr8(sp0 - 0x1c8u, 0u);
    goto L_1013dacd;
L_1013db0b: ;
    if (ebx != 0u)
    {
        if (rd8(ebx + 0xbu) == 0u) goto L_1013db47;
        ecx = rd8(ebx + 0xbu);
        if (ecx != 1u)
        {
            eax = 0u;
            ecx = ecx - 1u;
            esi = 0u;
            goto L_1013db6f;
        }
        if ((uint8_t)rd32(ebx + 4u) == 0u)
        {
            ecx = (uint8_t)rd32(ebx + 4u);
            eax = 0x63u;
            esi = rd32(ebx);
        }
        else
        {
            ecx = (uint8_t)rd32(ebx + 4u);
            eax = -(ecx * 0xau) + 0x46u;
            esi = rd32(ebx);
        }
L_1013db69: ;
        esi = esi + 0x3c307d70u;
L_1013db6f: ;
        wr32(sp0 - 0x25cu, eax);
        wr32(sp0 - 0x260u, 0x5du);
        wr32(sp0 - 0x264u, 0xau);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x25cu;
        t105 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x5du);
        t106 = g->edx;
        wr32(sp0 - 0x260u, t105);
        wr32(sp0 - 0x264u, sp0 - 0x1a8u);
        g->ebx = ebx;
        g->ecx = sp0 - 0x1a8u;
        g->esp = sp0 - 0x250u;
        t107 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1a8u, t105, rd32(sp0 - 0x25cu), in_edi, in_esi);
        t108 = g->ecx;
        wr32(sp0 - 0x25cu, sp0 - 0x1a8u);
        wr32(sp0 - 0x260u, 1u);
        wr32(sp0 - 0x264u, esi);
        g->ecx = t108;
        g->edx = sp0 - 0x1a8u;
        g->esp = sp0 - 0x25cu;
        t109 = cow_cdecl(g, COW_IMG(0x101c8fd0u), 2, esi, 1u);
        t110 = g->ecx;
        t111 = g->edx;
        wr32(sp0 - 0x260u, t109);
        wr32(sp0 - 0x264u, COW_IMG(0x1036fee4u));
        wr32(sp0 - 0x268u, sp0 - 0x240u);
        g->ebx = ebx;
        g->eax = sp0 - 0x240u;
        g->ecx = t110;
        g->edx = t111;
        g->esp = sp0 - 0x254u;
        t112 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1036fee4u), t109, sp0 - 0x1a8u, in_edi);
        t113 = g->ecx;
        t114 = g->edx;
        eax = t112;
        ecx = t113;
        edx = t114;
    }
    goto L_1013e0d7;
L_1013db47: ;
    if (rd32(ebx) >> 0x1du == 0u)
    {
        ecx = rd32(ebx) >> 0x1du;
        esi = rd32(ebx);
        eax = 0x63u;
    }
    else
    {
        ecx = rd32(ebx) >> 0x1du;
        esi = rd32(ebx);
        eax = -(ecx * 0xau) + 0x46u;
    }
    esi = esi & 0x1fffffffu;
    goto L_1013db69;
L_1013dbb8: ;
    if (ebx != 0u)
    {
        wr32(sp0 - 0x25cu, 0x20u);
        wr32(sp0 - 0x260u, sp0 - 0x1c8u);
        wr32(sp0 - 0x264u, 0x12u);
        wr32(sp0 - 0x268u, ebx);
        g->ebx = ebx;
        g->ecx = sp0 - 0x1c8u;
        g->edx = edx;
        g->esp = sp0 - 0x24cu;
        cow_cdecl(g, COW_IMG(0x100fe200u), 7, ebx, 0x12u, sp0 - 0x1c8u, 0x20u, in_edi, in_esi, in_ebp);
        t87 = g->ecx;
        t88 = g->edx;
        if ((rd32(ebx + 0x14u) >> 7u & 0xfffu) == 0xfffu)
        {
            ecx = t87;
            wr32(sp0 - 0x25cu, sp0 - 0x1c8u);
            wr32(sp0 - 0x260u, COW_IMG(0x1036fed0u));
            t101 = rd32(sp0 - 0x248u);
            wr32(sp0 - 0x264u, t101);
            g->ebx = ebx;
            g->eax = t101;
            g->ecx = ecx;
            g->edx = sp0 - 0x1c8u;
            g->esp = sp0 - 0x250u;
            t102 = cow_cdecl(g, COW_IMG(0x10312031u), 5, t101, COW_IMG(0x1036fed0u), sp0 - 0x1c8u, rd32(sp0 - 0x258u), rd32(sp0 - 0x254u));
            t103 = g->ecx;
            t104 = g->edx;
            eax = t102;
            ecx = t103;
            edx = t104;
        }
        else
        {
            eax = rd32(ebx + 0x14u) >> 7u & 0xfffu;
            edx = t88;
            wr32(sp0 - 0x25cu, eax);
            g->eax = eax;
            t89 = rd32(COW_IMG(0x10663180u));
            g->esp = sp0 - 0x258u;
            t90 = cow_thiscall(g, COW_IMG(0x101c8450u), t89, 1, eax);
            t91 = g->ecx;
            if (t90 != 0u)
            {
                eax = t90;
                ecx = t91;
            }
            else
            {
                ecx = t91;
                eax = COW_IMG(0x103d3c84u);
            }
            wr32(sp0 - 0x25cu, eax);
            wr32(sp0 - 0x260u, COW_IMG(0x1034f7e0u));
            wr32(sp0 - 0x264u, sp0 - 0x240u);
            g->ebx = ebx;
            g->ecx = ecx;
            g->edx = sp0 - 0x240u;
            g->esp = sp0 - 0x250u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1034f7e0u), eax, rd32(sp0 - 0x258u), rd32(sp0 - 0x254u));
            t92 = g->ecx;
            t93 = g->edx;
            t94 = rd32(ebx + 0x14u) >> 0x13u & 0x7fu;
            wr32(sp0 - 0x25cu, t94);
            wr32(sp0 - 0x260u, 0x6bu);
            wr32(sp0 - 0x264u, 0xau);
            g->eax = t94;
            g->edx = t93;
            g->esp = sp0 - 0x25cu;
            t95 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x6bu);
            t96 = g->edx;
            wr32(sp0 - 0x260u, t95);
            wr32(sp0 - 0x264u, sp0 - 0x1a8u);
            g->ebx = ebx;
            g->esp = sp0 - 0x250u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1a8u, t95, rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u), rd32(sp0 - 0x254u));
            wr32(sp0 - 0x268u, sp0 - 0x1c8u);
            wr32(sp0 - 0x26cu, sp0 - 0x1a8u);
            wr32(sp0 - 0x270u, COW_IMG(0x1036fed8u));
            t97 = rd32(sp0 - 0x248u);
            wr32(sp0 - 0x274u, t97);
            g->ebx = ebx;
            g->eax = sp0 - 0x1a8u;
            g->ecx = t97;
            g->edx = sp0 - 0x1c8u;
            g->esp = sp0 - 0x260u;
            t98 = cow_cdecl(g, COW_IMG(0x10312031u), 5, t97, COW_IMG(0x1036fed8u), sp0 - 0x1a8u, sp0 - 0x1c8u, sp0 - 0x1a8u);
            t99 = g->ecx;
            t100 = g->edx;
            eax = t98;
            ecx = t99;
            edx = t100;
        }
    }
    goto L_1013e0d7;
L_1013dc79: ;
    if (ebx != 0u)
    {
        t72 = rd32(ebx) & 0x3fu;
        wr32(sp0 - 0x25cu, t72);
        g->eax = eax;
        g->esp = sp0 - 0x258u;
        t73 = cow_thiscall(g, COW_IMG(0x101c8450u), rd32(COW_IMG(0x10663184u)), 1, t72);
        t74 = (rd32(ebx) >> 6u & 0x3fu) + 0x40u;
        wr32(sp0 - 0x25cu, t74);
        g->edx = t74;
        t75 = rd32(COW_IMG(0x10663184u));
        t76 = cow_thiscall(g, COW_IMG(0x101c8450u), t75, 1, t74);
        t77 = g->ecx;
        t78 = g->edx;
        t79 = rd32(ebx + 4u) >> 0x14u & 0x7fu;
        wr32(sp0 - 0x25cu, t79);
        wr32(sp0 - 0x260u, 0x5du);
        wr32(sp0 - 0x264u, 0xau);
        g->eax = t79;
        g->edx = t78;
        g->esp = sp0 - 0x25cu;
        t80 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x5du);
        t81 = g->edx;
        wr32(sp0 - 0x260u, t80);
        wr32(sp0 - 0x264u, sp0 - 0x1a8u);
        g->ebx = ebx;
        g->ecx = sp0 - 0x1a8u;
        g->esp = sp0 - 0x250u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1a8u, t80, rd32(sp0 - 0x25cu), in_edi, in_esi);
        t82 = g->ecx;
        if (t76 != 0u)
        {
            ecx = t82;
            esi = t76;
            edi = t73;
        }
        else
        {
            ecx = t82;
            edi = t73;
            esi = COW_IMG(0x103d3c84u);
        }
        if (edi == 0u)
        {
            edi = COW_IMG(0x103d3c84u);
        }
        wr32(sp0 - 0x25cu, sp0 - 0x1a8u);
        wr32(sp0 - 0x260u, esi);
        wr32(sp0 - 0x264u, edi);
        wr32(sp0 - 0x268u, COW_IMG(0x1036fec4u));
        t83 = rd32(sp0 - 0x248u);
        wr32(sp0 - 0x26cu, t83);
        g->ebx = ebx;
        g->eax = t83;
        g->ecx = ecx;
        g->edx = sp0 - 0x1a8u;
        g->esp = sp0 - 0x258u;
        t84 = cow_cdecl(g, COW_IMG(0x10312031u), 5, t83, COW_IMG(0x1036fec4u), edi, esi, sp0 - 0x1a8u);
        t85 = g->ecx;
        t86 = g->edx;
        eax = t84;
        ecx = t85;
        edx = t86;
    }
    goto L_1013e0d7;
L_1013dd07: ;
    if (ebx != 0u)
    {
        t57 = rd32(ebx) >> 0x12u & 0x3fu;
        wr32(sp0 - 0x25cu, t57);
        g->eax = eax;
        t58 = rd32(self + 0x14u);
        g->esp = sp0 - 0x258u;
        t59 = cow_thiscall(g, COW_IMG(0x101c8450u), t58, 1, t57);
        t60 = g->ecx;
        if (rd16(self + 0x24u) != 0x9b1u)
        {
            eax = t59;
            if (eax != 0u)
            {
                ecx = eax;
            }
            else
            {
                ecx = COW_IMG(0x103d3c84u);
            }
            t65 = rd32(ebx) & 0x3ffffu;
            wr32(sp0 - 0x25cu, t65);
            wr32(sp0 - 0x260u, ecx);
            t66 = rd32(ebx + 4u) & 0x3ffu;
            wr32(sp0 - 0x264u, t66);
            t67 = (rd32(ebx) >> 0x1cu) + 1u;
            wr32(sp0 - 0x268u, t67);
            t68 = (rd8(ebx + 3u) & 0xfu) + 1u;
            wr32(sp0 - 0x26cu, t68);
            wr32(sp0 - 0x270u, COW_IMG(0x1036fea8u));
            wr32(sp0 - 0x274u, sp0 - 0x240u);
            g->ebx = ebx;
            g->eax = sp0 - 0x240u;
            g->ecx = t66;
            g->edx = t68;
            g->esp = sp0 - 0x260u;
            t69 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1036fea8u), t68, t67, t66);
            t70 = g->ecx;
            t71 = g->edx;
            eax = t69;
            ecx = t70;
            edx = t71;
        }
        else
        {
            eax = t59;
            ecx = t60;
            if (eax == 0u)
            {
                eax = COW_IMG(0x103d3c84u);
            }
            t61 = rd32(ebx) & 0x3ffffu;
            wr32(sp0 - 0x25cu, t61);
            wr32(sp0 - 0x260u, eax);
            wr32(sp0 - 0x264u, COW_IMG(0x1036febcu));
            wr32(sp0 - 0x268u, sp0 - 0x240u);
            g->ebx = ebx;
            g->eax = sp0 - 0x240u;
            g->ecx = ecx;
            g->edx = t61;
            g->esp = sp0 - 0x254u;
            t62 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1036febcu), eax, t61, rd32(sp0 - 0x258u));
            t63 = g->ecx;
            t64 = g->edx;
            eax = t62;
            ecx = t63;
            edx = t64;
        }
    }
    goto L_1013e0d7;
L_1013dd97: ;
    eax = 0u;
    ecx = 9u;
    edx = (edx & 0xffffff00u) | 0x2du;
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
L_1013dda0: ;
    if ((1u << (ecx & 0x1fu) & rd32(ebx) & 0x3ffu) == 0u)
    {
        wr8(eax + sp0 - 0x240u, (uint8_t)edx);
    }
    else
    {
        wr8(eax + sp0 - 0x240u, 0x2au);
    }
    if ((int32_t)(ecx - 1u) > -1)
    {
        eax = eax + 1u;
        cf = ecx - 1u < 0xffffffffu;
        pf = PARITY((uint8_t)ecx);
        zf = ecx == 0u;
        sf = (int32_t)ecx < 0;
        of = (~(ecx - 1u) & (ecx - 1u ^ ecx)) >> 0x1fu;
        ecx = ecx - 1u;
        goto L_1013dda0;
    }
    eax = eax + 1u;
    ecx = ecx - 1u;
    wr8(eax + sp0 - 0x240u, 0u);
    goto L_1013e0d7;
L_1013ddcf: ;
    t36 = rd8(ebx + 3u);
    wr32(sp0 - 0x25cu, t36);
    g->eax = eax;
    g->edx = edx;
    t37 = rd32(self + 0x14u);
    g->esp = sp0 - 0x258u;
    t38 = cow_thiscall(g, COW_IMG(0x101c8450u), t37, 1, t36);
    t39 = g->ecx;
    t40 = g->edx;
    if (t38 == 0u)
    {
        ecx = t39;
        edx = t40;
        if (rd16(self + 0x24u) != 0xff9u)
        {
            t53 = rd32(ebx) & 0xffffffu;
            wr32(sp0 - 0x25cu, t53);
            wr32(sp0 - 0x260u, COW_IMG(0x1035d61cu));
            wr32(sp0 - 0x264u, sp0 - 0x240u);
            g->ebx = ebx;
            g->eax = sp0 - 0x240u;
            g->ecx = ecx;
            g->edx = t53;
            g->esp = sp0 - 0x250u;
            t54 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1035d61cu), t53, rd32(sp0 - 0x258u), rd32(sp0 - 0x254u));
            t55 = g->ecx;
            t56 = g->edx;
            eax = t54;
            ecx = t55;
            edx = t56;
        }
        else
        {
            t49 = rd32(ebx) & 0xffffffu;
            wr32(sp0 - 0x25cu, t49);
            wr32(sp0 - 0x260u, COW_IMG(0x1035d624u));
            wr32(sp0 - 0x264u, sp0 - 0x240u);
            g->ebx = ebx;
            g->eax = t49;
            g->ecx = sp0 - 0x240u;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            t50 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1035d624u), t49, rd32(sp0 - 0x258u), rd32(sp0 - 0x254u));
            t51 = g->ecx;
            t52 = g->edx;
            eax = t50;
            ecx = t51;
            edx = t52;
        }
    }
    else
    {
        eax = t38;
        ecx = t39;
        if (rd16(self + 0x24u) != 0xff9u)
        {
            t45 = rd32(ebx) & 0xffffffu;
            wr32(sp0 - 0x25cu, t45);
            wr32(sp0 - 0x260u, eax);
            wr32(sp0 - 0x264u, COW_IMG(0x1036fe98u));
            wr32(sp0 - 0x268u, sp0 - 0x240u);
            g->ebx = ebx;
            g->eax = eax;
            g->ecx = t45;
            g->edx = sp0 - 0x240u;
            g->esp = sp0 - 0x254u;
            t46 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1036fe98u), eax, t45, rd32(sp0 - 0x258u));
            t47 = g->ecx;
            t48 = g->edx;
            eax = t46;
            ecx = t47;
            edx = t48;
        }
        else
        {
            t41 = rd32(ebx) & 0xffffffu;
            wr32(sp0 - 0x25cu, t41);
            wr32(sp0 - 0x260u, eax);
            wr32(sp0 - 0x264u, COW_IMG(0x1036fea0u));
            wr32(sp0 - 0x268u, sp0 - 0x240u);
            g->ebx = ebx;
            g->eax = sp0 - 0x240u;
            g->ecx = ecx;
            g->edx = t41;
            g->esp = sp0 - 0x254u;
            t42 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1036fea0u), eax, t41, rd32(sp0 - 0x258u));
            t43 = g->ecx;
            t44 = g->edx;
            eax = t42;
            ecx = t43;
            edx = t44;
        }
    }
    goto L_1013e0d7;
L_1013de72: ;
    if ((rd32(ebx) & 0x7fu) == 0u)
    {
        eax = rd32(ebx) & 0x7fu;
    }
    else
    {
        eax = rd32(ebx) & 0x7fu;
        wr32(sp0 - 0x25cu, eax + 0x703fu);
        g->eax = eax + 0x703fu;
        g->edx = edx;
        t23 = rd32(COW_IMG(0x10621808u));
        g->esp = sp0 - 0x258u;
        t24 = cow_thiscall(g, COW_IMG(0x1015bbd0u), t23, 1, eax + 0x703fu);
        t25 = g->ecx;
        t26 = g->edx;
        if (t24 == 0u)
        {
            eax = t24;
            ecx = t25;
            edx = t26;
        }
        else
        {
            eax = t24;
            ecx = rd32(ebx) >> 7u;
            edx = 1u;
            esi = 0u;
L_1013dea2: ;
            if ((edx & ecx) != 0u)
            {
                esi = esi + 1u;
            }
            if (edx * 2u != 0u)
            {
                edx = edx * 2u;
                goto L_1013dea2;
            }
            if (rd16(rd32(rd32(self + 0x1cu) + 0x14b4u)) != 0x17u)
            {
                wr32(sp0 - 0x25cu, esi);
                t32 = rd32(eax + 0x14c8u);
                wr32(sp0 - 0x260u, t32);
                wr32(sp0 - 0x264u, COW_IMG(0x1036fe84u));
                wr32(sp0 - 0x268u, sp0 - 0x240u);
                g->ebx = ebx;
                g->eax = eax;
                g->ecx = t32;
                g->edx = sp0 - 0x240u;
                g->esp = sp0 - 0x254u;
                t33 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1036fe84u), t32, esi, rd32(sp0 - 0x258u));
                t34 = g->ecx;
                t35 = g->edx;
                eax = t33;
                ecx = t34;
                edx = t35;
            }
            else
            {
                t27 = rd32(ebx + 0x14u) >> 4u & 0x7fu;
                wr32(sp0 - 0x25cu, t27);
                wr32(sp0 - 0x260u, esi);
                t28 = rd32(eax + 0x14c8u);
                wr32(sp0 - 0x264u, t28);
                wr32(sp0 - 0x268u, COW_IMG(0x1036fe8cu));
                wr32(sp0 - 0x26cu, sp0 - 0x240u);
                g->ebx = ebx;
                g->eax = sp0 - 0x240u;
                g->ecx = t27;
                g->edx = t28;
                g->esp = sp0 - 0x258u;
                t29 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1036fe8cu), t28, esi, t27);
                t30 = g->ecx;
                t31 = g->edx;
                eax = t29;
                ecx = t30;
                edx = t31;
            }
        }
    }
    goto L_1013e0d7;
L_1013df02: ;
    wr32(sp0 - 0x25cu, sp0 - 0x168u);
    wr32(sp0 - 0x260u, ebx);
    t15 = (ecx & 0xffff0000u) | rd16(self + 0x24u);
    wr32(sp0 - 0x264u, t15);
    g->ebx = ebx;
    g->eax = sp0 - 0x168u;
    g->ecx = self;
    g->esp = sp0 - 0x258u;
    t16 = cow_call_regs(g, COW_IMG(0x1013b220u), g->eax, g->ecx, edx, 0, 3, t15, ebx, sp0 - 0x168u);
    t17 = g->ecx;
    t18 = g->edx;
    if ((int32_t)t16 <= 0)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    else
    {
        esi = t16;
        wr32(sp0 - 0x25cu, sp0 - 0x168u);
        wr32(sp0 - 0x260u, esi);
        wr32(sp0 - 0x264u, 0xc0u);
        wr32(sp0 - 0x268u, self + 0x1b8u);
        wr32(sp0 - 0x26cu, 2u);
        g->edx = sp0 - 0x168u;
        g->esp = sp0 - 0x258u;
        cow_call_regs(g, COW_IMG(0x1013b280u), self + 0x1b8u, self, g->edx, 0, 5, 2u, self + 0x1b8u, 0xc0u, esi, sp0 - 0x168u);
        t19 = g->edx;
        wr32(sp0 - 0x25cu, sp0 - 0x168u);
        wr32(sp0 - 0x260u, esi);
        wr32(sp0 - 0x264u, 0x7du);
        wr32(sp0 - 0x268u, sp0 - 0x240u);
        wr32(sp0 - 0x26cu, 3u);
        g->edx = t19;
        t20 = cow_call_regs(g, COW_IMG(0x1013b280u), sp0 - 0x168u, self, g->edx, 0, 5, 3u, sp0 - 0x240u, 0x7du, esi, sp0 - 0x168u);
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
    }
    goto L_1013e0d7;
L_1013df5d: ;
    if (ebx != 0u)
    {
        if (rd16(ebx + 2u) != 0u)
        {
            wr32(sp0 - 0x25cu, 0x3cu);
            g->eax = eax;
            t4 = rd32(self + 0x14u);
            g->esp = sp0 - 0x258u;
            t5 = cow_thiscall(g, COW_IMG(0x101c8450u), t4, 1, 0x3cu);
            t6 = g->ecx;
            if (t5 == 0u)
            {
                eax = t5;
                t11 = rd16(ebx + 2u);
                wr32(sp0 - 0x25cu, t11);
                wr32(sp0 - 0x260u, COW_IMG(0x1036fe7cu));
                wr32(sp0 - 0x264u, sp0 - 0x240u);
                g->ebx = ebx;
                g->eax = eax;
                g->ecx = t11;
                g->edx = sp0 - 0x240u;
                g->esp = sp0 - 0x250u;
                t12 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1036fe7cu), t11, rd32(sp0 - 0x258u), rd32(sp0 - 0x254u));
                t13 = g->ecx;
                t14 = g->edx;
                eax = t12;
                ecx = t13;
                edx = t14;
            }
            else
            {
                eax = t5;
                ecx = t6;
                t7 = rd16(ebx + 2u);
                wr32(sp0 - 0x25cu, t7);
                wr32(sp0 - 0x260u, eax);
                wr32(sp0 - 0x264u, sp0 - 0x240u);
                g->ebx = ebx;
                g->eax = sp0 - 0x240u;
                g->ecx = ecx;
                g->edx = t7;
                g->esp = sp0 - 0x250u;
                t8 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, eax, t7, rd32(sp0 - 0x258u), rd32(sp0 - 0x254u));
                t9 = g->ecx;
                t10 = g->edx;
                eax = t8;
                ecx = t9;
                edx = t10;
            }
        }
    }
    goto L_1013e0d7;
L_1013dfb6: ;
    if (ebx != 0u)
    {
        if (rd16(self + 0x24u) == 0x108du)
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0x24u);
            goto L_1013e027;
        }
        eax = (eax & 0xffff0000u) | rd16(self + 0x24u);
        if ((uint16_t)eax == 0x1526u) goto L_1013e027;
        if ((uint16_t)eax == 0xdc8u)
        {
            wr32(sp0 - 0x25cu, rd32(ebx));
            g->eax = rd32(ebx);
            g->ecx = ecx;
            g->edx = edx;
            t176 = rd32(ebx);
            g->esp = sp0 - 0x258u;
            t177 = cow_cdecl(g, COW_IMG(0x10103a50u), 1, t176);
            t178 = g->ecx;
            t179 = g->edx;
            if ((int32_t)t177 > 0)
            {
                eax = t177;
                ecx = t178;
                edx = t179;
                esi = rd32(ebx + 4u) - 0x28du;
            }
            else
            {
                eax = t177;
                ecx = t178;
                edx = t179;
                esi = rd32(ebx + 4u) - 0x28du;
                wr32(self + 0x338u, 0x80404040u);
            }
            wr32(sp0 - 0x25cu, eax);
            g->ebx = ebx;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            t180 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, eax, rd32(sp0 - 0x258u), rd32(sp0 - 0x254u));
            t181 = g->ecx;
            t182 = g->edx;
            wr32(sp0 - 0x25cu, t180);
            wr32(sp0 - 0x260u, esi);
            wr32(sp0 - 0x264u, 0xcu);
            g->edx = t182;
            g->esp = sp0 - 0x25cu;
            t183 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, esi);
            t184 = g->edx;
            wr32(sp0 - 0x260u, t183);
            wr32(sp0 - 0x264u, COW_IMG(0x10358024u));
            wr32(sp0 - 0x268u, sp0 - 0x240u);
            g->ebx = ebx;
            g->ecx = sp0 - 0x240u;
            g->edx = t184;
            g->esp = sp0 - 0x254u;
            t185 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x10358024u), t183, rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
            t186 = g->ecx;
            t187 = g->edx;
            eax = t185;
            ecx = t186;
            edx = t187;
        }
    }
    goto L_1013e0d7;
L_1013e027: ;
    if ((rd16(ebx + 2u) & 3u) == 1u)
    {
        ecx = (ecx & 0xffff0000u) | (rd16(ebx + 2u) & 3u);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | (rd16(ebx + 2u) & 3u);
        if ((uint16_t)ecx != 2u)
        {
            wr32(self + 0x338u, 0x80404040u);
        }
    }
    if ((uint16_t)eax == 0x108du) goto L_1013e079;
    eax = (uint16_t)eax;
    if (eax != 0x1526u) goto L_1013e09a;
    if ((int32_t)(rd16(ebx) - 0x1du) >= 0)
    {
        eax = rd16(ebx) - 0x1du;
    }
    else
    {
        eax = 0u;
    }
    wr32(sp0 - 0x25cu, eax);
    wr32(sp0 - 0x260u, 0x19u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x258u;
    t188 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x19u, eax);
    t189 = g->ecx;
    wr32(sp0 - 0x264u, t188);
    wr32(sp0 - 0x268u, COW_IMG(0x1035bb48u));
    wr32(sp0 - 0x26cu, sp0 - 0x240u);
    eax = t188;
    ecx = t189;
    edx = sp0 - 0x240u;
    loc_264 = t188;
L_1013e092: ;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x258u;
    t193 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1035bb48u), loc_264, 0x19u, loc_25c);
    t194 = g->ecx;
    eax = t193;
    ecx = t194;
L_1013e09a: ;
    wr32(sp0 - 0x25cu, 5u);
    t195 = rd32(ebx + 8u);
    wr32(sp0 - 0x260u, t195);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x258u;
    t196 = cow_cdecl(g, COW_IMG(0x101c8fd0u), 2, t195, 5u);
    t197 = g->ecx;
    edi = t196;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x258u < sp0 - 0x260u;
    pf = PARITY((uint8_t)(sp0 - 0x258u));
    af = (sp0 - 0x260u ^ sp0 - 0x258u) >> 4u & 1u;
    zf = sp0 == 0x258u;
    sf = (int32_t)(sp0 - 0x258u) < 0;
    of = ((sp0 - 0x260u ^ sp0 - 0x258u) & (sp0 - 0x258u ^ 8u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t198 = edi - ~ecx;
    edi = sp0 - 0x240u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t198;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    edx = ~ecx;
    goto L_1013e0d7;
L_1013e079: ;
    wr32(sp0 - 0x25cu, 0u);
    t190 = rd16(ebx + 0x10u);
    wr32(sp0 - 0x260u, t190);
    g->ebx = ebx;
    g->eax = t190;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    t191 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, t190, 0u, in_edi, in_esi);
    t192 = g->edx;
    wr32(sp0 - 0x264u, t191);
    wr32(sp0 - 0x268u, COW_IMG(0x1035bb48u));
    wr32(sp0 - 0x26cu, sp0 - 0x240u);
    eax = t191;
    ecx = sp0 - 0x240u;
    edx = t192;
    loc_264 = t191;
    loc_25c = 0u;
    goto L_1013e092;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013d790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013d790(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
