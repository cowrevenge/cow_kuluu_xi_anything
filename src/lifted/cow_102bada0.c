/* f_0x102bada0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bada0(Guest* g)
{
    double d2;
    double d3;
    double d4;
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
    uint32_t loc_dc;
    uint32_t loc_e0;
    uint32_t loc_e4;
    uint32_t t1;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 248u);

    wr32(sp0 - 0xe8u, in_ebx);
    wr32(sp0 - 0xecu, in_ebp);
    wr32(sp0 - 0xf0u, in_esi);
    wr32(sp0 - 0xf4u, in_edi);
    t1 = rd32(COW_IMG(0x109f8228u) + rd32(arg1 + 0x12cu) * 0xcu - 0x24u);
    wr32(sp0 - 0xdcu, t1);
    if ((int32_t)(rd32(arg1 + 0x12cu) * 2u + 1u) <= 0)
    {
        edx = t1;
        esi = rd32(arg1 + 0x12cu) * 2u + 1u;
        edi = rd32(arg1 + 0x12cu) * 2u + 8u;
    }
    else
    {
        edx = t1;
        esi = rd32(arg1 + 0x12cu) * 2u + 1u;
        edi = rd32(arg1 + 0x12cu) * 2u + 8u;
        loc_dc = t1;
        wr32(sp0 - 0xe0u, edx);
        wr32(sp0 - 0xe4u, esi);
        eax = sp0 - 0xd0u;
        ebx = sp0 - 0xd4u;
        loc_e0 = edx;
        loc_e4 = esi;
L_102bade8: ;
        wr32(ebx - 4u, 0u);
        wr32(ebx, 0u);
        wr32(ebx + 4u, 0u);
        ecx = loc_e0;
        edx = arg2 + 8u;
        ebp = esi;
L_102bae00: ;
        d2 = fr(g, fr(g, (double)rdf32(edx - 8u) * (double)rdf32(ecx)) + (double)rdf32(eax - 8u));
        wrf32(eax - 8u, (float)d2);
        d3 = fr(g, fr(g, (double)rdf32(edx - 4u) * (double)rdf32(ecx)) + (double)rdf32(eax - 4u));
        wrf32(eax - 4u, (float)d3);
        d4 = fr(g, fr(g, (double)rdf32(ecx) * (double)rdf32(edx)) + (double)rdf32(eax));
        wrf32(eax, (float)d4);
        if (ebp != 1u)
        {
            ecx = ecx + 4u;
            edx = edx + 0xcu;
            ebp = ebp - 1u;
            goto L_102bae00;
        }
        t5 = edi * 4u + loc_e0;
        wr32(sp0 - 0xe0u, t5);
        wr32(sp0 - 0xe4u, loc_e4 - 1u);
        if (loc_e4 != 1u)
        {
            eax = eax + 0xcu;
            ebx = ebx + 0xcu;
            loc_e0 = t5;
            loc_e4 = loc_e4 - 1u;
            goto L_102bade6;
        }
        edx = loc_dc;
    }
    if ((int32_t)esi < (int32_t)edi)
    {
        wr32(sp0 - 0xe4u, edi - esi);
        eax = esi * 0xcu + sp0 - 0xd0u;
        ebx = esi * 0xcu + sp0 - 0xd4u;
        ebp = edx + edi * esi * 4u;
        loc_e4 = edi - esi;
L_102bae72: ;
        wr32(ebx - 4u, 0u);
        wr32(ebx, 0u);
        wr32(ebx + 4u, 0u);
        if ((int32_t)edi > 0)
        {
            ecx = ebp;
            edx = arg2 + 8u;
            esi = edi;
L_102bae8e: ;
            d6 = fr(g, fr(g, (double)rdf32(edx - 8u) * (double)rdf32(ecx)) + (double)rdf32(eax - 8u));
            wrf32(eax - 8u, (float)d6);
            d7 = fr(g, fr(g, (double)rdf32(edx - 4u) * (double)rdf32(ecx)) + (double)rdf32(eax - 4u));
            wrf32(eax - 4u, (float)d7);
            d8 = fr(g, fr(g, (double)rdf32(ecx) * (double)rdf32(edx)) + (double)rdf32(eax));
            wrf32(eax, (float)d8);
            if (esi != 1u)
            {
                ecx = ecx + 4u;
                edx = edx + 0xcu;
                esi = esi - 1u;
                goto L_102bae8e;
            }
        }
        wr32(sp0 - 0xe4u, loc_e4 - 1u);
        if (loc_e4 != 1u)
        {
            eax = eax + 0xcu;
            ebx = ebx + 0xcu;
            ebp = ebp + edi * 4u;
            loc_e4 = loc_e4 - 1u;
            goto L_102bae72;
        }
    }
    esi = sp0 - 0xd8u;
    edi = arg2;
    ecx = 0x36u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return;
L_102bade6: ;
    goto L_102bade8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bada0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bada0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
