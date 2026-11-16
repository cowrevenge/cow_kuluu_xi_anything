/* f_0x1028e370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1028e370(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u);
    wr32(t1, 0x100001u);
    wr32(t1 + 8u, COW_IMG(0x1028e190u));
    wr32(t1 + 0xcu, COW_IMG(0x1028e1a0u));
    wr32(t1 + 0x10u, COW_IMG(0x1028e3d0u));
    wr32(t1 + 0x3cu, 0u);
    wr32(t1 + 0x20u, 0u);
    wr32(t1 + 0x24u, 0u);
    wr32(t1 + 0x28u, 0u);
    wr32(t1 + 0x34u, 0u);
    wr32(t1 + 0x40u, 0u);
    wr32(t1 + 0x14u, 0u);
    wr32(t1 + 0x18u, 0u);
    wr32(t1 + 0x38u, 0x3f800000u);
    wr32(t1 + 0x1cu, 0u);
    wr32(t1 + 0x44u, 0u);
    wr32(t1 + 0x48u, 0u);
    wr32(t1 + 0x30u, 0x100u);
    wr8(t1 + 0x2cu, 1u);
    wr32(sp0 + 4u, t1 + 0x4cu);
    cow_tailcall(g, COW_IMG(0x10298bb0u), t1 + 0x4cu, 0u, in_edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028e370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028e370(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
