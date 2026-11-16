/* f_0x10047b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10047b80(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 4u) == 0u) goto L_10047b9f;
    eax = rd32(self + 4u);
    if (eax == 0u) goto L_10047b95;
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10063b70u), rd32(eax), rd32(eax) + 0x30u, in_edx);
L_10047b95: ;
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10063b70u), 0u, 0x30u, in_edx);
L_10047b9f: ;
    return COW_IMG(0x10353718u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10047b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10047b80(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
