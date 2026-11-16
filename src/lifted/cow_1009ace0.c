/* f_0x1009ace0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1009ace0(Guest* g)
{
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self + (uint16_t)arg1 + 0x212u) != (uint8_t)arg2)
    {
        t1 = (rd32(self + 0x12cu) & 0xffffff00u) | (uint8_t)(rd32(self + 0x12cu) | 0x80u);
        wr32(self + 0x12cu, t1);
        wr8(self + (uint16_t)arg1 + 0x212u, (uint8_t)arg2);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009ace0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1009ace0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
