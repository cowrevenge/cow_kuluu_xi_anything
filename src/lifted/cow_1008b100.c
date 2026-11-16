/* f_0x1008b100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1008b100(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd32(self + 0x120u) >> 8u & 2u) != 0u)
    {
        eax = rd32(self + 0x120u);
        if (rd8(COW_IMG(0x10487e48u)) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
            if (rd8(COW_IMG(0x1048098eu)) == 0u)
            {
                t1 = rd32(self + 0xa0u) + 0x34u;
                g->eax = t1;
                g->edx = in_edx;
                g->esp = sp0 - 4u;
                t2 = cow_thiscall(g, COW_IMG(0x10181510u), rd32(COW_IMG(0x10631f24u)), 2, self + 4u, t1);
                t3 = g->edx;
                wr32(COW_IMG(0x10485f98u), t2);
                if (t2 != 0xffffffffu)
                {
                    eax = t2;
                    edx = t3;
                    g->esp = sp0 - 4u;
                    t4 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
                    t5 = rd32(COW_IMG(0x10456a28u));
                    wr8(COW_IMG(0x10482f1eu), 1u);
                    wr8(COW_IMG(0x10482f18u), 1u);
                    wr8(COW_IMG(0x1048098eu), 1u);
                    wr32(t5, 0x70u);
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008b100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008b100(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
