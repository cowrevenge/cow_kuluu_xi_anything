/* f_0x10268de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10268de0(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t in_edx = g->edx;

    COW_AT(10268de0)
    t1 = rd32(rd32(sp0 + 4u) - 8u);
    wr32(sp0 + 4u, t1);
    return cow_tailcall(g, rd32(rd32(t1) + 8u), t1, rd32(t1), in_edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10268de0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10268de0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
