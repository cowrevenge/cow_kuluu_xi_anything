/* f_0x10197f90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10197f90(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0x30u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10193830u), t1, g->ecx, g->edx, 1, 2, 0x32u, t1);
    t3 = g->edx;
    t4 = rd32(self + 0x34u);
    g->ecx = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x10193830u), t2, g->ecx, g->edx, 1, 2, 0x33u, t4);
    t6 = g->ecx;
    t7 = rd32(self + 0x38u);
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10193830u), t5, g->ecx, g->edx, 1, 2, 0x34u, t7);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = rd32(self + 0x3cu);
    g->edx = t9;
    g->esp = sp0 - 0x1cu;
    t11 = cow_call_regs(g, COW_IMG(0x10193830u), t10, g->ecx, g->edx, 1, 2, 0x35u, t10);
    t12 = g->edx;
    t13 = rd32(self + 0x40u);
    g->edx = t12;
    g->esp = sp0 - 0x24u;
    t14 = cow_call_regs(g, COW_IMG(0x10193830u), t11, g->ecx, g->edx, 1, 2, 0x47u, t13);
    t15 = g->edx;
    g->edx = t15;
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10197f90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10197f90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
