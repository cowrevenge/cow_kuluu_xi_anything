/* f_0x10118830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10118830(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 4u);
        t1 = (eax & 0xffff0000u) | rd16(self + 0x4cu);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, t1);
        t3 = g->ecx;
        t4 = g->edx;
        if (t2 == 0u)
        {
            eax = t2;
            edx = t4;
        }
        else
        {
            eax = t2;
            ecx = t3;
            edx = t4;
            if (rd32(eax + 0x10u) != 0x10u)
            {
                if (rd32(eax + 0x18u) != 0xfu)
                {
                    t5 = (ecx & 0xffff0000u) | rd16(self + 0x4eu);
                    t6 = (edx & 0xffff0000u) | rd16(self + 0x4cu);
                    g->esp = sp0 - 4u;
                    t7 = cow_call_regs(g, COW_IMG(0x1011b360u), eax, rd32(self + 4u), t6, 0, 2, t6, t5);
                    t8 = g->edx;
                    eax = t7;
                    edx = t8;
                }
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10118830(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
