/* f_0x10087d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10087d40(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x1ecu) == 0u)
    {
        eax = in_eax;
    }
    else
    {
        edx = rd32(self + 0x1ecu);
        if (rd32(self + 0x1f4u) == 0u)
        {
            eax = rd32(self + 0x1f4u);
        }
        else
        {
            eax = rd32(self + 0x1f4u);
            if ((rd32(self + 0x120u) & 0x200u) != 0u)
            {
                g->eax = eax;
                g->esp = sp0 - 4u;
                t1 = cow_thiscall(g, rd32(rd32(rd32(self + 0xa0u)) + 0x29cu), rd32(self + 0xa0u), 2, edx, eax);
                eax = t1;
            }
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087d40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10087d40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
