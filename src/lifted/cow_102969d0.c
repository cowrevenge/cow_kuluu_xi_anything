/* f_0x102969d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102969d0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0xcu)) + fr(g, (double)rdf32(arg2) * (double)rdf32(arg3))) + fr(g, (double)rdf32(arg3 + 0x18u) * (double)rdf32(arg2 + 8u)));
    wrf32(arg1, (float)d1);
    d2 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x10u)) + fr(g, (double)rdf32(arg3 + 0x1cu) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(arg3 + 4u) * (double)rdf32(arg2)));
    wrf32(arg1 + 4u, (float)d2);
    d3 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x14u)) + fr(g, (double)rdf32(arg3 + 0x20u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(arg3 + 8u) * (double)rdf32(arg2)));
    wrf32(arg1 + 8u, (float)d3);
    d4 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x10u) * (double)rdf32(arg3 + 0xcu)) + fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(arg3 + 0x18u))) + fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg3)));
    wrf32(arg1 + 0xcu, (float)d4);
    d5 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(arg3 + 0x1cu)) + fr(g, (double)rdf32(arg2 + 0x10u) * (double)rdf32(arg3 + 0x10u))) + fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg3 + 4u)));
    wrf32(arg1 + 0x10u, (float)d5);
    d6 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(arg3 + 0x20u)) + fr(g, (double)rdf32(arg2 + 0x10u) * (double)rdf32(arg3 + 0x14u))) + fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg3 + 8u)));
    wrf32(arg1 + 0x14u, (float)d6);
    d7 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x18u) * (double)rdf32(arg3)) + fr(g, (double)rdf32(arg3 + 0x18u) * (double)rdf32(arg2 + 0x20u))) + fr(g, (double)rdf32(arg2 + 0x1cu) * (double)rdf32(arg3 + 0xcu)));
    wrf32(arg1 + 0x18u, (float)d7);
    d8 = fr(g, fr(g, fr(g, (double)rdf32(arg3 + 0x1cu) * (double)rdf32(arg2 + 0x20u)) + fr(g, (double)rdf32(arg3 + 0x10u) * (double)rdf32(arg2 + 0x1cu))) + fr(g, (double)rdf32(arg3 + 4u) * (double)rdf32(arg2 + 0x18u)));
    wrf32(arg1 + 0x1cu, (float)d8);
    d9 = fr(g, fr(g, fr(g, (double)rdf32(arg3 + 0x20u) * (double)rdf32(arg2 + 0x20u)) + fr(g, (double)rdf32(arg3 + 0x14u) * (double)rdf32(arg2 + 0x1cu))) + fr(g, (double)rdf32(arg3 + 8u) * (double)rdf32(arg2 + 0x18u)));
    wrf32(arg1 + 0x20u, (float)d9);
    g->edx = arg1;
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102969d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102969d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
