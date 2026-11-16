/* f_0x10261cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10261cc0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327a5bu));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x10u, self);
    wr32(self, COW_IMG(0x10340760u));
    wr32(sp0 - 4u, 0u);
    t2 = rd32(self + 0xcu) + 0xcu;
    wr32(sp0 - 0x18u, t2);
    g->eax = t2;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_thiscall(g, rd32(rd32(t2) + 8u), rd32(t2), 1, t2);
    t4 = g->edx;
    wr32(sp0 - 4u, 0xffffffffu);
    cow_fastcall(g, COW_IMG(0x10269ac0u), self + 0x18u, t4, 0);
    t5 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t5);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10261cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10261cc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
