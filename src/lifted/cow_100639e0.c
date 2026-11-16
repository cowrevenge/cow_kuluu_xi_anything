/* f_0x100639e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100639e0(Guest* g)
{
    double d3;
    double d6;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(self + 0xcu);
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10063890u), t1, self, g->edx, 0, 2, arg1, t1);
    d3 = cow_take_float(g);
    wrf32(arg2, (float)d3);
    t4 = rd32(self + 0x14u);
    g->edx = t4;
    cow_call_regs(g, COW_IMG(0x10063890u), t2, self, g->edx, 0, 2, arg1, t4);
    t5 = g->edx;
    d6 = cow_take_float(g);
    wrf32(arg3, (float)d6);
    g->edx = t5;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100639e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100639e0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
