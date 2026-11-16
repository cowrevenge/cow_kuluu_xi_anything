/* f_0x10296010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10296010(Guest* g)
{
    double d3;
    double d4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t5;
    const uint32_t sp0 = g->esp;

    t1 = rd32(rd32(sp0 + 4u) + 0x28u);
    t2 = rd32(sp0 + 4u);
    d3 = fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(rd32(sp0 + 4u) + 0x20u));
    wr32(sp0 + 4u, t1);
    d4 = fr(g, d3 / (double)rdf32(t2 + 0x24u));
    wrf32(sp0 + 8u, (float)d4);
    t5 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t5);
    g->edx = t1;
    return cow_tailcall(g, COW_IMG(0x10284f70u), t2, t5, t1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10296010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10296010(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
