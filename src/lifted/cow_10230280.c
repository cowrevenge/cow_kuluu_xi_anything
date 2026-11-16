/* f_0x10230280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10230280(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x64u) == 0u)
    {
        eax = rd32(self + 0x64u);
        if (rd8(COW_IMG(0x1047fe8fu)) == 1u)
        {
            g->edx = in_edx;
            g->esp = sp0;
            cow_thiscall(g, COW_IMG(0x1022fb10u), self, 0);
            t1 = g->edx;
            cow_thiscall(g, COW_IMG(0x10221300u), rd32(COW_IMG(0x105781f8u)) + 0x20u, 1, 1u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10230280(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
