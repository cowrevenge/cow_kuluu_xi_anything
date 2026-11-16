/* f_0x1025dfc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_1025dfc0(Guest* g)
{
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int16_t)arg1 < 0) goto L_1025dfdb;
    if ((int16_t)arg1 >= 256) goto L_1025dfdb;
    return ((uint32_t)(int16_t)arg1 & 0xffff0000u) | rd16(self + (uint32_t)(int16_t)arg1 * 4u + 2u);
L_1025dfdb: ;
    return (in_eax & 0xffff0000u) | (uint16_t)(arg1 | 0xffffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025dfc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025dfc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
