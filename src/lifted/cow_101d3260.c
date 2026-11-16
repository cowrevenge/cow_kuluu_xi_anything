/* f_0x101d3260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d3260(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd8(self + 0x811u) != 1u)
    {
        wr8(self + 0x810u, 0u);
        g->eax = in_eax;
        g->esp = sp0 - 4u;
        t1 = cow_cdecl(g, COW_IMG(0x10097fd0u), 2, COW_IMG(0x101d3200u), 0u);
        if ((uint8_t)t1 != 0u)
        {
            wr8(self + 0x811u, 1u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d3260(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
