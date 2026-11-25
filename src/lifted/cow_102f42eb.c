/* f_0x102f42eb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102f42eb(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);

    COW_AT(102f42eb)
    g->st[g->top & 7u] = fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x10u));
    d1 = fr(g, fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(arg3)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x10u))) + (double)rdf32(arg3 + 0x30u));
    d2 = fr(g, fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(arg3 + 4u)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x14u))) + (double)rdf32(arg3 + 0x34u));
    d3 = fr(g, fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(arg3 + 8u)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x18u))) + (double)rdf32(arg3 + 0x38u));
    d4 = fr(g, fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(arg3 + 0xcu)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x1cu))) + (double)rdf32(arg3 + 0x3cu));
    wrf32(arg1, (float)d1);
    wrf32(arg1 + 4u, (float)d2);
    wrf32(arg1 + 8u, (float)d3);
    wrf32(arg1 + 0xcu, (float)d4);
    g->edx = arg3;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f42eb(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102f42eb(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
