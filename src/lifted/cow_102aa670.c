/* f_0x102aa670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102aa670(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d14;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d22;
    double d23;
    double d24;
    double d25;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d34;
    double d35;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d53;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_40;
    uint32_t t1;
    uint32_t t10;
    uint32_t t15;
    uint32_t t2;
    uint32_t t21;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t33;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    if (rd32(arg1 + 0x34u) == 0u)
    {
        eax = rd32(arg1 + 0x34u);
        ecx = self;
        goto L_102aaa46;
    }
    eax = rd32(arg1 + 0x34u);
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102aaa46;
    }
    ecx = rd32(eax + 0x14u);
    wr32(sp0 - 0x50u, eax);
    g->ebx = arg1;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102a9f10u), 3, eax, in_edi, in_esi);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(arg1 + 0x54u) == 0u)
    {
        ecx = t1;
        edx = t2;
        wr32(sp0 - 0x50u, 0xe8u);
        wr32(sp0 - 0x54u, COW_IMG(0x103be980u));
        wr32(sp0 - 0x58u, 0xcu);
        t3 = rd32(arg1 + 0x44u);
        wr32(sp0 - 0x5cu, t3);
        g->esp = sp0 - 0x48u;
        t4 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t3, 0xcu, COW_IMG(0x103be980u), 0xe8u, rd32(sp0 - 0x4cu));
        wr32(arg1 + 0x54u, t4);
    }
    wr32(sp0 - 0x50u, in_ebp);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0u);
    if (rd32(rd32(arg1 + 0x48u)) == 0u)
    {
        eax = rd32(arg1 + 0x48u) + 4u;
        ecx = rd32(rd32(arg1 + 0x48u));
    }
    else
    {
        eax = rd32(arg1 + 0x48u) + 4u;
        ecx = rd32(rd32(arg1 + 0x48u));
        esi = rd32(rd32(arg1 + 0x34u) + 0x58u);
        edi = rd32(rd32(arg1 + 0x34u) + 0x54u);
        wr32(sp0 - 0x20u, ecx);
        edx = 0u;
        ebp = 0u;
        loc_20 = ecx;
L_102aa6eb: ;
        wr32(sp0 - 0x40u, rd32(eax));
        if ((int32_t)rd32(eax) <= 0)
        {
            ecx = rd32(eax);
            eax = eax + 4u;
            goto L_102aa853;
        }
        loc_40 = rd32(eax);
        eax = eax + 4u;
        edx = edx * 0xcu;
L_102aa708: ;
        t5 = rd32(eax + 4u);
        wr32(sp0 - 0x34u, t5);
        wr32(sp0 - 0x30u, rd32(eax));
        wr32(sp0 - 0x38u, eax + 0xcu);
        t6 = rd32(eax + 8u);
        wr32(sp0 - 0x2cu, t6);
        wr32(sp0 - 0x40u, loc_40 - 3u);
        wr32(sp0 - 0x28u, t6 * 3u);
        d7 = (double)(float)fr(g, (double)rdf32(edi + t6 * 0xcu) - (double)rdf32(edi + rd32(eax) * 0xcu));
        wrf32(sp0 - 0xcu, (float)d7);
        d8 = (double)(float)fr(g, (double)rdf32(edi + t6 * 0xcu + 4u) - (double)rdf32(edi + rd32(eax) * 0xcu + 4u));
        wrf32(sp0 - 8u, (float)d8);
        d9 = fr(g, (double)rdf32(edi + t6 * 0xcu + 8u) - (double)rdf32(edi + rd32(eax) * 0xcu + 8u));
        wr32(sp0 - 0x24u, edx + 0xcu);
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        t10 = edx + rd32(arg1 + 0x54u);
        wr32(sp0 - 0x58u, t10);
        wr32(sp0 - 0x3cu, 1u);
        d11 = (double)(float)fr(g, fr(g, d9 * fr(g, (double)rdf32(edi + t5 * 0xcu + 4u) - (double)rdf32(edi + rd32(eax) * 0xcu + 4u))) - fr(g, d8 * fr(g, (double)rdf32(edi + t5 * 0xcu + 8u) - (double)rdf32(edi + rd32(eax) * 0xcu + 8u))));
        wrf32(sp0 - 0x18u, (float)d11);
        d12 = fr(g, (double)rdf32(edi + t5 * 0xcu) - (double)rdf32(edi + rd32(eax) * 0xcu));
        d13 = (double)(float)fr(g, fr(g, d7 * fr(g, (double)rdf32(edi + t5 * 0xcu + 8u) - (double)rdf32(edi + rd32(eax) * 0xcu + 8u))) - fr(g, d12 * d9));
        wrf32(sp0 - 0x14u, (float)d13);
        d14 = (double)(float)fr(g, fr(g, d12 * d8) - fr(g, d7 * fr(g, (double)rdf32(edi + t5 * 0xcu + 4u) - (double)rdf32(edi + rd32(eax) * 0xcu + 4u))));
        wrf32(sp0 - 0x10u, (float)d14);
        t15 = rd32(eax);
        g->esp = sp0 - 0x50u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t10, sp0 - 0x18u);
        d16 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(esi + t15 * 0xcu));
        wrf32(esi + t15 * 0xcu, (float)d16);
        d17 = fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(esi + t15 * 0xcu + 4u));
        wrf32(esi + t15 * 0xcu + 4u, (float)d17);
        d18 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(esi + t15 * 0xcu + 8u));
        wrf32(esi + t15 * 0xcu + 8u, (float)d18);
        d19 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(esi + t5 * 0xcu));
        wrf32(esi + t5 * 0xcu, (float)d19);
        d20 = fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(esi + t5 * 0xcu + 4u));
        wrf32(esi + t5 * 0xcu + 4u, (float)d20);
        t21 = rd32(sp0 - 0x28u);
        d22 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(esi + t5 * 0xcu + 8u));
        wrf32(esi + t5 * 0xcu + 8u, (float)d22);
        d23 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(esi + t21 * 4u));
        wrf32(esi + t21 * 4u, (float)d23);
        d24 = fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(esi + t21 * 4u + 4u));
        wrf32(esi + t21 * 4u + 4u, (float)d24);
        d25 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(esi + t21 * 4u + 8u));
        wrf32(esi + t21 * 4u + 8u, (float)d25);
        if (rd32(sp0 - 0x40u) != 0u)
        {
            eax = rd32(sp0 - 0x38u);
            goto L_102aa704;
        }
        eax = rd32(sp0 - 0x38u);
L_102aa9f1: ;
        edx = rd32(sp0 - 0x3cu);
        ebp = rd32(sp0 - 0x2cu);
L_102aa9fd: ;
        wr32(sp0 - 0x20u, loc_20 - 1u);
        if (loc_20 != 1u)
        {
            loc_20 = loc_20 - 1u;
            goto L_102aa6eb;
        }
        ecx = loc_20 - 1u;
    }
    t47 = rd32(arg1 + 0x34u);
    wr32(sp0 - 0x54u, t47);
    g->ecx = ecx;
    g->edx = t47;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x102aa260u), 7, t47, in_ebp, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), loc_40, 0u);
    t48 = g->ecx;
    t49 = g->edx;
    if ((int32_t)rd32(arg1 + 0x44u) <= 0)
    {
        eax = rd32(arg1 + 0x44u);
        edx = t49;
        goto L_102aaa6c;
    }
    ecx = t48;
    edx = t49;
    esi = 0u;
    edi = 0u;
L_102aaa24: ;
    t50 = edi + rd32(arg1 + 0x54u);
    wr32(sp0 - 0x50u, t50);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10274910u), 1, t50);
    t51 = g->ecx;
    t52 = g->edx;
    d53 = cow_take_float(g);
    if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x44u))
    {
        ecx = t51;
        edx = t52;
        esi = esi + 1u;
        edi = edi + 0xcu;
        goto L_102aaa24;
    }
    eax = rd32(arg1 + 0x44u);
    edx = t52;
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x48u);
    g->edi = rd32(sp0 - 0x4cu);
    g->edx = edx;
    return eax;
L_102aa704: ;
    edx = rd32(sp0 - 0x24u);
    goto L_102aa708;
L_102aa853: ;
    wr32(sp0 - 0x40u, -ecx);
    if (-ecx == 0u)
    {
        loc_40 = -ecx;
        goto L_102aa9fd;
    }
    loc_40 = -ecx;
    ecx = 0u;
    edx = edx * 0xcu;
L_102aa878: ;
    if (ecx != 0u)
    {
        if (ecx != 1u)
        {
            wr32(sp0 - 0x34u, ebp);
            loc_34 = ebp;
            loc_30 = 0u;
        }
        else
        {
            wr32(sp0 - 0x30u, ebp);
            loc_34 = 0u;
            loc_30 = ebp;
        }
        wr32(sp0 - 0x40u, loc_40 - 1u);
        wr32(sp0 - 0x24u, -ecx);
        loc_40 = loc_40 - 1u;
        loc_24 = -ecx;
    }
    else
    {
        wr32(sp0 - 0x30u, rd32(eax));
        wr32(sp0 - 0x24u, 1u);
        t26 = rd32(eax + 4u);
        wr32(sp0 - 0x34u, t26);
        wr32(sp0 - 0x40u, loc_40 - 3u);
        loc_34 = t26;
        loc_30 = rd32(eax);
        eax = eax + 8u;
        loc_40 = loc_40 - 3u;
        loc_24 = 1u;
    }
    wr32(sp0 - 0x38u, eax + 4u);
    t27 = rd32(eax) * 3u;
    wr32(sp0 - 0x28u, t27);
    wr32(sp0 - 0x2cu, rd32(eax));
    d28 = (double)(float)fr(g, (double)rdf32(edi + rd32(eax) * 0xcu) - (double)rdf32(edi + loc_30 * 0xcu));
    wrf32(sp0 - 0xcu, (float)d28);
    d29 = (double)(float)fr(g, (double)rdf32(edi + t27 * 4u + 4u) - (double)rdf32(edi + loc_30 * 0xcu + 4u));
    wrf32(sp0 - 8u, (float)d29);
    d30 = fr(g, (double)rdf32(edi + t27 * 4u + 8u) - (double)rdf32(edi + loc_30 * 0xcu + 8u));
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x54u, sp0 - 0x18u);
    d31 = (double)(float)fr(g, fr(g, d30 * fr(g, (double)rdf32(edi + loc_34 * 0xcu + 4u) - (double)rdf32(edi + loc_30 * 0xcu + 4u))) - fr(g, d29 * fr(g, (double)rdf32(edi + loc_34 * 0xcu + 8u) - (double)rdf32(edi + loc_30 * 0xcu + 8u))));
    wrf32(sp0 - 0x18u, (float)d31);
    d32 = fr(g, (double)rdf32(edi + loc_34 * 0xcu) - (double)rdf32(edi + loc_30 * 0xcu));
    t33 = edx + rd32(arg1 + 0x54u);
    wr32(sp0 - 0x58u, t33);
    wr32(sp0 - 0x1cu, edx + 0xcu);
    d34 = (double)(float)fr(g, fr(g, d28 * fr(g, (double)rdf32(edi + loc_34 * 0xcu + 8u) - (double)rdf32(edi + loc_30 * 0xcu + 8u))) - fr(g, d32 * d30));
    wrf32(sp0 - 0x14u, (float)d34);
    d35 = (double)(float)fr(g, fr(g, d32 * d29) - fr(g, d28 * fr(g, (double)rdf32(edi + loc_34 * 0xcu + 4u) - (double)rdf32(edi + loc_30 * 0xcu + 4u))));
    wrf32(sp0 - 0x10u, (float)d35);
    t36 = rd32(eax);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, t33, sp0 - 0x18u);
    t37 = rd32(sp0 - 0x28u);
    d38 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(esi + loc_30 * 0xcu));
    wrf32(esi + loc_30 * 0xcu, (float)d38);
    d39 = fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(esi + loc_30 * 0xcu + 4u));
    wrf32(esi + loc_30 * 0xcu + 4u, (float)d39);
    d40 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(esi + loc_30 * 0xcu + 8u));
    wrf32(esi + loc_30 * 0xcu + 8u, (float)d40);
    d41 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(esi + loc_34 * 0xcu));
    wrf32(esi + loc_34 * 0xcu, (float)d41);
    d42 = fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(esi + loc_34 * 0xcu + 4u));
    wrf32(esi + loc_34 * 0xcu + 4u, (float)d42);
    d43 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(esi + loc_34 * 0xcu + 8u));
    wrf32(esi + loc_34 * 0xcu + 8u, (float)d43);
    d44 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(esi + t37 * 4u));
    wrf32(esi + t37 * 4u, (float)d44);
    d45 = fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(esi + t37 * 4u + 4u));
    wrf32(esi + t37 * 4u + 4u, (float)d45);
    d46 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(esi + t37 * 4u + 8u));
    wrf32(esi + t37 * 4u + 8u, (float)d46);
    if (rd32(sp0 - 0x40u) != 0u)
    {
        eax = rd32(sp0 - 0x38u);
        goto L_102aa86c;
    }
    eax = rd32(sp0 - 0x38u);
    goto L_102aa9f1;
L_102aa86c: ;
    ecx = rd32(sp0 - 0x24u);
    edx = rd32(sp0 - 0x1cu);
    ebp = rd32(sp0 - 0x2cu);
    goto L_102aa878;
L_102aaa46: ;
    wr32(sp0 - 0x50u, 0xe3u);
    wr32(sp0 - 0x54u, COW_IMG(0x103be980u));
    wr32(sp0 - 0x58u, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t54 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be980u));
    t55 = g->ecx;
    t56 = g->edx;
    wr32(sp0 - 0x5cu, COW_IMG(0x103beae0u));
    wr32(sp0 - 0x60u, COW_IMG(0x103beaa4u));
    g->ebx = arg1;
    g->edx = t56;
    g->esp = sp0 - 0x58u;
    t57 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103beae0u));
    t58 = g->edx;
    eax = t57;
    edx = t58;
L_102aaa6c: ;
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x48u);
    g->edi = rd32(sp0 - 0x4cu);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102aa670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102aa670(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
