/* f_0x1016b1d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_1016b1d0(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d25;
    double d26;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d6;
    double d60;
    double d61;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
    double d70;
    double d71;
    double d72;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d8;
    double d80;
    double d81;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    double loc_58_f;
    double loc_5c_f;
    double loc_60_f;
    uint32_t loc_88;
    double loc_8c_f;
    double loc_90_f;
    double loc_94_f;
    uint32_t loc_98;
    uint32_t loc_9c;
    double loc_a0_f;
    double loc_a4_f;
    double loc_a8_f;
    uint32_t loc_ac;
    double loc_b0_f;
    double loc_b4_f;
    double loc_b8_f;
    double loc_cc_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t27;
    uint32_t t3;
    uint32_t t34;
    uint32_t t4;
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
    uint32_t t62;
    uint32_t t69;
    uint32_t t7;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
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
    cow_frame(g, sp0, 256u);

    wr32(sp0 - 0xd4u, in_ebx);
    wr32(sp0 - 0xd8u, in_ebp);
    wr32(sp0 - 0xdcu, in_esi);
    wr32(sp0 - 0xe0u, in_edi);
    t1 = rd32(self + 0x60u);
    wr32(self + 0x1807cu, 0u);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_1016bdd9;
    }
    eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    d2 = fr(g, fr(g, (double)rdf32(self + 0x40u) + (double)rdf32(arg1)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d2);
    g->esp = sp0 - 0xe0u;
    t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        goto L_1016bdd9;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    esi = t3;
    if ((int32_t)esi >= (int32_t)rd32(self + 0x48u)) goto L_1016bdd9;
    ebp = rd32(self + 0x48u);
    d6 = fr(g, fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d6);
    g->esp = sp0 - 0xe0u;
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        goto L_1016bdd9;
    }
    eax = t7;
    if ((int32_t)eax >= (int32_t)rd32(self + 0x4cu)) goto L_1016bdd9;
    ebx = rd32(self + 0x4cu);
    if ((int32_t)(esi - 2u) >= 0)
    {
        ecx = esi - 2u;
        wr32(sp0 - 0x48u, ebp - 1u);
        if ((int32_t)ecx > (int32_t)(ebp - 1u))
        {
            loc_48 = ebp - 1u;
        }
        else
        {
            wr32(sp0 - 0x48u, ecx);
            loc_48 = ecx;
        }
    }
    else
    {
        wr32(sp0 - 0x48u, 0u);
        loc_48 = 0u;
    }
    if ((int32_t)(esi + 2u) >= 0)
    {
        ecx = esi + 2u;
        wr32(sp0 - 0x98u, ebp - 1u);
        if ((int32_t)ecx > (int32_t)(ebp - 1u))
        {
            loc_98 = ebp - 1u;
        }
        else
        {
            wr32(sp0 - 0x98u, ecx);
            loc_98 = ecx;
        }
    }
    else
    {
        wr32(sp0 - 0x98u, 0u);
        loc_98 = 0u;
    }
    if ((int32_t)(eax - 2u) >= 0)
    {
        ecx = eax - 2u;
        if ((int32_t)ecx > (int32_t)(ebx - 1u))
        {
            edx = ebx - 1u;
            ecx = edx;
        }
    }
    else
    {
        ecx = 0u;
    }
    if ((int32_t)(eax + 2u) >= 0)
    {
        eax = eax + 2u;
        wr32(sp0 - 0x9cu, ebx - 1u);
        if ((int32_t)eax > (int32_t)(ebx - 1u))
        {
            loc_9c = ebx - 1u;
        }
        else
        {
            wr32(sp0 - 0x9cu, eax);
            loc_9c = eax;
        }
    }
    else
    {
        eax = eax + 2u;
        wr32(sp0 - 0x9cu, 0u);
        loc_9c = 0u;
    }
    d8 = (double)rdf32(arg1 + 4u);
    d9 = (double)rdf32(arg2 + 4u);
    if (!(d8 < d9))
    {
        eax = rd32(arg2 + 4u);
        edx = rd32(arg1 + 4u);
    }
    else
    {
        eax = rd32(arg1 + 4u);
        edx = rd32(arg2 + 4u);
    }
    wr32(sp0 - 0x38u, eax);
    wr32(sp0 - 0x30u, edx);
    wr32(sp0 - 0xbcu, 0x49742400u);
    wr8(sp0 - 0xcdu, 0u);
    wr32(sp0 - 0x34u, ecx);
    if ((int32_t)ecx > (int32_t)loc_9c)
    {
        eax = loc_9c;
        edx = ecx;
        goto L_1016bd21;
    }
    loc_38 = eax;
    loc_30 = edx;
    edx = ecx;
    loc_34 = ecx;
L_1016b317: ;
    wr32(sp0 - 0x40u, loc_48);
    if ((int32_t)loc_48 > (int32_t)loc_98)
    {
        ecx = loc_48;
        goto L_1016bd0d;
    }
    ecx = loc_48;
    loc_40 = loc_48;
L_1016b333: ;
    if (rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u) == 0u) goto L_1016bcf9;
    eax = rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u);
L_1016b349: ;
    wr32(sp0 - 0x44u, eax + 4u);
    if ((rd32(eax) >> 8u & 0x20u) == 0u)
    {
        edx = eax + 4u;
        loc_44 = eax + 4u;
        eax = rd32(eax) & 0x7ffu;
        if ((int32_t)eax > 0)
        {
            wr32(sp0 - 0x3cu, eax);
            loc_3c = eax;
L_1016b378: ;
            t10 = rd32(edx + 4u);
            wr32(sp0 - 0x88u, t10);
            if (rd32(edx + 4u) != 0u)
            {
                ecx = t10;
                loc_88 = t10;
                d11 = (double)rdf32(rd32(edx) + 0xb4u);
                if ((cow_fsw(g, d11, cow_bits2f(loc_30), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d11, cow_bits2f(loc_30), 0u) & 0x4100u;
                    ebp = rd32(ecx + 8u);
                    esi = rd32(edx);
                    d12 = (double)rdf32(esi + 0xb8u);
                    if (!(d12 < cow_bits2f(loc_38)))
                    {
                        if (rd32(self + 4u) != rd32(esi + 0xbcu))
                        {
                            d13 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(arg1) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u));
                            wrf32(sp0 - 0xa8u, (float)d13);
                            d14 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x74u));
                            wrf32(sp0 - 0xa4u, (float)d14);
                            d15 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x78u));
                            wrf32(sp0 - 0xa0u, (float)d15);
                            wr32(sp0 - 0xacu, 0u);
                            d16 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg2 + 4u))) + (double)rdf32(esi + 0x78u));
                            wrf32(sp0 - 0x24u, (float)d16);
                            d17 = (double)(float)fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg2 + 8u)) + fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg2 + 4u))) + fr(g, (double)rdf32(esi + 0x40u) * (double)rdf32(arg2))) + (double)rdf32(esi + 0x70u)) - d13);
                            wrf32(sp0 - 0x94u, (float)d17);
                            d18 = (double)(float)fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg2 + 4u))) + (double)rdf32(esi + 0x74u)) - d14);
                            wrf32(sp0 - 0x90u, (float)d18);
                            d19 = (double)(float)fr(g, d16 - d15);
                            wrf32(sp0 - 0x8cu, (float)d19);
                            if (rd16(ecx + 0xeu) != 0u)
                            {
                                loc_a8_f = d13;
                                loc_a4_f = d14;
                                loc_a0_f = d15;
                                loc_94_f = d17;
                                loc_90_f = d18;
                                loc_8c_f = d19;
                                if ((int16_t)rd16(ecx + 0xcu) <= 0) goto L_1016bcbb;
                                eax = 0u;
                                loc_ac = 0u;
L_1016b8ba: ;
                                if ((rd8(ebp + 5u) & 0x40u) == 0u)
                                {
                                    t55 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu);
                                    wr32(sp0 - 0x60u, t55);
                                    t56 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 4u);
                                    wr32(sp0 - 0x5cu, t56);
                                    t57 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 8u);
                                    wr32(sp0 - 0x58u, t57);
                                    t58 = rd32(ecx) + (rd16(ebp) & 0x7fffu) * 0xcu;
                                    wr32(sp0 - 0x54u, t58);
                                    t59 = rd32(ecx) + (rd16(ebp + 2u) & 0x3fffu) * 0xcu;
                                    wr32(sp0 - 0x50u, t59);
                                    d60 = (double)(float)fr(g, cow_bits2f(t55) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                    wrf32(sp0 - 0x60u, (float)d60);
                                    d61 = (double)(float)fr(g, cow_bits2f(t56) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                    wrf32(sp0 - 0x5cu, (float)d61);
                                    t62 = rd32(ecx) + (rd16(ebp + 4u) & 0x3fffu) * 0xcu;
                                    wr32(sp0 - 0x4cu, t62);
                                    d63 = (double)(float)fr(g, cow_bits2f(t57) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                    wrf32(sp0 - 0x58u, (float)d63);
                                    d64 = fr(g, fr(g, fr(g, fr(g, cow_bits2f(t57) * (double)rdf32(COW_IMG(0x1032a3f0u))) * loc_8c_f) + fr(g, d61 * loc_90_f)) + fr(g, d60 * loc_94_f));
                                    if (d64 == (double)rdf32(COW_IMG(0x103295d8u)))
                                    {
                                        x0 = d64;
                                    }
                                    else
                                    {
                                        eax = (t62 & 0xffff0000u) | (uint16_t)cow_fsw(g, d64, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                        edx = t58;
                                        loc_60_f = d60;
                                        loc_5c_f = d61;
                                        loc_58_f = d63;
                                        x0 = d64;
                                        d65 = fr(g, fr(g, fr(g, fr(g, fr(g, loc_58_f * loc_a0_f) + fr(g, loc_5c_f * loc_a4_f)) + fr(g, loc_60_f * loc_a8_f)) - fr(g, fr(g, fr(g, loc_58_f * (double)rdf32(edx + 8u)) + fr(g, loc_5c_f * (double)rdf32(edx + 4u))) + fr(g, loc_60_f * (double)rdf32(edx)))) * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / x0));
                                        wrf32(sp0 - 0xccu, (float)(double)(float)d65);
                                        if (!((double)(float)d65 < (double)rdf32(COW_IMG(0x103295d8u))))
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(float)d65, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                            loc_cc_f = (double)(float)d65;
                                            if ((cow_fsw(g, loc_cc_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
                                            {
                                                eax = cow_fsw(g, loc_cc_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
                                                wr32(sp0 - 0xe4u, sp0 - 0x84u);
                                                wr32(sp0 - 0xe8u, sp0 - 0xc8u);
                                                d66 = (double)(float)fr(g, fr(g, loc_cc_f * loc_94_f) + loc_a8_f);
                                                wrf32(sp0 - 0xc8u, (float)d66);
                                                d67 = (double)(float)fr(g, fr(g, loc_cc_f * loc_90_f) + loc_a4_f);
                                                wrf32(sp0 - 0xc4u, (float)d67);
                                                d68 = (double)(float)fr(g, fr(g, loc_cc_f * loc_8c_f) + loc_a0_f);
                                                wrf32(sp0 - 0xc0u, (float)d68);
                                                g->esp = sp0 - 0xe0u;
                                                t69 = cow_call_regs(g, COW_IMG(0x1016c390u), eax, g->ecx, g->edx, 0, 2, sp0 - 0xc8u, sp0 - 0x84u);
                                                if ((uint8_t)t69 == 0u) goto L_1016bc94;
                                                d70 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp0 - 0xc8u) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u));
                                                wrf32(sp0 - 0xb8u, (float)d70);
                                                d71 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(esi + 0x24u)) + fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(esi + 0x14u))) + fr(g, (double)rdf32(sp0 - 0xc8u) * (double)rdf32(esi + 4u))) + (double)rdf32(esi + 0x34u));
                                                wrf32(sp0 - 0xb4u, (float)d71);
                                                d72 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(esi + 0x28u)) + fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(esi + 0x18u))) + fr(g, (double)rdf32(sp0 - 0xc8u) * (double)rdf32(esi + 8u))) + (double)rdf32(esi + 0x38u));
                                                wrf32(sp0 - 0xb0u, (float)d72);
                                                d73 = fr(g, (double)rdf32(arg1 + 8u) - d72);
                                                d74 = fr(g, (double)rdf32(arg1 + 4u) - d71);
                                                d75 = fr(g, (double)rdf32(arg1) - d70);
                                                d76 = (double)rdf32(sp0 - 0xbcu);
                                                d77 = fr(g, fr(g, fr(g, d73 * d73) + fr(g, d74 * d74)) + fr(g, d75 * d75));
                                                if (d76 <= d77)
                                                {
                                                    x0 = fr(g, fr(g, fr(g, d73 * d73) + fr(g, d74 * d74)) + fr(g, d75 * d75));
                                                    goto L_1016bc92;
                                                }
                                                loc_b8_f = d70;
                                                loc_b4_f = d71;
                                                loc_b0_f = d72;
                                                x0 = fr(g, fr(g, fr(g, d73 * d73) + fr(g, d74 * d74)) + fr(g, d75 * d75));
                                                wrf32(sp0 - 0xbcu, (float)(double)(float)x0);
                                                d78 = (double)rdf32(sp0 - 0x58u);
                                                wr32(arg3, cow_f2bits(loc_b8_f));
                                                wr32(arg3 + 4u, cow_f2bits(loc_b4_f));
                                                wr32(arg3 + 8u, cow_f2bits(loc_b0_f));
                                                d79 = fr(g, fr(g, fr(g, d78 * (double)rdf32(esi + 0x98u)) + fr(g, (double)rdf32(sp0 - 0x5cu) * (double)rdf32(esi + 0x8cu))) + fr(g, (double)rdf32(sp0 - 0x60u) * (double)rdf32(esi + 0x80u)));
                                                wrf32(self + 0x3413cu, (float)d79);
                                                d80 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x58u) * (double)rdf32(esi + 0x9cu)) + fr(g, (double)rdf32(sp0 - 0x5cu) * (double)rdf32(esi + 0x90u))) + fr(g, (double)rdf32(sp0 - 0x60u) * (double)rdf32(esi + 0x84u)));
                                                wrf32(self + 0x34140u, (float)d80);
                                                d81 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x58u) * (double)rdf32(esi + 0xa0u)) + fr(g, (double)rdf32(sp0 - 0x5cu) * (double)rdf32(esi + 0x94u))) + fr(g, (double)rdf32(sp0 - 0x60u) * (double)rdf32(esi + 0x88u)));
                                                wrf32(self + 0x34144u, (float)d81);
                                                t82 = (((rd16(ebp + 6u) >> 0xfu) * 2u | rd16(ebp + 4u) >> 0xfu) * 2u | rd16(ebp + 2u) >> 0xfu) * 2u | rd16(ebp) >> 0xfu;
                                                wr32(self + 0x34148u, t82);
                                                t83 = (uint32_t)((int32_t)(rd32(esi + 0xa4u) << 6u) >> 0xcu);
                                                wr32(self + 0x3414cu, t83);
                                                t84 = rd32(esi + 0xa4u) >> 2u & 1u;
                                                wr32(self + 0x34150u, t84);
                                                t85 = rd32(esi + 0xa4u);
                                                t86 = (t85 >> 0x1au & 3u) << 3u | (t85 >> 3u & 7u);
                                                wr32(self + 0x34154u, t86);
                                                t87 = rd32(esi + 0xb0u);
                                                wr32(self + 0x34158u, t87);
                                                t88 = rd8(esi + 0xacu);
                                                wr8(self + 0x3415cu, (uint8_t)t88);
                                                wr8(self + 0x3415du, rd8(esi + 0xadu));
                                                wr8(self + 0x3415eu, rd8(esi + 0xaeu));
                                                wr8(self + 0x3415fu, rd8(esi + 0xafu));
                                                t89 = rd32(esi + 0xa8u);
                                                wr8(sp0 - 0xcdu, 1u);
                                                wr32(self + 0x1807cu, t89);
                                                ecx = rd32(sp0 - 0x88u);
                                            }
                                        }
                                    }
L_1016bc9c: ;
                                }
                                wr32(sp0 - 0xacu, loc_ac + 1u);
                                if ((int32_t)(loc_ac + 1u) < (int16_t)rd16(ecx + 0xcu))
                                {
                                    eax = loc_ac + 1u;
                                    ebp = ebp + 8u;
                                    loc_ac = loc_ac + 1u;
                                    goto L_1016b8ba;
                                }
                            }
                            else
                            {
                                loc_a8_f = d13;
                                loc_a4_f = d14;
                                loc_a0_f = d15;
                                loc_94_f = d17;
                                loc_90_f = d18;
                                loc_8c_f = d19;
                                if ((int16_t)rd16(ecx + 0xcu) <= 0) goto L_1016bcbb;
                                eax = 0u;
                                loc_ac = 0u;
L_1016b4b4: ;
                                t20 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu);
                                wr32(sp0 - 0x60u, t20);
                                t21 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 4u);
                                wr32(sp0 - 0x5cu, t21);
                                t22 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 8u);
                                wr32(sp0 - 0x58u, t22);
                                t23 = rd32(ecx) + (rd16(ebp) & 0x7fffu) * 0xcu;
                                wr32(sp0 - 0x54u, t23);
                                t24 = rd32(ecx) + (rd16(ebp + 2u) & 0x3fffu) * 0xcu;
                                wr32(sp0 - 0x50u, t24);
                                d25 = (double)(float)fr(g, cow_bits2f(t20) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x60u, (float)d25);
                                d26 = (double)(float)fr(g, cow_bits2f(t21) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x5cu, (float)d26);
                                t27 = rd32(ecx) + (rd16(ebp + 4u) & 0x3fffu) * 0xcu;
                                wr32(sp0 - 0x4cu, t27);
                                d28 = (double)(float)fr(g, cow_bits2f(t22) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x58u, (float)d28);
                                d29 = fr(g, fr(g, fr(g, fr(g, cow_bits2f(t22) * (double)rdf32(COW_IMG(0x1032a3f0u))) * loc_8c_f) + fr(g, d26 * loc_90_f)) + fr(g, d25 * loc_94_f));
                                if (d29 == (double)rdf32(COW_IMG(0x103295d8u)))
                                {
                                    x0 = d29;
                                }
                                else
                                {
                                    eax = (t27 & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                    edx = t23;
                                    loc_60_f = d25;
                                    loc_5c_f = d26;
                                    loc_58_f = d28;
                                    x0 = d29;
                                    d30 = fr(g, fr(g, fr(g, fr(g, fr(g, loc_58_f * loc_a0_f) + fr(g, loc_5c_f * loc_a4_f)) + fr(g, loc_60_f * loc_a8_f)) - fr(g, fr(g, fr(g, loc_58_f * (double)rdf32(edx + 8u)) + fr(g, loc_5c_f * (double)rdf32(edx + 4u))) + fr(g, loc_60_f * (double)rdf32(edx)))) * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / x0));
                                    wrf32(sp0 - 0xccu, (float)(double)(float)d30);
                                    if (!((double)(float)d30 < (double)rdf32(COW_IMG(0x103295d8u))))
                                    {
                                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(float)d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                        loc_cc_f = (double)(float)d30;
                                        if ((cow_fsw(g, loc_cc_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
                                        {
                                            eax = cow_fsw(g, loc_cc_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
                                            wr32(sp0 - 0xe4u, sp0 - 0x84u);
                                            wr32(sp0 - 0xe8u, sp0 - 0xc8u);
                                            d31 = (double)(float)fr(g, fr(g, loc_cc_f * loc_94_f) + loc_a8_f);
                                            wrf32(sp0 - 0xc8u, (float)d31);
                                            d32 = (double)(float)fr(g, fr(g, loc_cc_f * loc_90_f) + loc_a4_f);
                                            wrf32(sp0 - 0xc4u, (float)d32);
                                            d33 = (double)(float)fr(g, fr(g, loc_cc_f * loc_8c_f) + loc_a0_f);
                                            wrf32(sp0 - 0xc0u, (float)d33);
                                            g->esp = sp0 - 0xe0u;
                                            t34 = cow_call_regs(g, COW_IMG(0x1016c390u), eax, g->ecx, g->edx, 0, 2, sp0 - 0xc8u, sp0 - 0x84u);
                                            if ((uint8_t)t34 == 0u) goto L_1016b884;
                                            d35 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp0 - 0xc8u) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u));
                                            wrf32(sp0 - 0xb8u, (float)d35);
                                            d36 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(esi + 0x24u)) + fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(esi + 0x14u))) + fr(g, (double)rdf32(sp0 - 0xc8u) * (double)rdf32(esi + 4u))) + (double)rdf32(esi + 0x34u));
                                            wrf32(sp0 - 0xb4u, (float)d36);
                                            d37 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(esi + 0x28u)) + fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(esi + 0x18u))) + fr(g, (double)rdf32(sp0 - 0xc8u) * (double)rdf32(esi + 8u))) + (double)rdf32(esi + 0x38u));
                                            wrf32(sp0 - 0xb0u, (float)d37);
                                            d38 = fr(g, (double)rdf32(arg1 + 8u) - d37);
                                            d39 = fr(g, (double)rdf32(arg1 + 4u) - d36);
                                            d40 = fr(g, (double)rdf32(arg1) - d35);
                                            d41 = (double)rdf32(sp0 - 0xbcu);
                                            d42 = fr(g, fr(g, fr(g, d38 * d38) + fr(g, d39 * d39)) + fr(g, d40 * d40));
                                            if (d41 <= d42)
                                            {
                                                x0 = fr(g, fr(g, fr(g, d38 * d38) + fr(g, d39 * d39)) + fr(g, d40 * d40));
                                                goto L_1016b882;
                                            }
                                            loc_b8_f = d35;
                                            loc_b4_f = d36;
                                            loc_b0_f = d37;
                                            x0 = fr(g, fr(g, fr(g, d38 * d38) + fr(g, d39 * d39)) + fr(g, d40 * d40));
                                            wrf32(sp0 - 0xbcu, (float)(double)(float)x0);
                                            d43 = (double)rdf32(sp0 - 0x58u);
                                            wr32(arg3, cow_f2bits(loc_b8_f));
                                            wr32(arg3 + 4u, cow_f2bits(loc_b4_f));
                                            wr32(arg3 + 8u, cow_f2bits(loc_b0_f));
                                            d44 = fr(g, fr(g, fr(g, d43 * (double)rdf32(esi + 0x98u)) + fr(g, (double)rdf32(sp0 - 0x5cu) * (double)rdf32(esi + 0x8cu))) + fr(g, (double)rdf32(sp0 - 0x60u) * (double)rdf32(esi + 0x80u)));
                                            wrf32(self + 0x3413cu, (float)d44);
                                            d45 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x58u) * (double)rdf32(esi + 0x9cu)) + fr(g, (double)rdf32(sp0 - 0x5cu) * (double)rdf32(esi + 0x90u))) + fr(g, (double)rdf32(sp0 - 0x60u) * (double)rdf32(esi + 0x84u)));
                                            wrf32(self + 0x34140u, (float)d45);
                                            d46 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x58u) * (double)rdf32(esi + 0xa0u)) + fr(g, (double)rdf32(sp0 - 0x5cu) * (double)rdf32(esi + 0x94u))) + fr(g, (double)rdf32(sp0 - 0x60u) * (double)rdf32(esi + 0x88u)));
                                            wrf32(self + 0x34144u, (float)d46);
                                            t47 = (((rd16(ebp + 6u) >> 0xfu) * 2u | rd16(ebp + 4u) >> 0xfu) * 2u | rd16(ebp + 2u) >> 0xfu) * 2u | rd16(ebp) >> 0xfu;
                                            wr32(self + 0x34148u, t47);
                                            t48 = (uint32_t)((int32_t)(rd32(esi + 0xa4u) << 6u) >> 0xcu);
                                            wr32(self + 0x3414cu, t48);
                                            t49 = rd32(esi + 0xa4u) >> 2u & 1u;
                                            wr32(self + 0x34150u, t49);
                                            t50 = rd32(esi + 0xa4u);
                                            t51 = (t50 >> 0x1au & 3u) << 3u | (t50 >> 3u & 7u);
                                            wr32(self + 0x34154u, t51);
                                            t52 = rd32(esi + 0xb0u);
                                            wr32(self + 0x34158u, t52);
                                            t53 = rd8(esi + 0xacu);
                                            wr8(self + 0x3415cu, (uint8_t)t53);
                                            wr8(self + 0x3415du, rd8(esi + 0xadu));
                                            wr8(self + 0x3415eu, rd8(esi + 0xaeu));
                                            wr8(self + 0x3415fu, rd8(esi + 0xafu));
                                            t54 = rd32(esi + 0xa8u);
                                            wr8(sp0 - 0xcdu, 1u);
                                            wr32(self + 0x1807cu, t54);
                                            ecx = rd32(sp0 - 0x88u);
                                        }
                                    }
                                }
L_1016b88c: ;
                                wr32(sp0 - 0xacu, loc_ac + 1u);
                                if ((int32_t)(loc_ac + 1u) < (int16_t)rd16(ecx + 0xcu))
                                {
                                    eax = loc_ac + 1u;
                                    ebp = ebp + 8u;
                                    loc_ac = loc_ac + 1u;
                                    goto L_1016b4b4;
                                }
                            }
                        }
                    }
                }
            }
L_1016bcbb: ;
            wr32(sp0 - 0x44u, loc_44 + 8u);
            wr32(sp0 - 0x3cu, loc_3c - 1u);
            if (loc_3c != 1u)
            {
                eax = loc_3c - 1u;
                edx = loc_44 + 8u;
                loc_44 = loc_44 + 8u;
                loc_3c = loc_3c - 1u;
                goto L_1016b378;
            }
            edx = loc_44 + 8u;
        }
    }
    else
    {
        edx = eax + 4u;
        eax = rd32(eax) & 0x7ffu;
        edx = eax * 8u + edx;
    }
    if (rd32(edx) != 0u)
    {
        eax = rd32(edx);
        goto L_1016b349;
    }
    ecx = loc_40;
    edx = loc_34;
L_1016bcf9: ;
    wr32(sp0 - 0x40u, ecx + 1u);
    if ((int32_t)(ecx + 1u) <= (int32_t)loc_98)
    {
        loc_40 = ecx + 1u;
        ecx = ecx + 1u;
        goto L_1016b333;
    }
    ecx = ecx + 1u;
L_1016bd0d: ;
    wr32(sp0 - 0x34u, edx + 1u);
    if ((int32_t)(edx + 1u) <= (int32_t)loc_9c)
    {
        loc_34 = edx + 1u;
        edx = edx + 1u;
        goto L_1016b317;
    }
    eax = loc_9c;
    edx = edx + 1u;
L_1016bd21: ;
    wr32(sp0 - 0xe4u, 6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe0u;
    t90 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 6u);
    t91 = g->edx;
    if ((uint8_t)t90 != 0u)
    {
        eax = t90;
    }
    else
    {
        eax = t90;
        edx = t91;
        if (rd32(COW_IMG(0x106631d4u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x106631d4u));
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xe0u;
            t92 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
            t93 = g->ecx;
            t94 = g->edx;
            if ((uint8_t)t92 != 0u)
            {
                eax = t92;
            }
            else
            {
                eax = t92;
                ecx = t93;
                edx = t94;
                g->eax = eax;
                g->esp = sp0 - 0xe0u;
                t95 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, edx, 1, 0);
                t96 = g->edx;
                if (t95 == 0u)
                {
                    eax = t95;
                    goto L_1016bdc8;
                }
                eax = t95;
                edx = t96;
                esi = t95;
L_1016bd55: ;
                wr32(sp0 - 0xe4u, COW_IMG(0x10330684u));
                g->eax = eax;
                g->esp = sp0 - 0xe0u;
                t97 = cow_fastcall(g, COW_IMG(0x1002c8f0u), esi, edx, 1, COW_IMG(0x10330684u));
                t98 = g->edx;
                if ((uint8_t)t97 == 0u)
                {
                    eax = t97;
                    edx = t98;
                }
                else
                {
                    eax = t97;
                    edx = t98;
                    if (esi != 0u)
                    {
                        wr32(sp0 - 0xe4u, sp0 - 0x10u);
                        wr32(sp0 - 0xe8u, sp0 - 0x20u);
                        g->eax = sp0 - 0x10u;
                        g->edx = edx;
                        g->esp = sp0 - 0xe0u;
                        t99 = cow_thiscall(g, COW_IMG(0x100c4bc0u), esi, 2, sp0 - 0x20u, sp0 - 0x10u);
                        t100 = g->edx;
                        if (t99 == 0u)
                        {
                            eax = t99;
                            edx = t100;
                        }
                        else
                        {
                            eax = t99;
                            wr32(sp0 - 0xe4u, arg3);
                            wr32(sp0 - 0xe8u, arg2);
                            wr32(sp0 - 0xecu, arg1);
                            wr32(sp0 - 0xf0u, sp0 - 0x10u);
                            wr32(sp0 - 0xf4u, sp0 - 0x20u);
                            wr32(sp0 - 0xf8u, eax);
                            wr32(sp0 - 0xfcu, sp0 - 0xbcu);
                            g->eax = eax;
                            g->edx = sp0 - 0xbcu;
                            g->esp = sp0 - 0xe0u;
                            t101 = cow_thiscall(g, COW_IMG(0x1016c5d0u), self, 7, sp0 - 0xbcu, eax, sp0 - 0x20u, sp0 - 0x10u, arg1, arg2, arg3);
                            t102 = g->edx;
                            if ((uint8_t)t101 == 0u)
                            {
                                eax = t101;
                                edx = t102;
                            }
                            else
                            {
                                eax = t101;
                                edx = t102;
                                wr8(sp0 - 0xcdu, 1u);
                            }
                        }
                    }
                }
                g->eax = eax;
                g->esp = sp0 - 0xe0u;
                t103 = cow_fastcall(g, COW_IMG(0x10085270u), esi, edx, 0);
                t104 = g->edx;
                if (t103 != 0u)
                {
                    eax = t103;
                    edx = t104;
                    esi = t103;
                    goto L_1016bd55;
                }
                eax = t103;
            }
        }
    }
L_1016bdc8: ;
    g->ebx = rd32(sp0 - 0xd4u);
    g->esi = rd32(sp0 - 0xdcu);
    g->edi = rd32(sp0 - 0xe0u);
    g->ebp = rd32(sp0 - 0xd8u);
    return (eax & 0xffffff00u) | rd8(sp0 - 0xcdu);
L_1016b882: ;
L_1016b884: ;
    ecx = rd32(sp0 - 0x88u);
    goto L_1016b88c;
L_1016bc92: ;
L_1016bc94: ;
    ecx = rd32(sp0 - 0x88u);
    goto L_1016bc9c;
L_1016bdd9: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016b1d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1016b1d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
