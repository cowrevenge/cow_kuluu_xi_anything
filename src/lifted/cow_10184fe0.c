/* f_0x10184fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10184fe0(Guest* g)
{
    double d1;
    double d100;
    double d101;
    double d102;
    double d103;
    double d104;
    double d105;
    double d106;
    double d107;
    double d108;
    double d112;
    double d115;
    double d2;
    double d3;
    double d32;
    double d33;
    double d34;
    double d39;
    double d4;
    double d43;
    double d5;
    double d55;
    double d56;
    double d57;
    double d59;
    double d6;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
    double d69;
    double d70;
    double d71;
    double d72;
    double d73;
    double d74;
    double d76;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d87;
    double d88;
    double d89;
    double d90;
    double d91;
    double d93;
    double d94;
    double d95;
    double d96;
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_100;
    uint32_t loc_12c;
    uint32_t loc_130;
    uint32_t loc_140;
    double loc_140_f;
    uint32_t loc_144;
    uint32_t loc_148;
    uint32_t loc_14c;
    uint32_t loc_158;
    uint32_t loc_15c;
    uint32_t loc_c8;
    uint32_t loc_cc;
    uint32_t loc_d4;
    uint32_t loc_d8;
    uint32_t loc_dc;
    uint32_t loc_e0;
    uint32_t loc_e4;
    uint32_t loc_e8;
    uint32_t loc_ec;
    uint32_t loc_f0;
    uint32_t loc_f4;
    uint32_t loc_f8;
    uint32_t loc_fc;
    uint32_t t10;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t113;
    uint32_t t114;
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
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t58;
    uint32_t t7;
    uint32_t t75;
    uint32_t t8;
    uint32_t t9;
    uint32_t t92;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 368u);

    d1 = (double)rdf32(sp0 + 8u);
    wr32(sp0 - 0x12cu, in_ebx);
    wr32(sp0 - 0x130u, in_esi);
    wr32(sp0 - 0xacu, self);
    if (d1 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        wr32(sp0 - 0x98u, 0x3f800000u);
        wr32(sp0 - 0xa0u, 0x3f800000u);
    }
    else
    {
        d2 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 8u));
        wrf32(sp0 - 0x98u, (float)d2);
        d3 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 8u));
        wrf32(sp0 - 0xa0u, (float)d3);
    }
    d4 = (double)(float)-(double)rdf32(arg1);
    wrf32(sp0 - 0x8cu, (float)d4);
    d5 = (double)(float)-(double)rdf32(arg1 + 4u);
    wrf32(sp0 - 0x88u, (float)d5);
    d6 = (double)(float)-(double)rdf32(arg1 + 8u);
    wrf32(sp0 - 0x84u, (float)d6);
    if (rd32(self + 0x343e4u) == 0u)
    {
        ebp = in_ebp;
        edi = in_edi;
        loc_12c = in_ebx;
        loc_130 = in_esi;
        goto L_10185c93;
    }
    eax = rd32(self + 0x343e4u);
    if (rd32(eax + 0x40u) != 0u)
    {
        ecx = rd32(eax + 0x40u);
    }
    else
    {
        ecx = rd32(eax + 0x44u);
    }
    wr32(sp0 - 0x134u, ecx);
    wr32(sp0 - 0x138u, 0u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x13cu, t7);
    g->edx = rd32(t7);
    t8 = rd32(t7);
    g->esp = sp0 - 0x138u;
    cow_thiscall(g, rd32(t8 + 0xf4u), ecx, 1, t7);
    t9 = g->edx;
    wr32(sp0 - 0x13cu, 0u);
    wr32(sp0 - 0x140u, 0x89u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x144u, t10);
    cow_thiscall(g, rd32(rd32(t10) + 0xc8u), rd32(t10), 3, t10, 0x89u, 0u);
    wr32(sp0 - 0x13cu, 1u);
    wr32(sp0 - 0x140u, 0x1bu);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x144u, t11);
    cow_thiscall(g, rd32(rd32(t11) + 0xc8u), rd32(t11), 3, t11, 0x1bu, 1u);
    wr32(sp0 - 0x13cu, 1u);
    wr32(sp0 - 0x140u, 0x13u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x144u, t12);
    cow_thiscall(g, rd32(rd32(t12) + 0xc8u), rd32(t12), 3, t12, 0x13u, 1u);
    wr32(sp0 - 0x13cu, 4u);
    wr32(sp0 - 0x140u, 0x14u);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x144u, t13);
    cow_thiscall(g, rd32(rd32(t13) + 0xc8u), rd32(t13), 3, t13, 0x14u, 4u);
    wr32(sp0 - 0x13cu, 0u);
    wr32(sp0 - 0x140u, 0x1cu);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x144u, t14);
    cow_thiscall(g, rd32(rd32(t14) + 0xc8u), rd32(t14), 3, t14, 0x1cu, 0u);
    wr32(sp0 - 0x13cu, 1u);
    wr32(sp0 - 0x140u, 0x11u);
    wr32(sp0 - 0x144u, 0u);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x148u, t15);
    g->esp = sp0 - 0x144u;
    cow_thiscall(g, rd32(rd32(t15) + 0xfcu), rd32(t15), 1, t15);
    wr32(sp0 - 0x148u, 1u);
    wr32(sp0 - 0x14cu, 0x10u);
    wr32(sp0 - 0x150u, 0u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x154u, t16);
    g->esp = sp0 - 0x150u;
    cow_thiscall(g, rd32(rd32(t16) + 0xfcu), rd32(t16), 1, t16);
    wr32(sp0 - 0x154u, 3u);
    wr32(sp0 - 0x158u, 0x16u);
    t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x15cu, t17);
    cow_thiscall(g, rd32(rd32(t17) + 0xc8u), rd32(t17), 3, t17, 0x16u, 3u);
    wr32(sp0 - 0x154u, 0u);
    wr32(sp0 - 0x158u, 0xeu);
    wr32(sp0 - 0xc8u, 0u);
    t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x15cu, t18);
    g->eax = t18;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t19 = rd32(t18);
    t20 = rd32(COW_IMG(0x1045666cu));
    t21 = cow_thiscall(g, rd32(t19 + 0xc8u), t19, 3, t18, 0xeu, 0u);
    t22 = g->ecx;
    t23 = g->edx;
    if (rd8(self + 0x39598u) == 0u)
    {
        ecx = t22;
        edx = t23;
        wr32(sp0 - 0x154u, rd32(COW_IMG(0x10631c88u)));
        g->esp = sp0 - 0x150u;
        cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x10631c88u)));
    }
    else
    {
        wr32(sp0 - 0x154u, sp0 - 0x60u);
        wr32(sp0 - 0x158u, 3u);
        t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x15cu, t24);
        g->eax = t24;
        g->edx = sp0 - 0x60u;
        g->esp = sp0 - 0x150u;
        t25 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x98u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t24, 3u, sp0 - 0x60u);
        t26 = g->edx;
        g->esp = sp0 - 0xe4u;
        cow_bridge_indirect(g, COW_IMG(0x10177420u), 0u, 27u, (const uint32_t[]){0u, 0x10u, 1u, 0u, 0x11u, 1u, 0u, rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u)}, self, g->edx, g->eax, 108u);
    }
    wr32(sp0 - 0x154u, in_edi);
    wr32(sp0 - 0x158u, 0x142u);
    t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x15cu, t27);
    g->edx = rd32(t27);
    t28 = rd32(t27);
    g->esp = sp0 - 0x158u;
    cow_thiscall(g, rd32(t28 + 0x130u), rd32(COW_IMG(0x1045666cu)), 1, t27);
    t29 = g->edx;
    t30 = rd32(sp0 - 0xbcu);
    wr32(sp0 - 0x7cu, t30);
    t31 = rd32(sp0 - 0xc4u);
    wr32(sp0 - 0xa4u, t31);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0x90u, 0x3f800000u);
    wr32(sp0 - 0x88u, 0u);
    d32 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0xb0u) * (double)rdf32(sp0 - 0xc4u)) + (double)rdf32(COW_IMG(0x103773c0u)));
    wrf32(sp0 - 0x74u, (float)d32);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x84u, 0u);
    wr32(sp0 - 0x68u, 0x3f800000u);
    d33 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x103773c4u)) + (double)rdf32(sp0 - 0xacu));
    wrf32(sp0 - 0x70u, (float)d33);
    d34 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0xa8u) * (double)rdf32(sp0 - 0xbcu)) + (double)rdf32(COW_IMG(0x103773c8u)));
    wrf32(sp0 - 0x6cu, (float)d34);
    g->eax = t31;
    t35 = cow_thiscall(g, COW_IMG(0x10167940u), self + 0x178u, 0);
    t36 = g->ecx;
    wr32(sp0 - 0xc8u, t35);
    if (t35 == 0u)
    {
        ebp = in_ebp;
        loc_158 = 0x142u;
        loc_14c = rd32(sp0 - 0x14cu);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140_f = (double)rdf32(sp0 - 0x140u);
        loc_144 = rd32(sp0 - 0x144u);
    }
    else
    {
        ecx = t36;
        loc_c8 = t35;
        t37 = rd32(rd32(sp0 - 0xd0u) + 0x17cu);
        wr32(sp0 - 0xb8u, t37);
        g->ecx = ecx;
        g->edx = rd32(sp0 - 0xd0u);
        t38 = rd32(sp0 - 0xd0u);
        d39 = fr(g, fr(g, (double)rdf32(loc_c8 + 0x38u) + (double)rdf32(arg1)) * (double)rdf32(COW_IMG(0x10329ce4u)));
        fpush(g, d39);
        g->esp = sp0 - 0x158u;
        t40 = cow_call_regs(g, COW_IMG(0x10311c6cu), t37, g->ecx, g->edx, 1, 0);
        t41 = g->ecx;
        t42 = g->edx;
        d43 = fr(g, fr(g, (double)rdf32(loc_c8 + 0x3cu) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
        fpush(g, d43);
        t44 = cow_call_regs(g, COW_IMG(0x10311c6cu), t40, g->ecx, g->edx, 1, 0);
        if ((int32_t)(t40 - 1u) >= 0)
        {
            eax = t44;
            ecx = t40 - 1u;
            esi = loc_c8;
            edi = t40;
            t45 = rd32(esi + 0x40u) - 1u;
            wr32(sp0 - 0xdcu, t45);
            if ((int32_t)ecx > (int32_t)(rd32(esi + 0x40u) - 1u))
            {
                loc_dc = t45;
            }
            else
            {
                wr32(sp0 - 0xdcu, ecx);
                loc_dc = ecx;
            }
        }
        else
        {
            eax = t44;
            esi = loc_c8;
            edi = t40;
            wr32(sp0 - 0xdcu, 0u);
            loc_dc = 0u;
        }
        if ((int32_t)(edi + 1u) >= 0)
        {
            ecx = edi + 1u;
            t46 = rd32(esi + 0x40u) - 1u;
            wr32(sp0 - 0xecu, t46);
            if ((int32_t)ecx > (int32_t)(rd32(esi + 0x40u) - 1u))
            {
                loc_ec = t46;
            }
            else
            {
                wr32(sp0 - 0xecu, ecx);
                loc_ec = ecx;
            }
        }
        else
        {
            wr32(sp0 - 0xecu, 0u);
            loc_ec = 0u;
        }
        if ((int32_t)(eax - 1u) >= 0)
        {
            ecx = eax - 1u;
            if ((int32_t)ecx > (int32_t)(rd32(esi + 0x44u) - 1u))
            {
                edx = rd32(esi + 0x44u) - 1u;
                ecx = edx;
            }
        }
        else
        {
            ecx = 0u;
        }
        if ((int32_t)(eax + 1u) >= 0)
        {
            eax = eax + 1u;
            if ((int32_t)eax > (int32_t)(rd32(esi + 0x44u) - 1u))
            {
                edx = rd32(esi + 0x44u) - 1u;
                eax = edx;
            }
        }
        else
        {
            eax = 0u;
        }
        wr32(sp0 - 0xe4u, eax);
        wr32(sp0 - 0xd8u, ecx);
        if ((int32_t)ecx > (int32_t)eax)
        {
            ebp = in_ebp;
            loc_158 = rd32(sp0 - 0x158u);
            loc_14c = rd32(sp0 - 0x14cu);
            loc_148 = rd32(sp0 - 0x148u);
            loc_140_f = (double)rdf32(sp0 - 0x140u);
            loc_144 = rd32(sp0 - 0x144u);
        }
        else
        {
            loc_e4 = eax;
            loc_d8 = ecx;
            wr32(sp0 - 0x15cu, in_ebp);
            loc_15c = in_ebp;
            loc_14c = rd32(sp0 - 0x14cu);
            loc_148 = rd32(sp0 - 0x148u);
            loc_140_f = (double)rdf32(sp0 - 0x140u);
            loc_144 = rd32(sp0 - 0x144u);
L_1018536b: ;
            wr32(sp0 - 0xe0u, loc_dc);
            if ((int32_t)loc_dc > (int32_t)loc_ec) goto L_10185bc0;
            loc_e0 = loc_dc;
L_10185382: ;
            if (rd32(loc_e0 * 4u + rd32(rd32(sp0 - 0xc8u) + 0x58u) + rd32(rd32(sp0 - 0xc8u) + 0x40u) * loc_d8 * 4u) == 0u) goto L_10185bab;
            eax = rd32(loc_e0 * 4u + rd32(rd32(sp0 - 0xc8u) + 0x58u) + rd32(rd32(sp0 - 0xc8u) + 0x40u) * loc_d8 * 4u);
L_101853a8: ;
            wr32(sp0 - 0xf4u, eax + 4u);
            if ((rd32(eax) >> 8u & 0x20u) == 0u)
            {
                loc_f4 = eax + 4u;
                eax = rd32(eax) & 0x7ffu;
                if ((int32_t)eax > 0)
                {
                    wr32(sp0 - 0xd4u, eax);
                    loc_d4 = eax;
L_101853d8: ;
                    t48 = rd32(loc_f4 + 4u);
                    wr32(sp0 - 0xf0u, t48);
                    if (rd32(sp0 - 0xb8u) != rd32(rd32(loc_f4) + 0xbcu))
                    {
                        ecx = t48;
                        edx = rd32(sp0 - 0xb8u);
                        ebp = rd32(loc_f4);
                        loc_f0 = t48;
                        if (rd16(ecx + 0xeu) == 0u)
                        {
                            if (rd32(sp0 - 0xccu) != (rd32(ebp + 0xa4u) & 1u))
                            {
                                eax = rd32(ebp + 0xa4u) & 1u;
                                wr32(sp0 - 0xccu, eax);
                                if (eax == 0u)
                                {
                                    loc_cc = eax;
                                    wr32(sp0 - 0x160u, 3u);
                                    wr32(sp0 - 0x164u, 0x16u);
                                    t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                    wr32(sp0 - 0x168u, t50);
                                    g->esp = sp0 - 0x15cu;
                                    cow_thiscall(g, rd32(rd32(t50) + 0xc8u), rd32(t50), 3, t50, 0x16u, 3u);
                                    loc_dc = rd32(sp0 - 0xdcu);
                                    loc_ec = rd32(sp0 - 0xecu);
                                    loc_e4 = rd32(sp0 - 0xe4u);
                                    loc_d8 = rd32(sp0 - 0xd8u);
                                    loc_15c = rd32(sp0 - 0x15cu);
                                    loc_e0 = rd32(sp0 - 0xe0u);
                                    loc_f4 = rd32(sp0 - 0xf4u);
                                    loc_d4 = rd32(sp0 - 0xd4u);
                                    loc_f0 = rd32(sp0 - 0xf0u);
                                    loc_140_f = (double)rdf32(sp0 - 0x140u);
                                    loc_144 = rd32(sp0 - 0x144u);
                                }
                                else
                                {
                                    loc_cc = eax;
                                    wr32(sp0 - 0x160u, 2u);
                                    wr32(sp0 - 0x164u, 0x16u);
                                    t49 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                    wr32(sp0 - 0x168u, t49);
                                    g->esp = sp0 - 0x15cu;
                                    cow_thiscall(g, rd32(rd32(t49) + 0xc8u), rd32(COW_IMG(0x1045666cu)), 3, t49, 0x16u, 2u);
                                    loc_dc = rd32(sp0 - 0xdcu);
                                    loc_ec = rd32(sp0 - 0xecu);
                                    loc_e4 = rd32(sp0 - 0xe4u);
                                    loc_d8 = rd32(sp0 - 0xd8u);
                                    loc_15c = rd32(sp0 - 0x15cu);
                                    loc_e0 = rd32(sp0 - 0xe0u);
                                    loc_f4 = rd32(sp0 - 0xf4u);
                                    loc_d4 = rd32(sp0 - 0xd4u);
                                    loc_f0 = rd32(sp0 - 0xf0u);
                                    loc_140_f = (double)rdf32(sp0 - 0x140u);
                                    loc_144 = rd32(sp0 - 0x144u);
                                }
                            }
                            wr32(sp0 - 0x160u, ebp);
                            wr32(sp0 - 0x164u, 0x100u);
                            t51 = rd32(loc_f0 + 4u);
                            wr32(sp0 - 0xb4u, t51);
                            t52 = rd32(loc_f0);
                            t53 = rd32(loc_f0 + 8u);
                            g->esp = sp0 - 0x15cu;
                            cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, ebp);
                            wr32(sp0 - 0xf8u, 0u);
                            t54 = ebp - (sp0 - 0x140u);
                            wr32(sp0 - 0xe8u, t54);
                            wr32(sp0 - 0xfcu, 4u);
                            eax = sp0 - 0x140u;
                            ebx = t52;
                            edi = t53;
                            loc_e8 = t54;
                            loc_fc = 4u;
                            loc_140_f = (double)rdf32(sp0 - 0x140u);
L_10185498: ;
                            wr32(sp0 - 0x14cu, sp0 - 0xa4u);
                            wr32(sp0 - 0x148u, eax + loc_e8);
                            wr32(sp0 - 0x100u, 4u);
                            ebp = eax;
                            loc_14c = sp0 - 0xa4u;
                            loc_148 = eax + loc_e8;
                            loc_100 = 4u;
L_101854b7: ;
                            d55 = (double)rdf32(COW_IMG(0x103295d8u));
                            wr32(ebp, 0u);
                            eax = loc_14c;
                            ecx = loc_148;
                            edx = 4u;
                            x0 = d55;
L_101854d1: ;
                            if (edx != 1u)
                            {
                                edx = edx - 1u;
                                x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
                                eax = eax + 0x10u;
                                ecx = ecx + 4u;
                                goto L_101854d1;
                            }
                            loc_140 = rd32(sp0 - 0x140u);
                            x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
                            wrf32(ebp, (float)x0);
                            wr32(sp0 - 0x14cu, loc_14c + 4u);
                            wr32(sp0 - 0x100u, loc_100 - 1u);
                            if (loc_100 != 1u)
                            {
                                ebp = ebp + 4u;
                                loc_14c = loc_14c + 4u;
                                loc_100 = loc_100 - 1u;
                                goto L_101854b7;
                            }
                            ebp = ebp + 4u;
                            loc_14c = loc_14c + 4u;
                            wr32(sp0 - 0xfcu, loc_fc - 1u);
                            if (loc_fc != 1u)
                            {
                                eax = ebp;
                                loc_fc = loc_fc - 1u;
                                loc_140_f = (double)rdf32(sp0 - 0x140u);
                                goto L_10185498;
                            }
                            eax = ebp;
                            loc_140_f = (double)rdf32(sp0 - 0x140u);
                            wr32(sp0 - 0xe8u, 0u);
                            if ((int16_t)rd16(rd32(sp0 - 0xf0u) + 0xcu) <= 0)
                            {
                                loc_dc = rd32(sp0 - 0xdcu);
                                loc_ec = rd32(sp0 - 0xecu);
                                loc_e4 = rd32(sp0 - 0xe4u);
                                loc_d8 = rd32(sp0 - 0xd8u);
                                loc_15c = rd32(sp0 - 0x15cu);
                                loc_e0 = rd32(sp0 - 0xe0u);
                                loc_f4 = rd32(sp0 - 0xf4u);
                                loc_d4 = rd32(sp0 - 0xd4u);
                                loc_144 = rd32(sp0 - 0x144u);
                            }
                            else
                            {
                                wr32(sp0 - 0x148u, COW_IMG(0x106390ccu));
                                wr32(sp0 - 0x144u, COW_IMG(0x106390c8u));
                                wr32(sp0 - 0x14cu, COW_IMG(0x106390b4u));
                                wr32(sp0 - 0x100u, COW_IMG(0x106390b0u));
                                ecx = COW_IMG(0x106390b0u);
                                edx = COW_IMG(0x106390b4u);
                                esi = COW_IMG(0x10639088u);
                                loc_f8 = 0u;
                                loc_e8 = 0u;
                                loc_14c = COW_IMG(0x106390b4u);
                                loc_148 = COW_IMG(0x106390ccu);
                                loc_100 = COW_IMG(0x106390b0u);
                                loc_144 = COW_IMG(0x106390c8u);
L_1018554c: ;
                                d56 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x11cu) * (double)rdf32(rd32(sp0 - 0xb4u) + (rd16(edi + 6u) & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x12cu) * (double)rdf32(rd32(sp0 - 0xb4u) + (rd16(edi + 6u) & 0x7fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x13cu) * (double)rdf32(rd32(sp0 - 0xb4u) + (rd16(edi + 6u) & 0x7fffu) * 0xcu)));
                                if ((cow_fsw(g, d56, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u) goto L_10185b44;
                                eax = cow_fsw(g, d56, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                                d57 = fr(g, fr(g, fr(g, loc_140_f * (double)rdf32(ebx + (rd16(edi) & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x120u) * (double)rdf32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x130u) * (double)rdf32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 4u)));
                                t58 = rd16(edi);
                                d59 = fr(g, d57 + (double)rdf32(sp0 - 0x110u));
                                wrf32(esi + 0x10u, (float)d59);
                                d60 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x13cu) * (double)rdf32(ebx + (t58 & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x11cu) * (double)rdf32(ebx + (t58 & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x12cu) * (double)rdf32(ebx + (t58 & 0x7fffu) * 0xcu + 4u)));
                                d61 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x138u) * (double)rdf32(ebx + (t58 & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (t58 & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x128u) * (double)rdf32(ebx + (t58 & 0x7fffu) * 0xcu + 4u)));
                                d62 = fr(g, d61 + (double)rdf32(sp0 - 0x108u));
                                d63 = fr(g, d60 + (double)rdf32(sp0 - 0x10cu));
                                wrf32(esi + 0x14u, (float)d62);
                                if (!(d63 < (double)rdf32(COW_IMG(0x103295d8u))))
                                {
                                    eax = (ebx + (t58 & 0x7fffu) * 0xcu & 0xffff0000u) | rd16(edi);
                                    d69 = fr(g, fr(g, fr(g, fr(g, loc_140_f * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x120u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x130u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u))) + (double)rdf32(sp0 - 0x110u));
                                    wrf32(esi + 0x10u, (float)d69);
                                    d70 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x13cu) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x11cu) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x12cu) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u)));
                                    d71 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x138u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x128u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u)));
                                    d72 = fr(g, d71 + (double)rdf32(sp0 - 0x108u));
                                    d73 = fr(g, d70 + (double)rdf32(sp0 - 0x10cu));
                                    wrf32(esi + 0x14u, (float)d72);
                                    eax = ebx + (eax & 0x7fffu) * 0xcu;
                                    x0 = d73;
                                }
                                else
                                {
                                    eax = (ebx + (t58 & 0x7fffu) * 0xcu & 0xffff0000u) | rd16(edi);
                                    d64 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x120u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x130u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u))) + fr(g, loc_140_f * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu))) + (double)rdf32(sp0 - 0x110u));
                                    wrf32(esi + 0x10u, (float)d64);
                                    d65 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x11cu) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x12cu) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x13cu) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)));
                                    d66 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x128u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x138u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)));
                                    d67 = fr(g, d66 + (double)rdf32(sp0 - 0x108u));
                                    d68 = fr(g, d65 + (double)rdf32(sp0 - 0x10cu));
                                    wrf32(esi + 0x14u, (float)d67);
                                    eax = ebx + (eax & 0x7fffu) * 0xcu;
                                    x0 = -d68;
                                }
                                d74 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x120u) * (double)rdf32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x130u) * (double)rdf32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 4u))) + fr(g, loc_140_f * (double)rdf32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu)));
                                t75 = rd16(edi + 2u);
                                d76 = fr(g, d74 + (double)rdf32(sp0 - 0x110u));
                                wrf32(ecx, (float)d76);
                                d77 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x11cu) * (double)rdf32(ebx + (t75 & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x12cu) * (double)rdf32(ebx + (t75 & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x13cu) * (double)rdf32(ebx + (t75 & 0x3fffu) * 0xcu)));
                                d78 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (t75 & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x128u) * (double)rdf32(ebx + (t75 & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x138u) * (double)rdf32(ebx + (t75 & 0x3fffu) * 0xcu)));
                                d79 = fr(g, d78 + (double)rdf32(sp0 - 0x108u));
                                d80 = fr(g, d77 + (double)rdf32(sp0 - 0x10cu));
                                wrf32(edx, (float)d79);
                                if (!(d80 < (double)rdf32(COW_IMG(0x103295d8u))))
                                {
                                    eax = (ebx + (t75 & 0x3fffu) * 0xcu & 0xffff0000u) | rd16(edi + 2u);
                                    x1 = loc_140_f;
                                    d86 = fr(g, fr(g, fr(g, fr(g, x1 * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x120u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x130u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + (double)rdf32(sp0 - 0x110u));
                                    wrf32(ecx, (float)d86);
                                    d87 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x13cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x11cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x12cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                    d88 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x138u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x128u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                    d89 = fr(g, d88 + (double)rdf32(sp0 - 0x108u));
                                    d90 = fr(g, d87 + (double)rdf32(sp0 - 0x10cu));
                                    wrf32(edx, (float)d89);
                                    eax = ebx + (eax & 0x3fffu) * 0xcu;
                                    x1 = d90;
                                }
                                else
                                {
                                    eax = (ebx + (t75 & 0x3fffu) * 0xcu & 0xffff0000u) | rd16(edi + 2u);
                                    x1 = loc_140_f;
                                    d81 = fr(g, fr(g, fr(g, fr(g, x1 * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x120u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x130u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + (double)rdf32(sp0 - 0x110u));
                                    wrf32(ecx, (float)d81);
                                    d82 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x13cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x11cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x12cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                    d83 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x138u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x128u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                    d84 = fr(g, d83 + (double)rdf32(sp0 - 0x108u));
                                    d85 = fr(g, d82 + (double)rdf32(sp0 - 0x10cu));
                                    wrf32(edx, (float)d84);
                                    eax = ebx + (eax & 0x3fffu) * 0xcu;
                                    x1 = -d85;
                                }
                                d91 = fr(g, fr(g, fr(g, loc_140_f * (double)rdf32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x120u) * (double)rdf32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x130u) * (double)rdf32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 4u)));
                                t92 = rd16(edi + 4u);
                                d93 = fr(g, d91 + (double)rdf32(sp0 - 0x110u));
                                wrf32(loc_144, (float)d93);
                                d94 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x13cu) * (double)rdf32(ebx + (t92 & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x11cu) * (double)rdf32(ebx + (t92 & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x12cu) * (double)rdf32(ebx + (t92 & 0x3fffu) * 0xcu + 4u)));
                                d95 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x138u) * (double)rdf32(ebx + (t92 & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (t92 & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x128u) * (double)rdf32(ebx + (t92 & 0x3fffu) * 0xcu + 4u)));
                                d96 = fr(g, d95 + (double)rdf32(sp0 - 0x108u));
                                d97 = fr(g, d94 + (double)rdf32(sp0 - 0x10cu));
                                wrf32(loc_148, (float)d96);
                                if (!(d97 < (double)rdf32(COW_IMG(0x103295d8u))))
                                {
                                    eax = (ebx + (t92 & 0x3fffu) * 0xcu & 0xffff0000u) | rd16(edi + 4u);
                                    ecx = loc_144;
                                    edx = loc_148;
                                    d103 = fr(g, fr(g, fr(g, fr(g, loc_140_f * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x120u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x130u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + (double)rdf32(sp0 - 0x110u));
                                    wrf32(ecx, (float)d103);
                                    d104 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x13cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x11cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x12cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                    d105 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x138u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x128u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                    d106 = fr(g, d105 + (double)rdf32(sp0 - 0x108u));
                                    d107 = fr(g, d104 + (double)rdf32(sp0 - 0x10cu));
                                    wrf32(edx, (float)d106);
                                    eax = ebx + (eax & 0x3fffu) * 0xcu;
                                    x2 = d107;
                                }
                                else
                                {
                                    eax = (ebx + (t92 & 0x3fffu) * 0xcu & 0xffff0000u) | rd16(edi + 4u);
                                    ecx = loc_144;
                                    edx = loc_148;
                                    d98 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x120u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x130u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + fr(g, loc_140_f * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu))) + (double)rdf32(sp0 - 0x110u));
                                    wrf32(ecx, (float)d98);
                                    d99 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x11cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x12cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x13cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)));
                                    d100 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x128u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x138u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)));
                                    d101 = fr(g, d100 + (double)rdf32(sp0 - 0x108u));
                                    d102 = fr(g, d99 + (double)rdf32(sp0 - 0x10cu));
                                    wrf32(edx, (float)d101);
                                    eax = ebx + (eax & 0x3fffu) * 0xcu;
                                    x2 = -d102;
                                }
                                g->ecx = ecx;
                                g->edx = edx;
                                d108 = fr(g, x0 * (double)rdf32(COW_IMG(0x10336798u)));
                                fpush(g, d108);
                                g->esp = sp0 - 0x15cu;
                                t109 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                t110 = g->ecx;
                                t111 = g->edx;
                                g->edx = t111;
                                d112 = fr(g, x1 * (double)rdf32(COW_IMG(0x10336798u)));
                                fpush(g, d112);
                                t113 = cow_call_regs(g, COW_IMG(0x10311c6cu), t109, g->ecx, g->edx, 1, 0);
                                t114 = g->edx;
                                wr32(sp0 - 0xfcu, 0x60u - t113);
                                d115 = fr(g, x2 * (double)rdf32(COW_IMG(0x10336798u)));
                                fpush(g, d115);
                                t116 = cow_call_regs(g, COW_IMG(0x10311c6cu), t113, g->ecx, g->edx, 1, 0);
                                if ((int32_t)(0x60u - t109) >= 0)
                                {
                                    eax = 0u;
                                    ecx = 0x60u - t116;
                                    ebp = 0x60u - t109;
                                }
                                else
                                {
                                    ecx = 0x60u - t116;
                                    eax = 1u;
                                    ebp = 0u;
                                }
                                if ((int32_t)rd32(sp0 - 0xfcu) >= 0)
                                {
                                    loc_fc = rd32(sp0 - 0xfcu);
                                }
                                else
                                {
                                    wr32(sp0 - 0xfcu, 0u);
                                    eax = eax + 1u;
                                    loc_fc = 0u;
                                }
                                if ((int32_t)ecx < 0)
                                {
                                    eax = eax + 1u;
                                    ecx = 0u;
                                }
                                if ((int32_t)eax > 2)
                                {
                                    loc_f8 = rd32(sp0 - 0xf8u);
                                    loc_e8 = rd32(sp0 - 0xe8u);
                                    loc_14c = rd32(sp0 - 0x14cu);
                                    loc_148 = rd32(sp0 - 0x148u);
                                    loc_100 = rd32(sp0 - 0x100u);
                                    loc_140_f = (double)rdf32(sp0 - 0x140u);
                                    loc_144 = rd32(sp0 - 0x144u);
                                    goto L_10185b44;
                                }
                                t117 = rd32(ebx + (rd16(edi) & 0x7fffu) * 0xcu);
                                wr32(esi, t117);
                                t118 = rd32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 4u);
                                wr32(esi + 4u, t118);
                                t119 = rd32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 8u);
                                wr32(esi + 8u, t119);
                                t120 = ((ebp | 0xffff8000u) << 8u | ebp) << 8u | ebp;
                                t121 = rd32(sp0 - 0x14cu);
                                wr32(esi + 0xcu, t120);
                                wr32(sp0 - 0x14cu, t121 + 0x18u);
                                t122 = rd32(sp0 - 0x144u) + 0x18u;
                                wr32(sp0 - 0x144u, t122);
                                t123 = rd32(sp0 - 0x148u) + 0x18u;
                                wr32(sp0 - 0x148u, t123);
                                t124 = rd32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu);
                                t125 = rd32(sp0 - 0x100u);
                                wr32(esi + 0x18u, t124);
                                t126 = rd32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 4u);
                                wr32(esi + 0x1cu, t126);
                                t127 = rd32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 8u);
                                wr32(esi + 0x20u, t127);
                                t128 = ((loc_fc | 0xffff8000u) << 8u | loc_fc) << 8u | loc_fc;
                                wr32(esi + 0x24u, t128);
                                wr32(sp0 - 0x144u, t122 + 0x18u);
                                wr32(sp0 - 0x148u, t123 + 0x18u);
                                t129 = rd32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu);
                                wr32(esi + 0x30u, t129);
                                t130 = rd32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 4u);
                                wr32(esi + 0x34u, t130);
                                t131 = rd32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 8u);
                                wr32(esi + 0x38u, t131);
                                t132 = ((ecx | 0xffff8000u) << 8u | ecx) << 8u | ecx;
                                wr32(esi + 0x3cu, t132);
                                wr32(sp0 - 0x100u, t125 + 0x48u);
                                wr32(sp0 - 0x14cu, t121 + 0x48u);
                                wr32(sp0 - 0x144u, t122 + 0x30u);
                                wr32(sp0 - 0x148u, t123 + 0x30u);
                                if (rd32(sp0 - 0xf8u) > 0x5dcu)
                                {
                                    edx = t122 + 0x30u;
                                    loc_14c = t121 + 0x48u;
                                    loc_144 = t122 + 0x30u;
                                    loc_148 = t123 + 0x30u;
                                    loc_f8 = rd32(sp0 - 0xf8u);
                                    loc_140_f = (double)rdf32(sp0 - 0x140u);
                                    goto L_10185b60;
                                }
                                eax = rd32(sp0 - 0xf8u);
                                esi = esi + 0x48u;
                                loc_14c = t121 + 0x48u;
                                loc_144 = t122 + 0x30u;
                                loc_148 = t123 + 0x30u;
                                loc_100 = t125 + 0x48u;
                                wr32(sp0 - 0xf8u, eax + 1u);
                                loc_f8 = eax + 1u;
                                loc_e8 = rd32(sp0 - 0xe8u);
                                loc_140_f = (double)rdf32(sp0 - 0x140u);
L_10185b44: ;
                                wr32(sp0 - 0xe8u, loc_e8 + 1u);
                                if ((int32_t)(loc_e8 + 1u) < (int16_t)rd16(rd32(sp0 - 0xf0u) + 0xcu))
                                {
                                    eax = loc_e8 + 1u;
                                    edi = edi + 8u;
                                    loc_e8 = loc_e8 + 1u;
                                    goto L_10185544;
                                }
                                edx = (uint32_t)(int16_t)rd16(rd32(sp0 - 0xf0u) + 0xcu);
L_10185b60: ;
                                if (loc_f8 == 0u)
                                {
                                    loc_dc = rd32(sp0 - 0xdcu);
                                    loc_ec = rd32(sp0 - 0xecu);
                                    loc_e4 = rd32(sp0 - 0xe4u);
                                    loc_d8 = rd32(sp0 - 0xd8u);
                                    loc_15c = rd32(sp0 - 0x15cu);
                                    loc_e0 = rd32(sp0 - 0xe0u);
                                    loc_f4 = rd32(sp0 - 0xf4u);
                                    loc_d4 = rd32(sp0 - 0xd4u);
                                }
                                else
                                {
                                    eax = loc_f8;
                                    wr32(sp0 - 0x160u, 0x18u);
                                    wr32(sp0 - 0x164u, COW_IMG(0x10639088u));
                                    wr32(sp0 - 0x168u, eax);
                                    wr32(sp0 - 0x16cu, 4u);
                                    g->ebx = ebx;
                                    g->esp = sp0 - 0x15cu;
                                    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 4u, eax, COW_IMG(0x10639088u), 0x18u);
                                    loc_dc = rd32(sp0 - 0xdcu);
                                    loc_ec = rd32(sp0 - 0xecu);
                                    loc_e4 = rd32(sp0 - 0xe4u);
                                    loc_d8 = rd32(sp0 - 0xd8u);
                                    loc_15c = rd32(sp0 - 0x15cu);
                                    loc_e0 = rd32(sp0 - 0xe0u);
                                    loc_f4 = rd32(sp0 - 0xf4u);
                                    loc_d4 = rd32(sp0 - 0xd4u);
                                    loc_14c = rd32(sp0 - 0x14cu);
                                    loc_148 = rd32(sp0 - 0x148u);
                                    loc_140_f = (double)rdf32(sp0 - 0x140u);
                                    loc_144 = rd32(sp0 - 0x144u);
                                }
                            }
                        }
                    }
                    wr32(sp0 - 0xf4u, loc_f4 + 8u);
                    wr32(sp0 - 0xd4u, loc_d4 - 1u);
                    if (loc_d4 != 1u)
                    {
                        loc_f4 = loc_f4 + 8u;
                        loc_d4 = loc_d4 - 1u;
                        goto L_101853d8;
                    }
                    loc_f4 = loc_f4 + 8u;
                }
            }
            else
            {
                edx = eax + 4u;
                eax = rd32(eax) & 0x7ffu;
                t47 = eax * 8u + edx;
                wr32(sp0 - 0xf4u, t47);
                loc_f4 = t47;
            }
            if (rd32(loc_f4) != 0u)
            {
                eax = rd32(loc_f4);
                goto L_101853a8;
            }
L_10185bab: ;
            wr32(sp0 - 0xe0u, loc_e0 + 1u);
            if ((int32_t)(loc_e0 + 1u) <= (int32_t)loc_ec)
            {
                loc_e0 = loc_e0 + 1u;
                goto L_10185382;
            }
L_10185bc0: ;
            wr32(sp0 - 0xd8u, loc_d8 + 1u);
            if ((int32_t)(loc_d8 + 1u) <= (int32_t)loc_e4)
            {
                loc_d8 = loc_d8 + 1u;
                goto L_1018536b;
            }
            ebp = loc_15c;
            loc_158 = rd32(sp0 - 0x158u);
        }
    }
    wr32(sp0 - 0x15cu, 1u);
    wr32(sp0 - 0x160u, 0x89u);
    t133 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x164u, t133);
    g->esp = sp0 - 0x158u;
    cow_thiscall(g, rd32(rd32(t133) + 0xc8u), rd32(t133), 3, t133, 0x89u, 1u);
    wr32(sp0 - 0x15cu, 0u);
    wr32(sp0 - 0x160u, 0x1bu);
    t134 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x164u, t134);
    cow_thiscall(g, rd32(rd32(t134) + 0xc8u), rd32(t134), 3, t134, 0x1bu, 0u);
    wr32(sp0 - 0x15cu, 0u);
    wr32(sp0 - 0x160u, 0x1cu);
    t135 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x164u, t135);
    cow_thiscall(g, rd32(rd32(t135) + 0xc8u), rd32(t135), 3, t135, 0x1cu, 0u);
    wr32(sp0 - 0x15cu, 1u);
    wr32(sp0 - 0x160u, 0x16u);
    t136 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x164u, t136);
    cow_thiscall(g, rd32(rd32(t136) + 0xc8u), rd32(t136), 3, t136, 0x16u, 1u);
    wr32(sp0 - 0x15cu, 1u);
    wr32(sp0 - 0x160u, 0xeu);
    t137 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x164u, t137);
    g->eax = t137;
    t138 = rd32(t137);
    g->esp = sp0 - 0x134u;
    t139 = cow_thiscall(g, rd32(t138 + 0xc8u), t138, 12, t137, 0xeu, 1u, rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u));
    t140 = g->ecx;
    if (rd8(rd32(sp0 - 0xacu) + 0x39598u) == 0u)
    {
        ecx = t140;
        edx = rd32(sp0 - 0xacu);
        edi = rd32(sp0 - 0x134u);
        goto L_10185c85;
    }
    edi = rd32(sp0 - 0x134u);
    wr32(sp0 - 0x134u, sp0 - 0x40u);
    wr32(sp0 - 0x138u, 3u);
    t141 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x13cu, t141);
    g->esp = sp0 - 0x130u;
    cow_thiscall(g, rd32(rd32(t141) + 0x94u), rd32(t141), 3, t141, 3u, sp0 - 0x40u);
    g->ebx = rd32(sp0 - 0x12cu);
    g->esi = rd32(sp0 - 0x130u);
    g->edi = edi;
    g->ebp = ebp;
    return;
L_10185544: ;
    ecx = loc_100;
    edx = loc_14c;
    goto L_1018554c;
L_10185c85: ;
    wr32(sp0 - 0x134u, rd32(COW_IMG(0x10621c00u)));
    g->esp = sp0 - 0x130u;
    cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x10621c00u)));
    loc_12c = rd32(sp0 - 0x12cu);
    loc_130 = rd32(sp0 - 0x130u);
L_10185c93: ;
    g->ebx = loc_12c;
    g->esi = loc_130;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10184fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10184fe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
