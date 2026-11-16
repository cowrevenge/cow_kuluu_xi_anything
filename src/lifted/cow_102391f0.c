/* f_0x102391f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102391f0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr8(rd32(self + 8u) + 0x85u, 0u);
    wr8(rd32(self + 8u) + 0x86u, 0u);
    wr8(rd32(self + 8u) + 0x84u, 0u);
    wr32(self + 0x28u, 0u);
    wr32(sp0 - 8u, rd32(COW_IMG(0x103879d8u)));
    wr32(sp0 - 4u, rd32(COW_IMG(0x103879dcu)));
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->edx = sp0 - 8u;
    t1 = rd32(COW_IMG(0x103879d8u));
    t2 = rd32(COW_IMG(0x103879dcu));
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 1u);
    t3 = g->edx;
    t4 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t4);
    t5 = rd32(sp0 - 8u);
    wr32(sp0 - 0x14u, t5);
    g->edx = t3;
    t6 = cow_call_regs(g, COW_IMG(0x10119110u), t4, rd32(self + 8u), g->edx, 0, 2, t5, t4);
    t7 = g->edx;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102391f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102391f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
