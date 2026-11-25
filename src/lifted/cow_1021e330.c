/* f_0x1021e330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1021e330(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    COW_AT(1021e330)
    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1 - 4u);
    return cow_tailcall(g, COW_IMG(0x1021df50u), in_eax, self, in_edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021e330(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1021e330(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
