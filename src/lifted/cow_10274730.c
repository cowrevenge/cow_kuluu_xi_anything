/* f_0x10274730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10274730(Guest* g)
{
    double d1;
    double d2;
    double d3;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(arg2 + 8u));
    d2 = fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(arg2 + 4u));
    d3 = fr(g, (double)rdf32(arg1) - (double)rdf32(arg2));
    fpush(g, fr(g, fr(g, fr(g, d1 * d1) + fr(g, d2 * d2)) + fr(g, d3 * d3)));
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10274730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
