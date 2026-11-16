/* f_0x101315c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101315c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    const uint32_t self = g->ecx;

    wr32(self + 0x22u, 0u);
    wr32(self + 0x26u, 0u);
    wr32(self + 0x2au, 0u);
    wr32(self + 0x2eu, 0u);
    edi = self + 0x34u;
    eax = 0u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(self + 0x18u, (uint16_t)eax);
    wr32(self + 0x14u, eax);
    wr16(self + 0x20u, (uint16_t)eax);
    t1 = rd32(self);
    wr32(self + 0x1cu, 2u);
    g->edx = self;
    cow_tailcall(g, rd32(t1 + 0x44u), t1, self, self);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101315c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101315c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
