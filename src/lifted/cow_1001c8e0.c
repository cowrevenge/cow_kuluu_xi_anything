/* f_0x1001c8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=4 */
void cow_fn_1001c8e0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    const uint32_t sp0 = g->esp;

    d1 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 4u));
    d2 = (double)rdf32(sp0 + 4u);
    d3 = fr(g, fr(g, fr(g, fr(g, fr(g, d1 * (double)rdf32(sp0 + 4u)) + (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 + 0xcu)) + fr(g, fr(g, fr(g, d1 * d1) * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 + 8u))) + fr(g, fr(g, fr(g, d2 * d2) * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 + 0x10u)));
    fpush(g, d3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001c8e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001c8e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
