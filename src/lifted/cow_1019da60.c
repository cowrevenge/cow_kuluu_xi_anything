/* f_0x1019da60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019da60(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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

    t1 = rd32(self + 8u);
    wr32(self + 0x20u, 1u);
    wr8(t1 + 0x5du, 1u);
    t2 = rd32(self + 0x28u);
    g->ecx = t1;
    g->edx = t2;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10193830u), 1u, g->ecx, g->edx, 1, 2, 0xa8u, t2);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd32(self + 0x30u);
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10193830u), t5, g->ecx, g->edx, 1, 2, 0xabu, t5);
    t7 = g->edx;
    t8 = rd32(self + 0x34u);
    g->ecx = t8;
    g->esp = sp0 - 0x14u;
    t9 = cow_call_regs(g, COW_IMG(0x10193830u), t6, g->ecx, g->edx, 1, 2, 0xacu, t8);
    t10 = g->ecx;
    t11 = rd32(self + 0x38u);
    g->ecx = t10;
    g->edx = t11;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10193830u), t9, g->ecx, g->edx, 1, 2, 0xadu, t11);
    t12 = g->ecx;
    t13 = g->edx;
    t14 = rd32(self + 0x3cu);
    g->edx = t13;
    g->esp = sp0 - 0x24u;
    t15 = cow_call_regs(g, COW_IMG(0x10193830u), t14, g->ecx, g->edx, 1, 2, 0xafu, t14);
    t16 = g->edx;
    g->edx = t16;
    return t15;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019da60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019da60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
