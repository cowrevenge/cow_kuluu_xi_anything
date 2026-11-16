/* f_0x102d7d5c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102d7d5c(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t t14;
    uint32_t t2;
    const uint32_t sp0 = g->esp;

    d1 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 8u)) * (double)rdf32(COW_IMG(0x10329990u)));
    t2 = rd32(sp0 + 8u);
    d3 = fr(g, (double)rdf32(rd32(sp0 + 8u) + 4u) * (double)rdf32(COW_IMG(0x10329990u)));
    d4 = (double)rdf32(COW_IMG(0x10329990u));
    wrf32(sp0 + 8u, (float)d3);
    d5 = fr(g, d4 * (double)rdf32(t2 + 8u));
    d6 = (double)(float)fr(g, d1 * (double)rdf32(t2));
    d7 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(t2));
    d8 = (double)(float)fr(g, d5 * (double)rdf32(t2));
    d9 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(t2 + 4u));
    d10 = fr(g, d5 * (double)rdf32(t2 + 4u));
    d11 = fr(g, d5 * (double)rdf32(t2 + 0xcu));
    d12 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(t2 + 0xcu));
    d13 = fr(g, d1 * (double)rdf32(t2 + 0xcu));
    wrf32(sp0 + 8u, (float)d10);
    t14 = rd32(sp0 + 4u);
    d15 = fr(g, fr(g, 1.0 - d9) - fr(g, d5 * (double)rdf32(t2 + 8u)));
    d16 = fr(g, d5 * (double)rdf32(t2 + 8u));
    wrf32(t14, (float)d15);
    wrf32(t14 + 4u, (float)fr(g, d7 + d11));
    wrf32(t14 + 8u, (float)fr(g, d8 - d12));
    wrf32(t14 + 0xcu, (float)0.0);
    wrf32(t14 + 0x10u, (float)fr(g, d7 - d11));
    wrf32(sp0 + 4u, (float)fr(g, 1.0 - d6));
    wrf32(t14 + 0x14u, (float)fr(g, fr(g, 1.0 - d6) - d16));
    d17 = fr(g, (double)rdf32(sp0 + 8u) + d13);
    wrf32(t14 + 0x18u, (float)d17);
    wrf32(t14 + 0x1cu, (float)0.0);
    wrf32(t14 + 0x20u, (float)fr(g, d8 + d12));
    d18 = fr(g, (double)rdf32(sp0 + 8u) - d13);
    wrf32(t14 + 0x24u, (float)d18);
    d19 = fr(g, (double)rdf32(sp0 + 4u) - d9);
    wrf32(t14 + 0x28u, (float)d19);
    wrf32(t14 + 0x2cu, (float)0.0);
    wrf32(t14 + 0x30u, (float)0.0);
    wrf32(t14 + 0x34u, (float)0.0);
    wrf32(t14 + 0x38u, (float)0.0);
    wrf32(t14 + 0x3cu, (float)1.0);
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d7d5c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d7d5c(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
