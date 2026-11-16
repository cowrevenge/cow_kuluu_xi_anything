/* f_0x10263890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10263890(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 0x9cu);
    wr8(self + 0x24u, 0u);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_102638a5;
    }
    g->edx = 0u;
    return 0x8004020au;
L_102638a5: ;
    wr8(self + 0xa1u, 0u);
    g->eax = eax;
    g->edx = 0u;
    g->esp = sp0;
    t2 = cow_thiscall(g, rd32(rd32(eax) + 0x18u), rd32(eax), 1, eax);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10263890(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
