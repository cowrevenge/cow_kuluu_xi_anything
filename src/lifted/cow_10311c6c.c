/* f_0x10311c6c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10311c6c(Guest* g)
{
    int64_t q2;
    uint32_t t1;
    const double xin0 = ST(0);

    t1 = g->fcw;
    g->fcw = (g->fcw << 0x10u >> 0x10u & 0xffff00ffu) | (g->fcw << 0x10u >> 0x18u | 0xcu) << 8u;
    q2 = fist64(g, xin0);
    g->fcw = t1 << 0x10u >> 0x10u;
    g->edx = cow_qhi(q2);
    g->top = (g->top + 1u) & 7u;
    return cow_qlo(q2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10311c6c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10311c6c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
