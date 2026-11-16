/* f_0x1019a980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019a980(Guest* g)
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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

    t1 = rd32(self + 0x34u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10196a90u), self, 4, t1, 1u, 2u, 5u);
    t3 = g->edx;
    t4 = rd32(self + 0x38u);
    t5 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t4, 3u, 4u);
    t6 = rd32(self + 0x40u);
    g->edx = t6;
    cow_thiscall(g, COW_IMG(0x10196a90u), self, 4, t6, 7u, 8u, 6u);
    t7 = g->edx;
    t8 = rd32(self + 0x44u);
    g->eax = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t8, 0xau, 9u);
    t10 = rd32(self + 0x24u) - 0x19u;
    t11 = rd32(self + 0x48u) - 0x19u;
    t12 = (t9 & 0xffffff00u) | rd8(self + 0x20u) == 1u;
    g->edx = (t11 & 0xffffff00u) | rd8(self + 0x20u);
    t13 = rd8(self + 0x20u);
    t14 = cow_call_regs(g, COW_IMG(0x10196b80u), t12, self, g->edx, 0, 5, 0xbu, t12, t11, t10, 0x19u);
    t15 = g->edx;
    t16 = rd32(self + 0x4cu);
    t17 = cow_thiscall(g, COW_IMG(0x1019ae80u), self, 3, t16, 0xdu, 0xcu);
    t18 = rd32(self + 0x54u);
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t18, 0xeu, 0xfu);
    t20 = g->edx;
    g->edx = t20;
    return t19;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019a980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019a980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
