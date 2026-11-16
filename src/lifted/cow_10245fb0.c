/* f_0x10245fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10245fb0(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 >= 16) goto L_10245fcc;
    g->edx = rd32(COW_IMG(0x10669100u));
    return arg1 * 0x108u + rd32(COW_IMG(0x10669100u));
L_10245fcc: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10245fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10245fb0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
