/* f_0x1005e9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1005e9c0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d3;
    double d58;
    double d60;
    double d62;
    double d64;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_2c;
    double loc_3c_f;
    double loc_44_f;
    uint32_t t14;
    uint32_t t15;
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
    uint32_t t59;
    uint32_t t6;
    uint32_t t61;
    uint32_t t63;
    uint32_t t65;
    uint32_t t66;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x48u, in_esi);
    d1 = fr(g, (double)rdf32(self + 0x78u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    t2 = rd32(COW_IMG(0x1047bfa8u));
    d3 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x78u, (float)d1);
    if (!(d1 < d3))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d3, 1u);
        x0 = d1;
        goto L_1005ec7f;
    }
    eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d3, 1u);
    x0 = d1;
    if (rd8(self + 0xa0u) == 0u)
    {
        edx = in_edx;
        ebx = in_ebx;
        edi = in_edi;
    }
    else
    {
        if (rd32(self + 0x74u) == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = rd32(self + 0x74u);
            eax = rd32(eax);
        }
        wr32(sp0 - 0x4cu, in_ebx);
        wr32(sp0 - 0x50u, in_edi);
        wr32(sp0 - 0x54u, 0x3f800000u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        g->edx = in_edx;
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, COW_IMG(0x10063c30u), eax + 0x30u, 2, sp0 - 0x20u, 0x3f800000u);
        t4 = g->edx;
        if (rd32(self + 0x9cu) == 0u)
        {
            eax = rd32(self + 0x9cu);
            edx = t4;
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
        else
        {
            eax = rd32(self + 0x9cu);
            edx = t4;
            if (rd8(self + 0xa0u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0xa0u);
                ebx = (in_ebx & 0xffffff00u) | 1u;
            }
            else
            {
                wr32(sp0 - 0x54u, self + 0x80u);
                wr32(sp0 - 0x58u, sp0 - 0x10u);
                g->eax = sp0 - 0x10u;
                g->esp = sp0 - 0x50u;
                t5 = cow_thiscall(g, COW_IMG(0x1005ed30u), sp0 - 0x20u, 2, sp0 - 0x10u, self + 0x80u);
                wr32(sp0 - 0x30u, rd32(t5));
                t6 = rd32(t5 + 8u);
                wr32(sp0 - 0x28u, t6);
                t7 = rd32(t5 + 4u);
                wr32(sp0 - 0x2cu, t7);
                wr32(sp0 - 0x40u, 0u);
                t8 = rd32(t5 + 0xcu);
                wr32(sp0 - 0x24u, t8);
                d9 = (double)(float)fr(g, (double)rdf32(self + 0x94u) - fr(g, atan2(cow_bits2f(t6), cow_bits2f(rd32(t5)))));
                wrf32(sp0 - 0x3cu, (float)d9);
                d10 = fr(g, (double)rdf32(self + 0x94u) - fr(g, atan2(cow_bits2f(t6), cow_bits2f(rd32(t5)))));
                if ((cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
                    edx = t8;
                    loc_2c = t7;
                    loc_3c_f = d9;
                    x0 = fr(g, sqrt(fr(g, fr(g, cow_bits2f(rd32(t5)) * cow_bits2f(rd32(t5))) + fr(g, cow_bits2f(t6) * cow_bits2f(t6)))));
                }
                else
                {
                    eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
                    edx = t8;
                    loc_2c = t7;
                    loc_3c_f = d9;
                    x0 = fr(g, sqrt(fr(g, fr(g, cow_bits2f(rd32(t5)) * cow_bits2f(rd32(t5))) + fr(g, cow_bits2f(t6) * cow_bits2f(t6)))));
                    d11 = (double)(float)fr(g, loc_3c_f - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(sp0 - 0x3cu, (float)d11);
                    loc_3c_f = d11;
                }
                if (!(loc_3c_f < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_3c_f, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_3c_f, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
                    d12 = (double)(float)fr(g, loc_3c_f + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(sp0 - 0x3cu, (float)d12);
                }
                if ((rd8(self + 0x9cu) & 2u) == 0u)
                {
                    d13 = (double)(float)fr(g, atan2(cow_bits2f(loc_2c), x0));
                    wrf32(sp0 - 0x38u, (float)d13);
                }
                wr32(sp0 - 0x34u, 0x3f800000u);
                if (!(x0 < (double)rdf32(COW_IMG(0x1032a378u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
                    ebx = (in_ebx & 0xffffff00u) | 1u;
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
                    ebx = in_ebx & 0xffffff00u;
                }
            }
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t14 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        t15 = g->edx;
        if (t14 != 0u)
        {
            eax = t14;
            edx = t15;
            wr32(sp0 - 0x54u, COW_IMG(0x1032df68u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x50u;
            t16 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, COW_IMG(0x1032df68u));
            t17 = g->edx;
            t18 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t16, t17, 1, COW_IMG(0x1032df68u));
            t19 = g->edx;
            if ((uint8_t)t18 != 0u)
            {
                eax = t18;
                edx = t19;
                if (rd8(self + 0xa1u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0xa1u);
                    goto L_1005eb3c;
                }
                eax = sp0 - 0x20u;
L_1005eb95: ;
                wr32(sp0 - 0x54u, eax);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x50u;
                t29 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, eax);
                t30 = g->edx;
                g->edx = t30;
                cow_thiscall(g, COW_IMG(0x100a57c0u), t29, 1, rd32(sp0 - 0x54u));
                t31 = g->edx;
                edx = t31;
L_1005eba4: ;
                if (rd32(self + 0x9cu) != 0u)
                {
                    eax = rd32(self + 0x9cu);
                    if (rd8(self + 0xa0u) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(self + 0xa0u);
                        if (rd8(self + 0xa3u) == 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(self + 0xa3u);
                            wr32(sp0 - 0x54u, COW_IMG(0x10330684u));
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x50u;
                            t34 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, COW_IMG(0x10330684u));
                            t35 = g->edx;
                            t36 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t34, t35, 1, COW_IMG(0x10330684u));
                            t37 = g->edx;
                            if ((uint8_t)t36 == 0u)
                            {
                                edx = t37;
                            }
                            else
                            {
                                eax = t36;
                                wr32(sp0 - 0x54u, sp0 - 0x40u);
                                g->eax = eax;
                                g->edx = sp0 - 0x40u;
                                g->esp = sp0 - 0x50u;
                                t38 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, sp0 - 0x40u);
                                t39 = g->edx;
                                g->edx = t39;
                                cow_thiscall(g, COW_IMG(0x1005eec0u), t38, 1, sp0 - 0x40u);
                                t40 = g->edx;
                                edx = t40;
                            }
                            wr32(sp0 - 0x54u, sp0 - 0x40u);
                            g->eax = sp0 - 0x40u;
                            g->edx = edx;
                            g->esp = sp0 - 0x50u;
                            t41 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, sp0 - 0x40u);
                            t42 = g->edx;
                            g->edx = t42;
                            t43 = cow_thiscall(g, COW_IMG(0x1005ee90u), t41, 1, sp0 - 0x40u);
                            t44 = g->edx;
                            wr32(sp0 - 0x54u, sp0 - 0x40u);
                            g->edx = t44;
                            t45 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, sp0 - 0x40u);
                            t46 = g->edx;
                            cow_thiscall(g, COW_IMG(0x1005edc0u), t45, 1, sp0 - 0x40u);
                            wr8(self + 0xa3u, 1u);
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | rd8(self + 0xa3u);
                            if ((uint8_t)ebx == 1u)
                            {
                                wr32(sp0 - 0x54u, sp0 - 0x40u);
                                g->eax = eax;
                                g->edx = edx;
                                g->esp = sp0 - 0x50u;
                                t32 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, sp0 - 0x40u);
                                t33 = g->edx;
                                cow_thiscall(g, COW_IMG(0x1005ee90u), t32, 1, sp0 - 0x40u);
                            }
                        }
                    }
                }
            }
        }
        t47 = rd32(sp0 - 0x20u);
        t48 = rd32(sp0 - 0x1cu);
        t49 = rd32(sp0 - 0x4cu);
        t50 = rd32(sp0 - 0x50u);
        wr32(self + 0x80u, t47);
        t51 = rd32(sp0 - 0x18u);
        wr32(self + 0x84u, t48);
        t52 = rd32(sp0 - 0x14u);
        wr32(self + 0x88u, t51);
        wr32(self + 0x8cu, t52);
        edx = self + 0x80u;
        ebx = t49;
        edi = t50;
    }
    if (rd32(self + 0x74u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x74u);
        eax = rd32(eax);
    }
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t53 = cow_fastcall(g, COW_IMG(0x10063b20u), eax + 0x30u, edx, 0);
    wr32(sp0 - 0x4cu, 1u);
    g->edx = rd32(self);
    t54 = rd32(self);
    t55 = cow_thiscall(g, rd32(t54 + 0x18u), self, 1, 1u);
    t56 = g->edx;
    g->ebx = ebx;
    g->edi = edi;
    g->edx = t56;
    return (t55 & 0xffffff00u) | 1u;
L_1005eb3c: ;
    if (rd8(self + 0xa0u) == 0u) goto L_1005eba4;
    eax = (eax & 0xffffff00u) | rd8(self + 0xa0u);
    wr32(sp0 - 0x54u, self + 0x80u);
    wr32(sp0 - 0x58u, sp0 - 0x10u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t20 = cow_thiscall(g, COW_IMG(0x1005ed30u), sp0 - 0x20u, 2, sp0 - 0x10u, self + 0x80u);
    wr32(sp0 - 0x30u, rd32(t20));
    t21 = rd32(t20 + 4u);
    wr32(sp0 - 0x2cu, t21);
    t22 = rd32(t20 + 8u);
    wr32(sp0 - 0x28u, t22);
    t23 = rd32(t20 + 0xcu);
    wr32(sp0 - 0x24u, t23);
    t24 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    g->edx = rd32(t24);
    t25 = rd32(t24);
    t26 = cow_thiscall(g, rd32(t25 + 0x1bcu), t24, 0);
    t27 = g->edx;
    wr32(sp0 - 0x54u, t26);
    g->edx = t27;
    cow_thiscall(g, COW_IMG(0x1005ed90u), sp0 - 0x30u, 1, t26);
    t28 = g->edx;
    eax = sp0 - 0x30u;
    edx = t28;
    goto L_1005eb95;
L_1005ec7f: ;
    if (rd8(self + 0xa2u) == 0u)
    {
        x0 = fr(g, x0 / (double)rdf32(self + 0x7cu));
    }
    else
    {
        x0 = fr(g, x0 / (double)rdf32(self + 0x7cu));
        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - x0);
    }
    wrf32(sp0 - 0x44u, (float)(double)(float)x0);
    if ((int32_t)rd32(self + 0xa8u) >= 5)
    {
        loc_44_f = (double)(float)x0;
        goto L_1005ecb1;
    }
    eax = rd32(self + 0xa8u);
    loc_44_f = (double)(float)x0;
    wr32(sp0 - 0x4cu, eax);
    wr32(sp0 - 0x50u, cow_f2bits(loc_44_f));
    g->edx = in_edx;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10055ad0u), 2, cow_f2bits(loc_44_f), eax);
    t57 = g->edx;
    d58 = cow_take_float(g);
    edx = t57;
    x0 = d58;
L_1005ed05: ;
    wrf32(sp0 - 0x44u, (float)(double)(float)x0);
    loc_44_f = (double)(float)x0;
L_1005ed09: ;
    wr32(sp0 - 0x4cu, cow_f2bits(loc_44_f));
    g->eax = cow_f2bits(loc_44_f);
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t65 = cow_thiscall(g, COW_IMG(0x1005eef0u), self, 1, cow_f2bits(loc_44_f));
    t66 = g->edx;
    wr8(self + 0xa0u, 1u);
    g->edx = t66;
    return t65 & 0xffffff00u;
L_1005ecb1: ;
    if (rd32(self + 0xa4u) == 0u)
    {
        edx = in_edx;
        goto L_1005ed09;
    }
    eax = rd32(self + 0xa4u);
    if (rd8(self + 0xacu) == 0u)
    {
        eax = rd32(self + 0xa4u);
        if (eax == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = rd32(eax);
        }
        wr32(sp0 - 0x4cu, cow_f2bits(loc_44_f));
        g->edx = cow_f2bits(loc_44_f);
        g->esp = sp0 - 0x48u;
        cow_call_regs(g, COW_IMG(0x10054500u), eax, eax, g->edx, 0, 1, cow_f2bits(loc_44_f));
        t63 = g->edx;
        d64 = cow_take_float(g);
        edx = t63;
        x0 = d64;
    }
    else
    {
        eax = rd32(self + 0xa4u);
        if (eax == 0u)
        {
            wr32(sp0 - 0x4cu, cow_f2bits(loc_44_f));
            g->edx = in_edx;
            g->esp = sp0 - 0x48u;
            cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, cow_f2bits(loc_44_f));
            t61 = g->edx;
            d62 = cow_take_float(g);
            edx = t61;
            x0 = d62;
        }
        else
        {
            wr32(sp0 - 0x4cu, cow_f2bits(loc_44_f));
            g->edx = in_edx;
            g->esp = sp0 - 0x48u;
            cow_call_regs(g, COW_IMG(0x100547a0u), rd32(eax), rd32(eax), g->edx, 0, 1, cow_f2bits(loc_44_f));
            t59 = g->edx;
            d60 = cow_take_float(g);
            edx = t59;
            x0 = d60;
        }
    }
    goto L_1005ed05;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005e9c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1005e9c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
