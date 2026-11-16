/* f_0x10280c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_10280c60(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t t1;
    const uint32_t sp0 = g->esp;

    t1 = rd32(sp0 + 4u);
    d2 = fr(g, cos((double)rdf32(sp0 + 0x14u)));
    wr32(t1 + 0xcu, 0u);
    wr32(t1 + 0x1cu, 0u);
    wr32(t1 + 0x2cu, 0u);
    wr32(t1 + 0x30u, 0u);
    wr32(t1 + 0x34u, 0u);
    wr32(t1 + 0x38u, 0u);
    wr32(t1 + 0x3cu, 0u);
    d3 = fr(g, rdf64(COW_IMG(0x1032a100u)) - d2);
    d4 = fr(g, sin((double)rdf32(sp0 + 0x14u)));
    wrf32(sp0 + 0x14u, (float)d3);
    d5 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * fr(g, d3 * (double)rdf32(sp0 + 8u))) + d2);
    d6 = fr(g, d3 * (double)rdf32(sp0 + 8u));
    wrf32(t1, (float)d5);
    d7 = fr(g, (double)rdf32(sp0 + 0xcu) * d6);
    d8 = fr(g, d7 - fr(g, d4 * (double)rdf32(sp0 + 0x10u)));
    d9 = fr(g, d4 * (double)rdf32(sp0 + 0x10u));
    wrf32(t1 + 4u, (float)d8);
    d10 = fr(g, d6 * (double)rdf32(sp0 + 0x10u));
    wrf32(sp0 + 4u, (float)d10);
    d11 = (double)(float)fr(g, d4 * (double)rdf32(sp0 + 0xcu));
    d12 = fr(g, fr(g, d4 * (double)rdf32(sp0 + 0xcu)) + (double)rdf32(sp0 + 4u));
    wrf32(t1 + 8u, (float)d12);
    wrf32(t1 + 0x10u, (float)fr(g, d9 + d7));
    d13 = fr(g, fr(g, (double)rdf32(sp0 + 0xcu) * fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(sp0 + 0xcu))) + d2);
    d14 = fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(sp0 + 0xcu));
    wrf32(t1 + 0x14u, (float)d13);
    d15 = fr(g, d14 * (double)rdf32(sp0 + 0x10u));
    d16 = fr(g, d15 - fr(g, d4 * (double)rdf32(sp0 + 8u)));
    d17 = fr(g, d4 * (double)rdf32(sp0 + 8u));
    wrf32(t1 + 0x18u, (float)d16);
    d18 = fr(g, (double)rdf32(sp0 + 4u) - d11);
    wrf32(t1 + 0x20u, (float)d18);
    wrf32(t1 + 0x24u, (float)fr(g, d17 + d15));
    d19 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(sp0 + 0x10u)) * (double)rdf32(sp0 + 0x10u)) + d2);
    wrf32(t1 + 0x28u, (float)d19);
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10280c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10280c60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
