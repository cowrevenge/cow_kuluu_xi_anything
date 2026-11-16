/* f_0x10326ffe - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10326ffe(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x103285fcu));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x10327008u));
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x14u, self);
    wr32(self, COW_IMG(0x1034b48cu));
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10255380u), COW_IMG(0x10327008u), self + 0xcu, in_edx, 0, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 8u, 0xffffffffu);
    cow_fastcall(g, COW_IMG(0x10327511u), self, t2, 0);
    t3 = rd32(sp0 - 0x10u);
    wr32(g->fs_base, t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10326ffe(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10326ffe(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
