/* f_0x100748f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100748f0(Guest* g)
{
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self + 0xcu, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 4u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x1cu, 0u);
    t1 = rd8(COW_IMG(0x1047d13cu));
    wr8(self + 0x20u, (uint8_t)t1);
    wr8(COW_IMG(0x1047d13cu), 0u);
    wr32(self + 0x14u, 0u);
    wr16(self + 0x22u, 0u);
    wr32(self + 0x10u, 0u);
    wr32(self + 0x24u, 0u);
    wr32(self + 0x28u, 0u);
    g->edx = (in_edx & 0xffffff00u) | t1;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100748f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100748f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
