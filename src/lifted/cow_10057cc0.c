/* f_0x10057cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10057cc0(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 4u) == 0u)
    {
        eax = rd32(sp0 + 4u);
        goto L_10057ce4;
    }
    eax = rd32(sp0 + 4u);
    wr32(self + 0x90u, eax);
    wr16(eax, (uint16_t)(rd16(eax) + 1u));
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x100684f0u), eax, self + 0xc0u, in_edx);
L_10057ce4: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10057cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10057cc0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
