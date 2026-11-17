/* f_0x100df6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100df6a0(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr8(arg1 + (arg2 >> 3u), (uint8_t)((uint8_t)((arg2 & 7u) != 0u ? (uint8_t)((uint8_t)arg3 << (arg2 & 7u)) : (uint8_t)arg3) + ((uint8_t)~(uint8_t)((arg2 & 7u) != 0u ? (uint8_t)(1u << (arg2 & 7u)) : 1u) & rd8(arg1 + (arg2 >> 3u)))));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100df6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100df6a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
