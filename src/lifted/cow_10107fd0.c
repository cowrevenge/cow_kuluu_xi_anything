/* f_0x10107fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10107fd0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd32(arg1) >> 8u & 0x10u) != 0u) goto L_10107fe6;
    eax = rd32(arg1);
    t1 = (eax & 0xffff00ffu) | (uint8_t)(eax >> 8u | 0x10u) << 8u;
    wr32(arg1, t1);
    return 1u;
L_10107fe6: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10107fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10107fd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
