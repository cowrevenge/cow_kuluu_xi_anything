/* f_0x10296d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_10296d20(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)(float)fr(g, sin((double)rdf32(sp0 + 0x10u)));
    d2 = (double)(float)fr(g, cos((double)rdf32(sp0 + 0x10u)));
    d3 = (double)(float)fr(g, sin((double)rdf32(sp0 + 0xcu)));
    d4 = (double)(float)fr(g, cos((double)rdf32(sp0 + 0xcu)));
    d5 = (double)(float)fr(g, sin((double)rdf32(sp0 + 8u)));
    d6 = (double)(float)fr(g, cos((double)rdf32(sp0 + 8u)));
    g->eax = arg5;
    g->edx = in_edx;
    t7 = cow_cdecl(g, COW_IMG(0x10296de0u), 8, arg1, cow_f2bits(d6), cow_f2bits(d5), cow_f2bits(d4), cow_f2bits(d3), cow_f2bits(d2), cow_f2bits(d1), arg5);
    t8 = g->edx;
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10296d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10296d20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
