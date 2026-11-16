/* f_0x102d6e4c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102d6e4c(Guest* g)
{
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
    d2 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x20u) * (double)rdf32(rd32(sp0 + 4u) + 0x34u)) - fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x30u) * (double)rdf32(rd32(sp0 + 4u) + 0x24u)));
    d3 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x38u) * (double)rdf32(rd32(sp0 + 4u) + 0x20u)) - fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x30u) * (double)rdf32(rd32(sp0 + 4u) + 0x28u)));
    d4 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x20u) * (double)rdf32(rd32(sp0 + 4u) + 0x3cu)) - fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x30u) * (double)rdf32(rd32(sp0 + 4u) + 0x2cu)));
    d5 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x38u) * (double)rdf32(rd32(sp0 + 4u) + 0x24u)) - fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x28u) * (double)rdf32(rd32(sp0 + 4u) + 0x34u)));
    d6 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x3cu) * (double)rdf32(rd32(sp0 + 4u) + 0x24u)) - fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x34u) * (double)rdf32(rd32(sp0 + 4u) + 0x2cu)));
    d7 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x28u) * (double)rdf32(rd32(sp0 + 4u) + 0x3cu)) - fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x38u) * (double)rdf32(rd32(sp0 + 4u) + 0x2cu)));
    wrf32(sp0 + 4u, (float)d2);
    d8 = fr(g, fr(g, fr(g, fr(g, fr(g, d7 * (double)rdf32(t1 + 0x14u)) - fr(g, d6 * (double)rdf32(t1 + 0x18u))) + fr(g, d5 * (double)rdf32(t1 + 0x1cu))) * (double)rdf32(t1)) - fr(g, fr(g, fr(g, fr(g, d7 * (double)rdf32(t1 + 0x10u)) - fr(g, d4 * (double)rdf32(t1 + 0x18u))) + fr(g, d3 * (double)rdf32(t1 + 0x1cu))) * (double)rdf32(t1 + 4u)));
    d9 = fr(g, fr(g, d8 + fr(g, fr(g, fr(g, fr(g, d6 * (double)rdf32(t1 + 0x10u)) - fr(g, d4 * (double)rdf32(t1 + 0x14u))) + fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(t1 + 0x1cu))) * (double)rdf32(t1 + 8u))) - fr(g, fr(g, fr(g, fr(g, d5 * (double)rdf32(t1 + 0x10u)) - fr(g, d3 * (double)rdf32(t1 + 0x14u))) + fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(t1 + 0x18u))) * (double)rdf32(t1 + 0xcu)));
    fpush(g, d9);
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d6e4c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d6e4c(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
