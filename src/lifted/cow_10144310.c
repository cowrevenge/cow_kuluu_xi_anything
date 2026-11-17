/* f_0x10144310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10144310(Guest* g)
{
    uint32_t t1;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 8u);
    wr8(self + 0x14u, 1u);
    wr8(self + 0x15u, 0x32u);
    cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10144310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10144310(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
