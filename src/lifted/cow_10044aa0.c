/* f_0x10044aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10044aa0(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(sp0 + 4u) == 0u) goto L_10044abc;
    ecx = rd32(sp0 + 4u);
    t1 = rd32(ecx + 0x14u);
    wr32(sp0 + 4u, self);
    wr32(self + 0xfcu, t1);
    g->esp = sp0;
    g->edx = t1;
    return cow_tailcall(g, COW_IMG(0x10048100u), self, ecx, t1);
L_10044abc: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10044aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10044aa0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
