/* f_0x102d6f16 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102d6f16(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_stdcall(g, COW_IMG(0x102e7670u), 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    cow_tailcall(g, rd32(COW_IMG(0x103cc41cu)), t1, t2, t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d6f16(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102d6f16(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
