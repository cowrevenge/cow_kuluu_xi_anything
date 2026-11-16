/* f_0x101122c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101122c0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(self, arg2);
    wr8(self + 4u, (uint8_t)arg4);
    wr8(self + 5u, (uint8_t)arg3);
    wr32(self + 8u, COW_IMG(0x10332f3cu));
    wr32(self + 0xcu, arg1 + 0x24u);
    if ((uint8_t)arg4 == 0u) goto L_10112300;
    t1 = rd32(arg1 + 0x3cu);
    wr32(self + 0x10u, t1);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10112380u), t1, self, g->edx, 0, 1, arg4);
    return self;
L_10112300: ;
    t2 = rd32(arg1 + 0x34u);
    wr32(self + 0x10u, t2);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10112380u), t2, self, g->edx, 0, 1, arg4);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101122c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101122c0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
