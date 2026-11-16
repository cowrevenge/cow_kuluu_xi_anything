/* f_0x10071240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10071240(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;

    t1 = rd8(self);
    wr8(COW_IMG(0x1047d10cu), (uint8_t)t1);
    t2 = rd32(self);
    wr8(COW_IMG(0x1047d10du), (uint8_t)(t2 >> 8u));
    wr8(COW_IMG(0x1047d10eu), rd8(self + 2u));
    wr8(COW_IMG(0x1047d10fu), rd8(self + 3u));
    wr8(COW_IMG(0x1047d110u), 0u);
    g->edx = t2 >> 8u;
    return COW_IMG(0x1047d10cu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10071240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10071240(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
