/* f_0x102249f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102249f0(Guest* g)
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

    if (rd32(self + 0x40u) == 0u)
    {
        eax = rd32(self + 0x40u);
        edx = in_edx;
    }
    else
    {
        g->eax = rd32(COW_IMG(0x105781f8u));
        g->edx = in_edx;
        t1 = rd32(COW_IMG(0x105781f8u));
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, COW_IMG(0x102211b0u), t1 + 0x20u, 1, 2u);
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_thiscall(g, COW_IMG(0x10150d40u), rd32(COW_IMG(0x1057847cu)), 1, 2u);
        t5 = g->edx;
        wr8(self + 0xd0u, 0u);
        eax = t4;
        edx = t5;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102249f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102249f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
