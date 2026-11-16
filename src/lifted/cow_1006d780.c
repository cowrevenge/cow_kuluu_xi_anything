/* f_0x1006d780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1006d780(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = (double)rdf32(arg3 + 8u);
    d2 = (double)rdf32(arg3 + 4u);
    d3 = fr(g, fr(g, fr(g, fr(g, d1 * (double)rdf32(arg2 + 0x20u)) + fr(g, d2 * (double)rdf32(arg2 + 0x10u))) + fr(g, (double)rdf32(arg3) * (double)rdf32(arg2))) + (double)rdf32(arg2 + 0x30u));
    d4 = (double)rdf32(arg3);
    wrf32(arg1, (float)d3);
    d5 = fr(g, fr(g, fr(g, fr(g, d1 * (double)rdf32(arg2 + 0x24u)) + fr(g, d2 * (double)rdf32(arg2 + 0x14u))) + fr(g, d4 * (double)rdf32(arg2 + 4u))) + (double)rdf32(arg2 + 0x34u));
    wrf32(arg1 + 4u, (float)d5);
    d6 = fr(g, fr(g, fr(g, fr(g, d1 * (double)rdf32(arg2 + 0x28u)) + fr(g, d2 * (double)rdf32(arg2 + 0x18u))) + fr(g, d4 * (double)rdf32(arg2 + 8u))) + (double)rdf32(arg2 + 0x38u));
    wrf32(arg1 + 8u, (float)d6);
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006d780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006d780(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
