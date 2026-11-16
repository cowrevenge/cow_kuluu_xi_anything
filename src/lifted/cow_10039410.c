/* f_0x10039410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10039410(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0xc8u);
    if (t1 != 0u) goto L_10039432;
    wr32(arg1, 0u);
    return;
L_10039432: ;
    t2 = rd32(self + 4u);
    wr32(arg1, t2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10039410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10039410(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
