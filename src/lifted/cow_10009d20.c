/* f_0x10009d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10009d20(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    wr32(self + rd8(self + 0x158u) * 0x18u + 0x98u, 0u);
    wr32(self + rd8(self + 0x158u) * 0x18u + 0x9cu, 0u);
    t1 = rd32(self + 0x15cu);
    wr32(self + rd8(self + 0x158u) * 0x18u + 0xa0u, t1);
    t2 = rd32(self + 0x160u);
    wr32(self + rd8(self + 0x158u) * 0x18u + 0xa4u, t2);
    wr32(self + rd8(self + 0x158u) * 0x18u + 0xa8u, 0u);
    wr32(self + rd8(self + 0x158u) * 0x18u + 0xacu, 0x3f800000u);
    t3 = self + rd8(self + 0x158u) * 0x18u + 0x98u;
    t4 = rd32(self + 0xcu);
    g->eax = t4;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0xa0u), t3, 2, t4, t3);
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10009d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10009d20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
