/* f_0x10299390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10299390(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(sp0 + 4u) + 0x64u) == 0u) goto L_102993ad;
    eax = rd32(rd32(sp0 + 4u) + 0x64u);
    ecx = rd32(sp0 + 4u) + 0x64u;
    if ((rd8(eax + 0x20u) & 4u) == 0u) goto L_102993ad;
    wr32(sp0 + 4u, ecx);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x10298b80u), eax, ecx, in_edx);
    return;
L_102993ad: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10299390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10299390(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
