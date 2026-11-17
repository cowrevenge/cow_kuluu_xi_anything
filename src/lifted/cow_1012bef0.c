/* f_0x1012bef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1012bef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0u);
    wr8(self + 0xcu, 1u);
    wr32(self, COW_IMG(0x103333c8u));
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012bef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012bef0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
