/* f_0x1025cd70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1025cd70(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->eax = rd32(rd32(self + 4u));
    g->edx = in_edx;
    t1 = rd32(rd32(self + 4u));
    t2 = rd32(self + 4u);
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, rd32(t1 + 8u), t2, 0);
    t4 = g->ecx;
    t5 = g->edx;
    g->esp = sp0;
    g->edx = t5;
    fpush(g, fr(g, (double)(int32_t)t3 * (double)rdf32(self + 0xcu)));
    return cow_tailcall(g, COW_IMG(0x10311c6cu), t3, t4, t5);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025cd70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025cd70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
