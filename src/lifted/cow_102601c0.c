/* f_0x102601c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102601c0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg4 < 1000) goto L_102601db;
    wr32(arg1 + 0xcu, 0u);
    return 0u;
L_102601db: ;
    t1 = cow_divs(g, 0x172dd680u, arg4 + 0xa7u);
    t2 = cow_mods(g, 0x172dd680u, arg4 + 0xa7u);
    wr32(arg1 + 0xcu, t1 - 0x50910u);
    g->edx = arg1;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102601c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102601c0(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
