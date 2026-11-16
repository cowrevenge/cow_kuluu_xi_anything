/* f_0x101b4630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101b4630(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 4u);
    wr32(self + 4u, t1);
    t2 = rd32(arg1 + 8u);
    wr32(self + 8u, t2);
    t3 = rd8(arg1 + 0xcu);
    wr8(self + 0xcu, (uint8_t)t3);
    t4 = rd8(arg1 + 0xdu);
    wr8(self + 0xdu, (uint8_t)t4);
    t5 = rd8(arg1 + 0xeu);
    wr8(self + 0xeu, (uint8_t)t5);
    wr8(self + 0xfu, rd8(arg1 + 0xfu));
    g->edx = ((t2 | t3 | t4) & 0xffffff00u) | t5;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b4630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b4630(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
