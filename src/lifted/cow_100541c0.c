/* f_0x100541c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100541c0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    wr32(self, COW_IMG(0x1032b654u));
    wr32(self + 0x18u, 0u);
    if (rd32(self + 0x38u) == 0u) goto L_100541df;
    eax = rd32(self + 0x38u);
    t1 = rd32(eax);
    wr32(t1 + 0xa8u, 0u);
    g->esp = sp0;
    g->edx = 0u;
    cow_tailcall(g, COW_IMG(0x100747c0u), t1, self, 0u);
    return;
L_100541df: ;
    wr32(0xa8u, 0u);
    g->esp = sp0;
    g->edx = 0u;
    cow_tailcall(g, COW_IMG(0x100747c0u), 0u, self, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100541c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100541c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
