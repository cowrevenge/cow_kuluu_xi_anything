/* f_0x1003b980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=3 */
uint32_t cow_fn_1003b980(Guest* g)
{
    double d1;
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
    uint32_t t10;
    uint32_t t11;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = fr(g, (double)rdf32(arg3) - (double)rdf32(arg2));
    d2 = (double)(float)fr(g, d1 * d1);
    d3 = fr(g, (double)rdf32(arg3 + 4u) - (double)rdf32(arg2 + 4u));
    d4 = (double)(float)fr(g, d3 * d3);
    d5 = fr(g, (double)rdf32(arg3 + 8u) - (double)rdf32(arg2 + 8u));
    d6 = (double)(float)fr(g, d5 * d5);
    d7 = (double)(float)-fr(g, atan2(d5, d1));
    d8 = (double)(float)fr(g, atan2(d3, fr(g, sqrt(fr(g, d6 + d2)))));
    g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->edx = cow_f2bits(d7);
    t9 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x28u;
    t10 = cow_thiscall(g, rd32(t9 + 0x58u), rd32(COW_IMG(0x1047cf7cu)), 4, arg1, 0u, cow_f2bits(d7), cow_f2bits(d8));
    t11 = g->edx;
    d12 = fr(g, (double)rdf32(arg1 + 0x30u) + (double)rdf32(arg2));
    wrf32(arg1 + 0x30u, (float)d12);
    d13 = fr(g, (double)rdf32(arg1 + 0x34u) + (double)rdf32(arg2 + 4u));
    wrf32(arg1 + 0x34u, (float)d13);
    d14 = fr(g, (double)rdf32(arg1 + 0x38u) + (double)rdf32(arg2 + 8u));
    wrf32(arg1 + 0x38u, (float)d14);
    g->edx = t11;
    fpush(g, fr(g, sqrt(fr(g, fr(g, d6 + d4) + d2))));
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003b980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003b980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
