/* f_0x10264810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10264810(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0xd0u) == 0u) goto L_10264836;
    eax = rd32(self + 0xd0u);
    if (rd32(self + 0xd4u) == 0u) goto L_10264836;
    ecx = rd32(self + 0xd4u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x103291fcu)), ecx, 1, eax);
    t2 = g->edx;
    g->esp = sp0;
    g->edx = t2;
    return cow_tailcall(g, COW_IMG(0x10263240u), t1, self, t2);
L_10264836: ;
    return 0x80004005u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10264810(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
