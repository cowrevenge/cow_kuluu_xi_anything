/* f_0x1006bf40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1006bf40(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_1006bf4d;
    return 0u;
L_1006bf4d: ;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x1006be20u), 0);
    t2 = cow_divs(g, t1, arg1);
    t3 = cow_mods(g, t1, arg1);
    g->edx = t3;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006bf40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006bf40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
