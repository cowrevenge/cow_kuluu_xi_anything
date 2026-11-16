/* f_0x1015aa70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1015aa70(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint16_t)(arg1 + 1u) == 5u) goto L_1015aaa2;
    if ((uint16_t)(arg1 + 1u) == 2u) goto L_1015aaa2;
    if ((uint16_t)(arg1 + 1u) == 7u) goto L_1015aaa2;
    if ((uint16_t)(arg1 + 1u) == 8u) goto L_1015aaa2;
    if ((uint16_t)(arg1 + 1u) == 9u) goto L_1015aaa2;
    if ((uint16_t)(arg1 + 1u) == 0xbu) goto L_1015aaa2;
    if ((uint16_t)(arg1 + 1u) == 0xdu) goto L_1015aaa2;
    return arg1 + 1u & 0xffffff00u;
L_1015aaa2: ;
    return (arg1 + 1u & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015aa70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015aa70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
