/* f_0x103158ff - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_103158ff(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);

    COW_AT(103158ff)
    t1 = cow_call_regs(g, COW_IMG(0x1031592eu), g->eax, self, in_edx, 1, 3, arg1, 1u, 0u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103158ff(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_103158ff(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
