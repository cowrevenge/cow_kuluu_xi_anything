/* f_0x102d8562 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
uint32_t cow_fn_102d8562(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = fr(g, (double)rdf32(sp0 + 0xcu) - (double)rdf32(sp0 + 8u));
    wr32(arg1 + 0x2cu, 0xbf800000u);
    d2 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d1);
    d3 = fr(g, fr(g, d2 * (double)rdf32(sp0 + 0x18u)) * (double)rdf32(COW_IMG(0x10329990u)));
    d4 = (double)rdf32(COW_IMG(0x10329990u));
    d5 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, (double)rdf32(sp0 + 0x14u) - (double)rdf32(sp0 + 0x10u)));
    wrf32(arg1, (float)d3);
    wrf32(arg1 + 4u, (float)0.0);
    wrf32(arg1 + 8u, (float)0.0);
    wrf32(arg1 + 0xcu, (float)0.0);
    wrf32(arg1 + 0x10u, (float)0.0);
    d6 = fr(g, fr(g, d5 * (double)rdf32(sp0 + 0x18u)) * d4);
    wrf32(arg1 + 0x14u, (float)d6);
    wrf32(arg1 + 0x18u, (float)0.0);
    wrf32(arg1 + 0x1cu, (float)0.0);
    d7 = fr(g, fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(sp0 + 0xcu)) * d2);
    wrf32(arg1 + 0x20u, (float)d7);
    d8 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) + (double)rdf32(sp0 + 0x14u)) * d5);
    wrf32(arg1 + 0x24u, (float)d8);
    d9 = fr(g, (double)rdf32(sp0 + 0x1cu) / fr(g, (double)rdf32(sp0 + 0x18u) - (double)rdf32(sp0 + 0x1cu)));
    wrf32(arg1 + 0x28u, (float)d9);
    wrf32(arg1 + 0x30u, (float)0.0);
    wrf32(arg1 + 0x34u, (float)0.0);
    d10 = fr(g, d9 * (double)rdf32(sp0 + 0x18u));
    wrf32(arg1 + 0x38u, (float)d10);
    wrf32(arg1 + 0x3cu, (float)0.0);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d8562(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d8562(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
