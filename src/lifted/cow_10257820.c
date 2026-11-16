/* f_0x10257820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10257820(Guest* g)
{
    uint32_t edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u) goto L_10257829;
    return arg1;
L_10257829: ;
    if (arg2 < rd16(arg1))
    {
        edx = rd16(arg1);
        goto L_10257839;
    }
    edx = rd16(arg1);
    g->edx = edx;
    return 0u;
L_10257839: ;
    if (rd32(arg1 + arg2 * 8u + 8u) == 1u) goto L_10257843;
    g->edx = edx;
    return 0u;
L_10257843: ;
    g->edx = edx;
    return rd32(arg1 + rd32(arg1 + arg2 * 8u + 4u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10257820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10257820(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
