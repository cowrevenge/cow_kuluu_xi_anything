/* f_0x10061960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10061960(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x10074790u), self, in_edx, 1, arg1);
    t1 = g->edx;
    t2 = cow_thiscall(g, COW_IMG(0x1003b540u), self + 0x34u, 0);
    wr32(self + 0x78u, arg4);
    wrf32(self + 0x74u, (float)(double)(int32_t)arg3);
    wr32(self, COW_IMG(0x1032be08u));
    wr32(self + 0x34u, COW_IMG(0x1032bdecu));
    wr32(self + 0x7cu, arg5);
    g->edx = arg5;
    t3 = cow_thiscall(g, COW_IMG(0x1003b7b0u), self + 0x34u, 1, arg2);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1003b830u), self + 0x34u, 1, arg2);
    t5 = g->edx;
    t6 = rd32(self + 0x7cu);
    cow_thiscall(g, COW_IMG(0x100d60e0u), arg2, 2, t6, 0u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10061960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10061960(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
