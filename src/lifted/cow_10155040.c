/* f_0x10155040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10155040(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 0xcu);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t1);
    t2 = g->edx;
    if (rd32(self + 0x10u) == 0u)
    {
        eax = rd32(self + 0x10u);
        edx = t2;
    }
    else
    {
        eax = rd32(self + 0x10u);
        edx = t2;
        if (rd8(rd32(self + 0xcu)) != 0u)
        {
            g->eax = eax;
            g->esp = sp0 - 8u;
            t3 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, COW_IMG(0x1034f2b8u));
            eax = t3;
        }
        t4 = rd32(self + 0x10u);
        g->eax = eax;
        g->edx = t4;
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, t4);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10155040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10155040(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
