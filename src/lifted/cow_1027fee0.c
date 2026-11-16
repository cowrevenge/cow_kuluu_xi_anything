/* f_0x1027fee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1027fee0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = fr(g, (double)rdf32(arg2) + (double)rdf32(arg3));
    wrf32(arg1, (float)d1);
    d2 = fr(g, (double)rdf32(arg2 + 4u) + (double)rdf32(arg3 + 4u));
    wrf32(arg1 + 4u, (float)d2);
    d3 = fr(g, (double)rdf32(arg2 + 8u) + (double)rdf32(arg3 + 8u));
    wrf32(arg1 + 8u, (float)d3);
    d4 = fr(g, (double)rdf32(arg2 + 0xcu) + (double)rdf32(arg3 + 0xcu));
    wrf32(arg1 + 0xcu, (float)d4);
    d5 = fr(g, (double)rdf32(arg2 + 0x10u) + (double)rdf32(arg3 + 0x10u));
    wrf32(arg1 + 0x10u, (float)d5);
    d6 = fr(g, (double)rdf32(arg2 + 0x14u) + (double)rdf32(arg3 + 0x14u));
    wrf32(arg1 + 0x14u, (float)d6);
    d7 = fr(g, (double)rdf32(arg2 + 0x18u) + (double)rdf32(arg3 + 0x18u));
    wrf32(arg1 + 0x18u, (float)d7);
    d8 = fr(g, (double)rdf32(arg2 + 0x1cu) + (double)rdf32(arg3 + 0x1cu));
    wrf32(arg1 + 0x1cu, (float)d8);
    d9 = fr(g, (double)rdf32(arg2 + 0x20u) + (double)rdf32(arg3 + 0x20u));
    wrf32(arg1 + 0x20u, (float)d9);
    d10 = fr(g, (double)rdf32(arg2 + 0x24u) + (double)rdf32(arg3 + 0x24u));
    wrf32(arg1 + 0x24u, (float)d10);
    d11 = fr(g, (double)rdf32(arg2 + 0x28u) + (double)rdf32(arg3 + 0x28u));
    wrf32(arg1 + 0x28u, (float)d11);
    d12 = fr(g, (double)rdf32(arg2 + 0x2cu) + (double)rdf32(arg3 + 0x2cu));
    wrf32(arg1 + 0x2cu, (float)d12);
    d13 = fr(g, (double)rdf32(arg2 + 0x30u) + (double)rdf32(arg3 + 0x30u));
    wrf32(arg1 + 0x30u, (float)d13);
    d14 = fr(g, (double)rdf32(arg2 + 0x34u) + (double)rdf32(arg3 + 0x34u));
    wrf32(arg1 + 0x34u, (float)d14);
    d15 = fr(g, (double)rdf32(arg2 + 0x38u) + (double)rdf32(arg3 + 0x38u));
    wrf32(arg1 + 0x38u, (float)d15);
    d16 = fr(g, (double)rdf32(arg2 + 0x3cu) + (double)rdf32(arg3 + 0x3cu));
    wrf32(arg1 + 0x3cu, (float)d16);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027fee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027fee0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
