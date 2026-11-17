/* f_0x1006c140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1006c140(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x28u, in_esi);
    wr32(self, COW_IMG(0x103299f0u));
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x1000cfb0u), self + 8u, 0);
    wr32(self, COW_IMG(0x1032c1a0u));
    wr32(sp0 - 0x2cu, sp0 - 0x24u);
    wr32(sp0 - 0x30u, 0u);
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
    wr32(sp0 - 0x34u, t1);
    cow_thiscall(g, rd32(rd32(t1) + 0x3cu), rd32(t1), 3, t1, 0u, sp0 - 0x24u);
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    t2 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x30u, t2);
    g->edx = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(t2) + 0x20u), rd32(t2), 2, t2, sp0 - 0x20u);
    t3 = g->edx;
    t4 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x2cu, t4);
    cow_thiscall(g, rd32(rd32(t4) + 8u), rd32(t4), 1, t4);
    wr32(sp0 - 0x2cu, self + 0x18u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0u);
    t5 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x38u, t5);
    wr32(sp0 - 0x3cu, 0x10u);
    wr32(sp0 - 0x40u, 0x10u);
    t6 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x44u, t6);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)) + 0x64u), rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)), 7, t6, 0x10u, 0x10u, t5, 0u, 1u, self + 0x18u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006c140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006c140(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
