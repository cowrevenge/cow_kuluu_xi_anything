/* f_0x100c43c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100c43c0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x100c42f0u), self, in_edx, 0);
    t1 = g->edx;
    wr32(sp0 - 0xcu, arg1 + 0x791cu);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->eax = arg1 + 0x791cu;
    t2 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 4u, arg1 + 0x791cu);
    wr32(sp0 - 0xcu, self);
    cow_thiscall(g, COW_IMG(0x100c4410u), self, 1, self);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c43c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c43c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
