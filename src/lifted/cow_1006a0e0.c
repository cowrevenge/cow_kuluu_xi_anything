/* f_0x1006a0e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1006a0e0(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(self + 0xebcu);
    t2 = rd32(t1);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t2 + 0xf4u), t2, 3, t1, 0u, 0u);
    t3 = g->ecx;
    t4 = rd32(self + 0xebcu);
    g->edx = rd32(t4);
    t5 = rd32(t4);
    cow_thiscall(g, rd32(t5 + 0xf4u), t3, 3, t4, 1u, 0u);
    t6 = g->edx;
    t7 = rd32(self + 0xebcu);
    t8 = rd32(t7);
    cow_thiscall(g, rd32(t8 + 0xf4u), t8, 3, t7, 2u, 0u);
    t9 = g->ecx;
    t10 = rd32(self + 0xebcu);
    g->edx = rd32(t10);
    t11 = rd32(t10);
    cow_thiscall(g, rd32(t11 + 0xf4u), t9, 3, t10, 3u, 0u);
    t12 = g->edx;
    g->eax = arg2;
    t13 = cow_thiscall(g, COW_IMG(0x1000a290u), rd32(self + 0xdc8u), 2, arg1, arg2);
    return t13;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006a0e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006a0e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
