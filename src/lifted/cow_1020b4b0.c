/* f_0x1020b4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1020b4b0(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int32_t)(((uint32_t)((int32_t)rd32(sp0 + 4u) >> 4u) & 0xfu) + 0xbu) >= 25) goto L_1020b4cb;
    eax = ((uint32_t)((int32_t)rd32(sp0 + 4u) >> 4u) & 0xfu) + 0xbu;
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1020b4a0u), eax, self, in_edx);
L_1020b4cb: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020b4b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020b4b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
