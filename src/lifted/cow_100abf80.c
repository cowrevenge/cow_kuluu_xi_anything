/* f_0x100abf80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100abf80(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1032f938u));
    wr32(self + 0xc4u, COW_IMG(0x1032f91cu));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0xc4u, 0);
    t2 = g->edx;
    g->esp = sp0;
    g->edx = t2;
    cow_tailcall(g, COW_IMG(0x10082b40u), t1, self, t2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100abf80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100abf80(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
