/* f_0x1020d310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1020d310(Guest* g)
{
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10664494u)) == 0u) goto L_1020d32e;
    ecx = rd32(COW_IMG(0x10664494u));
    if (rd8(sp0 + 4u) != 1u) goto L_1020d32e;
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1020a600u), in_eax, ecx, in_edx);
L_1020d32e: ;
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020d310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020d310(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
