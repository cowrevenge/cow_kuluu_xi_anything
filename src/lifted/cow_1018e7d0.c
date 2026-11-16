/* f_0x1018e7d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1018e7d0(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg1 * 4u + self + 4u) == 0u) goto L_1018e7e9;
    ecx = rd32(arg1 * 4u + self + 4u);
    g->edx = arg2;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x1018e620u), ecx, 1, arg2);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1018e7e9: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018e7d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018e7d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
