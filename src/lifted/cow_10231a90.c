/* f_0x10231a90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10231a90(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(self + 0x40u) >= 1) goto L_10231ab3;
    t1 = rd32(self + 0x68u);
    wr32(sp0 + 4u, 0u);
    if (t1 == 5u)
    {
        eax = t1;
    }
    else
    {
        eax = t1;
        wr32(sp0 + 4u, 1u);
    }
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x102319c0u), eax, self, in_edx);
    return;
L_10231ab3: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10231a90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10231a90(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
