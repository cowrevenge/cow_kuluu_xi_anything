/* f_0x1003e240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1003e240(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = cow_divs(g, rd8(self + 2u), (uint8_t)arg1);
    t2 = cow_mods(g, rd8(self + 2u), (uint8_t)arg1);
    wr8(self + 2u, (uint8_t)t1);
    t3 = cow_divs(g, rd8(self + 1u), (uint8_t)arg1);
    t4 = cow_mods(g, rd8(self + 1u), (uint8_t)arg1);
    wr8(self + 1u, (uint8_t)t3);
    t5 = cow_divs(g, rd8(self), (uint8_t)arg1);
    t6 = cow_mods(g, rd8(self), (uint8_t)arg1);
    wr8(self, (uint8_t)t5);
    t7 = cow_divs(g, rd8(self + 3u), (uint8_t)arg1);
    t8 = cow_mods(g, rd8(self + 3u), (uint8_t)arg1);
    wr8(self + 3u, (uint8_t)t7);
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003e240(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
