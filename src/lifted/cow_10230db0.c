/* f_0x10230db0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10230db0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_10230dbb;
    return arg1 & 0xffffff00u;
L_10230dbb: ;
    t1 = (arg1 & 0xffff0000u) | (uint16_t)(rd16(arg1) - 0x2000u);
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x102308e0u), g->eax, g->ecx, in_edx, 1, 1, t1);
    return (t2 & 0xffffff00u) | (uint8_t)t2 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230db0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10230db0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
