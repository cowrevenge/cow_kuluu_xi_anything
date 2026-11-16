/* f_0x100544a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100544a0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;

    t1 = ((rd32(self + 0x24u) & 0xffffff00u) | (rd32(self + 0x24u) & 0x80u)) ^ 0x19u;
    wr32(self + 0x24u, t1);
    t2 = (t1 & 0xfc00007fu) | (uint8_t)((t1 & 0xfc00017fu) >> 8u | 1u) << 8u;
    wr32(self + 0x24u, t2);
    wr32(self + 0x30u, 0u);
    wr32(self + 0x34u, 0u);
    wr32(self + 0x38u, 0x3f800000u);
    wr32(self + 0x3cu, 0x3f800000u);
    g->edx = t2;
    return 0x3f800000u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100544a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100544a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
