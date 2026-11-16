/* f_0x102d8902 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
uint32_t cow_fn_102d8902(Guest* g)
{
    double d1;
    double d10;
    double d2;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t t3;
    const uint32_t sp0 = g->esp;

    d1 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, (double)rdf32(sp0 + 0x14u) - (double)rdf32(sp0 + 0x10u)));
    d2 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, (double)rdf32(sp0 + 0xcu) - (double)rdf32(sp0 + 8u)));
    t3 = rd32(sp0 + 4u);
    d4 = fr(g, d2 * (double)rdf32(COW_IMG(0x10329990u)));
    d5 = (double)rdf32(COW_IMG(0x10329990u));
    d6 = (double)rdf32(COW_IMG(0x1032961cu));
    wrf32(t3, (float)d4);
    wrf32(t3 + 4u, (float)0.0);
    wrf32(t3 + 8u, (float)0.0);
    wrf32(t3 + 0xcu, (float)0.0);
    wrf32(t3 + 0x10u, (float)0.0);
    wrf32(t3 + 0x14u, (float)fr(g, d1 * d5));
    wrf32(t3 + 0x18u, (float)0.0);
    wrf32(t3 + 0x1cu, (float)0.0);
    wrf32(t3 + 0x20u, (float)0.0);
    wrf32(t3 + 0x24u, (float)0.0);
    d7 = fr(g, d6 / fr(g, (double)rdf32(sp0 + 0x1cu) - (double)rdf32(sp0 + 0x18u)));
    wrf32(sp0 + 4u, (float)d7);
    wrf32(t3 + 0x28u, (float)d7);
    wrf32(t3 + 0x2cu, (float)0.0);
    d8 = fr(g, fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(sp0 + 0xcu)) * d2);
    wrf32(t3 + 0x30u, (float)-d8);
    d9 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) + (double)rdf32(sp0 + 0x14u)) * d1);
    wrf32(t3 + 0x34u, (float)-d9);
    d10 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(sp0 + 0x18u));
    wrf32(t3 + 0x38u, (float)-d10);
    wrf32(t3 + 0x3cu, (float)1.0);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d8902(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d8902(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
