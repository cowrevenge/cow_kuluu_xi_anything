/* f_0x10147ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10147ec0(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    t1 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10118f70u), self + 0x84u, t1, g->edx, 0, 1, self + 0x84u);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd32(self + 8u);
    wr32(self + 0x1cu, 1u);
    t6 = (t3 & 0xffff0000u) | rd16(self + 0x1cu);
    wr8(self + 0x18u, 0u);
    g->edx = t4;
    t7 = cow_call_regs(g, COW_IMG(0x10118db0u), t2, t5, g->edx, 0, 2, t6, 0u);
    t8 = g->edx;
    g->edi = t5;
    t9 = cow_thiscall(g, COW_IMG(0x101186a0u), t5, 0);
    g->edx = rd32(self);
    t10 = rd32(self);
    t11 = cow_thiscall(g, rd32(t10 + 0x44u), self, 1, 0u);
    t12 = g->edx;
    g->edi = in_edi;
    g->edx = t12;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10147ec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10147ec0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
