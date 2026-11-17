/* f_0x1017c9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1017c9c0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d124;
    double d125;
    double d13;
    double d14;
    double d15;
    double d153;
    double d154;
    double d16;
    double d168;
    double d169;
    double d170;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d213;
    double d3;
    double d4;
    double d5;
    double d54;
    double d55;
    double d56;
    double d57;
    double d58;
    double d59;
    double d6;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d67;
    double d68;
    double d69;
    double d7;
    double d71;
    double d72;
    double d73;
    double d74;
    double d76;
    double d78;
    double d79;
    double d8;
    double d80;
    double d81;
    double d82;
    double d83;
    double d85;
    double d86;
    double d87;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1ac;
    uint32_t loc_1bc;
    uint32_t loc_1c0;
    double loc_1c0_f;
    uint32_t loc_1c4;
    uint32_t loc_1c8;
    uint32_t loc_1cc;
    uint32_t loc_1d0;
    uint32_t loc_1d4;
    uint32_t loc_1d8;
    uint32_t loc_1dc;
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
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
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
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t155;
    uint32_t t156;
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t160;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
    uint32_t t164;
    uint32_t t165;
    uint32_t t166;
    uint32_t t167;
    uint32_t t17;
    uint32_t t171;
    uint32_t t172;
    uint32_t t173;
    uint32_t t174;
    uint32_t t175;
    uint32_t t176;
    uint32_t t177;
    uint32_t t178;
    uint32_t t179;
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
    uint32_t t200;
    uint32_t t201;
    uint32_t t202;
    uint32_t t203;
    uint32_t t204;
    uint32_t t205;
    uint32_t t206;
    uint32_t t207;
    uint32_t t208;
    uint32_t t209;
    uint32_t t210;
    uint32_t t211;
    uint32_t t212;
    uint32_t t214;
    uint32_t t215;
    uint32_t t216;
    uint32_t t217;
    uint32_t t218;
    uint32_t t219;
    uint32_t t22;
    uint32_t t220;
    uint32_t t221;
    uint32_t t222;
    uint32_t t223;
    uint32_t t224;
    uint32_t t225;
    uint32_t t226;
    uint32_t t227;
    uint32_t t228;
    uint32_t t229;
    uint32_t t23;
    uint32_t t230;
    uint32_t t231;
    uint32_t t232;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t65;
    uint32_t t66;
    uint32_t t70;
    uint32_t t75;
    uint32_t t77;
    uint32_t t84;
    uint32_t t88;
    uint32_t t89;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 492u);

    wr32(sp0 - 0x1c8u, in_ebx);
    wr32(sp0 - 0x1ccu, in_ebp);
    wr32(sp0 - 0x1d0u, in_esi);
    wr32(sp0 - 0x1d4u, in_edi);
    if (arg3 == 0u) goto L_1017cadd;
    wr32(sp0 - 0x1d8u, self + 0x38e1cu);
    wr32(sp0 - 0x1dcu, arg2 + 0x40u);
    wr32(sp0 - 0x1e0u, sp0 - 0x100u);
    g->edx = in_edx;
    g->esp = sp0 - 0x1d4u;
    cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x100u, arg2 + 0x40u, self + 0x38e1cu);
    t1 = g->edx;
    d2 = fr(g, (double)rdf32(self + 0x38e3cu) * (double)rdf32(arg2 + 0x24u));
    d3 = fr(g, (double)rdf32(self + 0x38e2cu) * (double)rdf32(arg2 + 0x20u));
    esi = sp0 - 0x100u;
    edi = sp0 - 0xc0u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    d4 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(self + 0x38e34u) * (double)rdf32(arg2 + 0x20u)) + fr(g, (double)rdf32(self + 0x38e24u) * (double)rdf32(arg2 + 0x1cu))) + fr(g, (double)rdf32(self + 0x38e44u) * (double)rdf32(arg2 + 0x24u))) + (double)rdf32(self + 0x38e54u));
    wrf32(sp0 - 0x1b0u, (float)d4);
    d5 = (double)(float)fr(g, fr(g, fr(g, fr(g, d3 + d2) + fr(g, (double)rdf32(self + 0x38e1cu) * (double)rdf32(arg2 + 0x1cu))) + (double)rdf32(self + 0x38e4cu)) - (double)rdf32(self + 0x390f0u));
    wrf32(sp0 - 0x1c0u, (float)d5);
    d6 = fr(g, d4 - (double)rdf32(self + 0x390f8u));
    d7 = fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(self + 0x38e30u) * (double)rdf32(arg2 + 0x20u)) + fr(g, (double)rdf32(self + 0x38e20u) * (double)rdf32(arg2 + 0x1cu))) + fr(g, (double)rdf32(self + 0x38e40u) * (double)rdf32(arg2 + 0x24u))) + (double)rdf32(self + 0x38e50u)) - (double)rdf32(self + 0x390f4u));
    d8 = (double)(float)fr(g, fr(g, fr(g, d6 * d6) + fr(g, d7 * d7)) + fr(g, d5 * d5));
    wrf32(sp0 - 0x1c0u, (float)d8);
    if (rd8(arg2 + 0xbu) == 0u)
    {
        edx = t1;
        loc_1c0_f = d8;
        x0 = fr(g, fr(g, fr(g, d6 * d6) + fr(g, d7 * d7)) + fr(g, d5 * d5));
        goto L_1017cab4;
    }
    loc_1c0_f = d8;
    x0 = fr(g, fr(g, fr(g, d6 * d6) + fr(g, d7 * d7)) + fr(g, d5 * d5));
    d9 = fr(g, (double)rdf32(self + 0x39428u) * (double)rdf32(arg2 + 0xd0u));
    if ((cow_fsw(g, x0, d9, 0u) & 0x4100u) == 0u)
    {
        loc_1c8 = rd32(sp0 - 0x1c8u);
        loc_1cc = rd32(sp0 - 0x1ccu);
        loc_1d0 = rd32(sp0 - 0x1d0u);
        loc_1d4 = rd32(sp0 - 0x1d4u);
        goto L_1017ddff;
    }
    edx = arg2;
L_1017cac7: ;
    wr32(sp0 - 0x1d8u, arg2 + 0xf4u);
    wr32(sp0 - 0x1dcu, self + 0x38edcu);
    eax = arg2 + 0xf4u;
    loc_1dc = self + 0x38edcu;
    loc_1c8 = rd32(sp0 - 0x1c8u);
    loc_1cc = rd32(sp0 - 0x1ccu);
    loc_1d0 = rd32(sp0 - 0x1d0u);
    loc_1d4 = rd32(sp0 - 0x1d4u);
L_1017cb53: ;
    g->esp = sp0 - 0x1d4u;
    t17 = cow_call_regs(g, COW_IMG(0x10181bb0u), eax, g->ecx, g->edx, 0, 2, loc_1dc, arg2 + 0xf4u);
    if (t17 != 0u)
    {
        loc_1c8 = rd32(sp0 - 0x1c8u);
        loc_1cc = rd32(sp0 - 0x1ccu);
        loc_1d0 = rd32(sp0 - 0x1d0u);
        loc_1d4 = rd32(sp0 - 0x1d4u);
        goto L_1017ddff;
    }
    eax = t17;
    d18 = (double)rdf32(sp0 - 0x1c0u);
    d19 = (double)rdf32(arg2 + 0xccu);
    if ((cow_fsw(g, d18, d19, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d18, d19, 0u) & 0x4100u;
        d20 = (double)rdf32(sp0 - 0x1c0u);
        d21 = (double)rdf32(arg2 + 0xc8u);
        if ((cow_fsw(g, d20, d21, 0u) & 0x4100u) != 0u)
        {
            ebx = rd32(arg2 + 0x18u);
        }
        else
        {
            ebx = rd32(arg2 + 0x14u);
        }
    }
    else
    {
        ebx = rd32(arg2 + 0x10u);
    }
    wr32(sp0 - 0x1c0u, ebx);
    if (ebx == 0u)
    {
        loc_1c8 = rd32(sp0 - 0x1c8u);
        loc_1cc = rd32(sp0 - 0x1ccu);
        loc_1d0 = rd32(sp0 - 0x1d0u);
        loc_1d4 = rd32(sp0 - 0x1d4u);
        goto L_1017ddff;
    }
    loc_1c0 = ebx;
    t22 = rd32(self + 0x39448u) + 1u;
    t23 = rd32(self + 0x39100u);
    wr32(self + 0x39448u, t22);
    if (t23 != rd32(arg2 + 0xe4u))
    {
        eax = rd32(arg2 + 0xe4u);
        wr32(self + 0x39100u, eax);
        if (eax == 0u) goto L_1017cc2d;
        if (rd32(arg1 + eax * 0x4cu - 0x48u) == 0u) goto L_1017cc58;
        eax = rd32(arg1 + eax * 0x4cu - 0x48u);
        if (rd32(eax + 8u) == 0u) goto L_1017cc58;
        esi = eax + 8u;
        if (rd8(eax) == 0x63u) goto L_1017cc58;
        wr32(self + 0x3945cu, esi);
        wr32(sp0 - 0x1d8u, 1u);
        t24 = rd32(self + 0x394b0u);
        wr32(sp0 - 0x1dcu, t24);
        t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t25);
        g->eax = t25;
        g->esp = sp0 - 0x1d4u;
        t26 = cow_thiscall(g, rd32(rd32(t25) + 0xb8u), t24, 3, t25, t24, 1u);
        wr32(sp0 - 0x1d8u, esi);
        t27 = rd32(self + 0x394b0u);
        wr32(sp0 - 0x1dcu, t27);
        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t27, esi);
L_1017cc51: ;
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
L_1017cc58: ;
    if (rd32(self + 0x39104u) != rd32(arg2 + 0xe8u))
    {
        eax = rd32(arg2 + 0xe8u);
        wr32(self + 0x39104u, eax);
        if (eax == 0u) goto L_1017ccc9;
        if (rd32(arg1 + eax * 0x4cu - 0x48u) == 0u) goto L_1017ccf4;
        eax = rd32(arg1 + eax * 0x4cu - 0x48u);
        if (rd32(eax + 8u) == 0u) goto L_1017ccf4;
        esi = eax + 8u;
        if (rd8(eax) == 0x63u) goto L_1017ccf4;
        wr32(self + 0x39460u, esi);
        wr32(sp0 - 0x1d8u, 1u);
        t30 = rd32(self + 0x394b4u);
        wr32(sp0 - 0x1dcu, t30);
        t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t31);
        g->eax = t31;
        g->esp = sp0 - 0x1d4u;
        t32 = cow_thiscall(g, rd32(rd32(t31) + 0xb8u), t30, 3, t31, t30, 1u);
        wr32(sp0 - 0x1d8u, esi);
        t33 = rd32(self + 0x394b4u);
        wr32(sp0 - 0x1dcu, t33);
        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t33, esi);
L_1017cced: ;
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
L_1017ccf4: ;
    if (rd32(self + 0x39108u) == rd32(arg2 + 0xecu))
    {
        edx = rd32(self + 0x39108u);
    }
    else
    {
        eax = rd32(arg2 + 0xecu);
        wr32(self + 0x39108u, eax);
        if (eax == 0u) goto L_1017cd65;
        if (rd32(arg1 + eax * 0x4cu - 0x48u) == 0u)
        {
            edx = eax * 9u;
            goto L_1017cd90;
        }
        eax = rd32(arg1 + eax * 0x4cu - 0x48u);
        if (rd32(eax + 8u) == 0u)
        {
            edx = rd32(eax + 8u);
            goto L_1017cd90;
        }
        edx = rd32(eax + 8u);
        esi = eax + 8u;
        if (rd8(eax) == 0x63u) goto L_1017cd90;
        wr32(self + 0x39464u, esi);
        wr32(sp0 - 0x1d8u, 1u);
        t36 = rd32(self + 0x394b8u);
        wr32(sp0 - 0x1dcu, t36);
        t37 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t37);
        g->eax = t37;
        g->esp = sp0 - 0x1d4u;
        t38 = cow_thiscall(g, rd32(rd32(t37) + 0xb8u), t36, 3, t37, t36, 1u);
        wr32(sp0 - 0x1d8u, esi);
        t39 = rd32(self + 0x394b8u);
        wr32(sp0 - 0x1dcu, t39);
        g->edx = t39;
        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t39, esi);
        t40 = g->edx;
        edx = t40;
L_1017cd89: ;
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
L_1017cd90: ;
    if (rd32(self + 0x3910cu) != rd32(arg2 + 0xf0u))
    {
        eax = rd32(arg2 + 0xf0u);
        wr32(self + 0x3910cu, eax);
        if (eax == 0u)
        {
            wr32(sp0 - 0x1d8u, 0u);
            t49 = rd32(self + 0x394bcu);
            wr32(sp0 - 0x1dcu, t49);
            t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x1e0u, t50);
            g->edx = rd32(t50);
            t51 = rd32(t50);
            g->esp = sp0 - 0x1d4u;
            cow_thiscall(g, rd32(t51 + 0xb8u), t49, 3, t50, t49, 0u);
            t52 = g->edx;
            wr32(self + 0x39468u, 0u);
            edx = t52;
            loc_1c0 = rd32(sp0 - 0x1c0u);
        }
        else
        {
            if (rd32(arg1 + eax * 0x4cu - 0x48u) == 0u)
            {
                edx = eax * 0x13u;
            }
            else
            {
                edx = eax * 0x13u;
                eax = rd32(arg1 + eax * 0x4cu - 0x48u);
                if (rd32(eax + 8u) != 0u)
                {
                    esi = eax + 8u;
                    if (rd8(eax) != 0x63u)
                    {
                        t44 = rd32(self + 0x394bcu);
                        wr32(self + 0x39468u, esi);
                        wr32(sp0 - 0x1d8u, 1u);
                        wr32(sp0 - 0x1dcu, t44);
                        t45 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x1e0u, t45);
                        g->edx = t44;
                        g->esp = sp0 - 0x1d4u;
                        cow_thiscall(g, rd32(rd32(t45) + 0xb8u), rd32(t45), 3, t45, t44, 1u);
                        t46 = g->edx;
                        wr32(sp0 - 0x1d8u, esi);
                        t47 = rd32(self + 0x394bcu);
                        wr32(sp0 - 0x1dcu, t47);
                        g->edx = t46;
                        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t47, esi);
                        t48 = g->edx;
                        edx = t48;
                        loc_1c0 = rd32(sp0 - 0x1c0u);
                    }
                }
            }
        }
    }
    if (rd32(ebx + 0x1cu) > 3u)
    {
        loc_1c4 = rd32(sp0 - 0x1c4u);
        goto L_1017d3da;
    }
    eax = rd32(ebx + 0x1cu);
    t53 = rd32(COW_IMG(0x1017de0cu) + eax * 4u);
    switch (t53 - RD)
    {
    case 0x1017ce38u: goto L_1017ce38;
    case 0x1017ce7du: goto L_1017ce7d;
    case 0x1017cebcu: goto L_1017cebc;
    default: rt_fatal(g, COW_IMG(0x1017ce31u), "switch");
    }
    return;
L_1017cab4: ;
    d10 = (double)rdf32(self + 0x39424u);
    if ((cow_fsw(g, x0, d10, 0u) & 0x4100u) == 0u)
    {
        loc_1c8 = rd32(sp0 - 0x1c8u);
        loc_1cc = rd32(sp0 - 0x1ccu);
        loc_1d0 = rd32(sp0 - 0x1d0u);
        loc_1d4 = rd32(sp0 - 0x1d4u);
        goto L_1017ddff;
    }
    goto L_1017cac7;
L_1017cadd: ;
    d11 = fr(g, (double)rdf32(arg2 + 0x24u) - (double)rdf32(self + 0x390f8u));
    d12 = fr(g, (double)rdf32(arg2 + 0x20u) - (double)rdf32(self + 0x390f4u));
    d13 = fr(g, (double)rdf32(arg2 + 0x1cu) - (double)rdf32(self + 0x390f0u));
    d14 = (double)(float)fr(g, fr(g, fr(g, d11 * d11) + fr(g, d12 * d12)) + fr(g, d13 * d13));
    wrf32(sp0 - 0x1c0u, (float)d14);
    if (rd8(arg2 + 0xbu) == 0u)
    {
        eax = (arg3 & 0xffffff00u) | rd8(arg2 + 0xbu);
        loc_1c0_f = d14;
        x0 = fr(g, fr(g, fr(g, d11 * d11) + fr(g, d12 * d12)) + fr(g, d13 * d13));
        goto L_1017cb32;
    }
    eax = (arg3 & 0xffffff00u) | rd8(arg2 + 0xbu);
    loc_1c0_f = d14;
    x0 = fr(g, fr(g, fr(g, d11 * d11) + fr(g, d12 * d12)) + fr(g, d13 * d13));
    d15 = fr(g, (double)rdf32(self + 0x39428u) * (double)rdf32(arg2 + 0xd0u));
    if ((cow_fsw(g, x0, d15, 0u) & 0x4100u) == 0u)
    {
        loc_1c8 = in_ebx;
        loc_1cc = in_ebp;
        loc_1d0 = in_esi;
        loc_1d4 = in_edi;
        goto L_1017ddff;
    }
    eax = cow_fsw(g, x0, d15, 0u) & 0x4100u;
L_1017cb45: ;
    wr32(sp0 - 0x1d8u, arg2 + 0xf4u);
    wr32(sp0 - 0x1dcu, self + 0x38fdcu);
    edx = self + 0x38fdcu;
    loc_1dc = self + 0x38fdcu;
    loc_1c8 = in_ebx;
    loc_1cc = in_ebp;
    loc_1d0 = in_esi;
    loc_1d4 = in_edi;
    goto L_1017cb53;
L_1017cb32: ;
    d16 = (double)rdf32(self + 0x39424u);
    if ((cow_fsw(g, x0, d16, 0u) & 0x4100u) == 0u)
    {
        loc_1c8 = in_ebx;
        loc_1cc = in_ebp;
        loc_1d0 = in_esi;
        loc_1d4 = in_edi;
        goto L_1017ddff;
    }
    eax = cow_fsw(g, x0, d16, 0u) & 0x4100u;
    goto L_1017cb45;
L_1017cc2d: ;
    wr32(sp0 - 0x1d8u, 0u);
    t28 = rd32(self + 0x394b0u);
    wr32(sp0 - 0x1dcu, t28);
    t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t29);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t29) + 0xb8u), rd32(t29), 3, t29, t28, 0u);
    wr32(self + 0x3945cu, 0u);
    goto L_1017cc51;
L_1017ccc9: ;
    wr32(sp0 - 0x1d8u, 0u);
    t34 = rd32(self + 0x394b4u);
    wr32(sp0 - 0x1dcu, t34);
    t35 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t35);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t35) + 0xb8u), rd32(t35), 3, t35, t34, 0u);
    wr32(self + 0x39460u, 0u);
    goto L_1017cced;
L_1017cd65: ;
    wr32(sp0 - 0x1d8u, 0u);
    t41 = rd32(self + 0x394b8u);
    wr32(sp0 - 0x1dcu, t41);
    t42 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t42);
    g->edx = t41;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t42) + 0xb8u), rd32(t42), 3, t42, t41, 0u);
    t43 = g->edx;
    wr32(self + 0x39464u, 0u);
    edx = t43;
    goto L_1017cd89;
L_1017ce38: ;
    t106 = rd32(self + 0x39454u);
    wr32(sp0 - 0x1d8u, t106);
    t107 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1dcu, t107);
    g->edx = t106;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t107) + 0x130u), rd32(t107), 2, t107, t106);
    t108 = g->edx;
    wr32(sp0 - 0x1c4u, 0u);
    if (rd32(self + 0x3949cu) != 1u)
    {
        edx = t108;
        edi = 0u;
        loc_1c4 = 0u;
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
    else
    {
        edx = t108;
        wr32(sp0 - 0x1d8u, 0u);
        t109 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1dcu, t109);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t109) + 0x160u), rd32(t109), 2, t109, 0u);
        t110 = g->edx;
        edx = t110;
        edi = 0u;
        loc_1c4 = 0u;
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
L_1017d3de: ;
    if (rd32(self + 0x39134u) != edi)
    {
        wr32(self + 0x39134u, edi);
        wr32(self + 0x39138u, 0xffffffffu);
    }
    if (rd32(self + 0x39138u) == rd32(arg2 + 0xe0u)) goto L_1017d806;
    ecx = rd32(arg2 + 0xe0u);
    wr32(self + 0x39138u, ecx);
    if (ecx == 0u) goto L_1017d66c;
    wr32(sp0 - 0x1d8u, 0u);
    wr32(sp0 - 0x1dcu, self + 0x3933cu);
    wr32(sp0 - 0x1e0u, self + 0x39338u);
    wr32(sp0 - 0x1e4u, self + 0x39334u);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, COW_IMG(0x10189120u), ecx, 4, self + 0x39334u, self + 0x39338u, self + 0x3933cu, 0u);
    t111 = rd32(self + 0x39334u);
    wr32(sp0 - 0x1d8u, t111);
    wr32(sp0 - 0x1dcu, 0x22u);
    t112 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t112);
    g->eax = t112;
    g->edx = t111;
    t113 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t112, 0x22u, t111);
    t114 = g->edx;
    if (edi == 0u)
    {
        ecx = rd32(self + 0x39138u);
        edx = t114;
        goto L_1017d58d;
    }
    eax = t113;
    ecx = rd32(self + 0x39138u);
    edx = t114;
    wr32(sp0 - 0x1d8u, 0u);
    wr32(sp0 - 0x1dcu, self + 0x39260u);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, COW_IMG(0x10188ca0u), ecx, 2, self + 0x39260u, 0u);
    t115 = g->edx;
    esi = self + 0x39260u;
    edi = sp0 - 0x1a8u;
    ecx = 0x1au;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
    cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x1a8u);
    t116 = rd32(self + 0x392a0u);
    wr32(sp0 - 0x1b8u, t116);
    t117 = rd32(self + 0x392a4u);
    wr32(sp0 - 0x1b4u, t117);
    t118 = rd32(self + 0x392a8u);
    wr32(sp0 - 0x1b0u, t118);
    wr32(self + 0x394dcu, 0u);
    wr32(self + 0x39540u, t116);
    wr32(self + 0x39544u, t117);
    t119 = rd32(sp0 - 0x1a4u);
    wr32(self + 0x394d0u, t119);
    wr32(self + 0x39548u, t118);
    t120 = rd32(sp0 - 0x1a0u);
    t121 = rd32(sp0 - 0x19cu);
    wr32(self + 0x394d4u, t120);
    wr32(sp0 - 0x1d8u, self + 0x394e0u);
    t122 = rd32(self + 0x39138u);
    wr32(self + 0x394d8u, t121);
    cow_thiscall(g, COW_IMG(0x10188fa0u), t122, 1, self + 0x394e0u);
    wr32(sp0 - 0x1d8u, 5u);
    t123 = rd32(self + 0x39338u);
    d124 = fr(g, (double)rdf32(self + 0x39338u) - (double)rdf32(self + 0x3933cu));
    wr32(self + 0x39508u, t123);
    d125 = fr(g, (double)rdf32(self + 0x3954cu) / d124);
    wrf32(self + 0x39500u, (float)d125);
    wr32(sp0 - 0x1dcu, self + 0x394c0u);
    wr32(sp0 - 0x1e0u, 5u);
    t126 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t126);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x13cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t126, 5u, self + 0x394c0u, 5u);
    t127 = rd32(self + 0x3933cu);
    wr32(sp0 - 0x1d8u, t127);
    wr32(sp0 - 0x1dcu, 0x24u);
    t128 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t128);
    cow_thiscall(g, rd32(rd32(t128) + 0xc8u), rd32(t128), 3, t128, 0x24u, t127);
    t129 = rd32(self + 0x39338u);
    wr32(sp0 - 0x1d8u, t129);
    wr32(sp0 - 0x1dcu, 0x25u);
    edx = t129;
    loc_1dc = 0x25u;
    loc_1d8 = t129;
L_1017d7e6: ;
    t165 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t165);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t165) + 0xc8u), rd32(t165), 3, t165, loc_1dc, loc_1d8);
    t166 = g->edx;
    edx = t166;
    ebx = rd32(sp0 - 0x1c0u);
    edi = rd32(sp0 - 0x1c4u);
    loc_1c4 = rd32(sp0 - 0x1c4u);
    loc_1c0 = rd32(sp0 - 0x1c0u);
L_1017d806: ;
    if (edi == 0u) goto L_1017d650;
    if (arg3 == 0u)
    {
        wr32(sp0 - 0x1d8u, self + 0x38f5cu);
        wr32(sp0 - 0x1dcu, arg2 + 0x40u);
        wr32(sp0 - 0x1e0u, sp0 - 0x1a8u);
        g->esp = sp0 - 0x1d4u;
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x1a8u, arg2 + 0x40u, self + 0x38f5cu);
        ebx = arg2 + 0x80u;
    }
    else
    {
        wr32(sp0 - 0x1d8u, sp0 - 0xc0u);
        wr32(sp0 - 0x1dcu, sp0 - 0x80u);
        g->esp = sp0 - 0x1d4u;
        cow_stdcall(g, COW_IMG(0x102d716cu), 2, sp0 - 0x80u, sp0 - 0xc0u);
        wr32(sp0 - 0x1d8u, self + 0x38f5cu);
        wr32(sp0 - 0x1dcu, sp0 - 0xc0u);
        wr32(sp0 - 0x1e0u, sp0 - 0x1a8u);
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x1a8u, sp0 - 0xc0u, self + 0x38f5cu);
        ebx = sp0 - 0x80u;
    }
    wr32(sp0 - 0x1d8u, sp0 - 0x100u);
    esi = sp0 - 0x1a8u;
    edi = sp0 - 0x100u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1dcu, sp0 - 0x40u);
    g->esp = sp0 - 0x1d4u;
    cow_stdcall(g, COW_IMG(0x102d716cu), 2, sp0 - 0x40u, sp0 - 0x100u);
    wr32(sp0 - 0x1d8u, 4u);
    wr32(sp0 - 0x1dcu, sp0 - 0x40u);
    wr32(sp0 - 0x1e0u, 0u);
    t167 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t167);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x13cu), sp0 - 0x40u, 4, t167, 0u, sp0 - 0x40u, 4u);
    wr32(sp0 - 0x1d8u, 1u);
    d168 = (double)(float)-fr(g, fr(g, fr(g, (double)rdf32(ebx + 0x10u) * (double)rdf32(self + 0x39544u)) + fr(g, (double)rdf32(ebx + 0x20u) * (double)rdf32(self + 0x39548u))) + fr(g, (double)rdf32(self + 0x39540u) * (double)rdf32(ebx)));
    wrf32(sp0 - 0x1b8u, (float)d168);
    d169 = (double)(float)-fr(g, fr(g, fr(g, (double)rdf32(ebx + 0x14u) * (double)rdf32(self + 0x39544u)) + fr(g, (double)rdf32(ebx + 0x24u) * (double)rdf32(self + 0x39548u))) + fr(g, (double)rdf32(ebx + 4u) * (double)rdf32(self + 0x39540u)));
    wrf32(sp0 - 0x1b4u, (float)d169);
    d170 = (double)(float)-fr(g, fr(g, fr(g, (double)rdf32(ebx + 0x18u) * (double)rdf32(self + 0x39544u)) + fr(g, (double)rdf32(ebx + 0x28u) * (double)rdf32(self + 0x39548u))) + fr(g, (double)rdf32(ebx + 8u) * (double)rdf32(self + 0x39540u)));
    wrf32(sp0 - 0x1b0u, (float)d170);
    wr32(sp0 - 0x1dcu, sp0 - 0x1b8u);
    wr32(sp0 - 0x1e0u, 4u);
    t171 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t171);
    g->edx = sp0 - 0x1b8u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x13cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t171, 4u, sp0 - 0x1b8u, 1u);
    t172 = g->edx;
    edx = t172;
    ebx = rd32(sp0 - 0x1c0u);
L_1017d961: ;
    if (rd32(self + 0x39118u) != rd8(arg2 + 0xeu))
    {
        eax = rd8(arg2 + 0xeu);
        wr32(self + 0x39118u, eax);
        if (eax != 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
            wr32(sp0 - 0x1d8u, 1u);
            loc_1d8 = 1u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
            wr32(sp0 - 0x1d8u, 0u);
            loc_1d8 = 0u;
        }
        wr32(sp0 - 0x1dcu, 0x8fu);
        wr32(sp0 - 0x1e0u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x8fu, loc_1d8);
        t174 = g->edx;
        edx = t174;
    }
    if (rd32(self + 0x390fcu) != (uint32_t)(int16_t)rd16(arg2 + 0xd4u))
    {
        eax = (uint32_t)(int16_t)rd16(arg2 + 0xd4u);
        wr32(self + 0x390fcu, eax);
        if (eax == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
            wr32(sp0 - 0x1d8u, 3u);
            loc_1d8 = 3u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
            wr32(sp0 - 0x1d8u, 2u);
            loc_1d8 = 2u;
        }
        wr32(sp0 - 0x1dcu, 0x16u);
        wr32(sp0 - 0x1e0u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x16u, loc_1d8);
        t175 = g->edx;
        wr32(self + 0x39120u, 0u);
        edx = t175;
    }
    if (rd32(self + 0x39110u) != (uint32_t)(int16_t)rd16(arg2 + 0xd6u))
    {
        eax = (uint32_t)(int16_t)rd16(arg2 + 0xd6u);
        wr32(self + 0x39110u, eax);
        if (eax == 0u) goto L_1017da2e;
        if (eax == 1u) goto L_1017da2a;
        eax = eax - 1u;
        if (eax != 1u) goto L_1017da74;
        wr32(sp0 - 0x1d8u, 0u);
        wr32(sp0 - 0x1dcu, 0xfu);
        t176 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t176);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t176) + 0xc8u), rd32(t176), 3, t176, 0xfu, 0u);
        wr32(sp0 - 0x1d8u, 3u);
        wr32(sp0 - 0x1dcu, 0xdu);
        wr32(sp0 - 0x1e0u, 0u);
        t177 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e4u, t177);
        cow_thiscall(g, rd32(rd32(t177) + 0xfcu), rd32(t177), 4, t177, 0u, 0xdu, 3u);
        wr32(sp0 - 0x1d8u, 3u);
        loc_1d8 = 3u;
L_1017da5e: ;
        wr32(sp0 - 0x1dcu, 0xeu);
        wr32(sp0 - 0x1e0u, 0u);
        t180 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e4u, t180);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t181 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t180) + 0xfcu), rd32(t180), 4, t180, 0u, 0xeu, loc_1d8);
        t182 = g->edx;
        edx = t182;
    }
L_1017da74: ;
    if (rd32(ebx + 0x68u) != 0u)
    {
        eax = rd32(ebx + 0x68u);
        wr32(sp0 - 0x1d8u, arg2);
        g->esp = sp0 - 0x1d4u;
        cow_fastcall(g, COW_IMG(0x1017a3f0u), self, edx, 1, arg2);
        t183 = g->edx;
        edx = t183;
    }
    t184 = rd32(ebx + 0x60u);
    wr32(sp0 - 0x1acu, t184);
    wr32(sp0 - 0x1bcu, 0u);
    if ((int32_t)rd32(ebx + 0x44u) <= 0)
    {
        loc_1c8 = rd32(sp0 - 0x1c8u);
        loc_1cc = rd32(sp0 - 0x1ccu);
        loc_1d0 = rd32(sp0 - 0x1d0u);
        loc_1d4 = rd32(sp0 - 0x1d4u);
        goto L_1017ddff;
    }
    edi = t184;
    loc_1ac = t184;
    loc_1bc = 0u;
L_1017da9d: ;
    wr32(sp0 - 0x1c0u, 0u);
    if ((int32_t)rd32(edi) <= 0) goto L_1017dde4;
    esi = rd32(edi + 4u);
    loc_1c0 = 0u;
L_1017dab2: ;
    if (rd32(sp0 - 0x1c4u) == 0u)
    {
        eax = rd32(sp0 - 0x1c4u);
        wr32(sp0 - 0x1d8u, COW_IMG(0x10621c08u));
        t185 = rd32(self + 0x394a8u);
        wr32(sp0 - 0x1dcu, t185);
        g->edx = t185;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t185, COW_IMG(0x10621c08u));
        t186 = g->edx;
        edx = t186;
        loc_1ac = rd32(sp0 - 0x1acu);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
    if ((uint32_t)(int16_t)rd16(esi + 0x20u) != rd32(self + 0x39114u))
    {
        eax = (uint32_t)(int16_t)rd16(esi + 0x20u);
        wr32(self + 0x39114u, eax);
        if (rd16(esi + 0x20u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            wr32(sp0 - 0x1d8u, 0u);
            wr32(sp0 - 0x1dcu, 0x1bu);
            wr32(sp0 - 0x1e0u, eax);
            g->esp = sp0 - 0x1d4u;
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x1bu, 0u);
            wr32(sp0 - 0x1d8u, 1u);
            wr32(sp0 - 0x1dcu, 0xeu);
            t188 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x1e0u, t188);
            cow_thiscall(g, rd32(rd32(t188) + 0xc8u), rd32(t188), 3, t188, 0xeu, 1u);
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            edx = rd32(COW_IMG(0x10632038u));
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            wr32(sp0 - 0x1d8u, 1u);
            wr32(sp0 - 0x1dcu, 0x1bu);
            wr32(sp0 - 0x1e0u, eax);
            g->esp = sp0 - 0x1d4u;
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x1bu, 1u);
            wr32(sp0 - 0x1d8u, 0u);
            wr32(sp0 - 0x1dcu, 0xeu);
            t187 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x1e0u, t187);
            cow_thiscall(g, rd32(rd32(t187) + 0xc8u), rd32(t187), 3, t187, 0xeu, 0u);
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            edx = rd32(COW_IMG(0x10631f18u));
        }
        wr32(sp0 - 0x1d8u, edx);
        wr32(sp0 - 0x1dcu, 0x2fu);
        wr32(sp0 - 0x1e0u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x2fu, edx);
        t189 = g->edx;
        edx = t189;
        loc_1ac = rd32(sp0 - 0x1acu);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
    if ((uint32_t)(int16_t)rd16(esi + 0x24u) != rd32(self + 0x39120u))
    {
        eax = (uint32_t)(int16_t)rd16(esi + 0x24u);
        wr32(self + 0x39120u, eax);
        if (eax == 0u)
        {
            if (rd32(self + 0x390fcu) == 0u)
            {
                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                edx = rd32(COW_IMG(0x1045666cu));
                wr32(sp0 - 0x1d8u, 3u);
                loc_1d8 = 3u;
            }
            else
            {
                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                edx = rd32(COW_IMG(0x1045666cu));
                wr32(sp0 - 0x1d8u, 2u);
                loc_1d8 = 2u;
            }
        }
        else
        {
            wr32(sp0 - 0x1d8u, 1u);
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            loc_1d8 = 1u;
        }
        wr32(sp0 - 0x1dcu, 0x16u);
        wr32(sp0 - 0x1e0u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x16u, loc_1d8);
        t190 = g->edx;
        edx = t190;
        loc_1ac = rd32(sp0 - 0x1acu);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
    if (rd32(sp0 - 0x1c4u) == 0u)
    {
        eax = rd32(esi + 4u);
        goto L_1017dcaa;
    }
    eax = rd32(esi + 4u);
    if (eax == 0u) goto L_1017dc26;
    if (rd32(eax + 0x40u) != 0u)
    {
        ecx = rd32(eax + 0x40u);
    }
    else
    {
        ecx = rd32(eax + 0x44u);
    }
    wr32(sp0 - 0x1d8u, ecx);
    wr32(sp0 - 0x1dcu, 0u);
    t191 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t191);
    g->edx = rd32(t191);
    t192 = rd32(t191);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(t192 + 0xf4u), ecx, 3, t191, 0u, ecx);
    t193 = g->edx;
    if (rd32(esi + 0x1cu) == 0u) goto L_1017ddba;
    edx = t193;
    if (rd32(esi + 0xb4u) == 0u) goto L_1017ddcb;
    if (rd32(esi + 0xbcu) == 0u) goto L_1017dc60;
    eax = rd32(esi + 0xbcu);
    if (rd32(eax + 0x40u) == 0u)
    {
        eax = rd32(eax + 0x44u);
    }
    else
    {
        ecx = rd32(eax + 0x40u);
        eax = ecx;
    }
    wr32(sp0 - 0x1d8u, eax);
    wr32(sp0 - 0x1dcu, 1u);
    t194 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t194);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t194) + 0xf4u), t194, 3, t194, 1u, eax);
L_1017dc75: ;
    wr32(sp0 - 0x1d8u, 0x30u);
    t199 = rd32(esi + 0xb4u);
    wr32(sp0 - 0x1dcu, t199);
    wr32(sp0 - 0x1e0u, 0u);
    t200 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t200);
    g->edx = t199;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t200, 0u, t199, 0x30u);
    t201 = g->edx;
    t202 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x1d8u, t202);
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 4u);
    g->ebx = ebx;
    cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, 4u, 0u, t202);
L_1017ddb4: ;
    wr32(self + 0x39430u, rd32(self + 0x39430u) + 1u);
L_1017ddba: ;
    t230 = rd32(esi + 0x18u) + rd32(self + 0x3942cu);
    t231 = rd32(esi + 0x18u);
    wr32(self + 0x3942cu, t230);
    edx = t231;
L_1017ddcb: ;
    t232 = rd32(sp0 - 0x1c0u) + 1u;
    wr32(sp0 - 0x1c0u, t232);
    if ((int32_t)(rd32(sp0 - 0x1c0u) + 1u) < (int32_t)rd32(edi))
    {
        esi = esi + 0xc0u;
        loc_1ac = rd32(sp0 - 0x1acu);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1c0 = t232;
        goto L_1017dab2;
    }
    loc_1bc = rd32(sp0 - 0x1bcu);
L_1017dde4: ;
    wr32(sp0 - 0x1bcu, loc_1bc + 1u);
    wr32(sp0 - 0x1acu, edi + 0x24u);
    if ((int32_t)(loc_1bc + 1u) < (int32_t)rd32(ebx + 0x44u))
    {
        loc_1ac = edi + 0x24u;
        edi = edi + 0x24u;
        loc_1bc = loc_1bc + 1u;
        goto L_1017da9d;
    }
    loc_1c8 = rd32(sp0 - 0x1c8u);
    loc_1cc = rd32(sp0 - 0x1ccu);
    loc_1d0 = rd32(sp0 - 0x1d0u);
    loc_1d4 = rd32(sp0 - 0x1d4u);
L_1017ddff: ;
    g->ebx = loc_1c8;
    g->esi = loc_1d0;
    g->edi = loc_1d4;
    g->ebp = loc_1cc;
    return;
L_1017ce7d: ;
    wr32(sp0 - 0x1d8u, 0x152u);
    t100 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1dcu, t100);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t101 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t100) + 0x130u), rd32(t100), 2, t100, 0x152u);
    t102 = g->edx;
    if (rd32(self + 0x3949cu) != 1u)
    {
        edx = t102;
    }
    else
    {
        wr32(sp0 - 0x1d8u, 0u);
        t103 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1dcu, t103);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t104 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t103) + 0x160u), rd32(t103), 2, t103, 0u);
        t105 = g->edx;
        edx = t105;
    }
    wr32(sp0 - 0x1c4u, 0u);
    edi = 0u;
    loc_1c4 = 0u;
    loc_1c0 = rd32(sp0 - 0x1c0u);
    goto L_1017d3de;
L_1017cebc: ;
    if (rd32(self + 0x3949cu) != 1u) goto L_1017d558;
    wr32(COW_IMG(0x10639048u), 0u);
    wr32(COW_IMG(0x10639058u), 0u);
    wr32(COW_IMG(0x10639068u), 0u);
    wr32(COW_IMG(0x1063904cu), 0u);
    wr32(COW_IMG(0x1063905cu), 0u);
    wr32(COW_IMG(0x1063906cu), 0u);
    wr32(COW_IMG(0x10639050u), 0u);
    wr32(COW_IMG(0x10639060u), 0u);
    wr32(COW_IMG(0x10639070u), 0u);
    wr32(COW_IMG(0x10639054u), 0u);
    wr32(COW_IMG(0x10639064u), 0u);
    wr32(COW_IMG(0x10639074u), 0u);
    wr32(sp0 - 0x1bcu, 0u);
    wr32(sp0 - 0x1c4u, sp0 - 0x140u);
    if (rd32(self + 0x3945cu) == 0u)
    {
        edx = sp0 - 0x140u;
        ebx = COW_IMG(0x10639048u);
        loc_1bc = 0u;
        loc_1c4 = sp0 - 0x140u;
    }
    else
    {
        esi = rd32(self + 0x3945cu);
        d54 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
        wrf32(sp0 - 0x140u, (float)d54);
        d55 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb4u));
        wrf32(sp0 - 0x13cu, (float)d55);
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        d56 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb8u));
        wrf32(sp0 - 0x138u, (float)d56);
        edi = sp0 - 0x1a8u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x1a8u);
        wr32(sp0 - 0x1bcu, 1u);
        d57 = fr(g, (double)rdf32(rd32(self + 0x3945cu) + 0x60u) * (double)rdf32(sp0 - 0x1a4u));
        wrf32(COW_IMG(0x10639048u), (float)d57);
        wr32(sp0 - 0x1c4u, sp0 - 0x130u);
        d58 = fr(g, (double)rdf32(rd32(self + 0x3945cu) + 0x60u) * (double)rdf32(sp0 - 0x1a0u));
        wrf32(COW_IMG(0x10639058u), (float)d58);
        d59 = fr(g, (double)rdf32(rd32(self + 0x3945cu) + 0x60u) * (double)rdf32(sp0 - 0x19cu));
        wrf32(COW_IMG(0x10639068u), (float)d59);
        d60 = (double)rdf32(rd32(self + 0x3945cu) + 0x4cu);
        wrf32(COW_IMG(0x10639078u), (float)fr(g, d60 * d60));
        edx = sp0 - 0x130u;
        ebx = COW_IMG(0x1063904cu);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = 1u;
        loc_1c4 = sp0 - 0x130u;
    }
    if (rd32(self + 0x39460u) != 0u)
    {
        esi = rd32(self + 0x39460u);
        d61 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
        wrf32(loc_1c4, (float)d61);
        d62 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(esi + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(esi + 0x38u))) + (double)rdf32(arg2 + 0xb4u));
        wrf32(loc_1c4 + 4u, (float)d62);
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        d63 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(esi + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(esi + 0x38u))) + (double)rdf32(arg2 + 0xb8u));
        wrf32(loc_1c4 + 8u, (float)d63);
        edi = sp0 - 0x1a8u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x1a8u);
        d64 = fr(g, (double)rdf32(rd32(self + 0x39460u) + 0x60u) * (double)rdf32(sp0 - 0x1a4u));
        wrf32(ebx, (float)d64);
        t65 = rd32(sp0 - 0x1bcu) + 1u;
        wr32(sp0 - 0x1bcu, t65);
        t66 = rd32(self + 0x39460u);
        d67 = fr(g, (double)rdf32(rd32(self + 0x39460u) + 0x60u) * (double)rdf32(sp0 - 0x1a0u));
        wrf32(ebx + 0x10u, (float)d67);
        d68 = fr(g, (double)rdf32(rd32(self + 0x39460u) + 0x60u) * (double)rdf32(sp0 - 0x19cu));
        wrf32(ebx + 0x20u, (float)d68);
        d69 = (double)rdf32(rd32(self + 0x39460u) + 0x4cu);
        t70 = rd32(sp0 - 0x1c4u) + 0x10u;
        wr32(sp0 - 0x1c4u, t70);
        wrf32(ebx + 0x30u, (float)fr(g, d69 * d69));
        edx = t66;
        ebx = ebx + 4u;
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = t65;
        loc_1c4 = t70;
    }
    if (rd32(self + 0x39464u) != 0u)
    {
        esi = rd32(self + 0x39464u);
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        d71 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
        wrf32(loc_1c4, (float)d71);
        d72 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb4u));
        wrf32(loc_1c4 + 4u, (float)d72);
        d73 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb8u));
        wrf32(loc_1c4 + 8u, (float)d73);
        edi = sp0 - 0x1a8u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x1a8u);
        d74 = fr(g, (double)rdf32(rd32(self + 0x39464u) + 0x60u) * (double)rdf32(sp0 - 0x1a4u));
        wrf32(ebx, (float)d74);
        t75 = rd32(sp0 - 0x1c4u) + 0x10u;
        wr32(sp0 - 0x1c4u, t75);
        d76 = fr(g, (double)rdf32(rd32(self + 0x39464u) + 0x60u) * (double)rdf32(sp0 - 0x1a0u));
        wrf32(ebx + 0x10u, (float)d76);
        t77 = rd32(sp0 - 0x1bcu) + 1u;
        wr32(sp0 - 0x1bcu, t77);
        d78 = fr(g, (double)rdf32(rd32(self + 0x39464u) + 0x60u) * (double)rdf32(sp0 - 0x19cu));
        wrf32(ebx + 0x20u, (float)d78);
        d79 = (double)rdf32(rd32(self + 0x39464u) + 0x4cu);
        wrf32(ebx + 0x30u, (float)fr(g, d79 * d79));
        edx = t77;
        ebx = ebx + 4u;
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = t77;
        loc_1c4 = t75;
    }
    if (rd32(self + 0x39468u) != 0u)
    {
        esi = rd32(self + 0x39468u);
        d80 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
        wrf32(loc_1c4, (float)d80);
        d81 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(esi + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(esi + 0x38u))) + (double)rdf32(arg2 + 0xb4u));
        wrf32(loc_1c4 + 4u, (float)d81);
        d82 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(esi + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(esi + 0x38u))) + (double)rdf32(arg2 + 0xb8u));
        wrf32(loc_1c4 + 8u, (float)d82);
        edi = sp0 - 0x1a8u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x1a8u);
        d83 = fr(g, (double)rdf32(rd32(self + 0x39468u) + 0x60u) * (double)rdf32(sp0 - 0x1a4u));
        wrf32(ebx, (float)d83);
        t84 = rd32(sp0 - 0x1bcu) + 1u;
        wr32(sp0 - 0x1bcu, t84);
        d85 = fr(g, (double)rdf32(rd32(self + 0x39468u) + 0x60u) * (double)rdf32(sp0 - 0x1a0u));
        wrf32(ebx + 0x10u, (float)d85);
        d86 = fr(g, (double)rdf32(rd32(self + 0x39468u) + 0x60u) * (double)rdf32(sp0 - 0x19cu));
        wrf32(ebx + 0x20u, (float)d86);
        d87 = (double)rdf32(rd32(self + 0x39468u) + 0x4cu);
        wrf32(ebx + 0x30u, (float)fr(g, d87 * d87));
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = t84;
    }
    t88 = rd32(self + loc_1bc * 4u + 0x39480u);
    wr32(sp0 - 0x1d8u, t88);
    t89 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1dcu, t89);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t89) + 0x130u), rd32(t89), 2, t89, t88);
    if (loc_1bc != 0u)
    {
        esi = loc_1bc;
        wr32(sp0 - 0x1d8u, esi);
        wr32(sp0 - 0x1dcu, sp0 - 0x140u);
        wr32(sp0 - 0x1e0u, 0xbu);
        t90 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e4u, t90);
        g->edx = sp0 - 0x140u;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t90) + 0x13cu), rd32(t90), 4, t90, 0xbu, sp0 - 0x140u, esi);
        t91 = g->edx;
        wr32(sp0 - 0x1d8u, 4u);
        wr32(sp0 - 0x1dcu, COW_IMG(0x10639048u));
        wr32(sp0 - 0x1e0u, 0xfu);
        t92 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e4u, t92);
        cow_thiscall(g, rd32(rd32(t92) + 0x13cu), rd32(t92), 4, t92, 0xfu, COW_IMG(0x10639048u), 4u);
    }
    t93 = rd32(self + 0x39494u);
    wr32(sp0 - 0x1d8u, t93);
    t94 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1dcu, t94);
    g->edx = t93;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t94) + 0x160u), rd32(t94), 2, t94, t93);
    t95 = g->edx;
    wr32(sp0 - 0x1c4u, 1u);
    edx = t95;
    ebx = rd32(sp0 - 0x1c0u);
    loc_1c0 = rd32(sp0 - 0x1c0u);
    loc_1c4 = 1u;
L_1017d3da: ;
    edi = loc_1c4;
    goto L_1017d3de;
L_1017d558: ;
    wr32(sp0 - 0x1d8u, 0x152u);
    t96 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1dcu, t96);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t96) + 0x130u), rd32(t96), 2, t96, 0x152u);
    wr32(sp0 - 0x1d8u, 0u);
    t97 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1dcu, t97);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t98 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, rd32(rd32(t97) + 0x160u), rd32(t97), 2, t97, 0u);
    t99 = g->edx;
    wr32(sp0 - 0x1c4u, 0u);
    edx = t99;
    edi = 0u;
    loc_1c4 = 0u;
    loc_1c0 = rd32(sp0 - 0x1c0u);
    goto L_1017d3de;
L_1017d58d: ;
    if (rd32(self + 0x394a4u) == 0u)
    {
        eax = rd32(self + 0x394a4u);
        wr32(sp0 - 0x1d8u, 0u);
        wr32(sp0 - 0x1dcu, self + 0x39260u);
        g->eax = eax;
        g->esp = sp0 - 0x1d4u;
        t135 = cow_thiscall(g, COW_IMG(0x10188ca0u), ecx, 2, self + 0x39260u, 0u);
        wr32(sp0 - 0x1d8u, self + 0x39260u);
        t136 = rd32(self + 0x394a8u);
        wr32(sp0 - 0x1dcu, t136);
        eax = t135;
        edx = t136;
        loc_1d8 = self + 0x39260u;
        loc_1dc = t136;
    }
    else
    {
        eax = rd32(self + 0x394a4u);
        wr32(sp0 - 0x1d8u, self + 0x392c8u);
        wr32(sp0 - 0x1dcu, self + 0x39260u);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x10188b70u), ecx, 2, self + 0x39260u, self + 0x392c8u);
        t130 = g->edx;
        wr32(sp0 - 0x1d8u, self + 0x39260u);
        t131 = rd32(self + 0x394a8u);
        wr32(sp0 - 0x1dcu, t131);
        g->eax = t131;
        g->edx = t130;
        t132 = cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t131, self + 0x39260u);
        t133 = g->edx;
        wr32(sp0 - 0x1d8u, self + 0x392c8u);
        t134 = rd32(self + 0x394acu);
        wr32(sp0 - 0x1dcu, t134);
        eax = t132;
        edx = t133;
        loc_1d8 = self + 0x392c8u;
        loc_1dc = t134;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t137 = cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, loc_1dc, loc_1d8);
    t138 = g->edx;
    esi = self + 0x39260u;
    edi = COW_IMG(0x10621c08u);
    ecx = 0x1au;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1d8u, 0u);
    wr32(sp0 - 0x1dcu, self + 0x39330u);
    cow_thiscall(g, COW_IMG(0x10188e00u), rd32(self + 0x39138u), 2, self + 0x39330u, 0u);
    t139 = rd32(self + 0x39330u);
    wr32(sp0 - 0x1d8u, t139);
    wr32(sp0 - 0x1dcu, 0x8bu);
    t140 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t140);
    cow_thiscall(g, rd32(rd32(t140) + 0xc8u), rd32(t140), 3, t140, 0x8bu, t139);
    t141 = rd32(self + 0x3933cu);
    wr32(sp0 - 0x1d8u, t141);
    wr32(sp0 - 0x1dcu, 0x24u);
    t142 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t142);
    cow_thiscall(g, rd32(rd32(t142) + 0xc8u), rd32(t142), 3, t142, 0x24u, t141);
    t143 = rd32(self + 0x39338u);
    wr32(sp0 - 0x1d8u, t143);
    wr32(sp0 - 0x1dcu, 0x25u);
    t144 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t144);
    g->edx = t143;
    cow_thiscall(g, rd32(rd32(t144) + 0xc8u), rd32(t144), 3, t144, 0x25u, t143);
    t145 = g->edx;
    edx = t145;
    ebx = rd32(sp0 - 0x1c0u);
    loc_1c4 = rd32(sp0 - 0x1c4u);
L_1017d650: ;
    if (arg3 == 0u)
    {
        wr32(sp0 - 0x1d8u, arg2 + 0x40u);
        eax = arg3;
        loc_1d8 = arg2 + 0x40u;
    }
    else
    {
        wr32(sp0 - 0x1d8u, sp0 - 0xc0u);
        eax = sp0 - 0xc0u;
        loc_1d8 = sp0 - 0xc0u;
    }
    wr32(sp0 - 0x1dcu, 0x100u);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, loc_1d8);
    t173 = g->edx;
    edx = t173;
    goto L_1017d961;
L_1017d66c: ;
    if (edi == 0u)
    {
        wr32(sp0 - 0x1d8u, self + 0x39180u);
        t156 = rd32(self + 0x394a8u);
        wr32(sp0 - 0x1dcu, t156);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t156, self + 0x39180u);
        esi = self + 0x39180u;
        edi = COW_IMG(0x10621c08u);
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if (rd32(self + 0x394a4u) != 0u)
        {
            eax = rd32(self + 0x394a4u);
            wr32(sp0 - 0x1d8u, self + 0x391e8u);
            t157 = rd32(self + 0x394acu);
            wr32(sp0 - 0x1dcu, t157);
            g->esp = sp0 - 0x1d4u;
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t157, self + 0x391e8u);
        }
        t158 = rd32(self + 0x39250u);
        wr32(sp0 - 0x1d8u, t158);
        wr32(sp0 - 0x1dcu, 0x8bu);
        t159 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t159);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t159) + 0xc8u), rd32(t159), 3, t159, 0x8bu, t158);
    }
    else
    {
        t146 = rd32(self + 0x391c0u);
        wr32(sp0 - 0x1b8u, t146);
        t147 = rd32(self + 0x391c4u);
        wr32(sp0 - 0x1b4u, t147);
        t148 = rd32(self + 0x391c8u);
        wr32(sp0 - 0x1b0u, t148);
        wr32(self + 0x39540u, t146);
        wr32(self + 0x39544u, t147);
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        wr32(self + 0x39548u, t148);
        esi = self + 0x39180u;
        edi = sp0 - 0x1a8u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x1a8u);
        t149 = rd32(sp0 - 0x1a4u);
        t150 = rd32(sp0 - 0x1a0u);
        t151 = rd32(sp0 - 0x19cu);
        wr32(self + 0x394d0u, t149);
        wr32(self + 0x394d4u, t150);
        wr32(self + 0x394d8u, t151);
        wr32(self + 0x394dcu, 0u);
        wr32(sp0 - 0x1d8u, self + 0x394e0u);
        cow_thiscall(g, COW_IMG(0x10188fa0u), rd32(COW_IMG(0x1065cb04u)), 1, self + 0x394e0u);
        wr32(sp0 - 0x1d8u, 5u);
        t152 = rd32(self + 0x39258u);
        d153 = fr(g, (double)rdf32(self + 0x39258u) - (double)rdf32(self + 0x3925cu));
        wr32(self + 0x39508u, t152);
        d154 = fr(g, (double)rdf32(self + 0x3954cu) / d153);
        wrf32(self + 0x39500u, (float)d154);
        wr32(sp0 - 0x1dcu, self + 0x394c0u);
        wr32(sp0 - 0x1e0u, 5u);
        t155 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e4u, t155);
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x13cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t155, 5u, self + 0x394c0u, 5u);
    }
    t160 = rd32(self + 0x3925cu);
    wr32(sp0 - 0x1d8u, t160);
    wr32(sp0 - 0x1dcu, 0x24u);
    t161 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t161);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t161) + 0xc8u), rd32(t161), 3, t161, 0x24u, t160);
    t162 = rd32(self + 0x39258u);
    wr32(sp0 - 0x1d8u, t162);
    wr32(sp0 - 0x1dcu, 0x25u);
    t163 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t163);
    cow_thiscall(g, rd32(rd32(t163) + 0xc8u), rd32(t163), 3, t163, 0x25u, t162);
    t164 = rd32(self + 0x39254u);
    wr32(sp0 - 0x1d8u, t164);
    wr32(sp0 - 0x1dcu, 0x22u);
    edx = t164;
    loc_1dc = 0x22u;
    loc_1d8 = t164;
    goto L_1017d7e6;
L_1017da2a: ;
    wr32(sp0 - 0x1d8u, 1u);
    loc_1d8 = 1u;
L_1017da30: ;
    wr32(sp0 - 0x1dcu, 0xfu);
    t178 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t178);
    g->esp = sp0 - 0x1d8u;
    cow_thiscall(g, rd32(rd32(t178) + 0xc8u), rd32(t178), 2, t178, 0xfu);
    wr32(sp0 - 0x1dcu, 1u);
    wr32(sp0 - 0x1e0u, 0xdu);
    wr32(sp0 - 0x1e4u, 0u);
    t179 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e8u, t179);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t179) + 0xfcu), rd32(t179), 5, t179, 0u, 0xdu, 1u, rd32(sp0 - 0x1d8u));
    wr32(sp0 - 0x1d8u, 1u);
    loc_1d8 = 1u;
    goto L_1017da5e;
L_1017da2e: ;
    wr32(sp0 - 0x1d8u, 0u);
    loc_1d8 = 0u;
    goto L_1017da30;
L_1017dc26: ;
    wr32(sp0 - 0x1d8u, 0u);
    wr32(sp0 - 0x1dcu, 0u);
    t195 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t195);
    g->edx = rd32(t195);
    t196 = rd32(t195);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(t196 + 0xf4u), rd32(COW_IMG(0x1045666cu)), 3, t195, 0u, 0u);
    t197 = g->edx;
    if (rd32(esi + 0x28u) == 0u)
    {
        edx = t197;
        goto L_1017ddcb;
    }
    edx = t197;
    if (rd32(esi + 0x1cu) == 0u) goto L_1017ddba;
    if (rd32(esi + 0xb4u) == 0u) goto L_1017ddcb;
L_1017dc60: ;
    wr32(sp0 - 0x1d8u, 0u);
    wr32(sp0 - 0x1dcu, 1u);
    t198 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t198);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t198) + 0xf4u), rd32(t198), 3, t198, 1u, 0u);
    goto L_1017dc75;
L_1017dcaa: ;
    if (eax == 0u)
    {
        wr32(sp0 - 0x1d8u, 0u);
        wr32(sp0 - 0x1dcu, 0u);
        t208 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t208);
        g->eax = t208;
        g->edx = edx;
        t209 = rd32(t208);
        g->esp = sp0 - 0x1d4u;
        t210 = cow_thiscall(g, rd32(t209 + 0xf4u), t209, 3, t208, 0u, 0u);
        t211 = g->ecx;
        t212 = g->edx;
        eax = t210;
        ecx = t211;
        edx = t212;
    }
    else
    {
        if (rd32(eax + 0x40u) == 0u)
        {
            eax = rd32(eax + 0x44u);
        }
        else
        {
            ecx = rd32(eax + 0x40u);
            eax = ecx;
        }
        wr32(sp0 - 0x1d8u, eax);
        wr32(sp0 - 0x1dcu, 0u);
        t203 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t203);
        g->eax = eax;
        g->edx = rd32(t203);
        t204 = rd32(t203);
        g->esp = sp0 - 0x1d4u;
        t205 = cow_thiscall(g, rd32(t204 + 0xf4u), t203, 3, t203, 0u, eax);
        t206 = g->ecx;
        t207 = g->edx;
        eax = t205;
        ecx = t206;
        edx = t207;
    }
    if (rd32(ebx + 0x1cu) != 2u) goto L_1017dd7c;
    g->edx = arg2;
    d213 = fr(g, (double)rdf32(ebx + 0x6cu) * (double)rdf32(arg2 + 0x15cu));
    fpush(g, d213);
    g->esp = sp0 - 0x1d4u;
    t214 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t215 = g->edx;
    if (rd32(esi + t214 * 4u + 0x30u) == 0u)
    {
        edx = t215;
        goto L_1017ddcb;
    }
    ecx = rd32(esi + t214 * 4u + 0x30u);
    wr32(sp0 - 0x1d8u, 0xcu);
    wr32(sp0 - 0x1dcu, ecx);
    wr32(sp0 - 0x1e0u, 0u);
    t216 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t216);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t216) + 0x14cu), ecx, 4, t216, 0u, ecx, 0xcu);
    wr32(sp0 - 0x1d8u, 0x18u);
    t217 = rd32(esi + 0xb0u);
    wr32(sp0 - 0x1dcu, t217);
    wr32(sp0 - 0x1e0u, 1u);
    t218 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t218);
    cow_thiscall(g, rd32(rd32(t218) + 0x14cu), rd32(t218), 4, t218, 1u, t217, 0x18u);
    wr32(sp0 - 0x1d8u, 0u);
    t219 = rd32(esi + 0xb8u);
    wr32(sp0 - 0x1dcu, t219);
    t220 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t220);
    cow_thiscall(g, rd32(rd32(t220) + 0x154u), rd32(t220), 3, t220, t219, 0u);
    t221 = rd32(esi + 0x18u);
    wr32(sp0 - 0x1d8u, t221);
    wr32(sp0 - 0x1dcu, 0u);
    t222 = rd32(esi + 8u);
    wr32(sp0 - 0x1e0u, t222);
    wr32(sp0 - 0x1e4u, 0u);
    t223 = rd32(ebx + 0x2cu);
    wr32(sp0 - 0x1e8u, t223);
    g->ebx = ebx;
    cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, t223, 0u, t222, 0u, t221);
    goto L_1017ddba;
L_1017dd7c: ;
    if (rd32(esi + 0x28u) == 0u) goto L_1017ddcb;
    ecx = rd32(esi + 0x28u);
    t224 = rd32(ebx + 0x24u);
    wr32(sp0 - 0x1d8u, t224);
    wr32(sp0 - 0x1dcu, ecx);
    wr32(sp0 - 0x1e0u, 0u);
    t225 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t225);
    g->edx = rd32(t225);
    t226 = rd32(t225);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(t226 + 0x14cu), ecx, 4, t225, 0u, ecx, t224);
    t227 = g->edx;
    t228 = rd32(esi + 0x18u);
    wr32(sp0 - 0x1d8u, t228);
    wr32(sp0 - 0x1dcu, 0u);
    t229 = rd32(ebx + 0x2cu);
    wr32(sp0 - 0x1e0u, t229);
    g->ebx = ebx;
    cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, t229, 0u, t228);
    edi = rd32(sp0 - 0x1acu);
    goto L_1017ddb4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017c9c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1017c9c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
