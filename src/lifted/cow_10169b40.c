/* f_0x10169b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10169b40(Guest* g)
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
    double d3;
    double d34;
    double d35;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    double loc_1c_f;
    double loc_20_f;
    double loc_24_f;
    uint32_t loc_4c;
    uint32_t loc_50;
    double loc_54_f;
    double loc_58_f;
    double loc_5c_f;
    uint32_t loc_60;
    double loc_64_f;
    double loc_68_f;
    double loc_6c_f;
    uint32_t loc_70;
    uint32_t loc_78;
    uint32_t loc_7c;
    uint32_t loc_80;
    uint32_t loc_84;
    double loc_88_f;
    double loc_8c_f;
    double loc_90_f;
    double loc_a0_f;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t36;
    uint32_t t4;
    uint32_t t43;
    uint32_t t5;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t7;
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
    cow_frame(g, sp0, 204u);

    wr32(sp0 - 0xb4u, in_ebx);
    wr32(sp0 - 0xb8u, in_ebp);
    wr32(sp0 - 0xbcu, in_esi);
    wr32(sp0 - 0xc0u, in_edi);
    t1 = rd32(self + 0x60u);
    wr32(self + 0x1807cu, 0u);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_1016a2bd;
    }
    eax = t1;
    d2 = (double)rdf32(arg1 + 4u);
    d3 = (double)rdf32(arg2 + 4u);
    if (!(d2 < d3))
    {
        eax = rd32(arg1 + 4u);
        wr32(sp0 - 0x78u, eax);
        t5 = rd32(arg2 + 4u);
        wr32(sp0 - 0x7cu, t5);
        ecx = self;
        edx = t5;
        loc_7c = t5;
        loc_78 = eax;
    }
    else
    {
        eax = rd32(arg1 + 4u);
        wr32(sp0 - 0x7cu, eax);
        t4 = rd32(arg2 + 4u);
        wr32(sp0 - 0x78u, t4);
        ecx = t4;
        edx = in_edx;
        loc_7c = eax;
        loc_78 = t4;
    }
    g->ecx = ecx;
    g->edx = edx;
    d6 = fr(g, fr(g, (double)rdf32(self + 0x40u) + (double)rdf32(arg1)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d6);
    g->esp = sp0 - 0xc0u;
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        goto L_1016a2bd;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    ebp = t7;
    if ((int32_t)ebp >= (int32_t)rd32(self + 0x48u)) goto L_1016a2bd;
    g->ecx = ecx;
    d10 = fr(g, fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d10);
    g->esp = sp0 - 0xc0u;
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    if ((int32_t)t11 < 0)
    {
        eax = t11;
        goto L_1016a2bd;
    }
    eax = t11;
    ecx = t12;
    if ((int32_t)eax >= (int32_t)rd32(self + 0x4cu)) goto L_1016a2bd;
    esi = rd32(self + 0x4cu);
    if (rd8(self + 0x34139u) == 0u)
    {
        if ((int32_t)(ebp - 1u) >= 0)
        {
            ecx = ebp - 1u;
            t15 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xa4u, t15);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_a4 = t15;
            }
            else
            {
                wr32(sp0 - 0xa4u, ecx);
                loc_a4 = ecx;
            }
        }
        else
        {
            wr32(sp0 - 0xa4u, 0u);
            loc_a4 = 0u;
        }
        if ((int32_t)(ebp + 1u) >= 0)
        {
            ecx = ebp + 1u;
            t16 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xa8u, t16);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_a8 = t16;
            }
            else
            {
                wr32(sp0 - 0xa8u, ecx);
                loc_a8 = ecx;
            }
        }
        else
        {
            wr32(sp0 - 0xa8u, 0u);
            loc_a8 = 0u;
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
            wr32(sp0 - 0xa4u, t13);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_a4 = t13;
            }
            else
            {
                wr32(sp0 - 0xa4u, ecx);
                loc_a4 = ecx;
            }
        }
        else
        {
            wr32(sp0 - 0xa4u, 0u);
            loc_a4 = 0u;
        }
        if ((int32_t)(ebp + 2u) >= 0)
        {
            ecx = ebp + 2u;
            t14 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xa8u, t14);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_a8 = t14;
            }
            else
            {
                wr32(sp0 - 0xa8u, ecx);
                loc_a8 = ecx;
            }
        }
        else
        {
            wr32(sp0 - 0xa8u, 0u);
            loc_a8 = 0u;
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
        wr32(sp0 - 0xacu, esi - 1u);
        if ((int32_t)eax > (int32_t)(esi - 1u))
        {
            loc_ac = esi - 1u;
        }
        else
        {
            wr32(sp0 - 0xacu, eax);
            loc_ac = eax;
        }
    }
    else
    {
        wr32(sp0 - 0xacu, 0u);
        loc_ac = 0u;
    }
    wr32(sp0 - 0x74u, 0x49742400u);
    wr8(sp0 - 0xadu, 0u);
    wr32(sp0 - 0x60u, ecx);
    if ((int32_t)ecx > (int32_t)loc_ac)
    {
        eax = loc_ac;
    }
    else
    {
        edx = ecx;
        loc_60 = ecx;
        eax = loc_a4;
L_10169cd7: ;
        wr32(sp0 - 0x50u, eax);
        if ((int32_t)eax > (int32_t)loc_a8) goto L_1016a29b;
        ecx = eax;
        loc_50 = eax;
L_10169ce9: ;
        if (rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u) == 0u) goto L_1016a286;
        eax = rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u);
L_10169cff: ;
        wr32(sp0 - 0x4cu, eax + 4u);
        if ((rd32(eax) >> 8u & 0x20u) == 0u)
        {
            edx = eax + 4u;
            loc_4c = eax + 4u;
            eax = rd32(eax) & 0x7ffu;
            if ((int32_t)eax > 0)
            {
                wr32(sp0 - 0x70u, eax);
                loc_70 = eax;
L_10169d28: ;
                t17 = rd32(edx + 4u);
                wr32(sp0 - 0x80u, t17);
                if (rd32(edx + 4u) != 0u)
                {
                    ecx = t17;
                    loc_80 = t17;
                    d18 = (double)rdf32(rd32(edx) + 0xb4u);
                    d19 = (double)rdf32(sp0 - 0x78u);
                    if ((cow_fsw(g, d18, d19, 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d18, d19, 0u) & 0x4100u;
                        ebp = rd32(ecx + 8u);
                        esi = rd32(edx);
                        d20 = (double)rdf32(esi + 0xb8u);
                        d21 = (double)rdf32(sp0 - 0x7cu);
                        if (!(d20 < d21))
                        {
                            if (rd32(self + 4u) != rd32(esi + 0xbcu))
                            {
                                wr32(sp0 - 0x84u, 0u);
                                d22 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(arg1) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u));
                                wrf32(sp0 - 0x90u, (float)d22);
                                d23 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x74u));
                                wrf32(sp0 - 0x8cu, (float)d23);
                                d24 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x78u));
                                wrf32(sp0 - 0x88u, (float)d24);
                                d25 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg2 + 4u))) + (double)rdf32(esi + 0x78u));
                                wrf32(sp0 - 4u, (float)d25);
                                d26 = (double)(float)fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg2 + 8u)) + fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg2 + 4u))) + fr(g, (double)rdf32(arg2) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u)) - d22);
                                wrf32(sp0 - 0x6cu, (float)d26);
                                d27 = (double)(float)fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg2 + 4u))) + (double)rdf32(esi + 0x74u)) - d23);
                                wrf32(sp0 - 0x68u, (float)d27);
                                d28 = (double)(float)fr(g, d25 - d24);
                                wrf32(sp0 - 0x64u, (float)d28);
                                if ((int16_t)rd16(ecx + 0xcu) <= 0) goto L_1016a25e;
                                eax = arg1;
                                loc_84 = 0u;
                                loc_90_f = d22;
                                loc_8c_f = d23;
                                loc_88_f = d24;
                                loc_6c_f = d26;
                                loc_68_f = d27;
                                loc_64_f = d28;
L_10169e55: ;
                                t29 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu);
                                wr32(sp0 - 0x24u, t29);
                                t30 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 4u);
                                wr32(sp0 - 0x20u, t30);
                                t31 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 8u);
                                wr32(sp0 - 0x1cu, t31);
                                t32 = rd32(ecx) + (rd16(ebp) & 0x7fffu) * 0xcu;
                                wr32(sp0 - 0x18u, t32);
                                t33 = rd32(ecx) + (rd16(ebp + 2u) & 0x3fffu) * 0xcu;
                                wr32(sp0 - 0x14u, t33);
                                d34 = (double)(float)fr(g, cow_bits2f(t29) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x24u, (float)d34);
                                d35 = (double)(float)fr(g, cow_bits2f(t30) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x20u, (float)d35);
                                t36 = rd32(ecx) + (rd16(ebp + 4u) & 0x3fffu) * 0xcu;
                                wr32(sp0 - 0x10u, t36);
                                d37 = (double)(float)fr(g, cow_bits2f(t31) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x1cu, (float)d37);
                                d38 = fr(g, fr(g, fr(g, fr(g, cow_bits2f(t31) * (double)rdf32(COW_IMG(0x1032a3f0u))) * loc_64_f) + fr(g, d35 * loc_68_f)) + fr(g, d34 * loc_6c_f));
                                if (d38 == (double)rdf32(COW_IMG(0x103295d8u)))
                                {
                                    x0 = d38;
                                }
                                else
                                {
                                    loc_24_f = d34;
                                    loc_20_f = d35;
                                    loc_1c_f = d37;
                                    loc_18 = t32;
                                    x0 = d38;
                                    d39 = fr(g, fr(g, fr(g, fr(g, fr(g, loc_1c_f * loc_88_f) + fr(g, loc_20_f * loc_8c_f)) + fr(g, loc_24_f * loc_90_f)) - fr(g, fr(g, fr(g, loc_1c_f * (double)rdf32(loc_18 + 8u)) + fr(g, loc_20_f * (double)rdf32(loc_18 + 4u))) + fr(g, loc_24_f * (double)rdf32(loc_18)))) * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / x0));
                                    wrf32(sp0 - 0xa0u, (float)(double)(float)d39);
                                    if (!((double)(float)d39 < (double)rdf32(COW_IMG(0x103295d8u))))
                                    {
                                        eax = (loc_18 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(float)d39, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                        loc_a0_f = (double)(float)d39;
                                        if ((cow_fsw(g, loc_a0_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
                                        {
                                            eax = cow_fsw(g, loc_a0_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
                                            wr32(sp0 - 0xc4u, sp0 - 0x48u);
                                            wr32(sp0 - 0xc8u, sp0 - 0x9cu);
                                            d40 = (double)(float)fr(g, fr(g, loc_a0_f * loc_6c_f) + loc_90_f);
                                            wrf32(sp0 - 0x9cu, (float)d40);
                                            d41 = (double)(float)fr(g, fr(g, loc_a0_f * loc_68_f) + loc_8c_f);
                                            wrf32(sp0 - 0x98u, (float)d41);
                                            d42 = (double)(float)fr(g, fr(g, loc_a0_f * loc_64_f) + loc_88_f);
                                            wrf32(sp0 - 0x94u, (float)d42);
                                            g->esp = sp0 - 0xc0u;
                                            t43 = cow_call_regs(g, COW_IMG(0x1016c390u), eax, g->ecx, g->edx, 0, 2, sp0 - 0x9cu, sp0 - 0x48u);
                                            if ((uint8_t)t43 == 0u) goto L_1016a233;
                                            d44 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u));
                                            wrf32(sp0 - 0x5cu, (float)d44);
                                            d45 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x24u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x14u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi + 4u))) + (double)rdf32(esi + 0x34u));
                                            wrf32(sp0 - 0x58u, (float)d45);
                                            d46 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x28u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x18u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi + 8u))) + (double)rdf32(esi + 0x38u));
                                            wrf32(sp0 - 0x54u, (float)d46);
                                            d47 = fr(g, (double)rdf32(arg1 + 8u) - d46);
                                            d48 = fr(g, (double)rdf32(arg1 + 4u) - d45);
                                            d49 = fr(g, (double)rdf32(arg1) - d44);
                                            d50 = (double)rdf32(sp0 - 0x74u);
                                            d51 = fr(g, fr(g, fr(g, d47 * d47) + fr(g, d48 * d48)) + fr(g, d49 * d49));
                                            if (d50 <= d51)
                                            {
                                                x0 = fr(g, fr(g, fr(g, d47 * d47) + fr(g, d48 * d48)) + fr(g, d49 * d49));
                                                goto L_1016a231;
                                            }
                                            loc_5c_f = d44;
                                            loc_58_f = d45;
                                            loc_54_f = d46;
                                            x0 = fr(g, fr(g, fr(g, d47 * d47) + fr(g, d48 * d48)) + fr(g, d49 * d49));
                                            wrf32(sp0 - 0x74u, (float)(double)(float)x0);
                                            d52 = (double)rdf32(sp0 - 0x1cu);
                                            wr32(arg3, cow_f2bits(loc_5c_f));
                                            wr32(arg3 + 4u, cow_f2bits(loc_58_f));
                                            wr32(arg3 + 8u, cow_f2bits(loc_54_f));
                                            d53 = fr(g, fr(g, fr(g, d52 * (double)rdf32(esi + 0x98u)) + fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(esi + 0x8cu))) + fr(g, (double)rdf32(sp0 - 0x24u) * (double)rdf32(esi + 0x80u)));
                                            wrf32(self + 0x3413cu, (float)d53);
                                            d54 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(esi + 0x9cu)) + fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(esi + 0x90u))) + fr(g, (double)rdf32(sp0 - 0x24u) * (double)rdf32(esi + 0x84u)));
                                            wrf32(self + 0x34140u, (float)d54);
                                            d55 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(esi + 0xa0u)) + fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(esi + 0x94u))) + fr(g, (double)rdf32(sp0 - 0x24u) * (double)rdf32(esi + 0x88u)));
                                            wrf32(self + 0x34144u, (float)d55);
                                            t56 = (((rd16(ebp + 6u) >> 0xfu) * 2u | rd16(ebp + 4u) >> 0xfu) * 2u | rd16(ebp + 2u) >> 0xfu) * 2u | rd16(ebp) >> 0xfu;
                                            wr32(self + 0x34148u, t56);
                                            t57 = (uint32_t)((int32_t)(rd32(esi + 0xa4u) << 6u) >> 0xcu);
                                            wr32(self + 0x3414cu, t57);
                                            t58 = rd32(esi + 0xa4u) >> 2u & 1u;
                                            wr32(self + 0x34150u, t58);
                                            t59 = rd32(esi + 0xa4u);
                                            t60 = (t59 >> 0x1au & 3u) << 3u | (t59 >> 3u & 7u);
                                            wr32(self + 0x34154u, t60);
                                            t61 = rd32(esi + 0xb0u);
                                            wr32(self + 0x34158u, t61);
                                            t62 = rd8(esi + 0xacu);
                                            wr8(self + 0x3415cu, (uint8_t)t62);
                                            wr8(self + 0x3415du, rd8(esi + 0xadu));
                                            wr8(self + 0x3415eu, rd8(esi + 0xaeu));
                                            wr8(self + 0x3415fu, rd8(esi + 0xafu));
                                            t63 = rd32(esi + 0xa8u);
                                            wr32(self + 0x1807cu, t63);
                                            t64 = rd32(sp0 - 0x80u);
                                            wr8(sp0 - 0xadu, 1u);
                                            ecx = t64;
                                        }
                                    }
                                }
L_1016a242: ;
                                wr32(sp0 - 0x84u, loc_84 + 1u);
                                if ((int32_t)(loc_84 + 1u) < (int16_t)rd16(ecx + 0xcu))
                                {
                                    eax = loc_84 + 1u;
                                    ebp = ebp + 8u;
                                    loc_84 = loc_84 + 1u;
                                    goto L_10169e55;
                                }
                                edx = loc_4c;
                            }
                        }
                    }
                }
L_1016a25e: ;
                wr32(sp0 - 0x4cu, edx + 8u);
                wr32(sp0 - 0x70u, loc_70 - 1u);
                if (loc_70 != 1u)
                {
                    eax = loc_70 - 1u;
                    loc_4c = edx + 8u;
                    edx = edx + 8u;
                    loc_70 = loc_70 - 1u;
                    goto L_10169d28;
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
            goto L_10169cff;
        }
        ecx = loc_50;
        edx = loc_60;
L_1016a286: ;
        wr32(sp0 - 0x50u, ecx + 1u);
        if ((int32_t)(ecx + 1u) <= (int32_t)loc_a8)
        {
            loc_50 = ecx + 1u;
            ecx = ecx + 1u;
            goto L_10169ce9;
        }
        eax = loc_a4;
L_1016a29b: ;
        wr32(sp0 - 0x60u, edx + 1u);
        if ((int32_t)(edx + 1u) <= (int32_t)loc_ac)
        {
            loc_60 = edx + 1u;
            edx = edx + 1u;
            goto L_10169cd7;
        }
    }
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xbcu);
    g->edi = rd32(sp0 - 0xc0u);
    g->ebp = rd32(sp0 - 0xb8u);
    return (eax & 0xffffff00u) | rd8(sp0 - 0xadu);
L_1016a231: ;
L_1016a233: ;
    ecx = rd32(sp0 - 0x80u);
    goto L_1016a242;
L_1016a2bd: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10169b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10169b40(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
