/* f_0x10311e4b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10311e4b(Guest* g)
{
    uint32_t eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (!(arg1 & 1u))
    {
        eax = 0u;
    }
    else
    {
        eax = 0x10u;
    }
    if ((arg1 & 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(eax | 8u);
    }
    if ((arg1 & 8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(eax | 4u);
    }
    if ((arg1 & 0x10u) != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(eax | 2u);
    }
    if ((arg1 & 0x20u) != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(eax | 1u);
    }
    if ((arg1 & 2u) != 0u)
    {
        eax = eax | 0x80000u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10311e4b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10311e4b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
