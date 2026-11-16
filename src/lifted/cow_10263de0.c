/* f_0x10263de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10263de0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd8(arg1 + 4u) & 8u) != 0u) goto L_10263dfc;
    wr32(arg2, 0u);
    return 1u;
L_10263dfc: ;
    t1 = rd32(arg1 + 0x3cu);
    g->esp = sp0;
    t2 = cow_fastcall(g, COW_IMG(0x1026a660u), t1, in_edx, 1, t1);
    wr32(arg2, t2);
    g->edx = arg2;
    return (-(t2 != 0u) & 0x7ff8fff2u) - 0x7ff8fff2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263de0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10263de0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
