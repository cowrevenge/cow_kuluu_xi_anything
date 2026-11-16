/* f_0x102d82e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102d82e0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)rdf32(arg1 + 4u);
    d2 = (double)rdf32(arg1 + 8u);
    d3 = (double)rdf32(arg1 + 0xcu);
    fpush(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1) * (double)rdf32(arg1)) + fr(g, d1 * d1)) + fr(g, d2 * d2)) + fr(g, d3 * d3)));
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d82e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d82e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
