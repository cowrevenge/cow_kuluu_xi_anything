/* f_0x10274a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10274a40(Guest* g)
{
    double d1;
    double d2;
    double d3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = fr(g, fr(g, fr(g, (double)rdf32(arg3) - (double)rdf32(arg2)) * (double)rdf32(sp0 + 0x10u)) + (double)rdf32(arg2));
    wrf32(arg1, (float)d1);
    d2 = fr(g, fr(g, fr(g, (double)rdf32(arg3 + 4u) - (double)rdf32(arg2 + 4u)) * (double)rdf32(sp0 + 0x10u)) + (double)rdf32(arg2 + 4u));
    wrf32(arg1 + 4u, (float)d2);
    d3 = fr(g, fr(g, fr(g, (double)rdf32(arg3 + 8u) - (double)rdf32(arg2 + 8u)) * (double)rdf32(sp0 + 0x10u)) + (double)rdf32(arg2 + 8u));
    wrf32(arg1 + 8u, (float)d3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10274a40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
