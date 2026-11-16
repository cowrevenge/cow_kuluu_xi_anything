/* f_0x1030a420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u64 stack_args=0 */
uint32_t cow_fn_1030a420(Guest* g)
{
    const uint32_t in_eax = g->eax;

    { /* pand mm0, qword ptr [0x103ced38] */ uint32_t A = COW_IMG(0x103ced38u); g->mm[0] = mmx_pand(g->mm[0], rd64(A)); }
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030a420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030a420(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
