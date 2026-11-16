/* f_0x102efdbf - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102efdbf(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_102efde7;
    }
    if (arg2 == 0u)
    {
        edx = in_edx;
        goto L_102efde7;
    }
    if ((rd32(arg2 + 8u) & 0x800u) == 0u)
    {
        edx = in_edx;
        goto L_102efde7;
    }
    if (arg3 == 0u)
    {
        edx = arg3;
        goto L_102efde7;
    }
    t1 = rd8(arg2 + 0x2cu);
    wr32(arg3, t1);
    g->edx = arg3;
    return 0x800u;
L_102efde7: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102efdbf(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102efdbf(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
