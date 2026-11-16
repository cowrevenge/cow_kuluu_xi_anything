/* f_0x1014bbd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014bbd0(Guest* g)
{
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10578440u)) == 0u) goto L_1014bbdf;
    ecx = rd32(COW_IMG(0x10578440u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1014bdb0u), in_eax, ecx, in_edx);
L_1014bbdf: ;
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014bbd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014bbd0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
