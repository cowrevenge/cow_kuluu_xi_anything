/* f_0x10200d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10200d30(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100f6ed0u), 0);
    t2 = g->edx;
    if ((uint16_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        wr8(self + 0x64u, 1u);
    }
    if (rd8(self + 0x64u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x64u);
    }
    else
    {
        t3 = rd32(self + 0x60u);
        t4 = rd32(self + 0x5cu);
        t5 = rd32(self + 0x58u);
        g->edx = t5;
        g->esp = sp0 - 4u;
        t6 = cow_call_regs(g, COW_IMG(0x102007c0u), t3, self, g->edx, 0, 3, t5, t4, t3);
        t7 = g->edx;
        if ((uint8_t)t6 == 0u)
        {
            eax = t6;
            edx = t7;
        }
        else
        {
            eax = t6;
            edx = t7;
            wr8(self + 0x64u, 0u);
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10200d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10200d30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
