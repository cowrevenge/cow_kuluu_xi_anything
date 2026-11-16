/* f_0x102d64f1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_102d64f1(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = (double)rdf32(sp0 + 0x18u);
    d2 = fr(g, (double)rdf32(sp0 + 0x18u) * fr(g, d1 * d1));
    d3 = fr(g, d1 * d1);
    d4 = fr(g, d2 + d2);
    d5 = (double)(float)fr(g, fr(g, d4 - fr(g, d3 * (double)rdf32(COW_IMG(0x10329d38u)))) + (double)rdf32(COW_IMG(0x1032961cu)));
    d6 = (double)(float)fr(g, fr(g, d2 - fr(g, d3 + d3)) + (double)rdf32(sp0 + 0x18u));
    d7 = fr(g, fr(g, d3 * (double)rdf32(COW_IMG(0x10329d38u))) - d4);
    wrf32(sp0 + 0x18u, (float)d7);
    d8 = fr(g, d2 - d3);
    d9 = fr(g, fr(g, fr(g, fr(g, d5 * (double)rdf32(arg2)) + fr(g, d6 * (double)rdf32(arg3))) + fr(g, (double)rdf32(sp0 + 0x18u) * (double)rdf32(arg4))) + fr(g, d8 * (double)rdf32(arg5)));
    wrf32(arg1, (float)d9);
    d10 = fr(g, fr(g, fr(g, fr(g, d8 * (double)rdf32(arg5 + 4u)) + fr(g, (double)rdf32(sp0 + 0x18u) * (double)rdf32(arg4 + 4u))) + fr(g, d6 * (double)rdf32(arg3 + 4u))) + fr(g, d5 * (double)rdf32(arg2 + 4u)));
    wrf32(arg1 + 4u, (float)d10);
    d11 = fr(g, fr(g, fr(g, fr(g, d8 * (double)rdf32(arg5 + 8u)) + fr(g, (double)rdf32(sp0 + 0x18u) * (double)rdf32(arg4 + 8u))) + fr(g, d6 * (double)rdf32(arg3 + 8u))) + fr(g, d5 * (double)rdf32(arg2 + 8u)));
    wrf32(arg1 + 8u, (float)d11);
    g->edx = arg3;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d64f1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d64f1(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
