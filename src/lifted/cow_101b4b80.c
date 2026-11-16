/* f_0x101b4b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101b4b80(Guest* g)
{
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < 0) goto L_101b4baa;
    if ((int32_t)arg1 > (int32_t)rd32(self + 4u)) goto L_101b4baa;
    if (rd8(self + 0x21e0u) == 0u) goto L_101b4ba3;
    return arg1 * 0x10u + rd32(self + 0x21d0u);
L_101b4ba3: ;
    return arg1 * 0x10u + self + 8u;
L_101b4baa: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b4b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b4b80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
