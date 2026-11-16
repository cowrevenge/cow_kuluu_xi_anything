/* f_0x1001e4d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1001e4d0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    fpush(g, fr(g, atan2(-(double)rdf32(t4 + 0x2cu), (double)rdf32(t1 + 0x24u))));
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001e4d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
