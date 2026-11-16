/* f_0x1016a990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1016a990(Guest* g)
{
    double d10;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d3;
    double d30;
    double d31;
    double d37;
    double d38;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d59;
    double d6;
    double d60;
    double d61;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    double loc_14_f;
    double loc_18_f;
    uint32_t loc_24;
    double loc_28_f;
    double loc_2c_f;
    double loc_30_f;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    double loc_64_f;
    double loc_68_f;
    double loc_6c_f;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_80;
    uint32_t loc_84;
    double loc_88_f;
    double loc_8c_f;
    double loc_90_f;
    double loc_a0_f;
    double loc_a4_f;
    double loc_a8_f;
    double loc_ac_f;
    uint32_t loc_b0;
    uint32_t loc_b4;
    uint32_t loc_b8;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t39;
    uint32_t t4;
    uint32_t t47;
    uint32_t t5;
    uint32_t t57;
    uint32_t t58;
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
    uint32_t t8;
    uint32_t t9;
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
    cow_frame(g, sp0, 216u);

    wr32(sp0 - 0xc0u, in_ebx);
    wr32(sp0 - 0xc4u, in_ebp);
    wr32(sp0 - 0xc8u, in_esi);
    wr32(sp0 - 0xccu, in_edi);
    t1 = rd32(self + 0x60u);
    wr32(self + 0x1807cu, 0u);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_1016b1b8;
    }
    eax = t1;
    d2 = (double)rdf32(arg1 + 4u);
    d3 = (double)rdf32(arg2 + 4u);
    if (!(d2 < d3))
    {
        eax = rd32(arg1 + 4u);
        wr32(sp0 - 0x78u, eax);
        t5 = rd32(arg2 + 4u);
        wr32(sp0 - 0x60u, t5);
        ecx = self;
        edx = t5;
        loc_60 = t5;
        loc_78 = eax;
    }
    else
    {
        eax = rd32(arg1 + 4u);
        wr32(sp0 - 0x60u, eax);
        t4 = rd32(arg2 + 4u);
        wr32(sp0 - 0x78u, t4);
        ecx = t4;
        edx = in_edx;
        loc_60 = eax;
        loc_78 = t4;
    }
    g->ecx = ecx;
    g->edx = edx;
    d6 = fr(g, fr(g, (double)rdf32(self + 0x40u) + (double)rdf32(arg1)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d6);
    g->esp = sp0 - 0xccu;
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        goto L_1016b1b8;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    ebp = t7;
    if ((int32_t)ebp >= (int32_t)rd32(self + 0x48u)) goto L_1016b1b8;
    g->ecx = ecx;
    d10 = fr(g, fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d10);
    g->esp = sp0 - 0xccu;
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    if ((int32_t)t11 < 0)
    {
        eax = t11;
        goto L_1016b1b8;
    }
    eax = t11;
    ecx = t12;
    if ((int32_t)eax >= (int32_t)rd32(self + 0x4cu)) goto L_1016b1b8;
    esi = rd32(self + 0x4cu);
    if (rd8(self + 0x3413au) == 0u)
    {
        if ((int32_t)(ebp - 1u) >= 0)
        {
            ecx = ebp - 1u;
            t15 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xb4u, t15);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_b4 = t15;
            }
            else
            {
                wr32(sp0 - 0xb4u, ecx);
                loc_b4 = ecx;
            }
        }
        else
        {
            wr32(sp0 - 0xb4u, 0u);
            loc_b4 = 0u;
        }
        if ((int32_t)(ebp + 1u) >= 0)
        {
            ecx = ebp + 1u;
            t16 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xb8u, t16);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_b8 = t16;
            }
            else
            {
                wr32(sp0 - 0xb8u, ecx);
                loc_b8 = ecx;
            }
        }
        else
        {
            wr32(sp0 - 0xb8u, 0u);
            loc_b8 = 0u;
        }
        if ((int32_t)(eax - 1u) >= 0)
        {
            ecx = eax - 1u;
            if ((int32_t)ecx > (int32_t)(esi - 1u))
            {
                edx = esi - 1u;
                ecx = edx;
            }
        }
        else
        {
            ecx = 0u;
        }
        eax = eax + 1u;
    }
    else
    {
        if ((int32_t)(ebp - 2u) >= 0)
        {
            ecx = ebp - 2u;
            t13 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xb4u, t13);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_b4 = t13;
            }
            else
            {
                wr32(sp0 - 0xb4u, ecx);
                loc_b4 = ecx;
            }
        }
        else
        {
            wr32(sp0 - 0xb4u, 0u);
            loc_b4 = 0u;
        }
        if ((int32_t)(ebp + 2u) >= 0)
        {
            ecx = ebp + 2u;
            t14 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xb8u, t14);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_b8 = t14;
            }
            else
            {
                wr32(sp0 - 0xb8u, ecx);
                loc_b8 = ecx;
            }
        }
        else
        {
            wr32(sp0 - 0xb8u, 0u);
            loc_b8 = 0u;
        }
        if ((int32_t)(eax - 2u) >= 0)
        {
            ecx = eax - 2u;
            if ((int32_t)ecx > (int32_t)(esi - 1u))
            {
                edx = esi - 1u;
                ecx = edx;
            }
            eax = eax + 2u;
        }
        else
        {
            eax = eax + 2u;
            ecx = 0u;
        }
    }
    if ((int32_t)eax >= 0)
    {
        wr32(sp0 - 0xb0u, esi - 1u);
        if ((int32_t)eax > (int32_t)(esi - 1u))
        {
            loc_b0 = esi - 1u;
        }
        else
        {
            wr32(sp0 - 0xb0u, eax);
            loc_b0 = eax;
        }
    }
    else
    {
        wr32(sp0 - 0xb0u, 0u);
        loc_b0 = 0u;
    }
    wr32(sp0 - 0x7cu, 0x49742400u);
    wr8(sp0 - 0xb9u, 0u);
    wr32(sp0 - 0x58u, ecx);
    if ((int32_t)ecx > (int32_t)loc_b0)
    {
        eax = loc_b0;
    }
    else
    {
        edx = ecx;
        loc_58 = ecx;
        eax = loc_b4;
L_1016ab27: ;
        wr32(sp0 - 0x70u, eax);
        if ((int32_t)eax > (int32_t)loc_b8) goto L_1016b196;
        ecx = eax;
        loc_70 = eax;
L_1016ab39: ;
        if (rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u) == 0u) goto L_1016b181;
        eax = rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u);
L_1016ab4f: ;
        wr32(sp0 - 0x80u, eax + 4u);
        if ((rd32(eax) >> 8u & 0x20u) == 0u)
        {
            edx = eax + 4u;
            loc_80 = eax + 4u;
            eax = rd32(eax) & 0x7ffu;
            if ((int32_t)eax > 0)
            {
                wr32(sp0 - 0x5cu, eax);
                loc_5c = eax;
L_1016ab78: ;
                t17 = rd32(edx + 4u);
                wr32(sp0 - 0x74u, t17);
                if (rd32(edx + 4u) != 0u)
                {
                    ecx = t17;
                    loc_74 = t17;
                    d18 = (double)rdf32(rd32(edx) + 0xb4u);
                    d19 = (double)rdf32(sp0 - 0x78u);
                    if ((cow_fsw(g, d18, d19, 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d18, d19, 0u) & 0x4100u;
                        ebp = rd32(ecx + 8u);
                        esi = rd32(edx);
                        d20 = (double)rdf32(esi + 0xb8u);
                        d21 = (double)rdf32(sp0 - 0x60u);
                        if (!(d20 < d21))
                        {
                            if (rd32(self + 4u) != rd32(esi + 0xbcu))
                            {
                                d22 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(arg1) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u));
                                wrf32(sp0 - 0x90u, (float)d22);
                                d23 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x74u));
                                wrf32(sp0 - 0x8cu, (float)d23);
                                d24 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x78u));
                                wrf32(sp0 - 0x88u, (float)d24);
                                d25 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg2 + 4u))) + (double)rdf32(esi + 0x78u));
                                wrf32(sp0 - 4u, (float)d25);
                                d26 = (double)(float)fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg2 + 8u)) + fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg2 + 4u))) + fr(g, (double)rdf32(arg2) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u)) - d22);
                                wrf32(sp0 - 0xa8u, (float)d26);
                                d27 = (double)(float)fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg2 + 4u))) + (double)rdf32(esi + 0x74u)) - d23);
                                wrf32(sp0 - 0xa4u, (float)d27);
                                d28 = (double)(float)fr(g, d25 - d24);
                                wrf32(sp0 - 0xa0u, (float)d28);
                                d29 = (double)(float)fr(g, d26 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, fr(g, d25 - d24) * d28) + fr(g, d27 * d27)) + fr(g, d26 * d26))))));
                                wrf32(sp0 - 0x18u, (float)d29);
                                wr32(sp0 - 0x84u, 0u);
                                d30 = (double)(float)fr(g, d27 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, fr(g, d25 - d24) * d28) + fr(g, d27 * d27)) + fr(g, d26 * d26))))));
                                wrf32(sp0 - 0x14u, (float)d30);
                                d31 = (double)(float)fr(g, d28 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, fr(g, d25 - d24) * d28) + fr(g, d27 * d27)) + fr(g, d26 * d26))))));
                                wrf32(sp0 - 0x10u, (float)d31);
                                if ((int16_t)rd16(ecx + 0xcu) <= 0) goto L_1016b159;
                                eax = arg1;
                                loc_90_f = d22;
                                loc_8c_f = d23;
                                loc_88_f = d24;
                                loc_a8_f = d26;
                                loc_a4_f = d27;
                                loc_a0_f = d28;
                                loc_18_f = d29;
                                loc_84 = 0u;
                                loc_14_f = d30;
                                loc_10_f = d31;
L_1016acee: ;
                                t32 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu);
                                wr32(sp0 - 0x30u, t32);
                                t33 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 4u);
                                wr32(sp0 - 0x2cu, t33);
                                t34 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 8u);
                                wr32(sp0 - 0x28u, t34);
                                t35 = rd32(ecx) + (rd16(ebp) & 0x7fffu) * 0xcu;
                                wr32(sp0 - 0x24u, t35);
                                t36 = rd32(ecx) + (rd16(ebp + 2u) & 0x3fffu) * 0xcu;
                                wr32(sp0 - 0x20u, t36);
                                d37 = (double)(float)fr(g, cow_bits2f(t32) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x30u, (float)d37);
                                d38 = (double)(float)fr(g, cow_bits2f(t33) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x2cu, (float)d38);
                                t39 = rd32(ecx) + (rd16(ebp + 4u) & 0x3fffu) * 0xcu;
                                wr32(sp0 - 0x1cu, t39);
                                d40 = (double)(float)fr(g, cow_bits2f(t34) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x28u, (float)d40);
                                d41 = fr(g, fr(g, fr(g, fr(g, cow_bits2f(t34) * (double)rdf32(COW_IMG(0x1032a3f0u))) * loc_10_f) + fr(g, d38 * loc_14_f)) + fr(g, d37 * loc_18_f));
                                if (!(d41 <= (double)rdf32(COW_IMG(0x103295d8u))))
                                {
                                    eax = (t39 & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                    loc_30_f = d37;
                                    loc_2c_f = d38;
                                    loc_28_f = d40;
                                    loc_24 = t35;
                                    d42 = fr(g, fr(g, fr(g, loc_28_f * loc_a0_f) + fr(g, loc_2c_f * loc_a4_f)) + fr(g, loc_30_f * loc_a8_f));
                                    if (d42 == (double)rdf32(COW_IMG(0x103295d8u)))
                                    {
                                        x0 = d42;
                                    }
                                    else
                                    {
                                        x0 = d42;
                                        d43 = fr(g, fr(g, fr(g, fr(g, fr(g, loc_28_f * loc_88_f) + fr(g, loc_2c_f * loc_8c_f)) + fr(g, loc_30_f * loc_90_f)) - fr(g, fr(g, fr(g, loc_28_f * (double)rdf32(loc_24 + 8u)) + fr(g, loc_2c_f * (double)rdf32(loc_24 + 4u))) + fr(g, loc_30_f * (double)rdf32(loc_24)))) * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / x0));
                                        wrf32(sp0 - 0xacu, (float)(double)(float)d43);
                                        if (!((double)(float)d43 < (double)rdf32(COW_IMG(0x103295d8u))))
                                        {
                                            eax = (loc_24 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(float)d43, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                            loc_ac_f = (double)(float)d43;
                                            if ((cow_fsw(g, loc_ac_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
                                            {
                                                eax = cow_fsw(g, loc_ac_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
                                                wr32(sp0 - 0xd0u, sp0 - 0x54u);
                                                wr32(sp0 - 0xd4u, sp0 - 0x9cu);
                                                d44 = (double)(float)fr(g, fr(g, loc_ac_f * loc_a8_f) + loc_90_f);
                                                wrf32(sp0 - 0x9cu, (float)d44);
                                                d45 = (double)(float)fr(g, fr(g, loc_ac_f * loc_a4_f) + loc_8c_f);
                                                wrf32(sp0 - 0x98u, (float)d45);
                                                d46 = (double)(float)fr(g, fr(g, loc_ac_f * loc_a0_f) + loc_88_f);
                                                wrf32(sp0 - 0x94u, (float)d46);
                                                g->esp = sp0 - 0xccu;
                                                t47 = cow_call_regs(g, COW_IMG(0x1016c390u), eax, g->ecx, g->edx, 0, 2, sp0 - 0x9cu, sp0 - 0x54u);
                                                if ((uint8_t)t47 == 0u) goto L_1016b12e;
                                                d48 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u));
                                                wrf32(sp0 - 0x6cu, (float)d48);
                                                d49 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x24u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x14u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi + 4u))) + (double)rdf32(esi + 0x34u));
                                                wrf32(sp0 - 0x68u, (float)d49);
                                                d50 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x28u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x18u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi + 8u))) + (double)rdf32(esi + 0x38u));
                                                wrf32(sp0 - 0x64u, (float)d50);
                                                d51 = fr(g, (double)rdf32(arg1 + 8u) - d50);
                                                d52 = fr(g, (double)rdf32(arg1 + 4u) - d49);
                                                d53 = fr(g, (double)rdf32(arg1) - d48);
                                                d54 = (double)rdf32(sp0 - 0x7cu);
                                                d55 = fr(g, fr(g, fr(g, d51 * d51) + fr(g, d52 * d52)) + fr(g, d53 * d53));
                                                if (d54 <= d55)
                                                {
                                                    x0 = fr(g, fr(g, fr(g, d51 * d51) + fr(g, d52 * d52)) + fr(g, d53 * d53));
                                                    goto L_1016b12c;
                                                }
                                                loc_6c_f = d48;
                                                loc_68_f = d49;
                                                loc_64_f = d50;
                                                x0 = fr(g, fr(g, fr(g, d51 * d51) + fr(g, d52 * d52)) + fr(g, d53 * d53));
                                                wrf32(sp0 - 0x7cu, (float)(double)(float)x0);
                                                d56 = (double)rdf32(sp0 - 0x28u);
                                                wr32(arg3, cow_f2bits(loc_6c_f));
                                                wr32(arg3 + 4u, cow_f2bits(loc_68_f));
                                                wr32(arg3 + 8u, cow_f2bits(loc_64_f));
                                                t57 = rd32(sp0 - 0x30u);
                                                t58 = rd32(sp0 - 0x2cu);
                                                d59 = fr(g, fr(g, fr(g, d56 * (double)rdf32(esi + 0x98u)) + fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(esi + 0x8cu))) + fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(esi + 0x80u)));
                                                wrf32(self + 0x3413cu, (float)d59);
                                                d60 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x28u) * (double)rdf32(esi + 0x9cu)) + fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(esi + 0x90u))) + fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(esi + 0x84u)));
                                                wrf32(self + 0x34140u, (float)d60);
                                                d61 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x28u) * (double)rdf32(esi + 0xa0u)) + fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(esi + 0x94u))) + fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(esi + 0x88u)));
                                                wrf32(self + 0x34144u, (float)d61);
                                                wr32(self + 0x1a114u, t57);
                                                t62 = rd32(sp0 - 0x28u);
                                                wr32(self + 0x1a118u, t58);
                                                wr32(self + 0x1a11cu, t62);
                                                t63 = (((rd16(ebp + 6u) >> 0xfu) * 2u | rd16(ebp + 4u) >> 0xfu) * 2u | rd16(ebp + 2u) >> 0xfu) * 2u | rd16(ebp) >> 0xfu;
                                                wr32(self + 0x34148u, t63);
                                                t64 = (uint32_t)((int32_t)(rd32(esi + 0xa4u) << 6u) >> 0xcu);
                                                wr32(self + 0x3414cu, t64);
                                                t65 = rd32(esi + 0xa4u) >> 2u & 1u;
                                                wr32(self + 0x34150u, t65);
                                                t66 = rd32(esi + 0xa4u);
                                                t67 = (t66 >> 0x1au & 3u) << 3u | (t66 >> 3u & 7u);
                                                wr32(self + 0x34154u, t67);
                                                t68 = rd32(esi + 0xb0u);
                                                wr32(self + 0x34158u, t68);
                                                t69 = rd8(esi + 0xacu);
                                                wr8(self + 0x3415cu, (uint8_t)t69);
                                                wr8(self + 0x3415du, rd8(esi + 0xadu));
                                                wr8(self + 0x3415eu, rd8(esi + 0xaeu));
                                                t70 = rd8(esi + 0xafu);
                                                wr8(sp0 - 0xb9u, 1u);
                                                wr8(self + 0x3415fu, (uint8_t)t70);
                                                t71 = rd32(esi + 0xa8u);
                                                t72 = rd32(sp0 - 0x74u);
                                                wr32(self + 0x1807cu, t71);
                                                ecx = t72;
                                            }
                                        }
                                    }
                                }
L_1016b13d: ;
                                wr32(sp0 - 0x84u, loc_84 + 1u);
                                if ((int32_t)(loc_84 + 1u) < (int16_t)rd16(ecx + 0xcu))
                                {
                                    eax = (uint32_t)(int16_t)rd16(ecx + 0xcu);
                                    ebp = ebp + 8u;
                                    loc_84 = loc_84 + 1u;
                                    goto L_1016acee;
                                }
                                edx = loc_80;
                            }
                        }
                    }
                }
L_1016b159: ;
                wr32(sp0 - 0x80u, edx + 8u);
                wr32(sp0 - 0x5cu, loc_5c - 1u);
                if (loc_5c != 1u)
                {
                    eax = loc_5c - 1u;
                    loc_80 = edx + 8u;
                    edx = edx + 8u;
                    loc_5c = loc_5c - 1u;
                    goto L_1016ab78;
                }
                edx = edx + 8u;
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
            goto L_1016ab4f;
        }
        ecx = loc_70;
        edx = loc_58;
L_1016b181: ;
        wr32(sp0 - 0x70u, ecx + 1u);
        if ((int32_t)(ecx + 1u) <= (int32_t)loc_b8)
        {
            loc_70 = ecx + 1u;
            ecx = ecx + 1u;
            goto L_1016ab39;
        }
        eax = loc_b4;
L_1016b196: ;
        wr32(sp0 - 0x58u, edx + 1u);
        if ((int32_t)(edx + 1u) <= (int32_t)loc_b0)
        {
            loc_58 = edx + 1u;
            edx = edx + 1u;
            goto L_1016ab27;
        }
    }
    g->ebx = rd32(sp0 - 0xc0u);
    g->esi = rd32(sp0 - 0xc8u);
    g->edi = rd32(sp0 - 0xccu);
    g->ebp = rd32(sp0 - 0xc4u);
    return (eax & 0xffffff00u) | rd8(sp0 - 0xb9u);
L_1016b12c: ;
L_1016b12e: ;
    ecx = rd32(sp0 - 0x74u);
    goto L_1016b13d;
L_1016b1b8: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016a990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1016a990(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
