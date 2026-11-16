/* f_0x101079f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101079f0(Guest* g)
{
    uint32_t eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd32(arg1) & 0x10000u) == 0u) goto L_10107a13;
    eax = rd32(arg1);
    wr32(arg1, eax & 0xfffeffffu);
    wr8(arg1 + 0x4cu, (uint8_t)(in_edx | 0xffu));
    wr8(arg1 + 0x4du, (uint8_t)(in_edx | 0xffu));
    return 1u;
L_10107a13: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101079f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101079f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
