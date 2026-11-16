/* f_0x1014c840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014c840(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self + 0x14u, 1u);
    wr32(self + 0x18u, 0xffffffffu);
    wr32(self + 0x1cu, 0xffffffffu);
    wr32(self + 0x20u, 0u);
    wr32(self + 0x24u, 0u);
    g->eax = 0u;
    g->edx = in_edx;
    t1 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 9u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014c840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014c840(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
