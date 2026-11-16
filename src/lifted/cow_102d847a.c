/* f_0x102d847a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_102d847a(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x10u, sp0 + 8u);
    wr32(sp0 - 0x14u, sp0 - 8u);
    d1 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0xcu, (float)d1);
    wrf32(sp0 + 8u, (float)fr(g, cos(d1)));
    d2 = (double)(float)fr(g, sin(d1));
    wrf32(sp0 - 8u, (float)d2);
    d3 = fr(g, fr(g, (double)rdf32(sp0 + 8u) / d2) / (double)rdf32(sp0 + 0xcu));
    d4 = fr(g, (double)rdf32(sp0 + 8u) / d2);
    wrf32(arg1, (float)d3);
    wrf32(arg1 + 4u, (float)0.0);
    wrf32(arg1 + 8u, (float)0.0);
    wrf32(arg1 + 0xcu, (float)0.0);
    wrf32(arg1 + 0x10u, (float)0.0);
    wrf32(arg1 + 0x14u, (float)d4);
    wrf32(arg1 + 0x18u, (float)0.0);
    wrf32(arg1 + 0x1cu, (float)0.0);
    wrf32(arg1 + 0x20u, (float)0.0);
    wrf32(arg1 + 0x24u, (float)0.0);
    d5 = fr(g, (double)rdf32(sp0 + 0x14u) / fr(g, (double)rdf32(sp0 + 0x14u) - (double)rdf32(sp0 + 0x10u)));
    wrf32(arg1 + 0x28u, (float)d5);
    wrf32(arg1 + 0x2cu, (float)1.0);
    wrf32(arg1 + 0x30u, (float)0.0);
    wrf32(arg1 + 0x34u, (float)0.0);
    d6 = fr(g, d5 * (double)rdf32(sp0 + 0x10u));
    wrf32(arg1 + 0x38u, (float)-d6);
    wrf32(arg1 + 0x3cu, (float)0.0);
    g->edx = sp0 + 8u;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d847a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d847a(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
