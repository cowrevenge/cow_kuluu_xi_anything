/* f_0x1025ec60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1025ec60(Guest* g)
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

    if (rd32(self + 0x14u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        t1 = rd32(self + 0x6cu);
        wr32(self + 0x70u, 1u);
        if (t1 != 0u)
        {
            edx = in_edx;
        }
        else
        {
            t2 = rd32(self + 0x5cu);
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(COW_IMG(0x103291c4u)), self, 1, t2);
            t3 = g->edx;
            if (rd32(self + 0x64u) == 0u)
            {
                edx = t3;
            }
            else
            {
                eax = rd32(self + 0x64u);
                g->edx = rd32(self);
                t4 = rd32(self);
                g->esp = sp0 - 4u;
                cow_thiscall(g, rd32(t4 + 0x60u), self, 0);
                t5 = g->edx;
                edx = t5;
            }
        }
    }
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025ec60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025ec60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
