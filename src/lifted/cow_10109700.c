/* f_0x10109700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10109700(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (self == rd32(sp0 + 4u)) goto L_10109726;
    eax = rd32(sp0 + 4u);
    if (rd32(eax + 4u) == 0u) goto L_1010971b;
    eax = rd32(eax + 4u);
    t1 = rd32(eax + 4u);
    wr32(sp0 + 4u, t1);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10109600u), t1, self, in_edx);
L_1010971b: ;
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10109600u), 0u, self, in_edx);
L_10109726: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10109700(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
