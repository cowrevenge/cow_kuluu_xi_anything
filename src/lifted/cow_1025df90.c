/* f_0x1025df90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1025df90(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int16_t)arg1 < 0)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
    }
    else
    {
        if ((int16_t)arg1 >= 256)
        {
            eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        }
        else
        {
            wr8(self + (uint32_t)(int16_t)arg1 * 4u, 1u);
            wr16(self + (uint32_t)(int16_t)arg1 * 4u + 2u, (uint16_t)arg2);
            eax = self + (uint32_t)(int16_t)arg1 * 4u;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025df90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025df90(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
