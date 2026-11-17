/* f_0x10075060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10075060(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100751b0u), self, 1, arg1);
    wr32(arg1 + 0xcu, 0u);
    t1 = rd32(self + 0xd54u);
    wr32(arg1 + 8u, t1);
    if (rd32(self + 0xd54u) == rd32(self + 0xd4cu))
    {
        wr32(self + 0xd5cu, arg1);
    }
    wr32(arg1 + 4u, COW_IMG(0x10075000u));
    wr8(arg1 + 0x20u, 1u);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10075060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10075060(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
