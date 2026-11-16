/* f_0x100f7a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100f7a50(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(rd32(COW_IMG(0x104df90cu)) + 0x10u) == arg1) goto L_100f7a7b;
    eax = rd32(COW_IMG(0x104df90cu));
    if (rd8(rd32(eax + 0x30u) + 1u) != 0u) goto L_100f7a7b;
    edx = rd32(eax + 0x30u);
    wr32(eax + 0x28u, arg1);
    t1 = rd32(COW_IMG(0x104df90cu));
    wr8(t1 + 0x34u, 1u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x100f7a00u), t1, arg1, edx);
    return;
L_100f7a7b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100f7a50(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
