/* f_0x10262ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10262ca0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u) goto L_10262cb0;
    return 0x80004003u;
L_10262cb0: ;
    t1 = rd32(arg1 + 0xcu);
    t2 = rd32(arg1 + 0xcu);
    wr32(arg2, t1);
    if (t2 == 0u) goto L_10262cc8;
    eax = t1;
    g->edx = in_edx;
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(eax) + 4u), rd32(eax), 1, eax);
    t3 = g->edx;
    g->edx = t3;
    return 0u;
L_10262cc8: ;
    return 0x80040209u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262ca0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
