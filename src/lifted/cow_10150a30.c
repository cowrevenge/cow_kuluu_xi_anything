/* f_0x10150a30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10150a30(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_10150a45;
    wr8(self + 0x14u, (uint8_t)arg1);
    wr32(self + 0x48u, arg1);
    return arg1;
L_10150a45: ;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10312090u), self + 0x14u, g->ecx, g->edx, 1, 3, self + 0x14u, arg1, 0x31u);
    wr32(self + 0x48u, 0u);
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10150a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10150a30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
