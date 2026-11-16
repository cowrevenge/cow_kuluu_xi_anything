/* f_0x1011b2e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011b2e0(Guest* g)
{
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int16_t)rd16(self + 0x18u) > (int32_t)((uint32_t)(int16_t)arg1 - 1u)) goto L_1011b2f7;
    return 0u;
L_1011b2f7: ;
    return (uint32_t)(int16_t)arg1 * 0x14u + rd32(self + 4u) - 0x14u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011b2e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011b2e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
