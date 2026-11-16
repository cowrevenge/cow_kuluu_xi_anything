/* f_0x1027a9f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1027a9f0(Guest* g)
{
    double d1;
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
    double d20;
    double d21;
    double d3;
    double d4;
    double d5;
    double d6;
    double d8;
    double d9;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)rdf32(rd32(sp0 + 8u));
    d2 = (double)rdf32(rd32(sp0 + 8u) + 4u);
    d3 = (double)rdf32(rd32(sp0 + 8u) + 8u);
    d4 = (double)rdf32(rd32(sp0 + 8u) + 0xcu);
    d5 = fr(g, (double)rdf32(COW_IMG(0x10329990u)) / fr(g, fr(g, fr(g, fr(g, d1 * d1) + fr(g, d2 * d2)) + fr(g, d3 * d3)) + fr(g, d4 * d4)));
    d6 = (double)(float)fr(g, d5 * (double)rdf32(rd32(sp0 + 8u) + 4u));
    t7 = rd32(sp0 + 8u);
    d8 = fr(g, d5 * (double)rdf32(rd32(sp0 + 8u) + 8u));
    d9 = fr(g, d5 * (double)rdf32(rd32(sp0 + 8u)));
    wrf32(sp0 + 8u, (float)d8);
    d10 = (double)(float)fr(g, d9 * (double)rdf32(t7 + 0xcu));
    d11 = (double)(float)fr(g, d6 * (double)rdf32(t7 + 0xcu));
    d12 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(t7 + 0xcu));
    d13 = (double)(float)fr(g, d6 * (double)rdf32(t7 + 4u));
    d14 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(t7 + 4u));
    d15 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d13 + fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(t7 + 8u))));
    d16 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(t7 + 8u));
    d17 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(t7));
    d18 = fr(g, d6 * (double)rdf32(t7));
    d19 = fr(g, d9 * (double)rdf32(t7));
    wrf32(arg1, (float)d15);
    wrf32(arg1 + 4u, (float)fr(g, d18 - d12));
    wrf32(arg1 + 8u, (float)fr(g, d17 + d11));
    wrf32(arg1 + 0xcu, (float)fr(g, d18 + d12));
    d20 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d16 + d19));
    wrf32(arg1 + 0x10u, (float)d20);
    wrf32(arg1 + 0x14u, (float)fr(g, d14 - d10));
    wrf32(arg1 + 0x18u, (float)fr(g, d17 - d11));
    wrf32(arg1 + 0x1cu, (float)fr(g, d14 + d10));
    d21 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d13 + d19));
    wrf32(arg1 + 0x20u, (float)d21);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027a9f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027a9f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
