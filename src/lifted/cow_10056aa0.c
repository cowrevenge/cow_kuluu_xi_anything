/* f_0x10056aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10056aa0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10074cf0u), in_eax, rd32(COW_IMG(0x1047d140u)), in_edx, 0, 2, self, 0x4d730000u);
    t2 = g->edx;
    g->esp = sp0;
    g->edx = t2;
    return cow_tailcall(g, COW_IMG(0x100720b0u), t1, self, t2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10056aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10056aa0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
