/* f_0x1014f7d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1014f7d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_1014f7f8;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10312090u), self + 0x118u, g->ecx, g->edx, 1, 3, self + 0x118u, arg1, 0x3fu);
    wr8(self + 0x157u, 0u);
    return;
L_1014f7f8: ;
    wr8(self + 0x118u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014f7d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014f7d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
