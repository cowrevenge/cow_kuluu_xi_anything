/* f_0x10315c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10315c20(Guest* g)
{
    int64_t q1;
    int64_t q2;
    int64_t q3;
    int64_t q4;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((arg4 | arg2) != 0u) goto L_10315c39;
    q1 = (uint64_t)cow_mulu(arg1, arg3);
    g->edx = cow_qhi(q1);
    return (uint32_t)(q1);
L_10315c39: ;
    q2 = (uint64_t)cow_mulu(arg2, arg3);
    q3 = (uint64_t)cow_mulu(arg1, arg4);
    q4 = (uint64_t)cow_mulu(arg1, arg3);
    g->edx = (uint32_t)(q2) + (uint32_t)(q3) + cow_qhi(q4);
    return (uint32_t)(q4);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10315c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10315c20(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
