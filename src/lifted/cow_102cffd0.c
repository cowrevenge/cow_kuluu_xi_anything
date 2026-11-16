/* f_0x102cffd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102cffd0(Guest* g)
{
    double d1;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d24;
    double d26;
    double d27;
    double d28;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    double loc_8_f;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;

    d1 = (double)(float)(double)rdf32(COW_IMG(0x103295d8u));
    if ((int32_t)(rd32(rd32(sp0 + 4u) + 0x39dcu) - 1u) >= 18)
    {
        esi = rd32(sp0 + 4u);
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        goto L_102d0037;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x39dcu) - 1u;
    esi = rd32(sp0 + 4u);
    loc_8_f = d1;
    x1 = (double)rdf32(COW_IMG(0x103295d8u));
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
    if ((int32_t)eax < 0) goto L_102d005c;
    edi = eax;
L_102cfffb: ;
    t2 = rd32(COW_IMG(0x10344dccu) + edi * 4u);
    t3 = rd32(COW_IMG(0x10344dc8u) + edi * 4u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t3 >= (int32_t)t2)
    {
        eax = t2;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = ecx * 4u + esi + 0xc80u;
        t4 = eax;
        eax = t4 - ecx;
        ecx = t4 - ecx;
L_102d0020: ;
        d5 = (double)rdf32(sp0 + 4u);
        if (!(d5 < fabs((double)rdf32(edx))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, fabs((double)rdf32(edx)), 3u);
            x2 = fabs((double)rdf32(edx));
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, fabs((double)rdf32(edx)), 3u);
            x2 = fabs((double)rdf32(edx));
            wrf32(sp0 + 4u, (float)x2);
        }
        if (ecx != 1u)
        {
            ecx = ecx - 1u;
            edx = edx + 4u;
            goto L_102d0020;
        }
    }
    if ((int32_t)(edi - 1u) >= 0)
    {
        x1 = fr(g, x1 + fr(g, (double)(int32_t)rd32(COW_IMG(0x10344ac0u) + edi * 4u) * (double)rdf32(sp0 + 4u)));
        edi = edi - 1u;
        goto L_102cfffb;
    }
    x1 = fr(g, x1 + fr(g, (double)(int32_t)rd32(COW_IMG(0x10344ac0u) + edi * 4u) * (double)rdf32(sp0 + 4u)));
    loc_8_f = (double)(float)x1;
L_102d005e: ;
    if ((int32_t)rd32(esi + 0x674cu) <= 0) goto L_102d00c1;
    ebx = rd32(esi + 0x674cu);
    edi = 0u;
L_102d006b: ;
    t6 = rd32(COW_IMG(0x10344dccu) + edi * 4u);
    t7 = rd32(COW_IMG(0x10344dc8u) + edi * 4u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t7 >= (int32_t)t6)
    {
        eax = t6;
    }
    else
    {
        eax = t6;
        ecx = t7;
        edx = ecx * 4u + esi + 0x39f0u;
        t8 = eax;
        eax = t8 - ecx;
        ecx = t8 - ecx;
L_102d0090: ;
        d9 = (double)rdf32(sp0 + 4u);
        if (!(d9 < fabs((double)rdf32(edx))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, fabs((double)rdf32(edx)), 2u);
            x1 = fabs((double)rdf32(edx));
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, fabs((double)rdf32(edx)), 2u);
            x1 = fabs((double)rdf32(edx));
            wrf32(sp0 + 4u, (float)x1);
        }
        if (ecx != 1u)
        {
            ecx = ecx - 1u;
            edx = edx + 4u;
            goto L_102d0090;
        }
    }
    if ((int32_t)(edi + 1u) < (int32_t)ebx)
    {
        x0 = fr(g, x0 + fr(g, (double)(int32_t)rd32(COW_IMG(0x10344ac0u) + edi * 4u) * (double)rdf32(sp0 + 4u)));
        edi = edi + 1u;
        goto L_102d006b;
    }
    x0 = fr(g, x0 + fr(g, (double)(int32_t)rd32(COW_IMG(0x10344ac0u) + edi * 4u) * (double)rdf32(sp0 + 4u)));
L_102d00c1: ;
    t10 = rd32(esi + 0xb60u);
    t11 = rd32(esi + 0xb68u);
    t12 = rd32(esi + 0x6754u);
    wrf32(sp0 + 4u, (float)fr(g, x0 + x0));
    if (t11 == 3u)
    {
        ecx = (t10 << 4u) - 0x3bu;
        edx = t11;
        edi = t12;
    }
    else
    {
        ecx = (t10 << 4u) - 0x3bu;
        edx = t11;
        edi = t12;
        d13 = (double)rdf32(sp0 + 4u);
        wrf32(sp0 + 4u, (float)fr(g, d13 + d13));
    }
    d14 = (double)rdf32(sp0 + 4u);
    if (d14 < (double)rdf32(COW_IMG(0x1032961cu))) goto L_102d0238;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    if (edx == 3u) goto L_102d011e;
    d15 = (double)rdf32(sp0 + 4u);
    if (d15 < (double)rdf32(COW_IMG(0x1032a3a0u))) goto L_102d0238;
L_102d011e: ;
    if (rd32(esi + 0x64e0u) != 0u)
    {
        eax = rd32(esi + 0x64e0u);
        goto L_102d01f1;
    }
    eax = rd32(esi + 0x64e0u);
    d16 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329d38u)));
    if (!(d16 < loc_8_f))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, loc_8_f, 0u);
        goto L_102d0146;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, loc_8_f, 0u);
    if (edx == 3u) goto L_102d015f;
L_102d0146: ;
    d17 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032a3e8u)));
    if (!(d17 < loc_8_f))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, loc_8_f, 0u);
        goto L_102d01f1;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, loc_8_f, 0u);
L_102d015f: ;
    d18 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1033a058u)));
    if ((cow_fsw(g, d18, loc_8_f, 0u) & 0x4100u) != 0u)
    {
        ecx = ecx - edi;
    }
    else
    {
        eax = cow_fsw(g, d18, loc_8_f, 0u) & 0x4100u;
        loc_4 = ecx - edi;
        ecx = ecx - edi;
        d19 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329cecu)));
        if (!(d19 < loc_8_f))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, loc_8_f, 0u);
            goto L_102d019d;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, loc_8_f, 0u);
        x0 = fr(g, (double)(int32_t)loc_4 * (double)rdf32(COW_IMG(0x1032a3acu)));
L_102d01bc: ;
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x10u;
        t21 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
        loc_4 = t21;
L_102d01c5: ;
        d24 = fr(g, fr(g, fr(g, loc_8_f - (double)rdf32(sp0 + 4u)) / fr(g, loc_8_f + loc_8_f)) * (double)(int32_t)loc_4);
        fpush(g, d24);
        g->esp = sp0 - 0x10u;
        t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        ecx = t25;
    }
    edi = edi + (ecx & 0xfffffff8u);
L_102d01e5: ;
    wr32(esi + 0x39e0u, edi);
    return;
L_102d0037: ;
    edi = 0x12u;
    goto L_102cfffb;
L_102d005c: ;
    goto L_102d005e;
L_102d019d: ;
    d20 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032cfdcu)));
    if (!(d20 < loc_8_f))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, loc_8_f, 0u);
        goto L_102d01c5;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, loc_8_f, 0u);
    x0 = fr(g, (double)(int32_t)loc_4 * (double)rdf32(COW_IMG(0x1033138cu)));
    goto L_102d01bc;
L_102d01f1: ;
    d26 = (double)rdf32(sp0 + 4u);
    if (!(d26 < loc_8_f)) goto L_102d01e5;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d26, loc_8_f, 0u);
    if (edx != 3u) goto L_102d01e5;
    d27 = fr(g, fr(g, loc_8_f - (double)rdf32(sp0 + 4u)) / fr(g, loc_8_f * (double)rdf32(COW_IMG(0x10329cecu))));
    wr32(sp0 + 4u, ecx - edi);
    d28 = fr(g, d27 * (double)(int32_t)rd32(sp0 + 4u));
    fpush(g, d28);
    g->esp = sp0 - 0x10u;
    t29 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t30 = edi + ((t29 & 0xffffff00u) | (t29 & 0xf8u));
    wr32(esi + 0x39e0u, t30);
    return;
L_102d0238: ;
    wr32(esi + 0x39e0u, ecx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cffd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102cffd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
