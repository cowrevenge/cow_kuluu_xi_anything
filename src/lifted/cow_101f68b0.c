/* f_0x101f68b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101f68b0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    COW_AT(101f68b0)
    t1 = (in_eax & 0xffff0000u) | rd16(self + 0x18u);
    t2 = (self & 0xffff0000u) | rd16(self + 0x20u);
    g->eax = t1;
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x10118530u), rd32(self + 8u), in_edx, 2, t2, t1);
    wr8(rd32(self + 8u) + 0x86u, 0u);
    wr8(rd32(self + 8u) + 0x85u, 0u);
    g->esp = sp0;
    g->esi = in_esi;
    g->edx = rd32(self);
    return cow_tailcall(g, rd32(rd32(self) + 0x44u), t3 & 0xffffff00u, self, rd32(self));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f68b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101f68b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
