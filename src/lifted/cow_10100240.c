/* f_0x10100240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10100240(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd8(arg1 + 0x28u);
    wr8(arg1 + 0x28u, (uint8_t)(t1 - (uint8_t)arg3));
    t2 = rd8(arg1 + 0x29u);
    wr8(arg1 + 0x29u, (uint8_t)(t2 - (uint8_t)arg3));
    g->edx = (in_edx & 0xffffff00u) | (uint8_t)(t2 - (uint8_t)arg3);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10100240(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
