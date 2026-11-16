/* f_0x1027ac80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1027ac80(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double x0;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = (double)rdf32(arg1 + 4u);
    d2 = (double)rdf32(arg1 + 8u);
    d3 = fr(g, sqrt(fr(g, fr(g, fr(g, (double)rdf32(arg1) * (double)rdf32(arg1)) + fr(g, d1 * d1)) + fr(g, d2 * d2))));
    if ((cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
    {
        x0 = d3;
        goto L_1027ace1;
    }
    x0 = d3;
    d4 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
    d5 = fr(g, d4 * (double)rdf32(arg1));
    wrf32(arg2, (float)d5);
    d6 = fr(g, d4 * (double)rdf32(arg1 + 4u));
    wrf32(arg2 + 4u, (float)d6);
    d7 = fr(g, d4 * (double)rdf32(arg1 + 8u));
    wrf32(arg2 + 8u, (float)d7);
    d8 = fr(g, atan2(x0, (double)rdf32(arg1 + 0xcu)));
    wrf32(arg3, (float)fr(g, d8 + d8));
    return arg3;
L_1027ace1: ;
    wr32(arg3, 0u);
    wr32(arg2, 0u);
    wr32(arg2 + 4u, 0u);
    wr32(arg2 + 8u, 0x3f800000u);
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027ac80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027ac80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
