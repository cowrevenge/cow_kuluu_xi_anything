/* f_0x1031004f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1031004f(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    COW_AT(1031004f)
    cow_tailcall(g, rd32(rd32(COW_IMG(0x10456a2cu)) + 0x2ecu), rd32(COW_IMG(0x10456a2cu)), self, in_edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031004f(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1031004f(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
