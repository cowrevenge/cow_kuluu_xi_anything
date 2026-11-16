/* f_0x1019bc60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1019bc60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x10118bc0u), ecx, 1, arg1);
        t2 = g->edx;
        if (t1 != 5u)
        {
            eax = t1;
            edx = t2;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, arg1);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019bc60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019bc60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
