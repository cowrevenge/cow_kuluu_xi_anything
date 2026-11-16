/* f_0x100d5430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100d5430(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = ((((uint8_t)arg1 != 0u) << 0x17u ^ rd32(self + 0x840u)) & 0x800000u) ^ rd32(self + 0x840u);
    t2 = rd32(self + 0x840u);
    wr32(self + 0x840u, t1);
    g->edx = t1;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d5430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d5430(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
