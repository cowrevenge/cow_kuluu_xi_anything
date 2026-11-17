/* f_0x102f242b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102f242b(Guest* g)
{
    double d1;
    double d10;
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
    double d20;
    double d21;
    double d22;
    double d24;
    double d25;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    double loc_14_f;
    double loc_18_f;
    double loc_1c_f;
    uint32_t loc_20;
    uint32_t loc_24;
    double loc_2c_f;
    double loc_8_f;
    double loc_c_f;
    uint32_t t23;
    uint32_t t3;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    if (rd32(sp0 + 0x10u) != 6u)
    {
        esi = rd32(sp0 + 0x10u);
        wr32(sp0 - 0x20u, COW_IMG(0x10348338u));
        ebx = COW_IMG(0x10348358u);
        loc_20 = COW_IMG(0x10348338u);
    }
    else
    {
        esi = rd32(sp0 + 0x10u);
        wr32(sp0 - 0x20u, COW_IMG(0x10348378u));
        ebx = COW_IMG(0x10348390u);
        loc_20 = COW_IMG(0x10348378u);
    }
    wrf32(sp0 - 8u, (float)(double)(float)1.0);
    wrf32(sp0 - 0xcu, (float)(double)(float)0.0);
    if (esi != 8u)
    {
        edx = 0u;
        loc_8_f = (double)(float)1.0;
        loc_c_f = (double)(float)0.0;
        goto L_102f2497;
    }
    edx = 0u;
    loc_8_f = (double)(float)1.0;
    loc_c_f = (double)(float)0.0;
L_102f2467: ;
    d1 = (double)rdf32(arg3 + edx * 4u);
    if (!(d1 < loc_8_f))
    {
        eax = (arg3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, loc_8_f, 0u);
        ecx = arg3 + edx * 4u;
    }
    else
    {
        ecx = arg3 + edx * 4u;
        wr32(sp0 - 8u, rd32(ecx));
        eax = rd32(ecx);
    }
    if ((cow_fsw(g, (double)rdf32(ecx), loc_c_f, 0u) >> 8u & 0x41u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), loc_c_f, 0u);
    }
    else
    {
        wr32(sp0 - 0xcu, rd32(ecx));
        eax = rd32(ecx);
    }
    if (edx + 1u < 0x10u)
    {
        edx = edx + 1u;
        loc_8_f = (double)rdf32(sp0 - 8u);
        loc_c_f = (double)rdf32(sp0 - 0xcu);
        goto L_102f2467;
    }
    edx = edx + 1u;
L_102f24e3: ;
    wr32(sp0 - 0x34u, esi - 1u);
    if ((int32_t)(esi - 1u) >= 0)
    {
        edi = esi - 1u;
        x0 = (double)(int32_t)(esi - 1u);
    }
    else
    {
        edi = esi - 1u;
        x0 = (double)(int32_t)(esi - 1u);
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    wrf32(sp0 - 0x28u, (float)(double)(float)x0);
    g->eax = eax;
    g->esp = sp0 - 0x54u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x102f22efu), ecx, 3, in_edi, in_esi, in_ebx);
    wr32(sp0 - 0x24u, 0u);
    eax = t3;
    loc_24 = 0u;
    loc_c_f = (double)rdf32(sp0 - 0xcu);
L_102f2502: ;
    d4 = fr(g, loc_c_f - (double)rdf32(sp0 - 8u));
    if (d4 < (double)rdf32(COW_IMG(0x1032ae50u)))
    {
        x0 = d4;
        goto L_102f26be;
    }
    x0 = d4;
    d5 = (double)(float)fr(g, (double)rdf32(sp0 - 0x28u) / x0);
    wrf32(sp0 - 0x2cu, (float)d5);
    if (esi == 0u)
    {
        loc_2c_f = d5;
    }
    else
    {
        loc_2c_f = d5;
        eax = ebx;
        ecx = sp0 - 0x54u - ebx;
        edx = rd32(sp0 - 0x20u) - ebx;
L_102f2533: ;
        d6 = fr(g, fr(g, loc_c_f * (double)rdf32(eax + edx)) + fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(eax)));
        wrf32(eax + ecx, (float)d6);
        if (esi != 1u)
        {
            eax = eax + 4u;
            esi = esi - 1u;
            goto L_102f2533;
        }
        esi = rd32(sp0 + 0x10u);
    }
    if (esi == 6u)
    {
        wrf32(sp0 - 0x3cu, (float)(double)(float)0.0);
        wrf32(sp0 - 0x38u, (float)(double)(float)1.0);
    }
    wrf32(sp0 - 0x10u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x14u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x18u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x1cu, (float)(double)(float)0.0);
    edx = 0u;
    loc_10_f = (double)(float)0.0;
    loc_14_f = (double)(float)0.0;
    loc_18_f = (double)(float)0.0;
    loc_1c_f = (double)(float)0.0;
L_102f2571: ;
    d7 = fr(g, fr(g, (double)rdf32(arg3 + edx * 4u) - (double)rdf32(sp0 - 8u)) * loc_2c_f);
    if (!(d7 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (arg3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = arg3 + edx * 4u;
        x0 = d7;
        goto L_102f25ad;
    }
    eax = (arg3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    ecx = arg3 + edx * 4u;
    x0 = d7;
    if (esi != 6u) goto L_102f25a9;
    d8 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(COW_IMG(0x10329a08u)));
    if (!(cow_fsw(g, d8, (double)rdf32(ecx), 0u) >> 8u & 1u))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(ecx), 0u);
        goto L_102f262e;
    }
L_102f25a9: ;
    eax = 0u;
L_102f25ec: ;
    if (eax < esi)
    {
        d12 = fr(g, (double)rdf32(ecx) - (double)rdf32(eax * 4u + sp0 - 0x54u));
        d13 = (double)(float)fr(g, fr(g, d12 * (double)rdf32(eax * 4u + ebx)) + loc_10_f);
        wrf32(sp0 - 0x10u, (float)d13);
        d14 = (double)rdf32(eax * 4u + ebx);
        d15 = (double)(float)fr(g, fr(g, d14 * d14) + loc_18_f);
        wrf32(sp0 - 0x18u, (float)d15);
        d16 = (double)(float)fr(g, fr(g, d12 * (double)rdf32(eax * 4u + rd32(sp0 - 0x20u))) + loc_14_f);
        wrf32(sp0 - 0x14u, (float)d16);
        d17 = (double)rdf32(eax * 4u + rd32(sp0 - 0x20u));
        d18 = (double)(float)fr(g, fr(g, d17 * d17) + loc_1c_f);
        wrf32(sp0 - 0x1cu, (float)d18);
        eax = eax * 4u + rd32(sp0 - 0x20u);
        loc_10_f = d13;
        loc_14_f = d16;
        loc_18_f = d15;
        loc_1c_f = d18;
    }
L_102f262e: ;
    if (edx + 1u < 0x10u)
    {
        edx = edx + 1u;
        goto L_102f2571;
    }
    if ((cow_fsw(g, loc_18_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) >> 8u & 0x41u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_18_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_8_f = (double)rdf32(sp0 - 8u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_18_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        d19 = (double)(float)fr(g, (double)rdf32(sp0 - 8u) - fr(g, loc_10_f / loc_18_f));
        wrf32(sp0 - 8u, (float)d19);
        loc_8_f = d19;
    }
    if ((cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) >> 8u & 0x41u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        d20 = (double)(float)fr(g, loc_c_f - fr(g, loc_14_f / loc_1c_f));
        wrf32(sp0 - 0xcu, (float)d20);
        loc_c_f = d20;
    }
    if ((cow_fsw(g, loc_8_f, loc_c_f, 0u) >> 8u & 0x41u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, loc_c_f, 0u);
    }
    else
    {
        wrf32(sp0 - 0xcu, (float)(double)(float)loc_8_f);
        wr32(sp0 - 8u, cow_f2bits(loc_c_f));
        eax = cow_f2bits(loc_c_f);
        loc_c_f = (double)(float)loc_8_f;
    }
    d21 = fr(g, loc_10_f * loc_10_f);
    if (!(d21 < (double)rdf32(COW_IMG(0x1032a9e8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x1032a9e8u)), 0u);
        goto L_102f26af;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x1032a9e8u)), 0u);
    d22 = fr(g, loc_14_f * loc_14_f);
    if (d22 < (double)rdf32(COW_IMG(0x1032a9e8u))) goto L_102f26c0;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, (double)rdf32(COW_IMG(0x1032a9e8u)), 0u);
L_102f26af: ;
    wr32(sp0 - 0x24u, loc_24 + 1u);
    if (loc_24 + 1u < 8u)
    {
        loc_24 = loc_24 + 1u;
        goto L_102f2502;
    }
L_102f26c0: ;
    t23 = rd32(COW_IMG(0x109b262cu));
    wr32(sp0 + 0x10u, t23);
    g->fcw = rd16(sp0 + 0x10u);
    d24 = (double)rdf32(sp0 - 8u);
    if (!(d24 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t23 & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ebx = rd32(sp0 - 0x58u);
        esi = rd32(sp0 - 0x5cu);
        edi = rd32(sp0 - 0x60u);
        d25 = (double)rdf32(sp0 - 8u);
        if ((cow_fsw(g, d25, (double)rdf32(COW_IMG(0x1032961cu)), 0u) >> 8u & 0x41u) != 0u)
        {
            x0 = (double)rdf32(sp0 - 8u);
        }
        else
        {
            x0 = 1.0;
        }
    }
    else
    {
        ebx = rd32(sp0 - 0x58u);
        esi = rd32(sp0 - 0x5cu);
        edi = rd32(sp0 - 0x60u);
        x0 = 0.0;
    }
    wrf32(arg1, (float)x0);
    if (!(loc_c_f < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (arg1 & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_c_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        if ((cow_fsw(g, loc_c_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) >> 8u & 0x41u) != 0u)
        {
            x0 = loc_c_f;
        }
        else
        {
            x0 = 1.0;
        }
    }
    else
    {
        x0 = 0.0;
    }
    wrf32(arg2, (float)x0);
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    return;
L_102f2497: ;
    d2 = (double)rdf32(arg3 + edx * 4u);
    if (!(d2 < loc_8_f))
    {
        eax = (arg3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, loc_8_f, 0u);
        ecx = arg3 + edx * 4u;
    }
    else
    {
        eax = (arg3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, loc_8_f, 0u);
        ecx = arg3 + edx * 4u;
        if ((cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x103295d8u)), 0u) >> 8u & 0x41u) != 0u)
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        }
        else
        {
            wr32(sp0 - 8u, rd32(ecx));
            eax = rd32(ecx);
        }
    }
    if ((cow_fsw(g, (double)rdf32(ecx), loc_c_f, 0u) >> 8u & 0x41u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), loc_c_f, 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), loc_c_f, 0u);
        if (!((double)rdf32(ecx) < (double)rdf32(COW_IMG(0x1032961cu))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        }
        else
        {
            wr32(sp0 - 0xcu, rd32(ecx));
            eax = rd32(ecx);
        }
    }
    if (edx + 1u < 0x10u)
    {
        edx = edx + 1u;
        loc_8_f = (double)rdf32(sp0 - 8u);
        loc_c_f = (double)rdf32(sp0 - 0xcu);
        goto L_102f2497;
    }
    edx = edx + 1u;
    goto L_102f24e3;
L_102f25ad: ;
    d9 = (double)rdf32(sp0 - 0x28u);
    if (cow_fsw(g, x0, d9, 1u) >> 8u & 1u) goto L_102f25da;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d9, 1u);
    if (esi != 6u) goto L_102f25d6;
    d10 = fr(g, fr(g, loc_c_f + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x10329a08u)));
    if (d10 <= (double)rdf32(ecx))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(ecx), 0u);
        goto L_102f262e;
    }
L_102f25d6: ;
    eax = edi;
    goto L_102f25ec;
L_102f25da: ;
    d11 = (double)(float)fr(g, x0 + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x30u, (float)d11);
    wr32(sp0 - 0x34u, (uint32_t)fist32(g, d11));
    eax = (uint32_t)fist32(g, d11);
    goto L_102f25ec;
L_102f26be: ;
    goto L_102f26c0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f242b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f242b(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
