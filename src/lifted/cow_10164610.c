/* f_0x10164610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10164610(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    t1 = rd16(self + 0x14u);
    t2 = rd32(self + 8u);
    wr16(t2 + 0x4cu, (uint16_t)(t1 + 1u));
    t3 = (in_eax & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    g->eax = t3;
    g->edx = t2;
    t4 = cow_thiscall(g, COW_IMG(0x10118170u), rd32(self + 8u), 1, t3);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10164610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10164610(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
