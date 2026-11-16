/* f_0x1016a2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1016a2d0(Guest* g)
{
    double d10;
    double d16;
    double d17;
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
    double d3;
    double d32;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d51;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_28_f;
    double loc_2c_f;
    double loc_30_f;
    uint32_t loc_58;
    double loc_5c_f;
    uint32_t loc_60;
    uint32_t loc_64;
    double loc_68_f;
    double loc_6c_f;
    double loc_70_f;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_7c;
    uint32_t loc_80;
    double loc_88_f;
    double loc_8c_f;
    double loc_90_f;
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_b0;
    double loc_b4_f;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t4;
    uint32_t t41;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t52;
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
    cow_frame(g, sp0, 212u);

    wr32(sp0 - 0xbcu, in_ebx);
    wr32(sp0 - 0xc0u, in_ebp);
    wr32(sp0 - 0xc4u, in_esi);
    wr32(sp0 - 0xc8u, in_edi);
    wr32(sp0 - 0xacu, self);
    t1 = rd32(self + 0x60u);
    wr32(self + 0x1807cu, 0u);
    wr32(self + 0x34150u, 0u);
    if (t1 == 0u)
    {
        eax = 0u;
        goto L_1016a978;
    }
    ecx = t1;
    d2 = (double)rdf32(arg1 + 4u);
    d3 = (double)rdf32(arg2 + 4u);
    if (!(d2 < d3))
    {
        eax = rd32(arg1 + 4u);
        wr32(sp0 - 0x74u, eax);
        t5 = rd32(arg2 + 4u);
        wr32(sp0 - 0x64u, t5);
        edx = t5;
        loc_64 = t5;
        loc_74 = eax;
    }
    else
    {
        eax = rd32(arg1 + 4u);
        wr32(sp0 - 0x64u, eax);
        t4 = rd32(arg2 + 4u);
        wr32(sp0 - 0x74u, t4);
        ecx = t4;
        edx = in_edx;
        loc_64 = eax;
        loc_74 = t4;
    }
    g->edx = edx;
    d6 = fr(g, fr(g, (double)rdf32(self + 0x40u) + (double)rdf32(arg1)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d6);
    g->esp = sp0 - 0xc8u;
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        goto L_1016a978;
    }
    eax = t7;
    edx = t8;
    edi = t7;
    if ((int32_t)edi >= (int32_t)rd32(self + 0x48u)) goto L_1016a978;
    ebp = rd32(self + 0x48u);
    g->ecx = rd32(sp0 - 0xacu);
    t9 = rd32(sp0 - 0xacu);
    d10 = fr(g, fr(g, (double)rdf32(rd32(sp0 - 0xacu) + 0x44u) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d10);
    g->esp = sp0 - 0xc8u;
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    if ((int32_t)t11 < 0)
    {
        eax = t11;
        goto L_1016a978;
    }
    eax = t11;
    ecx = t12;
    if ((int32_t)eax >= (int32_t)rd32(rd32(sp0 - 0xacu) + 0x4cu)) goto L_1016a978;
    esi = rd32(sp0 - 0xacu);
    if (rd8(esi + 0x34139u) == 0u)
    {
        if ((int32_t)(edi - 1u) >= 0)
        {
            ecx = edi - 1u;
            wr32(sp0 - 0xa4u, ebp - 1u);
            if ((int32_t)ecx > (int32_t)(ebp - 1u))
            {
                loc_a4 = ebp - 1u;
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
        if ((int32_t)(edi + 1u) >= 0)
        {
            ecx = edi + 1u;
            wr32(sp0 - 0xa8u, ebp - 1u);
            if ((int32_t)ecx > (int32_t)(ebp - 1u))
            {
                loc_a8 = ebp - 1u;
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
            if ((int32_t)ecx > (int32_t)(rd32(esi + 0x4cu) - 1u))
            {
                edx = rd32(esi + 0x4cu) - 1u;
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
        if ((int32_t)(edi - 2u) >= 0)
        {
            ecx = edi - 2u;
            wr32(sp0 - 0xa4u, ebp - 1u);
            if ((int32_t)ecx > (int32_t)(ebp - 1u))
            {
                loc_a4 = ebp - 1u;
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
        if ((int32_t)(edi + 2u) >= 0)
        {
            ecx = edi + 2u;
            wr32(sp0 - 0xa8u, ebp - 1u);
            if ((int32_t)ecx > (int32_t)(ebp - 1u))
            {
                loc_a8 = ebp - 1u;
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
            if ((int32_t)ecx > (int32_t)(rd32(esi + 0x4cu) - 1u))
            {
                edx = rd32(esi + 0x4cu) - 1u;
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
        t13 = rd32(esi + 0x4cu) - 1u;
        wr32(sp0 - 0xb0u, t13);
        if ((int32_t)eax > (int32_t)(rd32(esi + 0x4cu) - 1u))
        {
            loc_b0 = t13;
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
    wr32(sp0 - 0x5cu, 0x49742400u);
    wr32(sp0 - 0x84u, 0x49742400u);
    wr32(sp0 - 0x7cu, ecx);
    if ((int32_t)ecx > (int32_t)loc_b0)
    {
        eax = loc_b0;
    }
    else
    {
        edx = ecx;
        loc_7c = ecx;
        eax = loc_a4;
L_1016a479: ;
        wr32(sp0 - 0x80u, eax);
        if ((int32_t)eax > (int32_t)loc_a8) goto L_1016a956;
        ecx = eax;
        loc_80 = eax;
L_1016a48b: ;
        if (rd32(ecx * 4u + rd32(esi + 0x60u) + rd32(esi + 0x48u) * edx * 4u) == 0u) goto L_1016a941;
        eax = rd32(ecx * 4u + rd32(esi + 0x60u) + rd32(esi + 0x48u) * edx * 4u);
L_1016a4a1: ;
        wr32(sp0 - 0xa0u, eax + 4u);
        t14 = rd32(eax) & 0x800u;
        wr32(sp0 - 0x58u, t14);
        if ((rd32(eax) >> 8u & 0x20u) == 0u)
        {
            ecx = rd32(eax) & 0x7ffu;
            esi = eax + 4u;
            loc_a0 = eax + 4u;
            eax = rd32(eax);
            loc_58 = t14;
            if ((int32_t)ecx > 0)
            {
                wr32(sp0 - 0x60u, ecx);
                loc_60 = ecx;
L_1016a4dd: ;
                if (rd32(esi + 4u) != 0u)
                {
                    ebp = rd32(esi + 4u);
                    d16 = (double)rdf32(rd32(esi) + 0xb4u);
                    d17 = (double)rdf32(sp0 - 0x74u);
                    if ((cow_fsw(g, d16, d17, 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d16, d17, 0u) & 0x4100u;
                        esi = rd32(esi);
                        edi = rd32(ebp + 8u);
                        d18 = (double)rdf32(esi + 0xb8u);
                        d19 = (double)rdf32(sp0 - 0x64u);
                        if (!(d18 < d19))
                        {
                            if (rd32(rd32(sp0 - 0xacu) + 4u) != rd32(esi + 0xbcu))
                            {
                                wr32(sp0 - 0x78u, 0u);
                                d20 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(arg1) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u));
                                wrf32(sp0 - 0x90u, (float)d20);
                                d21 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x74u));
                                wrf32(sp0 - 0x8cu, (float)d21);
                                d22 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x78u));
                                wrf32(sp0 - 0x88u, (float)d22);
                                d23 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg2 + 4u))) + fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg2 + 8u))) + (double)rdf32(esi + 0x78u));
                                wrf32(sp0 - 4u, (float)d23);
                                d24 = (double)(float)fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg2 + 4u)) + fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(arg2) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u)) - d20);
                                wrf32(sp0 - 0x70u, (float)d24);
                                d25 = (double)(float)fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg2 + 4u))) + fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg2 + 8u))) + (double)rdf32(esi + 0x74u)) - d21);
                                wrf32(sp0 - 0x6cu, (float)d25);
                                d26 = (double)(float)fr(g, d23 - d22);
                                wrf32(sp0 - 0x68u, (float)d26);
                                if ((int16_t)rd16(ebp + 0xcu) <= 0) goto L_1016a911;
                                eax = arg1;
                                loc_78 = 0u;
                                loc_90_f = d20;
                                loc_8c_f = d21;
                                loc_88_f = d22;
                                loc_70_f = d24;
                                loc_6c_f = d25;
                                loc_68_f = d26;
L_1016a60c: ;
                                t27 = rd32(rd32(ebp + 4u) + (rd16(edi + 6u) & 0x7fffu) * 0xcu);
                                wr32(sp0 - 0x30u, t27);
                                t28 = rd32(rd32(ebp + 4u) + (rd16(edi + 6u) & 0x7fffu) * 0xcu + 4u);
                                wr32(sp0 - 0x2cu, t28);
                                t29 = rd32(rd32(ebp + 4u) + (rd16(edi + 6u) & 0x7fffu) * 0xcu + 8u);
                                wr32(sp0 - 0x28u, t29);
                                t30 = rd32(ebp) + (rd16(edi) & 0x7fffu) * 0xcu;
                                wr32(sp0 - 0x24u, t30);
                                t31 = rd32(ebp) + (rd16(edi + 2u) & 0x3fffu) * 0xcu;
                                wr32(sp0 - 0x20u, t31);
                                d32 = (double)(float)fr(g, cow_bits2f(t27) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x30u, (float)d32);
                                t33 = rd32(ebp) + (rd16(edi + 4u) & 0x3fffu) * 0xcu;
                                wr32(sp0 - 0x1cu, t33);
                                d34 = (double)(float)fr(g, cow_bits2f(t28) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x2cu, (float)d34);
                                d35 = (double)(float)fr(g, cow_bits2f(t29) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x28u, (float)d35);
                                d36 = fr(g, fr(g, fr(g, fr(g, cow_bits2f(t29) * (double)rdf32(COW_IMG(0x1032a3f0u))) * loc_68_f) + fr(g, d34 * loc_6c_f)) + fr(g, d32 * loc_70_f));
                                if (d36 == (double)rdf32(COW_IMG(0x103295d8u)))
                                {
                                    x0 = d36;
                                }
                                else
                                {
                                    eax = (rd32(ebp) & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                    ecx = t30;
                                    edx = t33;
                                    loc_30_f = d32;
                                    loc_2c_f = d34;
                                    loc_28_f = d35;
                                    x0 = d36;
                                    d37 = fr(g, fr(g, fr(g, fr(g, fr(g, loc_28_f * loc_88_f) + fr(g, loc_2c_f * loc_8c_f)) + fr(g, loc_30_f * loc_90_f)) - fr(g, fr(g, fr(g, loc_28_f * (double)rdf32(ecx + 8u)) + fr(g, loc_2c_f * (double)rdf32(ecx + 4u))) + fr(g, loc_30_f * (double)rdf32(ecx)))) * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / x0));
                                    wrf32(sp0 - 0xb4u, (float)(double)(float)d37);
                                    if (!((double)(float)d37 < (double)rdf32(COW_IMG(0x103295d8u))))
                                    {
                                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(float)d37, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                        loc_b4_f = (double)(float)d37;
                                        if ((cow_fsw(g, loc_b4_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
                                        {
                                            wr32(sp0 - 0xccu, sp0 - 0x54u);
                                            wr32(sp0 - 0xd0u, sp0 - 0x9cu);
                                            d38 = (double)(float)fr(g, fr(g, loc_b4_f * loc_70_f) + loc_90_f);
                                            wrf32(sp0 - 0x9cu, (float)d38);
                                            d39 = (double)(float)fr(g, fr(g, loc_b4_f * loc_6c_f) + loc_8c_f);
                                            wrf32(sp0 - 0x98u, (float)d39);
                                            d40 = (double)(float)fr(g, fr(g, loc_b4_f * loc_68_f) + loc_88_f);
                                            wrf32(sp0 - 0x94u, (float)d40);
                                            g->esp = sp0 - 0xc8u;
                                            t41 = cow_call_regs(g, COW_IMG(0x1016c390u), sp0 - 0x54u, g->ecx, g->edx, 0, 2, sp0 - 0x9cu, sp0 - 0x54u);
                                            if ((uint8_t)t41 == 0u)
                                            {
                                                loc_5c_f = cow_bits2f(0x49742400u);
                                                goto L_1016a8ee;
                                            }
                                            d42 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x28u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x18u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi + 8u))) + (double)rdf32(esi + 0x38u));
                                            wrf32(sp0 - 0x10u, (float)d42);
                                            d43 = (double)(float)fr(g, (double)rdf32(arg1) - fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u)));
                                            wrf32(sp0 - 0xb4u, (float)d43);
                                            d44 = fr(g, (double)rdf32(arg1 + 8u) - d42);
                                            d45 = fr(g, (double)rdf32(arg1 + 4u) - fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x24u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x14u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi + 4u))) + (double)rdf32(esi + 0x34u)));
                                            d46 = (double)rdf32(sp0 - 0x5cu);
                                            d47 = fr(g, fr(g, fr(g, d44 * d44) + fr(g, d45 * d45)) + fr(g, d43 * d43));
                                            if ((cow_fsw(g, d46, d47, 1u) & 0x4100u) != 0u)
                                            {
                                                ecx = rd32(sp0 - 0xacu);
                                                x0 = fr(g, fr(g, fr(g, d44 * d44) + fr(g, d45 * d45)) + fr(g, d43 * d43));
                                            }
                                            else
                                            {
                                                ecx = rd32(sp0 - 0xacu);
                                                x0 = fr(g, fr(g, fr(g, d44 * d44) + fr(g, d45 * d45)) + fr(g, d43 * d43));
                                                t48 = rd32(esi + 0xa4u);
                                                wr8(sp0 - 0xb5u, 1u);
                                                t49 = t48 >> 2u & 1u;
                                                wr32(ecx + 0x34150u, t49);
                                                wrf32(sp0 - 0x5cu, (float)(double)(float)x0);
                                                t50 = (((rd16(edi + 6u) >> 0xfu) * 2u | rd16(edi + 4u) >> 0xfu) * 2u | rd16(edi + 2u) >> 0xfu) * 2u | rd16(edi) >> 0xfu;
                                                wr32(ecx + 0x34148u, t50);
                                                loc_5c_f = (double)(float)x0;
                                            }
                                            if (rd32(sp0 - 0x58u) != 0u) goto L_1016a8ec;
                                            eax = rd32(sp0 - 0x58u);
                                            d51 = (double)rdf32(sp0 - 0x84u);
                                            if ((cow_fsw(g, d51, x0, 1u) & 0x4100u) != 0u) goto L_1016a8ec;
                                            wrf32(sp0 - 0x84u, (float)(double)(float)x0);
                                            t52 = rd32(esi + 0xa8u);
                                            wr32(ecx + 0x1807cu, t52);
                                            wr8(sp0 - 0xb5u, 1u);
                                        }
                                    }
                                }
L_1016a8f9: ;
                                wr32(sp0 - 0x78u, loc_78 + 1u);
                                if ((int32_t)(loc_78 + 1u) < (int16_t)rd16(ebp + 0xcu))
                                {
                                    eax = loc_78 + 1u;
                                    edi = edi + 8u;
                                    loc_78 = loc_78 + 1u;
                                    goto L_1016a60c;
                                }
                            }
                        }
                    }
L_1016a911: ;
                    esi = loc_a0;
                }
                wr32(sp0 - 0xa0u, esi + 8u);
                wr32(sp0 - 0x60u, loc_60 - 1u);
                if (loc_60 != 1u)
                {
                    eax = loc_60 - 1u;
                    loc_a0 = esi + 8u;
                    esi = esi + 8u;
                    loc_60 = loc_60 - 1u;
                    goto L_1016a4dd;
                }
                esi = esi + 8u;
            }
        }
        else
        {
            ecx = rd32(eax) & 0x7ffu;
            esi = eax + 4u;
            t15 = ecx * 8u + esi;
            wr32(sp0 - 0xa0u, t15);
            esi = t15;
        }
        if (rd32(esi) != 0u)
        {
            eax = rd32(esi);
            goto L_1016a4a1;
        }
        ecx = loc_80;
        edx = loc_7c;
        esi = rd32(sp0 - 0xacu);
L_1016a941: ;
        wr32(sp0 - 0x80u, ecx + 1u);
        if ((int32_t)(ecx + 1u) <= (int32_t)loc_a8)
        {
            loc_80 = ecx + 1u;
            ecx = ecx + 1u;
            goto L_1016a48b;
        }
        eax = loc_a4;
L_1016a956: ;
        wr32(sp0 - 0x7cu, edx + 1u);
        if ((int32_t)(edx + 1u) <= (int32_t)loc_b0)
        {
            loc_7c = edx + 1u;
            edx = edx + 1u;
            goto L_1016a479;
        }
    }
    g->ebx = rd32(sp0 - 0xbcu);
    g->esi = rd32(sp0 - 0xc4u);
    g->edi = rd32(sp0 - 0xc8u);
    g->ebp = rd32(sp0 - 0xc0u);
    return (eax & 0xffffff00u) | rd8(sp0 - 0xb5u);
L_1016a8ec: ;
L_1016a8ee: ;
    goto L_1016a8f9;
L_1016a978: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016a2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1016a2d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
