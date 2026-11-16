/* f_0x101cbb80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101cbb80(Guest* g)
{
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u) goto L_101cbbd7;
    if (rd8(arg1 + 8u) == 0u) goto L_101cbbd7;
    t1 = rd16(arg1 + 6u);
    return (rd8(arg1 + 7u) & 0xfu) * 0xdu + 0x38u | (t1 >> 4u & 0xfu) * 0xd00u + 0x3800u | ((t1 & 0xfu) * 0xdu << 0x10u) + 0x380000u | 0x80000000u;
L_101cbbd7: ;
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cbb80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cbb80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
