/* f_0x10015490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10015490(Guest* g)
{
    double d3;
    double d4;
    double d5;
    uint32_t t1;
    uint32_t t2;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0x2e0u);
    t2 = rd32(self + 0x2dcu);
    d3 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, (double)rdf32(self + 0x2f0u) * (double)rdf32(self + 0x2e8u)));
    d4 = fr(g, atan2(rdf64(COW_IMG(0x10329d40u)), (double)rdf32(self + 0x2f4u)));
    d5 = (double)(float)fr(g, d4 + d4);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t6 = cow_stdcall(g, COW_IMG(0x102d83e6u), 5, self + 0x154u, cow_f2bits(d5), cow_f2bits(d3), t2, t1);
    t7 = g->edx;
    t8 = cow_thiscall(g, COW_IMG(0x100279f0u), self + 0x1d4u, 1, self + 0x154u);
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10015490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10015490(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
