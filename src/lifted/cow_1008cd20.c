/* f_0x1008cd20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1008cd20(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 0x124u);
    wr16(self + 0x160u, (uint16_t)arg1);
    t2 = (t1 & 0xffff00ffu) | (t1 >> 8u & 0x7fu) << 8u;
    wr32(self + 0x124u, t2);
    t3 = rd16(self + 0x162u);
    wr16(self + 0x162u, (uint16_t)arg1);
    if ((uint16_t)t3 <= (uint16_t)arg1)
    {
        ecx = (t2 & 0xffff0000u) | t3;
        wr16(self + 0x164u, (uint16_t)(arg1 - ecx));
    }
    else
    {
        wr16(self + 0x164u, (uint16_t)arg1);
        g->esp = sp0 - 4u;
        cow_fastcall(g, COW_IMG(0x1008d980u), self, in_edx, 0);
    }
    t4 = rd32(self + 0x124u);
    wr16(self + 0x164u, (uint16_t)(rd16(self + 0x164u) + 8u));
    wr32(self + 0x124u, t4 | 0x10000u);
    return t4 | 0x10000u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008cd20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008cd20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
