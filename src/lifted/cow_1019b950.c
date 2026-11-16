/* f_0x1019b950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019b950(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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

    t1 = rd32(self + 0x20u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t1, 1u, 2u);
    t3 = g->edx;
    t4 = rd32(self + 0x24u);
    t5 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t4, 3u, 4u);
    t6 = rd32(self + 0x28u);
    g->edx = t6;
    cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t6, 6u, 5u);
    t7 = g->edx;
    t8 = rd32(self + 0x2cu);
    g->eax = t8;
    g->edx = t7;
    t9 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t8, 7u, 8u);
    t10 = g->edx;
    t11 = rd32(self + 0x30u);
    t12 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t11, 0xau, 9u);
    t13 = rd32(self + 0x34u);
    g->edx = t13;
    cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t13, 0xcu, 0xbu);
    t14 = g->edx;
    t15 = rd32(self + 0x38u);
    g->eax = t15;
    g->edx = t14;
    t16 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t15, 0xdu, 0xeu);
    t17 = g->edx;
    g->edx = t17;
    return t16;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019b950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019b950(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
