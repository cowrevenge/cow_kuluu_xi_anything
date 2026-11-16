/* f_0x102d9402 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102d9402(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d6;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t4;
    uint32_t t5;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 8u)) * (double)rdf32(arg3)) + fr(g, (double)rdf32(rd32(sp0 + 8u) + 4u) * (double)rdf32(arg3 + 4u))) + fr(g, (double)rdf32(arg3 + 8u) * (double)rdf32(rd32(sp0 + 8u) + 8u))) - fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 8u)) * (double)rdf32(arg4)) + fr(g, (double)rdf32(arg4 + 8u) * (double)rdf32(rd32(sp0 + 8u) + 8u))) + fr(g, (double)rdf32(rd32(sp0 + 8u) + 4u) * (double)rdf32(arg4 + 4u))));
    if (d1 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        ecx = rd32(sp0 + 8u);
        x1 = d1;
        x0 = fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 8u)) * (double)rdf32(arg3)) + fr(g, (double)rdf32(rd32(sp0 + 8u) + 4u) * (double)rdf32(arg3 + 4u))) + fr(g, (double)rdf32(arg3 + 8u) * (double)rdf32(rd32(sp0 + 8u) + 8u)));
        goto L_102d944d;
    }
    x1 = d1;
    x0 = fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 8u)) * (double)rdf32(arg3)) + fr(g, (double)rdf32(rd32(sp0 + 8u) + 4u) * (double)rdf32(arg3 + 4u))) + fr(g, (double)rdf32(arg3 + 8u) * (double)rdf32(rd32(sp0 + 8u) + 8u)));
    edx = in_edx;
L_102d946e: ;
    eax = 0u;
L_102d949e: ;
    g->edx = edx;
    return eax;
L_102d944d: ;
    d2 = fr(g, fr(g, x0 + (double)rdf32(ecx + 0xcu)) / x1);
    wrf32(sp0 + 8u, (float)d2);
    d3 = (double)rdf32(sp0 + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x10314508u), 2, cow_dlo(d3), cow_dhi(d3));
    t5 = g->edx;
    if (t4 != 0u)
    {
        edx = t5;
        goto L_102d9472;
    }
    edx = t5;
    goto L_102d946e;
L_102d9472: ;
    d6 = fr(g, fr(g, fr(g, (double)rdf32(arg4) - (double)rdf32(arg3)) * (double)rdf32(sp0 + 8u)) + (double)rdf32(arg3));
    wrf32(arg1, (float)d6);
    d7 = fr(g, fr(g, fr(g, (double)rdf32(arg4 + 4u) - (double)rdf32(arg3 + 4u)) * (double)rdf32(sp0 + 8u)) + (double)rdf32(arg3 + 4u));
    wrf32(arg1 + 4u, (float)d7);
    d8 = fr(g, fr(g, fr(g, (double)rdf32(arg4 + 8u) - (double)rdf32(arg3 + 8u)) * (double)rdf32(sp0 + 8u)) + (double)rdf32(arg3 + 8u));
    wrf32(arg1 + 8u, (float)d8);
    eax = arg1;
    goto L_102d949e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d9402(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d9402(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
