/* f_0x1027eeb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1027eeb0(Guest* g)
{
    double d1;
    double d10;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t ecx;
    double x0;
    double x1;
    double x2;
    double x3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 8u);

    wr32(sp0 - 4u, self);
    d1 = -(double)rdf32(rd32(sp0 + 4u) + 0x20u);
    d2 = fr(g, sqrt(fr(g, rdf64(COW_IMG(0x1032a100u)) - fr(g, d1 * d1))));
    if ((cow_fsw(g, fabs(d2), rdf64(COW_IMG(0x10340b28u)), 2u) & 0x4100u) != 0u)
    {
        ecx = rd32(sp0 + 4u);
        x1 = d2;
        x0 = d1;
        wr32(sp0 - 4u, 0u);
        d8 = (double)rdf32(ecx + 0x14u);
        d9 = (double)rdf32(ecx + 0x18u);
        wr32(sp0 + 4u, 0x3f800000u);
        x3 = d8;
        x2 = -d9;
    }
    else
    {
        ecx = rd32(sp0 + 4u);
        x1 = d2;
        x0 = d1;
        d3 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x1);
        wrf32(sp0 + 4u, (float)d3);
        d4 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ecx + 0x10u));
        wrf32(sp0 - 4u, (float)d4);
        d5 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ecx));
        d6 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ecx + 0x28u));
        d7 = fr(g, d3 * (double)rdf32(ecx + 0x24u));
        wrf32(sp0 + 4u, (float)d5);
        x3 = d6;
        x2 = d7;
    }
    wrf32(arg2, (float)fr(g, atan2(x2, x3)));
    wrf32(arg3, (float)fr(g, atan2(x0, x1)));
    d10 = fr(g, atan2((double)rdf32(sp0 - 4u), (double)rdf32(sp0 + 4u)));
    wrf32(arg4, (float)d10);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027eeb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027eeb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
