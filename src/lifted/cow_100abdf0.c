/* f_0x100abdf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100abdf0(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;

    COW_AT(100abdf0)
    t1 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0xc4u, 0);
    g->edx = rd32(t1);
    return cow_tailcall(g, rd32(rd32(t1) + 0x170u), t1, t1, rd32(t1));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100abdf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100abdf0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
