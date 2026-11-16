/* f_0x101597f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101597f0(Guest* g)
{
    uint32_t t1;
    const uint32_t self = g->ecx;

    if (rd8(self + 0x20u) != 0u) goto L_101597fa;
    return 0u;
L_101597fa: ;
    t1 = (rd16(self + 0x24u) != (uint16_t)((uint16_t)(rd16(self) * 3u) + (uint16_t)((uint16_t)(uint32_t)((int32_t)self >> 3u) + (uint16_t)(rd16(self + 4u) * 2u)))) - 1u & self;
    g->edx = t1;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101597f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101597f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
