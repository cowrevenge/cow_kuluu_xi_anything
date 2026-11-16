/* f_0x1018c020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1018c020(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = cow_divs(g, rd32(self), 0x9450c00u);
    t2 = cow_mods(g, rd32(self), 0x9450c00u);
    t3 = t2 + (rd32(sp0 + 4u) * 0x25143u << 0xau);
    t4 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t3);
    g->edx = t3;
    cow_tailcall(g, COW_IMG(0x1018bc40u), t4 * 0x25143u << 0xau, self, t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018c020(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
