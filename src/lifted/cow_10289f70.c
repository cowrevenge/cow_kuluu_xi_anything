/* f_0x10289f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10289f70(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u);
    wr32(t1, 0xc0001u);
    wr32(t1 + 8u, COW_IMG(0x10289fc0u));
    wr32(t1 + 0xcu, COW_IMG(0x10289fd0u));
    wr32(t1 + 0x10u, COW_IMG(0x1028a060u));
    wr8(t1 + 0x14u, 0xffu);
    wr32(t1 + 0x18u, COW_IMG(0x1028a0c0u));
    wr32(sp0 + 4u, t1 + 0x1cu);
    cow_tailcall(g, COW_IMG(0x1027ebf0u), t1 + 0x1cu, self, in_edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10289f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10289f70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
