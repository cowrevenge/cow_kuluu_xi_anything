/* f_0x102d280f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102d280f(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0x36314c20u) goto L_102d283c;
    if (arg1 - 0x36314c20u == 0x21u) goto L_102d2838;
    if (arg1 - 0x36314c41u == 0x5dfu) goto L_102d2834;
    if (arg1 - 0x36315220u == 0x21u) goto L_102d2830;
    return arg1;
L_102d2830: ;
    return 0x15u;
L_102d2834: ;
    return 0x14u;
L_102d2838: ;
    return 0x33u;
L_102d283c: ;
    return 0x32u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d280f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d280f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
