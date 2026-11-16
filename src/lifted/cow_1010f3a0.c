/* f_0x1010f3a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1010f3a0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(self, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x1010d220u), arg1, 0);
    t2 = g->edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_fastcall(g, COW_IMG(0x101122c0u), self + 4u, t2, 4, t1, arg2, arg3, arg4);
    t4 = g->ecx;
    t5 = g->edx;
    wr8(self + 0x18u, arg2 == 2u);
    g->ebx = arg2;
    cow_call_regs(g, COW_IMG(0x1010f490u), t3, self, g->edx, 0, 1, arg4);
    g->ebx = in_ebx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010f3a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010f3a0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
