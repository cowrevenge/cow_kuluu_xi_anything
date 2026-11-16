/* f_0x100613d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100613d0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x100610c0u), self, arg1, 3, arg1, arg2, arg3);
    t1 = g->edx;
    wrf32(self + 0x80u, (float)(double)(int32_t)arg3);
    wr32(self, COW_IMG(0x1032bd30u));
    wr32(self + 0x34u, COW_IMG(0x1032bd14u));
    wrf32(self + 0x7cu, (float)(double)(int64_t)cow_i64(arg4, 0u));
    g->eax = arg4;
    t2 = cow_thiscall(g, COW_IMG(0x10061370u), self, 0);
    t3 = cow_thiscall(g, rd32(rd32(t2) + 0x38u), t2, 0);
    wrf32(self + 0x78u, (float)(double)(int64_t)cow_i64(t3, 0u));
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100613d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100613d0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
