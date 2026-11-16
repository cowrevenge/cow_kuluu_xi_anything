/* f_0x10162d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10162d90(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
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

    t1 = rd32(COW_IMG(0x106218b8u));
    t2 = rd32(COW_IMG(0x106218b4u));
    t3 = rd16(self + 0x52u);
    wr16(self + 0x32u, (uint16_t)(t1 - t2 - 0xa0u));
    if ((int16_t)(t1 - t2 - 0xa0u) > (int16_t)t3)
    {
        ecx = (self & 0xffff0000u) | t3;
        wr16(self + 0x32u, (uint16_t)ecx);
    }
    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x1011a710u), ecx, 1, self + 0x24u);
        t5 = g->ecx;
        t6 = g->edx;
        t7 = (t5 & 0xffff0000u) | (uint16_t)(rd16(self + 0x2au) - rd16(self + 0x26u));
        t8 = (t6 & 0xffff0000u) | (uint16_t)(rd16(self + 0x32u) + 0xeu);
        t9 = (t4 & 0xffff0000u) | rd16(self + 0x26u);
        t10 = (t9 & 0xffff0000u) | rd16(self + 0x24u);
        cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t10, t9, t8, t7, 1u, 0u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10162d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10162d90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
