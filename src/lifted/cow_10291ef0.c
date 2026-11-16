/* f_0x10291ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10291ef0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 4u) == 0u) goto L_10291f13;
    ecx = rd32(sp0 + 4u);
    if (rd32(sp0 + 8u) == 0u) goto L_10291f13;
    eax = rd32(sp0 + 8u);
    wr32(sp0 + 8u, eax + 0x24u);
    wr32(sp0 + 4u, ecx + 0x24u);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x1027eb30u), eax + 0x24u, ecx + 0x24u, in_edx);
    return;
L_10291f13: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10291ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10291ef0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
