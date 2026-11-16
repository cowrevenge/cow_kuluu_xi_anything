/* f_0x1028d910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1028d910(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t1);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    cow_tailcall(g, rd32(t2 + 0x14u), t2, self, in_edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028d910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028d910(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
