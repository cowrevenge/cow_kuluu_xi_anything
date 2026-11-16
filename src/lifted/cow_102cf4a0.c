/* f_0x102cf4a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_102cf4a0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 0x40u) + 1u;
    t2 = rd32(arg1 + 0x40u);
    wr32(arg1 + 0x40u, t1);
    t3 = rd8((uint32_t)((int32_t)t2 >> 3u) + rd32(arg1 + 0x3cu));
    return t3 >> (7u - (t2 & 7u) & 0x1fu) & 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cf4a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cf4a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
