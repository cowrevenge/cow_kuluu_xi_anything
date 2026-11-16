/* f_0x10063a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10063a60(Guest* g)
{
    double d11;
    double d4;
    double d7;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(self + 0xcu);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x10063890u), t1, self, g->edx, 0, 2, arg1, t1);
    t3 = g->edx;
    d4 = cow_take_float(g);
    wrf32(arg2, (float)d4);
    t5 = rd32(self + 0x10u);
    t6 = cow_call_regs(g, COW_IMG(0x10063890u), t2, self, g->edx, 0, 2, arg1, t5);
    d7 = cow_take_float(g);
    wrf32(arg2 + 4u, (float)d7);
    t8 = rd32(self + 0x14u);
    g->edx = t8;
    t9 = cow_call_regs(g, COW_IMG(0x10063890u), t6, self, g->edx, 0, 2, arg1, t8);
    t10 = g->edx;
    d11 = cow_take_float(g);
    wrf32(arg2 + 8u, (float)d11);
    g->edx = t10;
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10063a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10063a60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
