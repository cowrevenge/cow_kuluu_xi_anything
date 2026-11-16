/* f_0x101612a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101612a0(Guest* g)
{
    uint32_t ecx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x1cu) == 0u) goto L_101612c1;
    ecx = rd32(self + 0x1cu);
    if ((uint8_t)arg1 >= 0x20u) goto L_101612c1;
    return ecx + (uint8_t)arg1 * 0x44u;
L_101612c1: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101612a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101612a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
