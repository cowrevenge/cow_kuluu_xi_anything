/* f_0x1009acb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1009acb0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd16(self + 0x210u) != (uint16_t)arg1)
    {
        t1 = rd32(self + 0x12cu);
        wr16(self + 0x210u, (uint16_t)arg1);
        t2 = (t1 & 0xffffff00u) | (uint8_t)(t1 | 0x80u);
        wr32(self + 0x12cu, t2);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009acb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1009acb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
