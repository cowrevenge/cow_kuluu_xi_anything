/* f_0x102ae4e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102ae4e0(Guest* g)
{
    double d10;
    double d11;
    double d13;
    double d14;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t t1;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    t1 = rd32(sp0 + 8u) + 4u;
    wr32(sp0 - 0x20u, t1);
    t2 = rd32(sp0 + 0x10u);
    t3 = rd32(sp0 + 8u);
    wr32(t3, 0x3f800000u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x24u, t2);
    wr32(sp0 - 0x1cu, 0xffffffffu - t2);
    eax = 0xffffffffu - t2;
    edx = t2;
    ebx = t3;
    ebp = 0u;
    edi = t2 + 1u;
    loc_20 = t1;
    loc_28 = 1u;
    loc_24 = t2;
    loc_1c = 0xffffffffu - t2;
L_102ae516: ;
    if ((int32_t)edx > 0)
    {
        esi = rd32(sp0 + 0x14u);
        wr32(sp0 + 8u, esi);
        if ((int32_t)edx < (int32_t)esi)
        {
            wr32(sp0 + 8u, edx);
        }
    }
    else
    {
        esi = rd32(sp0 + 0x14u);
        wr32(sp0 + 8u, 0u);
    }
    d4 = fr(g, (double)rdf32(sp0 + 0xcu) - (double)(int32_t)rd32(sp0 + 8u));
    wrf32(ebp + sp0 - 0xcu, (float)d4);
    if ((int32_t)edi > 0)
    {
        ecx = ebp + sp0 - 0xcu;
        wr32(sp0 + 8u, esi);
        if ((int32_t)edi < (int32_t)esi)
        {
            wr32(sp0 + 8u, edi);
        }
    }
    else
    {
        ecx = ebp + sp0 - 0xcu;
        wr32(sp0 + 8u, 0u);
    }
    d5 = fr(g, (double)(int32_t)rd32(sp0 + 8u) - (double)rdf32(sp0 + 0xcu));
    wrf32(ebp + sp0 - 0x18u, (float)d5);
    if ((int32_t)(eax + edi) < 0)
    {
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        eax = ebx;
        edx = sp0 - 0x18u - ebx;
        esi = loc_28;
L_102ae581: ;
        d6 = fr(g, (double)rdf32(eax) / fr(g, (double)rdf32(eax + edx) + (double)rdf32(ecx)));
        wrf32(sp0 + 8u, (float)d6);
        d7 = fr(g, fr(g, d6 * (double)rdf32(eax + edx)) + x0);
        wrf32(eax, (float)d7);
        if (esi != 1u)
        {
            eax = eax + 4u;
            esi = esi - 1u;
            x0 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx));
            ecx = ecx - 4u;
            goto L_102ae581;
        }
        x0 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx));
        eax = loc_1c;
        edx = loc_24;
    }
    wrf32(loc_20, (float)x0);
    wr32(sp0 - 0x24u, edx - 1u);
    wr32(sp0 - 0x20u, loc_20 + 4u);
    wr32(sp0 - 0x28u, loc_28 + 1u);
    if ((int32_t)(eax + edi + 1u) < 2)
    {
        ebp = ebp + 4u;
        edi = edi + 1u;
        loc_20 = loc_20 + 4u;
        loc_28 = loc_28 + 1u;
        loc_24 = edx - 1u;
        edx = edx - 1u;
        goto L_102ae516;
    }
    if ((int32_t)(rd32(sp0 + 0x10u) - 2u) > 0)
    {
        eax = rd32(sp0 + 0x10u) - 2u;
        ecx = rd32(sp0 + 0x14u);
        esi = rd32(sp0 + 0x10u);
        wr32(sp0 + 0x10u, ecx);
        if ((int32_t)eax < (int32_t)ecx)
        {
            wr32(sp0 + 0x10u, eax);
        }
    }
    else
    {
        ecx = rd32(sp0 + 0x14u);
        esi = rd32(sp0 + 0x10u);
        wr32(sp0 + 0x10u, 0u);
    }
    d8 = (double)(float)fr(g, (double)rdf32(sp0 + 0xcu) - (double)(int32_t)rd32(sp0 + 0x10u));
    wrf32(sp0 - 4u, (float)d8);
    if ((int32_t)(esi + 3u) > 0)
    {
        eax = esi + 3u;
        wr32(sp0 + 0x14u, ecx);
        if ((int32_t)eax < (int32_t)ecx)
        {
            wr32(sp0 + 0x14u, eax);
        }
    }
    else
    {
        wr32(sp0 + 0x14u, 0u);
    }
    t9 = rd32(sp0 + 0x14u);
    wr32(sp0 + 0x14u, 0u);
    d10 = (double)(float)fr(g, (double)(int32_t)t9 - (double)rdf32(sp0 + 0xcu));
    wrf32(sp0 - 0x10u, (float)d10);
    eax = ebx;
    ecx = sp0 - 4u;
    edx = sp0 - 0x18u - ebx;
    esi = arg1 - ebx;
    edi = 3u;
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_102ae654: ;
    d11 = fr(g, (double)rdf32(eax) / fr(g, (double)rdf32(eax + edx) + (double)rdf32(ecx)));
    wrf32(sp0 + 8u, (float)d11);
    t12 = rd32(sp0 + 8u);
    d13 = fr(g, fr(g, d11 * (double)rdf32(eax + edx)) + x0);
    wrf32(eax, (float)d13);
    d14 = fr(g, (double)rdf32(sp0 + 0x14u) - (double)rdf32(sp0 + 8u));
    wr32(sp0 + 0x14u, t12);
    wrf32(eax + esi, (float)d14);
    if (edi != 1u)
    {
        eax = eax + 4u;
        edi = edi - 1u;
        x0 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx));
        ecx = ecx - 4u;
        goto L_102ae654;
    }
    ebp = t12;
    x0 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx));
    ecx = ecx - 4u;
    wr32(sp0 - 0x3cu, 0x40400000u);
    wrf32(ebx + 0xcu, (float)x0);
    wr32(sp0 - 0x40u, arg1);
    wr32(sp0 - 0x44u, arg1);
    wr32(arg1 + 0xcu, ebp);
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10274ea0u), 3, arg1, arg1, 0x40400000u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ae4e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ae4e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
