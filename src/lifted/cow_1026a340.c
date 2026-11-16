/* f_0x1026a340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1026a340(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self + 0x10u, rd32(arg1));
    t1 = rd32(arg1 + 4u);
    wr32(self + 0x14u, t1);
    t2 = rd32(arg1 + 8u);
    wr32(self + 0x18u, t2);
    t3 = rd32(arg1 + 0xcu);
    wr32(self + 0x1cu, t3);
    g->edx = t2;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026a340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026a340(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
