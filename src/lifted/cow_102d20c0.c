/* f_0x102d20c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102d20c0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d2;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d4;
    double d6;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_2c;
    uint32_t loc_30;
    double loc_30_f;
    uint32_t t1;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t5;
    uint32_t t7;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    t1 = rd32(rd32(sp0 + 4u) + 0xc4u);
    wr32(sp0 - 0x24u, t1);
    eax = t1;
    ecx = 0u;
    edx = rd32(sp0 + 4u);
    ebx = 0u;
L_102d20dd: ;
    esi = rd32(sp0 + 8u);
    edi = ecx + 4u;
    x0 = (double)rdf32(ecx * 4u + rd32(sp0 + 8u));
    ecx = ecx + 1u;
L_102d20e8: ;
    d2 = (double)rdf32(ecx * 4u + esi);
    if (!(x0 < d2))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d2, 1u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d2, 1u);
        x0 = (double)rdf32(ecx * 4u + esi);
    }
    if ((int32_t)(ecx + 1u) < (int32_t)edi)
    {
        ecx = ecx + 1u;
        goto L_102d20e8;
    }
    ecx = ecx + 1u;
    wrf32(ebx * 4u + sp0 - 0x20u, (float)x0);
    if ((int32_t)(ebx + 1u) < 8)
    {
        ebx = ebx + 1u;
        goto L_102d20db;
    }
    ebx = ebx + 1u;
    t3 = rd32(sp0 + 0xcu);
    wrf32(edx + 0xc4u, (float)x0);
    if ((int32_t)t3 <= 0)
    {
        eax = t3;
        edi = 0x40u;
    }
    else
    {
        eax = t3;
        edi = -(eax * 8u) + 0x40u;
    }
    if ((int32_t)ecx >= (int32_t)edi) goto L_102d2141;
L_102d2127: ;
    d4 = (double)rdf32(ecx * 4u + rd32(sp0 + 8u));
    if (!(x0 < d4))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d4, 1u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d4, 1u);
        esi = rd32(sp0 + 8u);
        x0 = (double)rdf32(ecx * 4u + esi);
    }
    if ((int32_t)(ecx + 1u) < (int32_t)edi)
    {
        ecx = ecx + 1u;
        goto L_102d2127;
    }
L_102d2141: ;
    if (x0 < (double)rdf32(COW_IMG(0x103456f4u)))
    {
        x0 = (double)rdf32(COW_IMG(0x103456f4u));
    }
    t5 = rd32(sp0 + 8u);
    d6 = fr(g, (double)rdf32(COW_IMG(0x103456f0u)) * x0);
    wr32(edx + 0x1cu, 0x20u);
    wrf32(sp0 - 0x30u, (float)(double)(float)d6);
    t7 = ebx * 0x10u + t5 - 4u;
    wr32(sp0 - 0x2cu, t7);
    eax = t5;
    ebp = 4u;
    esi = ebx * 4u - 1u;
    edi = 7u;
    loc_30_f = (double)(float)d6;
    loc_2c = t7;
L_102d218b: ;
    d8 = (double)rdf32(esi + sp0 - 0x23u);
    wrf32(sp0 + 4u, (float)d8);
    if (d8 < x0) goto L_102d2260;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, x0, 1u);
    d9 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103456ecu)), 1u) & 0x4100u) != 0u) goto L_102d224c;
    eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103456ecu)), 1u) & 0x4100u;
    d10 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d10, loc_30_f, 1u) & 0x4100u) != 0u) goto L_102d224c;
    if (ebx == 0u)
    {
        ecx = ebx * 4u;
    }
    else
    {
        ecx = ebx * 4u;
        d11 = (double)rdf32(loc_2c + 4u);
        if (d11 < loc_30_f)
        {
            if ((double)rdf32(loc_2c) < loc_30_f)
            {
                d12 = (double)rdf32(loc_2c - 4u);
                if (!(d12 < loc_30_f))
                {
                    ecx = esi;
                }
                else
                {
                    ecx = esi - 1u;
                }
            }
        }
    }
    d13 = fr(g, (double)rdf32(sp0 + 4u) / x0);
    wr32(edi * 4u + edx - 4u, ecx);
    d14 = (double)(float)fr(g, d13 * (double)rdf32(COW_IMG(0x103456e8u)));
    wrf32(sp0 - 0x28u, (float)d14);
    if ((int32_t)((cow_f2bits(d14) >> 0x17u) - 0x7fu) <= (int32_t)ebp)
    {
        eax = (cow_f2bits(d14) >> 0x17u) - 0x7fu;
        edi = edi - 1u;
    }
    else
    {
        edi = edi - 1u;
        eax = ebp;
    }
    wr32(edi * 4u + edx + 0x20u, -eax);
    if ((int32_t)(ebp - eax) <= 0)
    {
        ebp = ebp - eax;
        goto L_102d2279;
    }
    ebp = ebp - eax;
    if (edi == 5u) goto L_102d2279;
L_102d224e: ;
    d15 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x103456f0u)));
    wrf32(sp0 - 0x30u, (float)d15);
    loc_30_f = d15;
    x0 = (double)rdf32(sp0 + 4u);
L_102d2260: ;
    wr32(sp0 - 0x2cu, loc_2c - 0x10u);
    if ((int32_t)(ebx - 1u) >= 0)
    {
        eax = loc_2c - 0x10u;
        ebx = ebx - 1u;
        esi = esi - 4u;
        loc_2c = loc_2c - 0x10u;
        goto L_102d218b;
    }
L_102d2279: ;
    d16 = fr(g, (double)rdf32(edx + 0xc0u) * (double)rdf32(COW_IMG(0x103456e4u)));
    wrf32(sp0 + 4u, (float)d16);
    if ((int32_t)(0x83u - (rd32(sp0 + 4u) >> 0x17u)) <= 15)
    {
        ebx = 0x83u - (rd32(sp0 + 4u) >> 0x17u);
    }
    else
    {
        ebx = 0xfu;
    }
    if ((int32_t)(ebx - ebp) <= 0)
    {
        ecx = 0u;
    }
    else
    {
        ebx = ebx - ebp;
        wr32(sp0 - 0x2cu, 0x3fcccccdu);
        if (rd32(sp0 + 0xcu) != 0xffffffffu)
        {
            eax = rd32(sp0 + 0xcu);
            loc_2c = 0x3fcccccdu;
        }
        else
        {
            eax = rd32(sp0 + 0xcu);
            wr32(sp0 - 0x2cu, 0x40000000u);
            loc_2c = 0x40000000u;
        }
        d17 = (double)rdf32(edx + 0xc0u);
        d18 = (double)rdf32(rd32(sp0 + 8u));
        if (!(d17 < d18))
        {
            x0 = d17;
        }
        else
        {
            esi = rd32(sp0 + 8u);
            x0 = d17;
            x0 = (double)rdf32(esi);
        }
        t19 = rd32(edi * 4u + edx);
        wr32(sp0 + 4u, 0u);
        if ((int32_t)t19 <= 0)
        {
            ecx = 0u;
            x1 = fr(g, cow_bits2f(loc_2c) * x0);
            goto L_102d23eb;
        }
        x1 = fr(g, cow_bits2f(loc_2c) * x0);
        wr32(sp0 + 0xcu, edx + 0x1cu);
        t20 = rd32(sp0 + 8u) + 4u;
        wr32(sp0 - 0x30u, t20);
        ecx = 0u;
        ebp = edx + 0x20u;
        esi = 0u;
        loc_30 = t20;
L_102d230b: ;
        t21 = rd32(loc_30);
        wr32(sp0 + 8u, t21);
        d22 = (double)rdf32(sp0 + 8u);
        if (d22 < x0) goto L_102d23d0;
        eax = (t21 & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, x0, 2u);
        d23 = (double)rdf32(sp0 + 8u);
        if ((cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103456ecu)), 2u) & 0x4100u) != 0u) goto L_102d23c0;
        eax = cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103456ecu)), 2u) & 0x4100u;
        d24 = (double)rdf32(sp0 + 8u);
        if ((cow_fsw(g, d24, x1, 1u) & 0x4100u) != 0u) goto L_102d23c2;
        d25 = fr(g, (double)rdf32(sp0 + 8u) / x0);
        wr32(ecx * 4u + edx, esi);
        d26 = (double)(float)fr(g, d25 * (double)rdf32(COW_IMG(0x103456e8u)));
        wrf32(sp0 - 0x28u, (float)d26);
        if ((int32_t)ecx < 1)
        {
            eax = (cow_f2bits(d26) >> 0x17u) - 0x7fu;
        }
        else
        {
            eax = (cow_f2bits(d26) >> 0x17u) - 0x7fu;
            if (rd32(ecx * 4u + edx - 4u) == esi - 1u)
            {
                if ((int32_t)eax >= (int32_t)rd32(rd32(sp0 + 0xcu)))
                {
                    esi = rd32(sp0 + 0xcu);
                    wr32(sp0 + 0xcu, esi - 4u);
                    t27 = rd32(sp0 + 4u);
                    wr32(ecx * 4u + edx - 4u, t27);
                    eax = eax + rd32(ebp - 4u);
                    ecx = ecx - 1u;
                    ebx = ebx + rd32(ebp - 4u);
                    ebp = ebp - 4u;
                }
            }
            esi = rd32(sp0 + 4u);
        }
        if ((int32_t)eax > (int32_t)ebx)
        {
            eax = ebx;
        }
        wr32(ebp, eax);
        t28 = rd32(sp0 + 0xcu) + 4u;
        wr32(sp0 + 0xcu, t28);
        if (ecx + 1u == edi)
        {
            ecx = ecx + 1u;
            goto L_102d23ef;
        }
        ecx = ecx + 1u;
        ebx = ebx - eax;
        ebp = ebp + 4u;
        if ((int32_t)ebx <= 0) goto L_102d23ef;
L_102d23c4: ;
        x1 = fr(g, (double)rdf32(sp0 + 8u) * cow_bits2f(loc_2c));
        x0 = (double)rdf32(sp0 + 8u);
L_102d23d0: ;
        wr32(sp0 + 4u, esi + 1u);
        wr32(sp0 - 0x30u, loc_30 + 4u);
        if ((int32_t)(esi + 1u) < (int32_t)rd32(edi * 4u + edx))
        {
            esi = esi + 1u;
            loc_30 = loc_30 + 4u;
            goto L_102d230b;
        }
L_102d23eb: ;
    }
L_102d23ef: ;
    if ((int32_t)edi >= 7) goto L_102d240a;
L_102d23f4: ;
    t29 = rd32(edi * 4u + edx + 0x20u);
    wr32(ecx * 4u + edx + 0x20u, t29);
    t30 = rd32(edi * 4u + edx);
    wr32(ecx * 4u + edx, t30);
    if ((int32_t)(edi + 1u) < 7)
    {
        ecx = ecx + 1u;
        edi = edi + 1u;
        goto L_102d23f4;
    }
    ecx = ecx + 1u;
L_102d240a: ;
    if ((int32_t)(ecx - 1u) >= 0)
    {
        esi = ecx - 1u;
        eax = 4u;
        edx = edx + esi * 4u + 0x20u;
        esi = esi + 1u;
L_102d241b: ;
        t31 = eax + rd32(edx);
        wr32(edx, t31);
        if (esi != 1u)
        {
            eax = t31;
            edx = edx - 4u;
            esi = esi - 1u;
            goto L_102d241b;
        }
    }
    return ecx;
L_102d20db: ;
    goto L_102d20dd;
L_102d224c: ;
    goto L_102d224e;
L_102d23c0: ;
L_102d23c2: ;
    goto L_102d23c4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d20c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d20c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
