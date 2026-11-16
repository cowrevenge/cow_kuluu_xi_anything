/* f_0x10156ab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10156ab0(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 0x14u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t1);
    t3 = g->edx;
    if (rd32(self + 4u) == 3u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        edx = t3;
        if (rd8(rd32(self + 0x14u)) != 0u)
        {
            g->eax = eax;
            g->esp = sp0 - 8u;
            t4 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, COW_IMG(0x1034f2b8u));
            eax = t4;
        }
        t5 = rd32(self + 0x20u);
        g->eax = eax;
        g->edx = t5;
        g->esp = sp0 - 8u;
        t6 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, t5);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10156ab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10156ab0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
