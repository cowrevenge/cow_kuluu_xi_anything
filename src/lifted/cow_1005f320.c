/* f_0x1005f320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1005f320(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->eax = arg1;
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x10074790u), self, in_edx, 1, arg1);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1003b540u), self + 0x34u, 0);
    t4 = g->edx;
    wr32(self, COW_IMG(0x1032b9ecu));
    wrf32(self + 0x74u, (float)(double)(int32_t)arg3);
    wr32(self + 0x34u, COW_IMG(0x1032b9d0u));
    wr8(self + 0x78u, 1u);
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1003b7b0u), self + 0x34u, 1, arg2);
    t6 = g->edx;
    cow_thiscall(g, COW_IMG(0x1003b830u), self + 0x34u, 1, arg2);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005f320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1005f320(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
