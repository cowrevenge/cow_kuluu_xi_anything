/* f_0x1008d980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1008d980(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd32(self + 0x120u) >> 8u & 0x20u) != 0u)
    {
        wr16(self + 0x1bau, 0u);
    }
    else
    {
        g->esp = sp0 - 4u;
        t1 = cow_fastcall(g, COW_IMG(0x103149e0u), self, in_edx, 0);
        t2 = cow_divs(g, t1, 0x258u);
        t3 = cow_mods(g, t1, 0x258u);
        wr16(self + 0x1bau, (uint16_t)(t3 + 0x258u));
    }
    t4 = rd32(self + 0x1a8u);
    t5 = rd32(self + 0x120u);
    wr32(self + 0x1a4u, t4);
    if ((t5 >> 8u & 2u) == 0u)
    {
        eax = t5;
    }
    else
    {
        edx = t4;
        g->esp = sp0 - 4u;
        t6 = cow_fastcall(g, COW_IMG(0x1002c8f0u), rd32(self + 0xa0u), edx, 1, COW_IMG(0x10330ebcu));
        if ((uint8_t)t6 == 0u)
        {
            eax = t6;
        }
        else
        {
            if (rd32(rd32(self + 0xa0u) + 0x7c8u) == rd32(self + 0x1a4u))
            {
                eax = rd32(self + 0xa0u);
            }
            else
            {
                eax = rd32(self + 0xa0u);
                esi = rd32(self + 0x1a4u);
                wr32(eax + 0x7c8u, esi);
            }
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008d980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008d980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
