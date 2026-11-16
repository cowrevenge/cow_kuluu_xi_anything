/* f_0x10230450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10230450(Guest* g)
{
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr32(self + 4u, 0u);
    wr16(self + 8u, 0u);
    wr16(self + 0xau, 0u);
    t1 = rd8(self + 0x1bu);
    wr8(self + 0x1bu, (uint8_t)(t1 + 1u));
    wr16(self + (uint8_t)(t1 + 1u) * 2u + 0xcu, (uint16_t)arg1);
    wr8(self + rd8(self + 0x1bu) + 0x16u, (uint8_t)arg2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10230450(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
