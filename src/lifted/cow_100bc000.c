/* f_0x100bc000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100bc000(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        edx = t2;
        if ((int32_t)eax < 8)
        {
            g->eax = eax * 5u;
            g->esp = sp0 - 8u;
            t3 = cow_thiscall(g, COW_IMG(0x100af960u), self, 1, 3u);
            t4 = COW_IMG(0x10488210u) + eax * 0x14u;
            wr32(t4, rd32(t3));
            t5 = rd32(t3 + 4u);
            wr32(t4 + 4u, t5);
            t6 = rd32(t3 + 8u);
            wr32(t4 + 8u, t6);
            t7 = rd32(t3 + 0xcu);
            wr32(t4 + 0xcu, t7);
            g->eax = t7;
            t8 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
            wr32(t4 + 0x10u, t8);
            wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bc000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100bc000(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
