/* f_0x101f7d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101f7d80(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(COW_IMG(0x10663888u));
    wr16(t1 + 0x110u, rd16(arg1));
    t2 = rd16(arg1 + 4u);
    wr16(rd32(COW_IMG(0x10663888u)) + 0x112u, (uint16_t)t2);
    g->edx = t1;
    cow_tailcall(g, COW_IMG(0x101fa410u), (arg1 & 0xffff0000u) | t2, rd32(COW_IMG(0x10663888u)), t1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7d80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f7d80(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
