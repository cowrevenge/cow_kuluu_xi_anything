/* f_0x10296800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_10296800(Guest* g)
{
    double d1;
    double d2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x18u) * (double)rdf32(arg1 + 4u)) * (double)rdf32(arg1 + 0x14u)) + fr(g, fr(g, (double)rdf32(arg1 + 8u) * (double)rdf32(arg1 + 0xcu)) * (double)rdf32(arg1 + 0x1cu))) + fr(g, fr(g, (double)rdf32(arg1 + 0x20u) * (double)rdf32(arg1)) * (double)rdf32(arg1 + 0x10u)));
    d2 = fr(g, fr(g, fr(g, d1 - fr(g, fr(g, (double)rdf32(arg1) * (double)rdf32(arg1 + 0x1cu)) * (double)rdf32(arg1 + 0x14u))) - fr(g, fr(g, (double)rdf32(arg1 + 0x20u) * (double)rdf32(arg1 + 4u)) * (double)rdf32(arg1 + 0xcu))) - fr(g, fr(g, (double)rdf32(arg1 + 0x18u) * (double)rdf32(arg1 + 8u)) * (double)rdf32(arg1 + 0x10u)));
    fpush(g, d2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10296800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10296800(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
