/* f_0x10112b90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10112b90(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x10332f50u));
    if (self != rd32(COW_IMG(0x104e170cu)))
    {
        eax = rd32(COW_IMG(0x104e170cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x104e170cu));
        wr32(COW_IMG(0x104e170cu), 0u);
    }
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x1010a230u), eax, self, in_edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10112b90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10112b90(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
