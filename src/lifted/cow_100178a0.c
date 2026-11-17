/* f_0x100178a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100178a0(Guest* g)
{
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x10329f24u));
    cow_tailcall(g, COW_IMG(0x10018e90u), in_eax, self + 0xcu, in_edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100178a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100178a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
