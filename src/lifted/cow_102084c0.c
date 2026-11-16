/* f_0x102084c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102084c0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd16(sp0 + 4u) != 5u) goto L_102084f0;
    t1 = rd32(sp0 + 8u);
    t2 = rd32(COW_IMG(0x10664438u));
    wr32(sp0 + 8u, 1u);
    wr16(t2 + 0x1cu, (uint16_t)(t1 + 1u));
    t3 = rd32(self + 8u);
    wr32(sp0 + 4u, t3);
    g->esp = sp0;
    g->edx = t2;
    return cow_tailcall(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), t2);
L_102084f0: ;
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102084c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102084c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
