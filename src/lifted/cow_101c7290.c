/* f_0x101c7290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c7290(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(self, COW_IMG(0x10337d0cu));
    wr32(self + 4u, arg1);
    wr32(self + 8u, arg2);
    wr32(self + 0xcu, arg3);
    if (arg3 == 0u)
    {
        t1 = arg1 * arg2 * 4u;
        g->esp = sp0 - 4u;
        t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, arg3, arg2, 1, 1, t1);
        wr32(self + 0xcu, t2);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c7290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c7290(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
