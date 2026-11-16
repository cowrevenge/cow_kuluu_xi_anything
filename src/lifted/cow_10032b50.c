/* f_0x10032b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10032b50(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x20u, in_esi);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x10u, 0);
    d1 = (double)(float)fr(g, fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(self)) - fr(g, (double)rdf32(self + 4u) * (double)rdf32(arg2)));
    wrf32(sp0 - 0x14u, (float)d1);
    d2 = (double)(float)fr(g, fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(self + 0xcu)) - fr(g, fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(self)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(self + 4u))) + fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(self + 8u))));
    wrf32(sp0 - 4u, (float)d2);
    d3 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(self)) + fr(g, (double)rdf32(arg2) * (double)rdf32(self + 0xcu))) + fr(g, fr(g, (double)rdf32(self + 4u) * (double)rdf32(arg2 + 8u)) - fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(self + 8u))));
    wrf32(sp0 - 0x10u, (float)d3);
    d4 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(self + 0xcu)) + fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(self + 4u))) + fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(self + 8u)) - fr(g, (double)rdf32(self) * (double)rdf32(arg2 + 8u))));
    wrf32(sp0 - 0xcu, (float)d4);
    d5 = fr(g, fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(self + 8u)) + fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(self + 0xcu)));
    wr32(arg1, cow_f2bits(d3));
    wr32(arg1 + 4u, cow_f2bits(d4));
    d6 = (double)(float)fr(g, d5 + d1);
    wrf32(sp0 - 8u, (float)d6);
    wr32(arg1 + 8u, cow_f2bits(d6));
    wr32(arg1 + 0xcu, cow_f2bits(d2));
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10032b50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10032b50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
