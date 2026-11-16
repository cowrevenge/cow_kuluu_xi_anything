/* f_0x101037f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101037f0(Guest* g)
{
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 < 8u)
    {
        if (rd32(COW_IMG(0x104e0af4u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x104e0af4u));
            wr32(ecx + (uint16_t)arg1 * 4u + 0x44cu, arg2);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101037f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101037f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
