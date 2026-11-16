/* f_0x102964e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102964e0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)(float)fr(g, cos((double)rdf32(sp0 + 0xcu)));
    d2 = (double)(float)fr(g, sin((double)rdf32(sp0 + 0xcu)));
    d3 = fr(g, cos((double)rdf32(sp0 + 8u)));
    d4 = fr(g, sin((double)rdf32(sp0 + 0x10u)));
    d5 = fr(g, cos((double)rdf32(sp0 + 0x10u)));
    wrf32(sp0 + 0xcu, (float)d3);
    d6 = fr(g, sin((double)rdf32(sp0 + 8u)));
    wrf32(sp0 + 0x10u, (float)d6);
    wrf32(arg1, (float)fr(g, d1 * d5));
    d7 = fr(g, (double)rdf32(sp0 + 0x10u) * d2);
    d8 = fr(g, fr(g, d7 * d5) - fr(g, (double)rdf32(sp0 + 0xcu) * d4));
    wrf32(arg1 + 4u, (float)d8);
    d9 = fr(g, (double)rdf32(sp0 + 0xcu) * d2);
    wrf32(sp0 + 8u, (float)d9);
    d10 = fr(g, fr(g, d9 * d5) + fr(g, (double)rdf32(sp0 + 0x10u) * d4));
    wrf32(arg1 + 8u, (float)d10);
    wrf32(arg1 + 0xcu, (float)fr(g, d1 * d4));
    d11 = fr(g, fr(g, d7 * d4) + fr(g, (double)rdf32(sp0 + 0xcu) * d5));
    wrf32(arg1 + 0x10u, (float)d11);
    d12 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * d4) - fr(g, (double)rdf32(sp0 + 0x10u) * d5));
    wrf32(arg1 + 0x14u, (float)d12);
    wrf32(arg1 + 0x18u, (float)-d2);
    d13 = fr(g, (double)rdf32(sp0 + 0x10u) * d1);
    wrf32(arg1 + 0x1cu, (float)d13);
    d14 = fr(g, (double)rdf32(sp0 + 0xcu) * d1);
    wrf32(arg1 + 0x20u, (float)d14);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102964e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102964e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
