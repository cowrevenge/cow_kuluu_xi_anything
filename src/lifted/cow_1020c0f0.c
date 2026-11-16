/* f_0x1020c0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1020c0f0(Guest* g)
{
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)(arg1 & 0xfu) >= 4) goto L_1020c127;
    if ((int32_t)(arg1 & 0xfu) <= 0) goto L_1020c127;
    if ((int32_t)(arg1 & 0xfu) > 2) goto L_1020c127;
    return rd32(self + (arg1 & 0xfu) * 4u + rd8(COW_IMG(0x10385a07u) + ((uint32_t)((int32_t)arg1 >> 4u) & 0xfu)) * 4u + 0x8fcu);
L_1020c127: ;
    return rd32(self + 0x900u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020c0f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020c0f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
