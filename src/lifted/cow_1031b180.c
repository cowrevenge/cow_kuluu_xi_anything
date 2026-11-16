/* f_0x1031b180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031b180(Guest* g)
{
    const uint32_t in_eax = g->eax;
    const double xin0 = ST(0);

    g->top = (g->top + 1u) & 7u;
    fpush(g, fr(g, cow_fscale(fr(g, fr(g, exp2(-fr(g, frnd(g, xin0) - xin0)) - 1.0) + 1.0), frnd(g, xin0))));
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031b180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
