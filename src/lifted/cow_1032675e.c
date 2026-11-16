/* f_0x1032675e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1032675e(Guest* g)
{

    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032675e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1032675e(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
