/* f_0x1029c630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1029c630(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(sp0 + 4u) != 0u)
    {
        edi = rd32(sp0 + 4u);
        eax = arg3;
        ecx = arg2;
        esi = arg4;
L_1029c64d: ;
        d1 = (double)(float)fr(g, (double)rdf32(ecx + 8u) - (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x290u));
        d2 = fr(g, (double)rdf32(ecx + 4u) - (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x28cu));
        d3 = fr(g, (double)rdf32(ecx) - (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x288u));
        d4 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, fr(g, (double)rdf32(ecx + 8u) - (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x290u)) * d1) + fr(g, d2 * d2)) + fr(g, d3 * d3)))));
        wrf32(sp0 + 4u, (float)d4);
        d5 = (double)(float)fr(g, d3 * (double)rdf32(sp0 + 4u));
        d6 = fr(g, d2 * (double)rdf32(sp0 + 4u));
        d7 = fr(g, fr(g, fr(g, fr(g, d1 * (double)rdf32(sp0 + 4u)) * (double)rdf32(eax + 8u)) + fr(g, d6 * (double)rdf32(eax + 4u))) + fr(g, d5 * (double)rdf32(eax)));
        d8 = fr(g, d7 + d7);
        d9 = (double)(float)fr(g, d5 - fr(g, d8 * (double)rdf32(eax)));
        d10 = fr(g, fr(g, d9 + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x10329a08u)));
        d11 = fr(g, d6 - fr(g, d8 * (double)rdf32(eax + 4u)));
        wrf32(esi, (float)d10);
        d12 = fr(g, fr(g, d11 + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(esi + 4u, (float)d12);
        if (edi != 1u)
        {
            eax = eax + 0xcu;
            ecx = ecx + 0xcu;
            esi = esi + 8u;
            edi = edi - 1u;
            goto L_1029c64d;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029c630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029c630(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
