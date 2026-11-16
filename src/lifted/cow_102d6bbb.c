/* f_0x102d6bbb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_102d6bbb(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = (double)rdf32(sp0 + 0x18u);
    d2 = fr(g, d1 * d1);
    d3 = (double)(float)fr(g, fr(g, fr(g, d2 * (double)rdf32(COW_IMG(0x10329990u))) - fr(g, (double)rdf32(sp0 + 0x18u) * fr(g, d1 * d1))) - (double)rdf32(sp0 + 0x18u));
    d4 = fr(g, (double)rdf32(sp0 + 0x18u) * fr(g, d1 * d1));
    d5 = (double)(float)fr(g, fr(g, fr(g, d4 * (double)rdf32(COW_IMG(0x10329d38u))) - fr(g, d2 * (double)rdf32(COW_IMG(0x1032cfdcu)))) + (double)rdf32(COW_IMG(0x10329990u)));
    d6 = fr(g, fr(g, fr(g, d2 * (double)rdf32(COW_IMG(0x1032a3a0u))) - fr(g, d4 * (double)rdf32(COW_IMG(0x10329d38u)))) + (double)rdf32(sp0 + 0x18u));
    d7 = fr(g, d4 * (double)rdf32(COW_IMG(0x10329d38u)));
    d8 = (double)rdf32(COW_IMG(0x10329990u));
    wrf32(sp0 + 0x18u, (float)d6);
    d9 = fr(g, d4 - d2);
    d10 = fr(g, fr(g, fr(g, fr(g, fr(g, d3 * (double)rdf32(arg2)) + fr(g, d5 * (double)rdf32(arg3))) + fr(g, (double)rdf32(sp0 + 0x18u) * (double)rdf32(arg4))) + fr(g, d9 * (double)rdf32(arg5))) * (double)rdf32(COW_IMG(0x10329a08u)));
    d11 = (double)rdf32(COW_IMG(0x10329a08u));
    wrf32(arg1, (float)d10);
    d12 = fr(g, fr(g, fr(g, fr(g, fr(g, d9 * (double)rdf32(arg5 + 4u)) + fr(g, (double)rdf32(sp0 + 0x18u) * (double)rdf32(arg4 + 4u))) + fr(g, d5 * (double)rdf32(arg3 + 4u))) + fr(g, d3 * (double)rdf32(arg2 + 4u))) * d11);
    wrf32(arg1 + 4u, (float)d12);
    d13 = fr(g, fr(g, fr(g, fr(g, fr(g, d9 * (double)rdf32(arg5 + 8u)) + fr(g, (double)rdf32(sp0 + 0x18u) * (double)rdf32(arg4 + 8u))) + fr(g, d5 * (double)rdf32(arg3 + 8u))) + fr(g, d3 * (double)rdf32(arg2 + 8u))) * d11);
    wrf32(arg1 + 8u, (float)d13);
    d14 = fr(g, fr(g, fr(g, fr(g, fr(g, d9 * (double)rdf32(arg5 + 0xcu)) + fr(g, (double)rdf32(sp0 + 0x18u) * (double)rdf32(arg4 + 0xcu))) + fr(g, d5 * (double)rdf32(arg3 + 0xcu))) + fr(g, d3 * (double)rdf32(arg2 + 0xcu))) * d11);
    wrf32(arg1 + 0xcu, (float)d14);
    g->edx = arg3;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d6bbb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d6bbb(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
