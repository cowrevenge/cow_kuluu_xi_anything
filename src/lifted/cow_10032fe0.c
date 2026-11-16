/* f_0x10032fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10032fe0(Guest* g)
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
    double d22;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)rdf32(self + 4u);
    d2 = (double)rdf32(self + 8u);
    d3 = (double)(float)fr(g, (double)rdf32(self + 8u) * (double)rdf32(self + 4u));
    d4 = (double)(float)fr(g, (double)rdf32(self + 8u) * (double)rdf32(self));
    d5 = (double)(float)fr(g, (double)rdf32(self + 4u) * (double)rdf32(self + 0xcu));
    d6 = fr(g, (double)rdf32(self + 0xcu) * (double)rdf32(self));
    d7 = fr(g, (double)rdf32(self + 8u) * (double)rdf32(self + 0xcu));
    d8 = fr(g, (double)rdf32(self + 4u) * (double)rdf32(self));
    d9 = fr(g, (double)rdf32(self) * (double)rdf32(self));
    wr32(arg1 + 0xcu, 0u);
    wr32(arg1 + 0x1cu, 0u);
    wr32(arg1 + 0x2cu, 0u);
    wr32(arg1 + 0x38u, 0u);
    d10 = fr(g, d2 * d2);
    wr32(arg1 + 0x34u, 0u);
    wr32(arg1 + 0x30u, 0u);
    d11 = fr(g, d10 + fr(g, d1 * d1));
    d12 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d11 + d11));
    wrf32(arg1, (float)d12);
    d13 = fr(g, d7 + d8);
    wrf32(arg1 + 4u, (float)fr(g, d13 + d13));
    d14 = fr(g, d4 - d5);
    wrf32(arg1 + 8u, (float)fr(g, d14 + d14));
    d15 = fr(g, d8 - d7);
    wrf32(arg1 + 0x10u, (float)fr(g, d15 + d15));
    d16 = fr(g, d10 + d9);
    d17 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d16 + d16));
    wrf32(arg1 + 0x14u, (float)d17);
    d18 = fr(g, (double)(float)d6 + d3);
    wrf32(arg1 + 0x18u, (float)fr(g, d18 + d18));
    d19 = fr(g, d5 + d4);
    wrf32(arg1 + 0x20u, (float)fr(g, d19 + d19));
    d20 = fr(g, d3 - (double)(float)d6);
    wrf32(arg1 + 0x24u, (float)fr(g, d20 + d20));
    d21 = fr(g, fr(g, d1 * d1) + d9);
    d22 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d21 + d21));
    wrf32(arg1 + 0x28u, (float)d22);
    wr32(arg1 + 0x3cu, 0x3f800000u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10032fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10032fe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
