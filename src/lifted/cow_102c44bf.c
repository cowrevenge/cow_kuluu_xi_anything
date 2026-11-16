/* f_0x102c44bf - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102c44bf(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(arg1 + 0x6cu);
    wr32(arg1 + 0x6cu, t1 | 0x100000u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, self, in_edx, 1, 3, arg1, arg2, in_edi);
    wr32(arg1 + 0x6cu, t1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c44bf(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c44bf(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
