/* f_0x102aa0c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102aa0c0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d8;
    double d9;
    uint32_t t7;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = (double)(float)fr(g, (double)rdf32(arg3 * 0xcu + rd32(arg4 + 0x54u)) - (double)rdf32(arg1 * 0xcu + rd32(arg4 + 0x54u)));
    d2 = (double)(float)fr(g, (double)rdf32(arg3 * 0xcu + rd32(arg4 + 0x54u) + 4u) - (double)rdf32(arg1 * 0xcu + rd32(arg4 + 0x54u) + 4u));
    d3 = fr(g, (double)rdf32(arg3 * 0xcu + rd32(arg4 + 0x54u) + 8u) - (double)rdf32(arg1 * 0xcu + rd32(arg4 + 0x54u) + 8u));
    d4 = fr(g, fr(g, d3 * fr(g, (double)rdf32(arg2 * 0xcu + rd32(arg4 + 0x54u) + 4u) - (double)rdf32(arg1 * 0xcu + rd32(arg4 + 0x54u) + 4u))) - fr(g, d2 * fr(g, (double)rdf32(arg2 * 0xcu + rd32(arg4 + 0x54u) + 8u) - (double)rdf32(arg1 * 0xcu + rd32(arg4 + 0x54u) + 8u))));
    d5 = fr(g, (double)rdf32(arg2 * 0xcu + rd32(arg4 + 0x54u)) - (double)rdf32(arg1 * 0xcu + rd32(arg4 + 0x54u)));
    d6 = (double)(float)fr(g, fr(g, d1 * fr(g, (double)rdf32(arg2 * 0xcu + rd32(arg4 + 0x54u) + 8u) - (double)rdf32(arg1 * 0xcu + rd32(arg4 + 0x54u) + 8u))) - fr(g, d5 * d3));
    t7 = rd32(arg4 + 0x58u);
    d8 = fr(g, (double)(float)d4 + (double)rdf32(arg1 * 0xcu + rd32(arg4 + 0x58u)));
    d9 = fr(g, fr(g, d5 * d2) - fr(g, d1 * fr(g, (double)rdf32(arg2 * 0xcu + rd32(arg4 + 0x54u) + 4u) - (double)rdf32(arg1 * 0xcu + rd32(arg4 + 0x54u) + 4u))));
    wrf32(arg1 * 0xcu + t7, (float)d8);
    d10 = fr(g, d6 + (double)rdf32(arg1 * 0xcu + t7 + 4u));
    wrf32(arg1 * 0xcu + t7 + 4u, (float)d10);
    d11 = fr(g, d9 + (double)rdf32(arg1 * 0xcu + t7 + 8u));
    wrf32(arg1 * 0xcu + t7 + 8u, (float)d11);
    d12 = fr(g, (double)(float)d4 + (double)rdf32(arg2 * 0xcu + t7));
    wrf32(arg2 * 0xcu + t7, (float)d12);
    d13 = fr(g, d6 + (double)rdf32(arg2 * 0xcu + t7 + 4u));
    wrf32(arg2 * 0xcu + t7 + 4u, (float)d13);
    d14 = fr(g, d9 + (double)rdf32(arg2 * 0xcu + t7 + 8u));
    wrf32(arg2 * 0xcu + t7 + 8u, (float)d14);
    d15 = fr(g, (double)(float)d4 + (double)rdf32(arg3 * 0xcu + t7));
    wrf32(arg3 * 0xcu + t7, (float)d15);
    d16 = fr(g, d6 + (double)rdf32(arg3 * 0xcu + t7 + 4u));
    wrf32(arg3 * 0xcu + t7 + 4u, (float)d16);
    d17 = fr(g, d9 + (double)rdf32(arg3 * 0xcu + t7 + 8u));
    wrf32(arg3 * 0xcu + t7 + 8u, (float)d17);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102aa0c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102aa0c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
