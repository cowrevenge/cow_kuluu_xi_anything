/* f_0x1031479c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031479c(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1) goto L_103147b3;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), self, 2, arg1, 4u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_103147b3: ;
    return rd8(arg1 * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031479c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031479c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
