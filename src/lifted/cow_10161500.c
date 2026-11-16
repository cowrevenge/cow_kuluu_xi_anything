/* f_0x10161500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10161500(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x18u) == 0u) goto L_1016152c;
    ecx = rd32(self + 0x18u);
    t1 = rd8(self + 0x1cu) * 0x200u + (uint16_t)rd32(sp0 + 4u) * 2u - 0x1ffu;
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    g->esp = sp0;
    g->edx = t1;
    return cow_tailcall(g, COW_IMG(0x101c8450u), (uint16_t)t2, ecx, t1);
L_1016152c: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10161500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10161500(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
