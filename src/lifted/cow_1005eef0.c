/* f_0x1005eef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1005eef0(Guest* g)
{
    double d10;
    double d17;
    double d18;
    double d19;
    double d20;
    double d25;
    double d26;
    double d27;
    double d28;
    double d3;
    double d4;
    double d5;
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
    double d65;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_2c_f;
    uint32_t loc_34;
    double loc_38_f;
    double loc_3c_f;
    uint32_t loc_40;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    uint32_t t54;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t70;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    if (rd32(self + 0x74u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x74u);
        eax = rd32(eax);
    }
    wr32(sp0 - 0x50u, arg1);
    wr32(sp0 - 0x54u, sp0 - 0x20u);
    g->eax = eax;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x4cu;
    t1 = cow_thiscall(g, COW_IMG(0x10063c30u), eax + 0x30u, 2, sp0 - 0x20u, arg1);
    t2 = g->edx;
    if (rd32(self + 0x9cu) == 0u)
    {
        eax = t1;
        edx = t2;
        ebx = (in_ebx & 0xffffff00u) | 1u;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c_f = (double)rdf32(sp0 - 0x3cu);
        loc_38_f = (double)rdf32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
    }
    else
    {
        eax = t1;
        ecx = rd32(self + 0x9cu);
        edx = t2;
        if (rd8(self + 0xa0u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xa0u);
            ebx = (in_ebx & 0xffffff00u) | 1u;
            loc_40 = rd32(sp0 - 0x40u);
            loc_3c_f = (double)rdf32(sp0 - 0x3cu);
            loc_38_f = (double)rdf32(sp0 - 0x38u);
            loc_34 = rd32(sp0 - 0x34u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xa0u);
            wr32(sp0 - 0x40u, 0u);
            d3 = (double)(float)fr(g, (double)rdf32(sp0 - 0x20u) - (double)rdf32(self + 0x80u));
            wrf32(sp0 - 0x30u, (float)d3);
            d4 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1cu) - (double)rdf32(self + 0x84u));
            wrf32(sp0 - 0x2cu, (float)d4);
            d5 = (double)(float)fr(g, (double)rdf32(sp0 - 0x18u) - (double)rdf32(self + 0x88u));
            wrf32(sp0 - 0x28u, (float)d5);
            d6 = (double)(float)fr(g, (double)rdf32(self + 0x94u) - fr(g, atan2(d5, d3)));
            wrf32(sp0 - 0x3cu, (float)d6);
            d7 = fr(g, (double)rdf32(self + 0x94u) - fr(g, atan2(d5, d3)));
            if ((cow_fsw(g, d7, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d7, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
                loc_2c_f = d4;
                loc_3c_f = d6;
                x0 = fr(g, sqrt(fr(g, fr(g, d3 * d3) + fr(g, d5 * d5))));
            }
            else
            {
                eax = cow_fsw(g, d7, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
                loc_2c_f = d4;
                loc_3c_f = d6;
                x0 = fr(g, sqrt(fr(g, fr(g, d3 * d3) + fr(g, d5 * d5))));
                d8 = (double)(float)fr(g, loc_3c_f - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(sp0 - 0x3cu, (float)d8);
                loc_3c_f = d8;
            }
            if (!(loc_3c_f < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_3c_f, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_3c_f, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
                d9 = (double)(float)fr(g, loc_3c_f + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(sp0 - 0x3cu, (float)d9);
                loc_3c_f = d9;
            }
            if ((ecx & 2u) != 0u)
            {
                loc_38_f = (double)rdf32(sp0 - 0x38u);
            }
            else
            {
                d10 = (double)(float)fr(g, atan2(loc_2c_f, x0));
                wrf32(sp0 - 0x38u, (float)d10);
                loc_38_f = d10;
            }
            wr32(sp0 - 0x34u, 0x3f800000u);
            if (!(x0 < (double)rdf32(COW_IMG(0x1032a378u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
                ebx = (in_ebx & 0xffffff00u) | 1u;
                loc_40 = 0u;
                loc_34 = 0x3f800000u;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
                ebx = in_ebx & 0xffffff00u;
                loc_40 = 0u;
                loc_34 = 0x3f800000u;
            }
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    t11 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t12 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        edx = t12;
        wr32(sp0 - 0x50u, COW_IMG(0x1032df68u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x4cu;
        t13 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, COW_IMG(0x1032df68u));
        t14 = g->edx;
        t15 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t13, t14, 1, COW_IMG(0x1032df68u));
        t16 = g->edx;
        if ((uint8_t)t15 != 0u)
        {
            eax = t15;
            edx = t16;
            if (rd8(self + 0xa1u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0xa1u);
                goto L_1005f033;
            }
            eax = sp0 - 0x20u;
L_1005f0d9: ;
            wr32(sp0 - 0x50u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x4cu;
            t29 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, eax);
            t30 = g->edx;
            g->edx = t30;
            cow_thiscall(g, COW_IMG(0x100a57c0u), t29, 1, rd32(sp0 - 0x50u));
            t31 = g->edx;
            edx = t31;
L_1005f0e8: ;
            if (rd32(self + 0x9cu) != 0u)
            {
                eax = rd32(self + 0x9cu);
                if (rd8(self + 0xa0u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0xa0u);
                    if (rd8(self + 0xa3u) == 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(self + 0xa3u);
                        wr32(sp0 - 0x50u, COW_IMG(0x10330684u));
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x4cu;
                        t37 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, COW_IMG(0x10330684u));
                        t38 = g->edx;
                        t39 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t37, t38, 1, COW_IMG(0x10330684u));
                        t40 = g->edx;
                        if ((uint8_t)t39 == 0u)
                        {
                            eax = t39;
                            edx = t40;
                        }
                        else
                        {
                            eax = t39;
                            edx = t40;
                            g->eax = eax;
                            g->esp = sp0 - 0x4cu;
                            t41 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                            t42 = rd32(sp0 - 0x40u);
                            wr32(t41 + 0x744u, t42);
                            t43 = rd32(sp0 - 0x3cu);
                            wr32(t41 + 0x748u, t43);
                            t44 = rd32(sp0 - 0x38u);
                            wr32(t41 + 0x74cu, t44);
                            t45 = rd32(sp0 - 0x34u);
                            wr32(t41 + 0x750u, t45);
                            eax = t41;
                            edx = t45;
                        }
                        g->eax = eax;
                        g->esp = sp0 - 0x4cu;
                        t46 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                        t47 = rd32(sp0 - 0x40u);
                        wr32(t46 + 0xe4u, t47);
                        t48 = rd32(sp0 - 0x3cu);
                        wr32(t46 + 0xe8u, t48);
                        t49 = rd32(sp0 - 0x38u);
                        wr32(t46 + 0xecu, t49);
                        t50 = rd32(sp0 - 0x34u);
                        wr32(t46 + 0xf0u, t50);
                        g->edx = t50;
                        t51 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                        t52 = g->ecx;
                        t53 = g->edx;
                        wr32(sp0 - 0x50u, sp0 - 0x40u);
                        wr32(sp0 - 0x54u, t51 + 0x44u);
                        g->eax = sp0 - 0x40u;
                        t54 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t51 + 0x44u, sp0 - 0x40u);
                        d55 = (double)rdf32(t51 + 0x44u);
                        if ((cow_fsw(g, d55, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, d55, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                            ebx = t51 + 0x44u;
                            edi = t51;
                        }
                        else
                        {
                            eax = cow_fsw(g, d55, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                            ebx = t51 + 0x44u;
                            edi = t51;
                            d56 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(ebx, (float)d56);
                        }
                        if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                            d57 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(ebx, (float)d57);
                        }
                        d58 = (double)rdf32(edi + 0x48u);
                        if ((cow_fsw(g, d58, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, d58, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        }
                        else
                        {
                            eax = cow_fsw(g, d58, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                            d59 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(edi + 0x48u, (float)d59);
                        }
                        d60 = (double)rdf32(edi + 0x48u);
                        if (!(d60 < (double)rdf32(COW_IMG(0x10329d28u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d60, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d60, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                            d61 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(edi + 0x48u, (float)d61);
                        }
                        d62 = (double)rdf32(edi + 0x4cu);
                        if ((cow_fsw(g, d62, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, d62, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        }
                        else
                        {
                            eax = cow_fsw(g, d62, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                            d63 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(edi + 0x4cu, (float)d63);
                        }
                        d64 = (double)rdf32(edi + 0x4cu);
                        if (d64 < (double)rdf32(COW_IMG(0x10329d28u)))
                        {
                            d65 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(edi + 0x4cu, (float)d65);
                        }
                        wr8(self + 0xa3u, 1u);
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | rd8(self + 0xa3u);
                        if ((uint8_t)ebx == 1u)
                        {
                            g->eax = eax;
                            g->esp = sp0 - 0x4cu;
                            t32 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                            t33 = rd32(sp0 - 0x40u);
                            wr32(t32 + 0xe4u, t33);
                            t34 = rd32(sp0 - 0x3cu);
                            wr32(t32 + 0xe8u, t34);
                            t35 = rd32(sp0 - 0x38u);
                            wr32(t32 + 0xecu, t35);
                            t36 = rd32(sp0 - 0x34u);
                            wr32(t32 + 0xf0u, t36);
                        }
                    }
                }
            }
        }
    }
    t66 = rd32(sp0 - 0x20u);
    t67 = rd32(sp0 - 0x18u);
    t68 = rd32(sp0 - 0x1cu);
    t69 = rd32(sp0 - 0x4cu);
    wr32(self + 0x80u, t66);
    t70 = rd32(sp0 - 0x14u);
    wr32(self + 0x84u, t68);
    wr32(self + 0x88u, t67);
    wr32(self + 0x8cu, t70);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x48u);
    g->edi = t69;
    return;
L_1005f033: ;
    if (rd8(self + 0xa0u) == 0u) goto L_1005f0e8;
    d17 = (double)(float)fr(g, (double)rdf32(sp0 - 0x20u) - (double)rdf32(self + 0x80u));
    wrf32(sp0 - 0x10u, (float)d17);
    wr32(sp0 - 0x30u, cow_f2bits(d17));
    d18 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1cu) - (double)rdf32(self + 0x84u));
    wrf32(sp0 - 0xcu, (float)d18);
    wr32(sp0 - 0x2cu, cow_f2bits(d18));
    d19 = (double)(float)fr(g, (double)rdf32(sp0 - 0x18u) - (double)rdf32(self + 0x88u));
    wrf32(sp0 - 8u, (float)d19);
    wr32(sp0 - 0x28u, cow_f2bits(d19));
    d20 = (double)(float)fr(g, (double)rdf32(sp0 - 0x14u) - (double)rdf32(self + 0x8cu));
    wrf32(sp0 - 4u, (float)d20);
    wr32(sp0 - 0x24u, cow_f2bits(d20));
    g->eax = cow_f2bits(d19);
    g->esp = sp0 - 0x4cu;
    t21 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    g->edx = rd32(t21);
    t22 = rd32(t21);
    t23 = cow_thiscall(g, rd32(t22 + 0x1bcu), t21, 0);
    t24 = g->edx;
    d25 = (double)(float)fr(g, (double)rdf32(sp0 - 0x30u) + (double)rdf32(t23));
    wrf32(sp0 - 0x30u, (float)d25);
    d26 = (double)(float)fr(g, (double)rdf32(sp0 - 0x2cu) + (double)rdf32(t23 + 4u));
    wrf32(sp0 - 0x2cu, (float)d26);
    d27 = (double)(float)fr(g, (double)rdf32(sp0 - 0x28u) + (double)rdf32(t23 + 8u));
    wrf32(sp0 - 0x28u, (float)d27);
    d28 = (double)(float)fr(g, (double)rdf32(sp0 - 0x24u) + (double)rdf32(t23 + 0xcu));
    wrf32(sp0 - 0x24u, (float)d28);
    eax = sp0 - 0x30u;
    edx = t24;
    goto L_1005f0d9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005eef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1005eef0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
