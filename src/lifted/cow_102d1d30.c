/* f_0x102d1d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102d1d30(Guest* g)
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
    double d23;
    double d26;
    double d29;
    double d32;
    double d35;
    double d38;
    double d40;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
    uint32_t loc_110;
    uint32_t t1;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t36;
    uint32_t t37;
    uint32_t t39;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 304u);

    wr32(sp0 - 0x114u, in_ebx);
    wr32(sp0 - 0x118u, in_ebp);
    wr32(sp0 - 0x10cu, 0x508b771fu);
    wr32(sp0 - 0x11cu, in_esi);
    wr32(sp0 - 0x120u, in_edi);
    wr32(sp0 - 0x110u, 0x508b771fu);
    t1 = arg1 + arg2 * 0xccu + 0x2a28u;
    wr32(sp0 - 0x108u, t1);
    eax = 0xffffffe0u;
    ecx = t1 + 0x40u;
    ebx = sp0 - 0xc0u - t1;
    esi = t1;
    loc_110 = 0x508b771fu;
    loc_108 = t1;
L_102d1d88: ;
    t2 = rd32(ecx);
    wr32(eax * 4u + sp0 - 0x80u, t2);
    if (loc_110 < t2)
    {
        edx = t2;
        wr32(sp0 - 0x110u, edx);
        loc_110 = edx;
    }
    t3 = rd32(arg4 + eax * 4u + 0x80u);
    wr32(ebx + ecx, t3);
    wr32(ecx, t3);
    if ((int32_t)(eax + 1u) < 0)
    {
        eax = eax + 1u;
        ecx = ecx + 4u;
        goto L_102d1d88;
    }
    edx = t3;
    if (rd32(arg1 + 0x2d64u) == 0u)
    {
        eax = arg2;
        ecx = rd32(arg1 + 0x2d64u);
    }
    else
    {
        if (rd32(arg2 * 4u + arg3 + 0xb68u) == rd32(arg2 * 4u + arg3 + 0xb78u))
        {
            ecx = rd32(arg2 * 4u + arg3 + 0xb68u);
            if (ecx == 3u)
            {
                eax = 0xffffffffu;
                edx = arg3;
            }
            else
            {
                eax = 0u;
                edx = arg3;
            }
        }
        else
        {
            ecx = rd32(arg2 * 4u + arg3 + 0xb68u);
            eax = 5u;
            edx = arg3;
        }
    }
    wr32(sp0 - 0x124u, eax);
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    wr32(sp0 - 0x12cu, esi);
    g->eax = sp0 - 0x100u;
    g->esp = sp0 - 0xc8u;
    t4 = cow_bridge_indirect(g, COW_IMG(0x102d20c0u), 0u, 25u, (const uint32_t[]){esi, sp0 - 0x100u, eax, in_edi, in_esi, in_ebp, in_ebx, loc_110, 0x508b771fu, loc_108, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu)}, g->ecx, g->edx, g->eax, 100u);
    t5 = rd32(sp0 - 0x110u);
    wr32(esi + 0xc0u, t5);
    wr32(sp0 - 0x10cu, t4);
    if (arg2 != 0u)
    {
        edx = t4;
        loc_10c = t4;
    }
    else
    {
        edx = t4;
        loc_10c = t4;
        t6 = rd32(esi + 0xc8u);
        wr32(arg1 + 0x2d58u, t6);
    }
    if (edx != 0u) goto L_102d1ee6;
    if (arg2 != 0u) goto L_102d1e92;
    if (rd32(arg1 + 0x2d64u) != 0u) goto L_102d1e92;
    if (rd32(esi + 0xc8u) != 0u) goto L_102d1e92;
    eax = rd32(esi + 0xc8u);
    if (rd32(arg1 + 0x2bbcu) == 0u) goto L_102d1e92;
    ecx = rd32(arg1 + 0x2bbcu);
    d7 = (double)rdf32(esi + 0xc0u);
    if ((cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103456e0u)), 0u) & 0x4100u) == 0u) goto L_102d1e92;
    if ((int32_t)ecx <= 0)
    {
        ebx = 4u;
        edi = 4u;
    }
    else
    {
        edx = arg1 + 0x2b14u;
        ebx = 4u;
        edi = 4u;
L_102d1e77: ;
        if ((int32_t)ebx <= (int32_t)rd32(edx))
        {
            eax = rd32(edx);
        }
        else
        {
            eax = rd32(edx);
            ebx = eax;
        }
        if ((int32_t)edi < (int32_t)eax)
        {
            edi = eax;
        }
        if (ecx != 1u)
        {
            ecx = ecx - 1u;
            edx = edx + 4u;
            goto L_102d1e77;
        }
    }
    if ((int32_t)(edi - ebx) >= 2) goto L_102d1e9f;
L_102d1e92: ;
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    return 0u;
L_102d1e9f: ;
    if ((int32_t)(rd32(arg1 + 0x2af4u) + 1u) <= 0)
    {
        edi = rd32(arg1 + 0x2af4u);
        goto L_102d1ecd;
    }
    eax = arg1;
    ecx = 0u;
    edx = rd32(arg1 + 0x2af4u) + 1u;
    edi = rd32(arg1 + 0x2af4u);
L_102d1eb5: ;
    d8 = (double)rdf32(ecx * 4u + sp0 - 0x100u);
    if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103456e0u)), 0u) & 0x4100u) == 0u) goto L_102d1e92;
    eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103456e0u)), 0u) & 0x4100u;
    if ((int32_t)(ecx + 1u) < (int32_t)edx)
    {
        ecx = ecx + 1u;
        goto L_102d1eb5;
    }
L_102d1ecd: ;
    wr32(sp0 - 0x10cu, 1u);
    wr32(esi, edi);
    wr32(esi + 0x20u, 5u);
    edx = 1u;
    loc_10c = 1u;
L_102d1ee6: ;
    t9 = arg1 + arg2 * 4u + 0x1000u;
    wr32(sp0 - 0x104u, t9);
    wr32(edx * 4u + esi + 0x20u, 4u);
    eax = t9;
    ecx = t9;
    ebx = esi + 0x20u;
    edi = 0u;
    loc_104 = t9;
L_102d1f00: ;
    if (rd32(ebx) == 4u)
    {
        ebp = rd32(ebx);
        goto L_102d1f7f;
    }
    ebp = rd32(ebx);
    if (ecx >= eax + rd32(edi * 4u + esi) * 0x80u)
    {
        x0 = (double)rdf32(COW_IMG(0x10345680u) + ebp * 4u);
        goto L_102d1f75;
    }
    edx = eax + rd32(edi * 4u + esi) * 0x80u;
    x0 = (double)rdf32(COW_IMG(0x10345680u) + ebp * 4u);
L_102d1f1a: ;
    d10 = fr(g, x0 * (double)rdf32(ecx));
    wrf32(ecx, (float)d10);
    d11 = fr(g, x0 * (double)rdf32(ecx + 0x10u));
    wrf32(ecx + 0x10u, (float)d11);
    d12 = fr(g, x0 * (double)rdf32(ecx + 0x20u));
    wrf32(ecx + 0x20u, (float)d12);
    d13 = fr(g, x0 * (double)rdf32(ecx + 0x30u));
    wrf32(ecx + 0x30u, (float)d13);
    d14 = fr(g, x0 * (double)rdf32(ecx + 0x40u));
    wrf32(ecx + 0x40u, (float)d14);
    d15 = fr(g, x0 * (double)rdf32(ecx + 0x50u));
    wrf32(ecx + 0x50u, (float)d15);
    d16 = fr(g, x0 * (double)rdf32(ecx + 0x60u));
    wrf32(ecx + 0x60u, (float)d16);
    d17 = fr(g, x0 * (double)rdf32(ecx + 0x70u));
    wrf32(ecx + 0x70u, (float)d17);
    if (ecx + 0x80u < edx)
    {
        ecx = ecx + 0x80u;
        goto L_102d1f1a;
    }
    ecx = ecx + 0x80u;
L_102d1f75: ;
    d18 = fr(g, x0 * (double)rdf32(ecx));
    wrf32(ecx, (float)d18);
    ecx = ecx + 0x10u;
L_102d1f91: ;
    t19 = ebp * 7u + rd32(edi * 4u + esi + 0x24u);
    t20 = t19 + rd32(edi * 4u + esi + 0x24u) - ebp;
    t21 = (t19 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t19 & 7u) * 4u);
    wr32(sp0 - 0x110u, t21);
    t22 = rd32(edi * 4u + esi + 0x24u);
    d23 = fr(g, cow_bits2f(t21) * (double)rdf32(ecx));
    wrf32(ecx, (float)d23);
    t24 = t20 + t22 - ebp;
    t25 = (t20 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t20 & 7u) * 4u);
    wr32(sp0 - 0x110u, t25);
    d26 = fr(g, cow_bits2f(t25) * (double)rdf32(ecx + 0x10u));
    wrf32(ecx + 0x10u, (float)d26);
    t27 = t22 + t24 - ebp;
    t28 = (t24 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t24 & 7u) * 4u);
    wr32(sp0 - 0x110u, t28);
    d29 = fr(g, cow_bits2f(t28) * (double)rdf32(ecx + 0x20u));
    wrf32(ecx + 0x20u, (float)d29);
    t30 = t22 + t27 - ebp;
    t31 = (t27 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t27 & 7u) * 4u);
    wr32(sp0 - 0x110u, t31);
    d32 = fr(g, cow_bits2f(t31) * (double)rdf32(ecx + 0x30u));
    wrf32(ecx + 0x30u, (float)d32);
    t33 = t22 + t30 - ebp;
    t34 = (t30 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t30 & 7u) * 4u);
    wr32(sp0 - 0x110u, t34);
    d35 = fr(g, cow_bits2f(t34) * (double)rdf32(ecx + 0x40u));
    wrf32(ecx + 0x40u, (float)d35);
    t36 = t22 + t33 - ebp;
    t37 = (t33 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t33 & 7u) * 4u);
    wr32(sp0 - 0x110u, t37);
    d38 = fr(g, cow_bits2f(t37) * (double)rdf32(ecx + 0x50u));
    wrf32(ecx + 0x50u, (float)d38);
    t39 = (t36 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t36 & 7u) * 4u);
    wr32(sp0 - 0x110u, t39);
    d40 = fr(g, cow_bits2f(t39) * (double)rdf32(ecx + 0x60u));
    wrf32(ecx + 0x60u, (float)d40);
    eax = loc_104;
    ecx = ecx + 0x70u;
    edx = loc_10c;
    ebx = edi * 4u + esi + 0x24u;
    esi = rd32(sp0 - 0x108u);
    edi = edi + 1u;
    goto L_102d1f00;
L_102d1f7f: ;
    if (edi == edx) goto L_102d20a7;
    ecx = eax + rd32(edi * 4u + esi) * 0x80u + 0x10u;
    goto L_102d1f91;
L_102d20a7: ;
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    return edx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d1d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d1d30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
