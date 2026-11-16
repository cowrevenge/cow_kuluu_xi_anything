/* f_0x100a00c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a00c0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg3 + 4u);
    wr32(COW_IMG(0x10482ef8u) + (rd8(arg3 + 8u) & 7u) * 4u, t1);
    t2 = rd8(arg3 + 8u);
    wr16(COW_IMG(0x10485164u) + (t2 & 7u) * 2u, 0x258u);
    g->edx = t1;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a00c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a00c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
