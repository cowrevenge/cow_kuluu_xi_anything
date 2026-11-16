/* f_0x1029a730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1029a730(Guest* g)
{
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if (rd32(arg1 + 0x24u) == 0u)
        {
            eax = rd32(arg1 + 0x24u);
            edx = in_edx;
        }
        else
        {
            eax = rd32(arg1 + 0x24u);
            wr32(eax + 0x3cu, 1u);
            if ((int32_t)rd32(arg1 + 0x3cu) <= 0) goto L_1029a77e;
            ecx = 0u;
L_1029a75e: ;
            if (rd32(rd32(ecx * 4u + rd32(arg1 + 0x38u))) == 0x150002u)
            {
                eax = rd32(ecx * 4u + rd32(arg1 + 0x38u));
                if (rd32(eax + 0x54u) != 0u)
                {
                    eax = rd32(eax + 0x54u);
                    wr32(eax + 0x3cu, 1u);
                }
            }
            if ((int32_t)(ecx + 1u) < (int32_t)rd32(arg1 + 0x3cu))
            {
                ecx = ecx + 1u;
                goto L_1029a75e;
            }
L_1029a77e: ;
            t1 = rd32(rd32(arg1 + 0x24u) + 0x38u);
            if (rd32(t1 + 0x70u) != 0u)
            {
                eax = rd32(t1 + 0x70u);
                edx = 1u;
            }
            else
            {
                ecx = rd32(arg1 + 0x24u);
                ebx = t1;
                loc_c = t1;
                t2 = rd32(ebx + 0x14u) << 4u;
                g->edx = 1u;
                g->esp = sp0 - 8u;
                t3 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t2, COW_IMG(0x103bc310u), 0x28du, in_edi, in_esi, in_ebp, in_ebx, loc_c);
                t4 = g->edx;
                t5 = rd32(ebx + 0x14u) << 4u;
                wr32(ebx + 0x70u, t3);
                wr32(ebx + 0x34u, 4u);
                g->ecx = t5;
                g->esp = sp0 - 0x18u;
                t6 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t5, COW_IMG(0x103bc310u), 0x290u, 1u, t2, COW_IMG(0x103bc310u), 0x28du, in_edi);
                t7 = g->ecx;
                wr32(ebx + 0x74u, t6);
                wr32(ebx + 0x38u, 4u);
                t8 = rd32(arg1 + 0x3cu) * 0x40u + 0x40u;
                g->esp = sp0 - 0x28u;
                t9 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t8, COW_IMG(0x103bc310u), 0x293u, 1u, t5, COW_IMG(0x103bc310u), 0x290u, 1u);
                wr32(ebx + 0x78u, t9);
                wr32(ebx + 0x3cu, 4u);
                t10 = rd32(arg1 + 0x3cu);
                wr32(t9, t10);
                t11 = rd32(ebx + 0x14u) << 4u;
                edi = t3;
                eax = 0u;
                ecx = t11 >> 2u;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = t11 & 3u;
                while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                t12 = rd32(ebx + 0x14u) << 4u;
                edi = t6;
                eax = 0u;
                ecx = t12 >> 2u;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = t12 & 3u;
                while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                if ((int32_t)rd32(arg1 + 0x3cu) <= 0)
                {
                    edx = t12;
                    esi = t3;
                    goto L_1029a96b;
                }
                eax = 0u;
                edx = t12;
                esi = t3;
                loc_4 = t6;
                loc_8 = 0u;
L_1029a844: ;
                if (rd32(rd32(eax * 4u + rd32(arg1 + 0x38u))) == 0x150002u)
                {
                    edi = rd32(eax * 4u + rd32(arg1 + 0x38u));
                    if ((int32_t)rd32(edi + 0x50u) <= 0) goto L_1029a957;
                    ebp = 0u;
L_1029a863: ;
                    d13 = (double)rdf32(esi + rd32(ebp * 4u + rd32(edi + 0x30u)) * 0x10u);
                    if (d13 != (double)rdf32(COW_IMG(0x103295d8u)))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                        ecx = rd32(ebp * 4u + rd32(edi + 0x30u)) << 2u;
                        goto L_1029a883;
                    }
                    ecx = rd32(ebp * 4u + rd32(edi + 0x30u)) << 2u;
                    edx = 0u;
L_1029a92a: ;
                    wr32(ecx * 4u + edx * 4u + loc_4, loc_8 * 4u);
                    t25 = rd32(ebp * 4u + rd32(edi + 0x38u));
                    wr32(ecx * 4u + edx * 4u + esi, t25);
                    edx = t25;
L_1029a947: ;
                    if ((int32_t)(ebp + 1u) < (int32_t)rd32(edi + 0x50u))
                    {
                        eax = rd32(edi + 0x50u);
                        ebp = ebp + 1u;
                        goto L_1029a863;
                    }
                    eax = loc_8;
L_1029a957: ;
                }
                if ((int32_t)(eax + 1u) < (int32_t)rd32(arg1 + 0x3cu))
                {
                    loc_8 = eax + 1u;
                    eax = eax + 1u;
                    goto L_1029a844;
                }
L_1029a96b: ;
                if ((int32_t)rd32(ebx + 0x14u) <= 0)
                {
                    eax = rd32(ebx + 0x14u);
                }
                else
                {
                    eax = rd32(ebx + 0x14u);
                    ecx = 0u;
                    esi = esi + 8u;
L_1029a978: ;
                    d26 = fr(g, fr(g, fr(g, (double)rdf32(esi - 8u) + (double)rdf32(esi - 4u)) + (double)rdf32(esi)) + (double)rdf32(esi + 4u));
                    if (d26 == (double)rdf32(COW_IMG(0x103295d8u)))
                    {
                        x0 = d26;
                    }
                    else
                    {
                        x0 = d26;
                        d27 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
                        d28 = fr(g, d27 * (double)rdf32(esi - 8u));
                        wrf32(esi - 8u, (float)d28);
                        d29 = fr(g, d27 * (double)rdf32(esi - 4u));
                        wrf32(esi - 4u, (float)d29);
                        d30 = fr(g, d27 * (double)rdf32(esi));
                        wrf32(esi, (float)d30);
                        d31 = fr(g, d27 * (double)rdf32(esi + 4u));
                        wrf32(esi + 4u, (float)d31);
                    }
                    if ((int32_t)(ecx + 1u) < (int32_t)rd32(ebx + 0x14u))
                    {
                        eax = rd32(ebx + 0x14u);
                        ecx = ecx + 1u;
                        esi = esi + 0x10u;
                        goto L_1029a978;
                    }
                    eax = rd32(ebx + 0x14u);
                }
            }
        }
    }
    g->edx = edx;
    return eax;
L_1029a883: ;
    d14 = (double)rdf32(ecx * 4u + esi + 4u);
    if (d14 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1029a89e;
    }
    edx = 1u;
    goto L_1029a92a;
L_1029a89e: ;
    d15 = (double)rdf32(ecx * 4u + esi + 8u);
    if (d15 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1029a8b6;
    }
    edx = 2u;
    goto L_1029a92a;
L_1029a8b6: ;
    d16 = (double)rdf32(ecx * 4u + esi + 0xcu);
    if (d16 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1029a8ce;
    }
    edx = 3u;
    goto L_1029a92a;
L_1029a8ce: ;
    d17 = (double)rdf32(ecx * 4u + esi + 4u);
    d18 = (double)rdf32(ecx * 4u + esi);
    if (!(d17 < d18))
    {
        edx = 0u;
    }
    else
    {
        edx = 1u;
    }
    d19 = (double)rdf32(ecx * 4u + esi + 8u);
    d20 = (double)rdf32(ecx * 4u + edx * 4u + esi);
    if (d19 < d20)
    {
        edx = 2u;
    }
    d21 = (double)rdf32(ecx * 4u + esi + 0xcu);
    d22 = (double)rdf32(ecx * 4u + edx * 4u + esi);
    if (d21 < d22)
    {
        edx = 3u;
    }
    d23 = (double)rdf32(ebp * 4u + rd32(edi + 0x38u));
    d24 = (double)rdf32(ecx * 4u + edx * 4u + esi);
    if (d23 < d24)
    {
        ebx = loc_c;
        goto L_1029a947;
    }
    ebx = loc_c;
    if ((int32_t)edx < 0) goto L_1029a947;
    goto L_1029a92a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029a730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1029a730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
