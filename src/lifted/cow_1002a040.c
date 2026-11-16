/* f_0x1002a040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1002a040(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(self + 8u);
    g->edx = arg2;
    g->esp = sp0 - 0x14u;
    t2 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t1);
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0;
    t4 = cow_stdcall(g, COW_IMG(0x10030bd0u), 5, arg1, arg2, arg3, arg4, arg5);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002a040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002a040(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
