/* f_0x101dc230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101dc230(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int16_t)rd16(self + 0x50u) <= 0) goto L_101dc269;
    eax = (in_eax & 0xffff0000u) | rd16(self + 0x50u);
    if ((int16_t)rd16(self + 0x52u) <= 0) goto L_101dc269;
    if (rd32(self + 0x54u) == 0u) goto L_101dc269;
    ecx = rd32(self + 0x54u);
    if ((int32_t)arg1 < 0) goto L_101dc269;
    if ((int32_t)arg1 >= (int16_t)eax) goto L_101dc269;
    return rd32(arg1 * 0x54u + ecx + 0x48u);
L_101dc269: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dc230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dc230(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
