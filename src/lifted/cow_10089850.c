/* f_0x10089850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10089850(Guest* g)
{
    double d10;
    double d11;
    double d136;
    double d143;
    double d144;
    double d149;
    double d26;
    double d30;
    double d31;
    double d36;
    double d49;
    double d5;
    double d75;
    double d83;
    double d87;
    double d88;
    double d95;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    double loc_8_f;
    uint32_t of;
    uint32_t sf;
    uint32_t t1;
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
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
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
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(rd32(COW_IMG(0x10487ee8u)) + 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10487ee8u));
        ecx = rd32(rd32(COW_IMG(0x10487ee8u)) + 4u);
        goto L_10089873;
    }
    eax = rd32(COW_IMG(0x10487ee8u));
    wr32(sp0 - 0x14u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10089ff0u), self, 1, 1u);
    t1 = g->edx;
    edx = t1;
    ebp = in_ebp;
    edi = in_edi;
L_10089c57: ;
    esi = rd32(COW_IMG(0x10487ee8u));
L_10089c5d: ;
    if (rd32(COW_IMG(0x10578478u)) == 0u) goto L_10089e1f;
    if (rd32(esi) == 0u) goto L_10089e1f;
    t141 = rd32(esi + 8u);
    wr32(sp0 - 4u, t141);
    t142 = rd32(esi + 4u) - rd32(esi + 8u);
    wr32(sp0 - 8u, t142);
    wrf32(sp0 - 8u, (float)(double)(float)(double)(int32_t)t142);
    d143 = fr(g, (double)(int32_t)t142 * (double)rdf32(COW_IMG(0x1032ae5cu)));
    if (!((double)rdf32(COW_IMG(0x1032a3f0u)) <= d143))
    {
        eax = (t141 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1032a3f0u)), d143, 1u);
        ecx = t142;
        loc_4 = t141;
        x0 = fr(g, (double)(int32_t)t142 * (double)rdf32(COW_IMG(0x1032ae5cu)));
    }
    else
    {
        eax = (t141 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1032a3f0u)), d143, 1u);
        ecx = t142;
        loc_4 = t141;
        loc_8_f = (double)(float)(double)(int32_t)t142;
        x0 = fr(g, (double)(int32_t)t142 * (double)rdf32(COW_IMG(0x1032ae5cu)));
        if (!(x0 <= (double)rdf32(COW_IMG(0x1032961cu))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
            x0 = loc_8_f;
        }
    }
    g->ecx = ecx;
    g->edx = edx;
    d144 = fr(g, (double)(int32_t)loc_4 + x0);
    fpush(g, d144);
    g->esp = sp0 - 0x10u;
    t145 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t146 = g->ecx;
    t147 = g->edx;
    wr32(esi + 8u, t145);
    t148 = rd32(COW_IMG(0x10487ee8u));
    d149 = fr(g, fr(g, (double)(int32_t)rd32(rd32(COW_IMG(0x10487ee8u)) + 8u) * (double)rdf32(COW_IMG(0x1032a3c8u))) / (double)(int32_t)rd32(rd32(COW_IMG(0x10487ee8u))));
    fpush(g, d149);
    t150 = cow_call_regs(g, COW_IMG(0x10311c6cu), t148, g->ecx, g->edx, 1, 0);
    t151 = rd32(sp0 - 0xcu);
    t152 = rd32(sp0 - 0x10u);
    wr16(rd32(COW_IMG(0x106643a8u)) + 0x3au, (uint16_t)t150);
    g->ebx = t151;
    g->esi = t152;
    g->edi = edi;
    g->ebp = ebp;
    return rd32(rd32(COW_IMG(0x10487ee8u)) + 4u);
L_10089873: ;
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_edi);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_stdcall(g, COW_IMG(0x10014d60u), 0);
    t3 = g->edx;
    if ((int32_t)t2 < 4)
    {
        edx = t3;
        ebp = t2;
    }
    else
    {
        edx = t3;
        ebp = 4u;
    }
    if (rd32(COW_IMG(0x10487ec8u)) + 1u > 3u) goto L_10089c21;
    eax = rd32(COW_IMG(0x10487ec8u)) + 1u;
    ecx = rd32(COW_IMG(0x10487ec8u));
    t4 = rd32(COW_IMG(0x10089e28u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x1008989fu: goto L_1008989f;
    case 0x100898c7u: goto L_100898c7;
    case 0x100898f5u: goto L_100898f5;
    case 0x10089aeeu: goto L_10089aee;
    default: rt_fatal(g, COW_IMG(0x10089898u), "switch");
    }
    return 0;
L_1008989f: ;
    if ((int32_t)rd32(rd32(COW_IMG(0x10487ee8u)) + 0x28u) >= 2)
    {
        ecx = rd32(COW_IMG(0x10487ee8u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x28u);
        ecx = rd32(COW_IMG(0x10487ee8u));
        wr16(COW_IMG(0x10485ff2u), rd16(COW_IMG(0x1035b578u) + eax * 2u));
    }
    wr32(COW_IMG(0x10487ec8u), 0u);
L_10089c27: ;
    t138 = rd32(ecx + 4u) + rd32(ecx + 0x10u) * ebp;
    t139 = rd32(ecx + 0x10u);
    t140 = rd32(sp0 - 0x18u);
    wr32(ecx + 4u, t138);
    if ((int32_t)rd32(rd32(COW_IMG(0x10487ee8u)) + 4u) >= 0)
    {
        edx = t139 * ebp;
        ebp = rd32(sp0 - 0x14u);
        esi = rd32(COW_IMG(0x10487ee8u));
        edi = t140;
    }
    else
    {
        edx = t139 * ebp;
        ebp = rd32(sp0 - 0x14u);
        esi = rd32(COW_IMG(0x10487ee8u));
        edi = t140;
        wr32(esi + 4u, 0u);
        esi = rd32(COW_IMG(0x10487ee8u));
    }
    if ((int32_t)rd32(esi + 4u) <= (int32_t)rd32(esi)) goto L_10089c5d;
    eax = rd32(esi);
    wr32(esi + 4u, eax);
    goto L_10089c57;
L_100898c7: ;
    wr32(COW_IMG(0x10487eccu), 0u);
    wr32(COW_IMG(0x10487ed0u), 0u);
    wr32(COW_IMG(0x10487ed4u), 0u);
    wr32(COW_IMG(0x10487ed8u), 0u);
    wr32(COW_IMG(0x10487ec8u), 1u);
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x10089ee0u), self, edx, 0);
L_10089c21: ;
    ecx = rd32(COW_IMG(0x10487ee8u));
    goto L_10089c27;
L_100898f5: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t72 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t73 = g->ecx;
    t74 = g->edx;
    d75 = cow_take_float(g);
    g->edx = t74;
    fpush(g, d75);
    t76 = cow_call_regs(g, COW_IMG(0x10311c6cu), t72, g->ecx, g->edx, 1, 0);
    t77 = g->edx;
    t78 = t76 + rd32(COW_IMG(0x10487ed0u));
    t79 = rd32(COW_IMG(0x10487ed0u));
    wr32(COW_IMG(0x10487ed0u), t78);
    if ((int32_t)(t76 + t79) <= 30)
    {
        eax = t76;
        ecx = t78;
        edx = t77;
    }
    else
    {
        eax = t76;
        ecx = t78;
        edx = t77;
        wr32(sp0 - 0x1cu, 4u);
        wr32(sp0 - 0x20u, 0x3fu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t80 = cow_cdecl(g, COW_IMG(0x10089e40u), 2, 0x3fu, 4u);
        t81 = g->ecx;
        t82 = g->edx;
        d83 = cow_take_float(g);
        if (d83 == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (t80 & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            ecx = t81;
            edx = t82;
        }
        else
        {
            ecx = t81;
            edx = t82;
            g->edx = edx;
            t84 = rd32(COW_IMG(0x10487ee8u));
            g->esp = sp0 - 0x18u;
            t85 = cow_call_regs(g, COW_IMG(0x10014cf0u), t84, g->ecx, g->edx, 1, 0);
            t86 = g->edx;
            d87 = cow_take_float(g);
            g->edx = t86;
            d88 = fr(g, fr(g, d87 * (double)(int32_t)rd32(rd32(COW_IMG(0x10487ee8u)) + 0x1cu)) * (double)rdf32(COW_IMG(0x10329a08u)));
            fpush(g, d88);
            t89 = cow_call_regs(g, COW_IMG(0x10311c6cu), t85, g->ecx, g->edx, 1, 0);
            t90 = g->edx;
            t91 = t89 + rd32(t84 + 4u);
            wr32(t84 + 4u, t91);
            wr32(COW_IMG(0x10487ed8u), 0u);
            eax = t89;
            ecx = t91;
            edx = t90;
        }
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t92 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t93 = g->ecx;
    t94 = g->edx;
    d95 = cow_take_float(g);
    fpush(g, d95);
    t96 = cow_call_regs(g, COW_IMG(0x10311c6cu), t92, g->ecx, g->edx, 1, 0);
    t97 = rd32(COW_IMG(0x10487eccu)) + t96 * rd32(rd32(COW_IMG(0x10487ee8u)) + 0x14u);
    t98 = rd32(COW_IMG(0x10487ee8u));
    t99 = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x14u);
    t100 = rd32(COW_IMG(0x10487eccu));
    wr32(COW_IMG(0x10487eccu), t97);
    if ((int32_t)(t100 + t96 * t99) < 6000)
    {
        ecx = t98;
        goto L_10089c27;
    }
    eax = t97;
    ecx = t98;
    edx = t96 * t99;
    if (rd32(ecx + 4u) == 0u) goto L_10089c27;
    wr32(ecx + 0x34u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t101 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
    t102 = g->edx;
    if ((int32_t)(t101 & 0x80000001u) >= 0)
    {
        eax = t101 & 0x80000001u;
        edx = t102;
    }
    else
    {
        eax = t101 & 0x80000001u;
        edx = t102;
        eax = (eax - 1u | 0xfffffffeu) + 1u;
    }
    t103 = rd32(COW_IMG(0x10487ee8u));
    wr32(t103 + 0x30u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t104 = cow_fastcall(g, COW_IMG(0x103149e0u), t103, edx, 0);
    t105 = cow_divs(g, t104, rd32(rd32(COW_IMG(0x10487ee8u)) + 0xcu) * 2u);
    t106 = cow_mods(g, t104, rd32(rd32(COW_IMG(0x10487ee8u)) + 0xcu) * 2u);
    t107 = t106 * 0xau + 0x14u;
    wr32(COW_IMG(0x10487eccu), t107);
    t108 = rd32(self + 0xa0u);
    wr32(sp0 - 0x1cu, t108);
    wr32(sp0 - 0x20u, 0x37687366u);
    g->eax = rd32(t108);
    t109 = rd32(t108);
    t110 = cow_thiscall(g, rd32(t109 + 0x29cu), t108, 2, 0x37687366u, t108);
    t111 = rd32(self + 0xa0u);
    wr32(sp0 - 0x1cu, t111);
    wr32(sp0 - 0x20u, 0x38687366u);
    g->edx = rd32(t111);
    t112 = rd32(t111);
    cow_thiscall(g, rd32(t112 + 0x29cu), t111, 2, 0x38687366u, t111);
    t113 = g->edx;
    t114 = rd32(self + 0xa0u);
    wr32(sp0 - 0x1cu, t114);
    wr32(sp0 - 0x20u, 0x39687366u);
    cow_thiscall(g, rd32(rd32(t114) + 0x29cu), t114, 2, 0x39687366u, t114);
    wr32(sp0 - 0x1cu, 0u);
    t115 = rd32(self + 0xa0u);
    wr32(sp0 - 0x20u, t115);
    t116 = rd32(COW_IMG(0x1035b57cu) + rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u) * 4u);
    wr32(sp0 - 0x24u, t116);
    g->eax = t116;
    g->edx = rd32(t115);
    t117 = rd32(t115);
    t118 = cow_thiscall(g, rd32(t117 + 0x298u), t115, 3, t116, t115, 0u);
    t119 = g->edx;
    t120 = cow_stdcall(g, COW_IMG(0x10089f40u), 0);
    wr32(sp0 - 0x1cu, t120);
    t121 = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u);
    wr32(sp0 - 0x20u, t121);
    g->edx = t121;
    t122 = cow_thiscall(g, COW_IMG(0x10089f50u), self, 2, t121, t120);
    t123 = g->edx;
    if (rd32(self + 0xa4u) == 0u)
    {
        eax = t122;
        edx = t123;
    }
    else
    {
        edx = t123;
        edi = rd32(self + 0xa4u);
        t124 = rd32(self + 0xa0u);
        wr32(sp0 - 0x1cu, t124);
        wr32(sp0 - 0x20u, 0x37687366u);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x37687366u, t124);
        t125 = rd32(self + 0xa0u);
        wr32(sp0 - 0x1cu, t125);
        wr32(sp0 - 0x20u, 0x38687366u);
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x38687366u, t125);
        t126 = rd32(self + 0xa0u);
        wr32(sp0 - 0x1cu, t126);
        wr32(sp0 - 0x20u, 0x39687366u);
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x39687366u, t126);
        wr32(sp0 - 0x1cu, 0u);
        t127 = rd32(self + 0xa0u);
        wr32(sp0 - 0x20u, t127);
        t128 = rd32(COW_IMG(0x1035b57cu) + rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u) * 4u);
        wr32(sp0 - 0x24u, t128);
        g->eax = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u);
        g->edx = rd32(edi);
        t129 = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u);
        t130 = rd32(edi);
        t131 = cow_thiscall(g, rd32(t130 + 0x298u), edi, 3, t128, t127, 0u);
        t132 = g->edx;
        eax = t131;
        edx = t132;
    }
    wr32(COW_IMG(0x10487ed0u), 0u);
    wr32(COW_IMG(0x10487ed4u), 0u);
    wr32(COW_IMG(0x10487ed8u), 0u);
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t133 = cow_stdcall(g, COW_IMG(0x10089f40u), 0);
    t134 = g->ecx;
    t135 = g->edx;
    if (t133 != 0u)
    {
        eax = t133;
        ecx = t134;
        edx = t135;
        d136 = fr(g, (double)(int32_t)rd32(COW_IMG(0x10487eccu)) * (double)rdf32(COW_IMG(0x1032d698u)));
        fpush(g, d136);
        g->esp = sp0 - 0x18u;
        t137 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        wr32(COW_IMG(0x10487eccu), t137);
    }
    wr32(COW_IMG(0x10487ec8u), rd32(COW_IMG(0x10487ec8u)) + 1u);
    goto L_10089c21;
L_10089aee: ;
    d5 = (double)(float)(double)(int32_t)rd32(rd32(COW_IMG(0x10487ee8u)) + 0x34u);
    wrf32(sp0 - 8u, (float)d5);
    g->ecx = ecx;
    g->edx = rd32(COW_IMG(0x10487ee8u));
    t6 = rd32(COW_IMG(0x10487ee8u));
    g->esp = sp0 - 0x18u;
    t7 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    d10 = cow_take_float(g);
    g->edx = t9;
    d11 = fr(g, (double)rdf32(sp0 - 8u) - d10);
    fpush(g, d11);
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t7, g->ecx, g->edx, 1, 0);
    t13 = g->edx;
    t14 = rd32(COW_IMG(0x10487ee8u));
    wr32(t14 + 0x34u, t12);
    if ((int32_t)rd32(rd32(COW_IMG(0x10487ee8u)) + 0x34u) >= 0)
    {
        eax = rd32(COW_IMG(0x10487ee8u));
        ecx = t14;
        edx = t13;
    }
    else
    {
        eax = rd32(COW_IMG(0x10487ee8u));
        ecx = t14;
        edx = t13;
        if ((int32_t)rd32(eax + 0x28u) >= 2)
        {
            eax = rd32(eax + 0x28u);
        }
        else
        {
            eax = rd32(eax + 0x28u);
            wr32(sp0 - 0x1cu, 0u);
            t15 = rd32(self + 0xa0u);
            wr32(sp0 - 0x20u, t15);
            t16 = rd32(COW_IMG(0x1035b570u) + eax * 4u);
            wr32(sp0 - 0x24u, t16);
            g->eax = t16;
            g->edx = rd32(t15);
            t17 = rd32(t15);
            g->esp = sp0 - 0x18u;
            t18 = cow_thiscall(g, rd32(t17 + 0x298u), t15, 3, t16, t15, 0u);
            t19 = g->ecx;
            t20 = g->edx;
            t21 = cow_fastcall(g, COW_IMG(0x103149e0u), t19, t20, 0);
            t22 = cow_divs(g, t21, 6u);
            t23 = cow_mods(g, t21, 6u);
            t24 = t23 * 0x3cu + 0x12cu;
            t25 = rd32(COW_IMG(0x10487ee8u));
            wr32(t25 + 0x34u, t24);
            eax = t25;
            ecx = 6u;
            edx = t24;
        }
    }
    d26 = (double)(float)(double)(int32_t)rd32(COW_IMG(0x10487eccu));
    wrf32(sp0 - 8u, (float)d26);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t27 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t28 = g->ecx;
    t29 = g->edx;
    d30 = cow_take_float(g);
    g->ecx = t28;
    g->edx = t29;
    d31 = fr(g, (double)rdf32(sp0 - 8u) - d30);
    fpush(g, d31);
    t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), t27, g->ecx, g->edx, 1, 0);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(COW_IMG(0x10487eccu), t32);
    if ((int32_t)t32 >= 0)
    {
        eax = t32;
        ecx = t33;
        edx = t34;
        zf = t32 == 0u;
        goto L_10089cee;
    }
    eax = t32;
    wr32(COW_IMG(0x10487eccu), 0u);
L_10089b88: ;
    t56 = rd32(self + 0xa0u);
    wr32(sp0 - 0x1cu, t56);
    wr32(sp0 - 0x20u, 0x38687366u);
    g->edx = rd32(t56);
    t57 = rd32(t56);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(t57 + 0x29cu), t56, 2, 0x38687366u, t56);
    t58 = g->edx;
    t59 = rd32(self + 0xa0u);
    wr32(sp0 - 0x1cu, t59);
    wr32(sp0 - 0x20u, 0x39687366u);
    g->eax = rd32(t59);
    t60 = rd32(t59);
    t61 = cow_thiscall(g, rd32(t60 + 0x29cu), t59, 2, 0x39687366u, t59);
    wr32(sp0 - 0x1cu, 0u);
    t62 = rd32(self + 0xa0u);
    wr32(sp0 - 0x20u, t62);
    wr32(sp0 - 0x24u, 0x37687366u);
    g->edx = rd32(t62);
    t63 = rd32(t62);
    t64 = cow_thiscall(g, rd32(t63 + 0x298u), t62, 3, 0x37687366u, t62, 0u);
    t65 = g->edx;
    if (rd32(self + 0xa4u) == 0u)
    {
        eax = t64;
        edx = t65;
    }
    else
    {
        edx = t65;
        edi = rd32(self + 0xa4u);
        t66 = rd32(self + 0xa0u);
        wr32(sp0 - 0x1cu, t66);
        wr32(sp0 - 0x20u, 0x38687366u);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x38687366u, t66);
        t67 = rd32(self + 0xa0u);
        wr32(sp0 - 0x1cu, t67);
        wr32(sp0 - 0x20u, 0x39687366u);
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x39687366u, t67);
        wr32(sp0 - 0x1cu, 0u);
        t68 = rd32(self + 0xa0u);
        wr32(sp0 - 0x20u, t68);
        wr32(sp0 - 0x24u, 0x37687366u);
        g->eax = t68;
        g->edx = rd32(edi);
        t69 = rd32(edi);
        t70 = cow_thiscall(g, rd32(t69 + 0x298u), edi, 3, 0x37687366u, t68, 0u);
        t71 = g->edx;
        eax = t70;
        edx = t71;
    }
    wr32(sp0 - 0x1cu, 1u);
    wr32(COW_IMG(0x10487ec8u), 0u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10089ff0u), self, 1, 1u);
    goto L_10089c21;
L_10089cee: ;
    if (zf) goto L_10089b88;
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, 0x3fu);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t35 = cow_cdecl(g, COW_IMG(0x10089e40u), 2, 0x3fu, 4u);
    d36 = cow_take_float(g);
    if (rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u) != 0u)
    {
        eax = (t35 & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = rd32(COW_IMG(0x10487ee8u));
        x0 = d36;
        goto L_10089d38;
    }
    eax = (t35 & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    ecx = rd32(COW_IMG(0x10487ee8u));
    x0 = d36;
    if ((eax & 0x4100u) != 0u)
    {
        eax = eax & 0x4100u;
        goto L_10089d29;
    }
    t37 = rd32(COW_IMG(0x10487ed4u)) + 1u;
    wr32(COW_IMG(0x10487ed4u), t37);
L_10089d61: ;
    if ((int32_t)rd32(COW_IMG(0x10487ed4u)) <= (int32_t)rd32(COW_IMG(0x10487ed8u)))
    {
        eax = rd32(COW_IMG(0x10487ed4u));
        edx = rd32(COW_IMG(0x10487ed8u));
        sf = (int32_t)(rd32(COW_IMG(0x10487ed4u)) - rd32(COW_IMG(0x10487ed8u))) < 0;
        of = ((rd32(COW_IMG(0x10487ed4u)) ^ rd32(COW_IMG(0x10487ed8u))) & (rd32(COW_IMG(0x10487ed4u)) ^ rd32(COW_IMG(0x10487ed4u)) - rd32(COW_IMG(0x10487ed8u)))) >> 0x1fu;
        goto L_10089dae;
    }
    eax = rd32(COW_IMG(0x10487ed4u));
    edx = rd32(COW_IMG(0x10487ed8u));
    g->eax = eax;
    t39 = rd32(ecx + 0x18u);
    g->esp = sp0 - 0x18u;
    t40 = cow_stdcall(g, COW_IMG(0x10089f40u), 0);
    if (t40 == 0u)
    {
        edi = t39;
    }
    else
    {
        edi = t39;
        edi = edi * 2u;
    }
    t41 = rd32(rd32(COW_IMG(0x10487ee8u)) + 4u) - edi;
    t42 = rd32(COW_IMG(0x10487ee8u));
    wr32(t42 + 4u, t41);
    wr32(COW_IMG(0x10487eccu), 0u);
    g->eax = t42;
    g->esp = sp0 - 0x18u;
    t43 = cow_stdcall(g, COW_IMG(0x10089f40u), 0);
    wr32(sp0 - 0x1cu, t43);
    t44 = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u);
    wr32(sp0 - 0x20u, t44);
    cow_thiscall(g, COW_IMG(0x10089fa0u), self, 2, t44, t43);
L_10089e08: ;
    ecx = rd32(COW_IMG(0x10487ee8u));
L_10089e0e: ;
    wr32(COW_IMG(0x10487ed4u), 0u);
    wr32(COW_IMG(0x10487ed8u), 0u);
    goto L_10089c27;
L_10089d29: ;
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_10089d61;
L_10089d5b: ;
    wr32(COW_IMG(0x10487ed8u), rd32(COW_IMG(0x10487ed8u)) + 1u);
    goto L_10089d61;
L_10089d38: ;
    if (PARITY(eax >> 8u & 5u)) goto L_10089d4c;
    t38 = rd32(COW_IMG(0x10487ed4u)) + 1u;
    wr32(COW_IMG(0x10487ed4u), t38);
    goto L_10089d61;
L_10089d4c: ;
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u) goto L_10089d61;
    goto L_10089d5b;
L_10089dae: ;
    if (sf == of) goto L_10089e0e;
    t45 = rd32(ecx + 0x1cu);
    wr32(sp0 - 8u, t45);
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t46 = cow_stdcall(g, COW_IMG(0x10089f40u), 0);
    t47 = g->ecx;
    t48 = g->edx;
    if (t46 == 0u)
    {
        edi = t45;
    }
    else
    {
        eax = t46;
        ecx = t47;
        edx = t48;
        d49 = fr(g, (double)(int32_t)rd32(sp0 - 8u) * (double)rdf32(COW_IMG(0x10329ce4u)));
        fpush(g, d49);
        g->esp = sp0 - 0x18u;
        t50 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        edi = t50;
    }
    if ((int32_t)edi < 1)
    {
        edi = 1u;
    }
    t51 = edi + rd32(rd32(COW_IMG(0x10487ee8u)) + 4u);
    t52 = rd32(COW_IMG(0x10487ee8u));
    wr32(t52 + 4u, t51);
    wr32(COW_IMG(0x10487eccu), 0u);
    g->eax = t52;
    g->edx = t51;
    g->esp = sp0 - 0x18u;
    t53 = cow_stdcall(g, COW_IMG(0x10089f40u), 0);
    t54 = g->edx;
    wr32(sp0 - 0x1cu, t53);
    t55 = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u);
    wr32(sp0 - 0x20u, t55);
    cow_thiscall(g, COW_IMG(0x10089fc0u), self, 2, t55, t53);
    goto L_10089e08;
L_10089e1f: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = edi;
    g->ebp = ebp;
    return rd32(esi + 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10089850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10089850(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
