/* f_0x1024f600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1024f600(Guest* g)
{
    double d14;
    double d15;
    double d16;
    double d17;
    double d20;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d4;
    double d45;
    double d46;
    double d47;
    double d49;
    double d8;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_18_f;
    uint32_t loc_1c;
    double loc_20_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t28;
    uint32_t t3;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t48;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x34u, 4u);
    wr32(sp0 - 0x38u, 0x3fu);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), self, 4, 0x3fu, 4u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    wrf32(sp0 - 0x20u, (float)(double)(float)d4);
    wr32(sp0 - 0x3cu, 5u);
    wr32(sp0 - 0x40u, 0x3fu);
    g->edx = t3;
    g->esp = sp0 - 0x30u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t2, 4, 0x3fu, 5u, 0x3fu, 4u);
    t6 = g->ecx;
    t7 = g->edx;
    d8 = cow_take_float(g);
    wrf32(sp0 - 0x14u, (float)(double)(float)d8);
    wr32(sp0 - 0x44u, 0xffffffffu);
    wr32(sp0 - 0x48u, 4u);
    wr32(sp0 - 0x4cu, 0xfu);
    wr32(sp0 - 0x50u, 0x3fu);
    wr32(sp0 - 0x1cu, 0u);
    g->edx = t7;
    g->esp = sp0 - 0x34u;
    t9 = cow_call_regs(g, COW_IMG(0x10123a70u), t5, t6, g->edx, 1, 7, 0x3fu, 0xfu, 4u, 0xffffffffu, 0x3fu, 5u, 0x3fu);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        edi = 0u;
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        edi = 1u;
    }
    wr32(sp0 - 0x34u, 0x83u);
    wr32(sp0 - 0x38u, 0x3fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 0x83u, in_edi, in_esi);
    t13 = g->edx;
    d14 = cow_take_float(g);
    if ((cow_fsw(g, d14, (double)rdf32(COW_IMG(0x10329a18u)), 1u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d14, (double)rdf32(COW_IMG(0x10329a18u)), 1u) & 0x4100u;
        edx = t13;
        x0 = d14;
        goto L_1024f66e;
    }
    eax = cow_fsw(g, d14, (double)rdf32(COW_IMG(0x10329a18u)), 1u) & 0x4100u;
    edx = t13;
    x0 = d14;
    if (!(x0 < (double)rdf32(COW_IMG(0x1032df8cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032df8cu)), 1u);
        goto L_1024f679;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032df8cu)), 1u);
L_1024f66e: ;
    wrf32(sp0 - 0x20u, (float)(double)(float)x0);
    edi = 1u;
    loc_20_f = (double)(float)x0;
L_1024f67b: ;
    d15 = (double)rdf32(sp0 - 0x14u);
    d16 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, d15 * d15) + fr(g, loc_20_f * loc_20_f)))));
    wrf32(sp0 - 0x18u, (float)d16);
    d17 = fr(g, sqrt(fr(g, fr(g, d15 * d15) + fr(g, loc_20_f * loc_20_f))));
    if ((cow_fsw(g, d17, (double)rdf32(COW_IMG(0x1032c9a4u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d17, (double)rdf32(COW_IMG(0x1032c9a4u)), 1u) & 0x4100u;
        loc_18_f = d16;
        x0 = d17;
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u) & 0x4100u) == 0u)
        {
            ebx = 3u;
        }
        else
        {
            ebx = 2u;
        }
    }
    else
    {
        loc_18_f = d16;
        x0 = d17;
        ebx = 1u;
    }
    t18 = rd32(rd32(sp0 + 4u) + 8u);
    t19 = rd32(sp0 + 4u);
    d20 = (double)rdf32(COW_IMG(0x10389438u) + ebx * 4u + rd32(rd32(sp0 + 4u) + 8u) * 0x10u);
    wrf32(sp0 + 4u, (float)d20);
    if (edi == 0u)
    {
        eax = t18;
        ecx = ebx + t18 * 4u;
        esi = t19;
        loc_1c = rd32(sp0 - 0x1cu);
        x0 = d20;
    }
    else
    {
        eax = t18;
        ecx = ebx + t18 * 4u;
        esi = t19;
        x0 = d20;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x1cu, cow_f2bits(loc_20_f));
        edx = cow_f2bits(loc_20_f);
        loc_1c = cow_f2bits(loc_20_f);
    }
    if (x0 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        g->esp = sp0 - 0x30u;
        t21 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        d22 = cow_take_float(g);
        d23 = fr(g, (double)rdf32(esi + 0x9cu) - fr(g, fr(g, d22 * (double)rdf32(COW_IMG(0x1032a840u))) * (double)rdf32(sp0 - 0x20u)));
        d24 = (double)rdf32(COW_IMG(0x10337e24u));
        wrf32(esi + 0x9cu, (float)d23);
        if ((cow_fsw(g, d23, d24, 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d23, d24, 1u) & 0x4100u;
            x0 = d23;
        }
        else
        {
            eax = cow_fsw(g, d23, d24, 1u) & 0x4100u;
            x0 = d23;
            d25 = fr(g, x0 - (double)rdf32(COW_IMG(0x10331818u)));
            wrf32(esi + 0x9cu, (float)d25);
        }
        d26 = (double)rdf32(esi + 0x9cu);
        if (d26 < (double)rdf32(COW_IMG(0x10337e20u)))
        {
            d27 = fr(g, (double)rdf32(esi + 0x9cu) + (double)rdf32(COW_IMG(0x10331818u)));
            wrf32(esi + 0x9cu, (float)d27);
        }
        t28 = rd32(esi + 0x8cu);
        wr32(esi + 0x8cu, t28);
        d29 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)(int32_t)arg2 * (double)rdf32(sp0 + 4u)) * (double)rdf32(COW_IMG(0x1033cd68u))) * (double)rdf32(sp0 - 0x18u)) * (double)rdf32(sp0 - 0x1cu));
        wrf32(sp0 - 0x1cu, (float)d29);
        d30 = fr(g, (double)rdf32(esi + 0x9cu) + (double)rdf32(COW_IMG(0x1032df98u)));
        d31 = fr(g, (double)rdf32(esi + 0x9cu) + (double)rdf32(COW_IMG(0x10331360u)));
        d32 = (double)(float)fr(g, fr(g, fr(g, sin(d30)) * fr(g, (double)rdf32(sp0 - 0x14u) * fr(g, fr(g, fr(g, (double)(int32_t)arg2 * (double)rdf32(sp0 + 4u)) * (double)rdf32(COW_IMG(0x1033cd68u))) * (double)rdf32(sp0 - 0x18u)))) + fr(g, fr(g, sin(d31)) * d29));
        wrf32(sp0 - 0x10u, (float)d32);
        d33 = fr(g, d32 + (double)rdf32(esi + 0x88u));
        d34 = fr(g, fr(g, fr(g, cos(d30)) * fr(g, (double)rdf32(sp0 - 0x14u) * fr(g, fr(g, fr(g, (double)(int32_t)arg2 * (double)rdf32(sp0 + 4u)) * (double)rdf32(COW_IMG(0x1033cd68u))) * (double)rdf32(sp0 - 0x18u)))) + fr(g, fr(g, cos(d31)) * d29));
        wrf32(sp0 + 4u, (float)d33);
        wrf32(esi + 0x88u, (float)d33);
        d35 = fr(g, d34 + (double)rdf32(esi + 0x90u));
        wrf32(esi + 0x90u, (float)d35);
        d36 = (double)rdf32(sp0 + 4u);
        d37 = fr(g, sqrt(fr(g, fr(g, d35 * d35) + fr(g, d36 * d36))));
        if ((cow_fsw(g, d37, (double)rdf32(COW_IMG(0x1032b074u)), 2u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x1032b074u)), 2u) & 0x4100u;
            ecx = esi + 0x88u;
            x1 = d37;
            x0 = d35;
        }
        else
        {
            eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x1032b074u)), 2u) & 0x4100u;
            ecx = esi + 0x88u;
            x1 = d37;
            x0 = d35;
            d38 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032b074u)) / x1);
            wrf32(sp0 - 0x18u, (float)d38);
            d39 = fr(g, (double)rdf32(sp0 + 4u) * d38);
            wrf32(ecx, (float)d39);
            wrf32(esi + 0x90u, (float)fr(g, x0 * d38));
        }
        wr32(sp0 - 0x34u, esi + 0x98u);
        wr32(sp0 - 0x38u, ecx);
        wr32(sp0 - 0x3cu, esi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = esi + 0x98u;
        g->esp = sp0 - 0x1cu;
        t40 = cow_cdecl(g, COW_IMG(0x1024e740u), 8, esi, ecx, esi + 0x98u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
        t41 = g->ecx;
        t42 = g->edx;
        eax = t40;
        ecx = t41;
        edx = t42;
    }
    wr32(sp0 - 0x34u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x1024f2e0u), 1, esi);
    t43 = g->ecx;
    t44 = g->edx;
    if ((int32_t)rd32(esi + 0x284u) >= 0)
    {
        eax = rd32(esi + 0x284u);
        ecx = t43;
        edx = t44;
        if (eax != ebx)
        {
            wr32(sp0 - 0x34u, ebx);
            wr32(sp0 - 0x38u, esi + 0x280u);
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x10274210u), 7, esi + 0x280u, ebx, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            if ((int32_t)rd32(esi + 0x294u) >= 0)
            {
                eax = rd32(esi + 0x294u);
                d45 = (double)rdf32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x80u);
                d46 = (double)rdf32(rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u)) + 0x24u);
                if ((cow_fsw(g, d45, d46, 2u) & 0x4100u) != 0u)
                {
                    ecx = eax * 0xd8u + rd32(esi + 0x2a0u) + 0x70u;
                    edx = rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u));
                    x1 = (double)rdf32(rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u)) + 0x24u);
                    eax = cow_fsw(g, d45, d46, 2u) & 0x4100u;
                    x0 = d45;
                    goto L_1024f8c9;
                }
                ecx = eax * 0xd8u + rd32(esi + 0x2a0u) + 0x70u;
                edx = rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u));
                x1 = (double)rdf32(rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u)) + 0x24u);
                eax = cow_fsw(g, d45, d46, 2u) & 0x4100u;
                x0 = d45;
L_1024f8b6: ;
                d47 = fr(g, x0 - x1);
                if ((cow_fsw(g, d47, x1, 2u) & 0x4100u) == 0u)
                {
                    eax = cow_fsw(g, d47, x1, 2u) & 0x4100u;
                    x0 = d47;
                    goto L_1024f8b6;
                }
                eax = cow_fsw(g, d47, x1, 2u) & 0x4100u;
                x0 = d47;
L_1024f8c9: ;
                t48 = rd32(ecx + 0x14u);
                wr32(sp0 - 0x34u, t48);
                d49 = fr(g, fr(g, x0 - (double)rdf32(edx + 0x20u)) / (double)rdf32(edx + 0x24u));
                wrf32(sp0 + 4u, (float)d49);
                g->esp = sp0 - 0x30u;
                t50 = cow_call_regs(g, COW_IMG(0x1027df90u), eax, g->ecx, g->edx, 1, 1, t48);
                wr32(sp0 - 0x38u, sp0 - 0x18u);
                wr32(sp0 - 0x3cu, sp0 - 0x21u);
                wr32(sp0 - 0x40u, t50);
                t51 = rd32(sp0 + 4u);
                wr32(sp0 - 0x44u, t51);
                g->ecx = t51;
                g->edx = sp0 - 0x18u;
                t52 = cow_call_regs(g, COW_IMG(0x1027d130u), sp0 - 0x21u, g->ecx, g->edx, 1, 5, t51, t50, sp0 - 0x21u, sp0 - 0x18u, rd32(sp0 - 0x34u));
                t53 = g->ecx;
                t54 = g->edx;
                if ((int32_t)t52 >= 0)
                {
                    eax = t52;
                    ecx = t53;
                    edx = t54;
                    edi = t50;
                    if ((int32_t)eax < (int32_t)edi)
                    {
                        wr32(sp0 - 0x34u, eax);
                        wr32(sp0 - 0x38u, ebx + 2u);
                        wr32(sp0 - 0x3cu, esi + 0x240u);
                        g->esp = sp0 - 0x30u;
                        cow_cdecl(g, COW_IMG(0x10252ec0u), 3, esi + 0x240u, ebx + 2u, eax);
                    }
                }
            }
        }
    }
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    return;
L_1024f679: ;
    loc_20_f = (double)rdf32(sp0 - 0x20u);
    goto L_1024f67b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024f600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024f600(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
