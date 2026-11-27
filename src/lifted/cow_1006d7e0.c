/* f_0x1006d7e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1006d7e0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);

    COW_AT(1006d7e0)
    d1 = (double)rdf32(arg3 + 0xcu);
    d2 = (double)rdf32(arg3 + 8u);
    d3 = (double)rdf32(arg3 + 4u);
    d4 = fr(g, cow_faddp(fr(g, cow_faddp(fr(g, cow_faddp(fr(g, d1 * (double)rdf32(arg2 + 0x30u)), fr(g, d2 * (double)rdf32(arg2 + 0x20u)))), fr(g, d3 * (double)rdf32(arg2 + 0x10u)))), fr(g, (double)rdf32(arg3) * (double)rdf32(arg2))));
    d5 = (double)rdf32(arg3);
    wrf32(arg1, (float)d4);
    d6 = fr(g, cow_faddp(fr(g, cow_faddp(fr(g, cow_faddp(fr(g, d1 * (double)rdf32(arg2 + 0x34u)), fr(g, d2 * (double)rdf32(arg2 + 0x24u)))), fr(g, d3 * (double)rdf32(arg2 + 0x14u)))), fr(g, d5 * (double)rdf32(arg2 + 4u))));
    wrf32(arg1 + 4u, (float)d6);
    d7 = fr(g, cow_faddp(fr(g, cow_faddp(fr(g, cow_faddp(fr(g, d1 * (double)rdf32(arg2 + 0x38u)), fr(g, d2 * (double)rdf32(arg2 + 0x28u)))), fr(g, d3 * (double)rdf32(arg2 + 0x18u)))), fr(g, d5 * (double)rdf32(arg2 + 8u))));
    wrf32(arg1 + 8u, (float)d7);
    d8 = fr(g, cow_faddp(fr(g, cow_faddp(fr(g, cow_faddp(fr(g, d1 * (double)rdf32(arg2 + 0x3cu)), fr(g, d2 * (double)rdf32(arg2 + 0x2cu)))), fr(g, d3 * (double)rdf32(arg2 + 0x1cu)))), fr(g, d5 * (double)rdf32(arg2 + 0xcu))));
    wrf32(arg1 + 0xcu, (float)d8);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006d7e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1006d7e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
