/* f_0x102631d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102631d0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 0x98u) == 0u) goto L_102631f7;
    eax = rd32(self + 0x98u);
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0;
    t1 = cow_thiscall(g, rd32(rd32(eax) + 0x1cu), rd32(eax), 5, eax, arg1, arg2, arg3, arg4);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_102631f7: ;
    return 0x80004002u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102631d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102631d0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
