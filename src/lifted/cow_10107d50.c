/* f_0x10107d50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10107d50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10107d90u), arg2, g->ecx, g->edx, 1, 1, arg2);
    if ((rd32(arg1) & 0x20u) != 0u) goto L_10107d81;
    eax = t1;
    ecx = rd32(arg1);
    wr16(arg1 + 0x48u, (uint8_t)eax);
    wr32(arg1, ecx | 0x20u);
    return 1u;
L_10107d81: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10107d50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10107d50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
