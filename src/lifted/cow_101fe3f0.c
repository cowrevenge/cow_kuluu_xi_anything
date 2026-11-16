/* f_0x101fe3f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101fe3f0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd16(sp0 + 4u) != 5u) goto L_101fe420;
    t1 = rd8(sp0 + 8u);
    t2 = rd32(COW_IMG(0x10663ab4u));
    wr32(sp0 + 8u, 1u);
    wr8(t2 + 0x11u, (uint8_t)(t1 - 1u));
    t3 = rd32(self + 8u);
    wr32(sp0 + 4u, t3);
    g->esp = sp0;
    g->edx = t2;
    return cow_tailcall(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), t2);
L_101fe420: ;
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fe3f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fe3f0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
