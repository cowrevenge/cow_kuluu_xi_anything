/* f_0x102551b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102551b0(Guest* g)
{
    uint32_t eax;
    int64_t q1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t self = g->ecx;

    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        goto L_102551b8;
    }
    eax = rd32(self + 4u);
    return eax;
L_102551b8: ;
    q1 = (int64_t)cow_muls(0x2aaaaaabu, rd32(self + 8u) - eax);
    t2 = (uint32_t)((int32_t)cow_qhi(q1) >> 3u);
    t3 = t2 + (t2 >> 0x1fu);
    g->edx = t3;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102551b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102551b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
