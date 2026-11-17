/* f_0x101085c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101085c0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;

    t1 = rd32(COW_IMG(0x104e0b00u)) + (uint16_t)rd32(sp0 + 8u) * 0x14u;
    t2 = rd32(sp0 + 8u);
    t3 = rd32(COW_IMG(0x104e0b00u));
    wr32(sp0 + 8u, t1);
    g->edx = t1;
    cow_tailcall(g, COW_IMG(0x10108460u), (uint16_t)t2 * 5u, t3, t1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101085c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101085c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
