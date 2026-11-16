/* f_0x1018be80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1018be80(Guest* g)
{
    int64_t q1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    q1 = (int64_t)cow_muls(0x88888889u, rd32(self));
    t2 = (uint32_t)((int32_t)(cow_qhi(q1) + rd32(self)) >> 5u);
    t3 = t2 * 0x3cu + (t2 >> 0x1fu) * 0x3cu + rd32(sp0 + 4u);
    t4 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t3);
    g->edx = t3;
    cow_tailcall(g, COW_IMG(0x1018bc40u), t4, self, t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018be80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018be80(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
