/* f_0x102656b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102656b0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327df8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x10u, self);
    wr32(self, COW_IMG(0x103408fcu));
    wr32(self + 0xcu, COW_IMG(0x103408d0u));
    wr32(sp0 - 0x18u, self + 0xcu);
    wr32(sp0 - 4u, 0u);
    g->esp = sp0 - 0x14u;
    t2 = cow_fastcall(g, COW_IMG(0x102651b0u), self, in_edx, 1, self + 0xcu);
    t3 = g->edx;
    t4 = cow_fastcall(g, COW_IMG(0x10265660u), self, t3, 0);
    t5 = g->edx;
    wr32(sp0 - 4u, 0xffffffffu);
    cow_fastcall(g, COW_IMG(0x10264c60u), self, t5, 0);
    t6 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t6);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102656b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102656b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
