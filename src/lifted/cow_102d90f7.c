/* f_0x102d90f7 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102d90f7(Guest* g)
{
    double d1;
    double d10;
    double d11;
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
    uint32_t edx;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    d1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 8u)) * (double)rdf32(rd32(sp0 + 0xcu))) + fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 8u) * (double)rdf32(rd32(sp0 + 8u) + 8u))) + fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 4u) * (double)rdf32(rd32(sp0 + 8u) + 4u))) + fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 0xcu) * (double)rdf32(rd32(sp0 + 8u) + 0xcu)));
    if (cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 2u) >> 8u & 1u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        ecx = rd32(sp0 + 8u);
        edx = rd32(sp0 + 0xcu);
        x1 = d1;
        x0 = fr(g, 1.0 - (double)rdf32(sp0 + 0x10u));
        wr32(sp0 + 8u, 0xbf800000u);
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        ecx = rd32(sp0 + 8u);
        edx = rd32(sp0 + 0xcu);
        x1 = d1;
        x0 = fr(g, 1.0 - (double)rdf32(sp0 + 0x10u));
        wrf32(sp0 + 8u, (float)1.0);
    }
    d2 = fr(g, (double)rdf32(sp0 + 8u) * x1);
    wrf32(sp0 + 0xcu, (float)d2);
    d3 = fr(g, 1.0 - d2);
    if ((cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10340be8u)), 2u) >> 8u & 0x41u) != 0u)
    {
        x1 = d2;
        x1 = (double)rdf32(sp0 + 0x10u);
    }
    else
    {
        x1 = d2;
        d4 = fr(g, sqrt(fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x1 * x1))));
        d5 = fr(g, atan2(d4, (double)rdf32(sp0 + 0xcu)));
        wrf32(sp0 + 0xcu, (float)d5);
        d6 = (double)(float)fr(g, 1.0 / d4);
        wrf32(sp0 - 8u, (float)d6);
        x1 = fr(g, fr(g, sin(fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(sp0 + 0x10u)))) * d6);
        x0 = fr(g, fr(g, sin(fr(g, (double)rdf32(sp0 + 0xcu) * x0))) * d6);
    }
    d7 = fr(g, x1 * (double)rdf32(sp0 + 8u));
    d8 = fr(g, fr(g, x0 * (double)rdf32(ecx)) + fr(g, d7 * (double)rdf32(edx)));
    wrf32(arg1, (float)d8);
    d9 = fr(g, fr(g, d7 * (double)rdf32(edx + 4u)) + fr(g, x0 * (double)rdf32(ecx + 4u)));
    wrf32(arg1 + 4u, (float)d9);
    d10 = fr(g, fr(g, d7 * (double)rdf32(edx + 8u)) + fr(g, x0 * (double)rdf32(ecx + 8u)));
    wrf32(arg1 + 8u, (float)d10);
    d11 = fr(g, fr(g, d7 * (double)rdf32(edx + 0xcu)) + fr(g, x0 * (double)rdf32(ecx + 0xcu)));
    wrf32(arg1 + 0xcu, (float)d11);
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d90f7(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d90f7(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
