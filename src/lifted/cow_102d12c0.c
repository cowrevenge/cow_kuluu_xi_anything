/* f_0x102d12c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102d12c0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d2;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t1);
    d2 = (double)rdf32(COW_IMG(0x10344dc4u));
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x102d0e70u), 1, t1);
    wr32(sp0 - 4u, t3);
    t4 = t1 + rd32(sp0 + 0x10u) * 4u;
    t5 = rd32(sp0 + 0x10u);
    wr32(sp0 + 4u, t4);
    if ((int32_t)(t3 + 3u) <= 64)
    {
        eax = t5;
        ecx = t3;
        esi = t3 + 3u;
        loc_4 = t3;
        x0 = d2;
    }
    else
    {
        eax = t5;
        ecx = t3;
        loc_4 = t3;
        x0 = d2;
        esi = 0x40u;
    }
    if ((int32_t)(esi - 1u) >= (int32_t)ecx)
    {
        esi = esi - 1u;
        wr32(sp0 - 0x18u, in_ebx);
        wr32(sp0 - 0x1cu, in_ebp);
        ebx = rd32(sp0 + 8u);
        ebp = -eax;
        edi = esi * 0x2bu << 0x10u;
L_102d131b: ;
        wr32(sp0 + 0x10u, 0u);
        t6 = rd32(COW_IMG(0x10344e4cu) + arg3 * 0xcu + (edi >> 0x17u) * 0xcu - esi * 4u) - (edi & 0x7f800000u);
        wr32(sp0 + 8u, t6);
        if ((int32_t)ebp >= 0)
        {
            eax = edi & 0x7f800000u;
            ecx = 0u;
            goto L_102d138b;
        }
        ecx = 0u;
        edx = ebp;
L_102d134b: ;
        d7 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x10343990u)) + fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(edx * 4u + rd32(sp0 + 4u))));
        wrf32(sp0 - 0xcu, (float)d7);
        t8 = (uint32_t)(int16_t)rd16(sp0 - 0xcu);
        wr32(sp0 - 8u, t8);
        d9 = (double)rdf32(sp0 + 0x10u);
        d10 = fabs(fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(edx * 4u + rd32(sp0 + 4u))) - (double)(int32_t)t8));
        if (!(d9 < d10))
        {
            eax = (t8 & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, d10, 2u);
            ecx = ecx | t8;
            x1 = fabs(fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(edx * 4u + rd32(sp0 + 4u))) - (double)(int32_t)t8));
        }
        else
        {
            eax = (t8 & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, d10, 2u);
            ecx = ecx | t8;
            x1 = fabs(fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(edx * 4u + rd32(sp0 + 4u))) - (double)(int32_t)t8));
            wrf32(sp0 + 0x10u, (float)x1);
        }
        if ((int32_t)(edx + 1u) < 0)
        {
            edx = edx + 1u;
            goto L_102d134b;
        }
L_102d138b: ;
        d11 = fr(g, (double)rdf32(sp0 + 8u) * x0);
        d12 = (double)rdf32(sp0 + 0x10u);
        if ((cow_fsw(g, d11, d12, 1u) & 0x4100u) == 0u)
        {
            d13 = fr(g, (double)rdf32(sp0 + 0x10u) / (double)rdf32(sp0 + 8u));
            wr32(ebx + 0x14u, esi);
            if (ecx & 1u)
            {
                x0 = d13;
                goto L_102d13c5;
            }
            x0 = d13;
L_102d13b0: ;
            if ((int32_t)rd32(ebx + 0x14u) >= 61) goto L_102d13c5;
            eax = rd32(ebx + 0x14u);
            wr32(ebx + 0x14u, eax + 3u);
            if (!((uint32_t)((int32_t)ecx >> 1u) & 1u))
            {
                ecx = (uint32_t)((int32_t)ecx >> 1u);
                goto L_102d13b0;
            }
        }
L_102d13c5: ;
        if ((int32_t)(esi - 1u) >= (int32_t)loc_4)
        {
            esi = esi - 1u;
            edi = edi - 0x2b0000u;
            goto L_102d131b;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d12c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102d12c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
