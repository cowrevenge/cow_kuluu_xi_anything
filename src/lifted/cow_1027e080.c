/* f_0x1027e080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1027e080(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u);
    wr32(t1, 1u);
    wr32(t1 + 4u, 0x3f800000u);
    wr32(t1 + 8u, 0u);
    wr32(t1 + 0xcu, 0x3eaaaaabu);
    wr32(t1 + 0x10u, 0u);
    wr32(t1 + 0x14u, 0u);
    wr32(t1 + 0x18u, 0u);
    wr32(t1 + 0x1cu, 0u);
    wr32(t1 + 0x60u, 0u);
    wr32(t1 + 0x64u, 0u);
    wr32(sp0 + 4u, t1 + 0x20u);
    cow_tailcall(g, COW_IMG(0x1028d710u), t1 + 0x20u, 0u, in_edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027e080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027e080(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
