/* f_0x1013d5f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1013d5f0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = ((in_eax & 0xffff0000u) << 4u | (uint16_t)((uint8_t)arg1 * 0x10u + rd16(self + 0x350u))) + 4u;
    t2 = (self & 0xffff0000u) | (uint16_t)(rd16(self + 0x34eu) + 0x168u);
    cow_call_regs(g, COW_IMG(0x101ca3c0u), t1, g->ecx, g->edx, 1, 4, t2, t1, COW_IMG(0x1036fd94u), 0x80808080u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013d5f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013d5f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
