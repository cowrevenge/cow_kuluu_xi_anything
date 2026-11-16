/* f_0x10199140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10199140(Guest* g)
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

    if ((int32_t)rd32(self + 0x14u) >= 2)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x14u);
        t1 = rd32(COW_IMG(0x10336a2cu) + eax * 4u);
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, t1);
        t3 = g->edx;
        g->edx = t3;
        g->esp = sp0;
        t4 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t2, 0u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10199140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10199140(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
