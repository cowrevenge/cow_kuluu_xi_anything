/* f_0x10124360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10124360(Guest* g)
{
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 > 0xa0u)
    {
        if ((uint8_t)arg2 < 0xe0u)
        {
            wr8(arg1, rd8(COW_IMG(0x1036e3b8u) + (uint32_t)(int16_t)(((in_eax & 0xffff0000u) | (uint8_t)arg2) * 2u - 0x140u)));
            wr8(arg1 + 1u, rd8(COW_IMG(0x1036e3b9u) + (uint32_t)(int16_t)(((in_eax & 0xffff0000u) | (uint8_t)arg2) * 2u - 0x140u)));
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10124360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10124360(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
