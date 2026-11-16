/* f_0x102726b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102726b0(Guest* g)
{
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0xffffffffu) goto L_102726d5;
    t1 = rd32(COW_IMG(0x1099c604u) + arg1 * 0x180u) ^ 1u;
    wr32(COW_IMG(0x1099c604u) + arg1 * 0x180u, t1);
    return COW_IMG(0x1099c604u) + arg1 * 0x180u;
L_102726d5: ;
    if (arg2 == 0u) goto L_102726ee;
    wr32(COW_IMG(0x1099c604u) + arg1 * 0x180u, 1u);
    return arg1;
L_102726ee: ;
    wr32(COW_IMG(0x1099c604u) + arg1 * 0x180u, 0u);
    g->edx = arg1 * 0x180u;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102726b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102726b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
