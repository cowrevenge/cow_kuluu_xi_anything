/* f_0x10289f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10289f10(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg2 < 0) goto L_10289f24;
    if ((int32_t)arg2 >= (int32_t)rd32(arg1 + 4u)) goto L_10289f24;
    wr32(arg1, arg2);
    return arg2;
L_10289f24: ;
    wr32(arg1, 0xffffffffu);
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10289f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10289f10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
