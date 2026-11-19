/* f_0x10009f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10009f20(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 60u);

    COW_AT(10009f20)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, sp0 + 4u);
    wr32(sp0 - 0x34u, 0u);
    wr8(self + 0x158u, (uint8_t)(rd8(self + 0x158u) + 1u));
    wr32(sp0 - 0x38u, arg1);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, rd32(rd32(arg1) + 0x3cu), sp0 + 4u, 3, arg1, 0u, sp0 + 4u);
    wr32(sp0 - 0x30u, arg3);
    wr32(sp0 - 0x34u, arg1);
    t1 = rd32(self + 0xcu);
    wr32(sp0 - 0x38u, t1);
    cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0x7cu), arg1, 3, t1, arg1, arg3);
    t2 = g->ecx;
    wr32(sp0 - 0x30u, arg1);
    cow_thiscall(g, rd32(rd32(arg1) + 8u), t2, 1, arg1);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    wr32(sp0 - 0x34u, arg1);
    cow_thiscall(g, rd32(rd32(arg1) + 0x20u), rd32(arg1), 2, arg1, sp0 - 0x20u);
    wr32(self + rd8(self + 0x158u) * 0x18u + 0x98u, (uint32_t)(int16_t)rd16(arg4));
    t3 = (uint32_t)(int16_t)rd16(arg4 + 2u);
    wr32(self + rd8(self + 0x158u) * 0x18u + 0x9cu, t3);
    t4 = (uint32_t)(int16_t)rd16(arg5) + rd32(sp0 - 8u);
    wr32(self + rd8(self + 0x158u) * 0x18u + 0xa0u, t4);
    t5 = rd32(sp0 - 4u) + (uint32_t)(int16_t)rd16(arg5 + 2u);
    wr32(self + rd8(self + 0x158u) * 0x18u + 0xa4u, t5);
    wr32(self + rd8(self + 0x158u) * 0x18u + 0xa8u, 0u);
    wr32(self + rd8(self + 0x158u) * 0x18u + 0xacu, 0x3f800000u);
    t6 = self + rd8(self + 0x158u) * 0x18u + 0x98u;
    wr32(sp0 - 0x30u, t6);
    t7 = rd32(self + 0xcu);
    wr32(sp0 - 0x34u, t7);
    cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0xa0u), t6, 2, t7, t6);
    wr32(self + rd8(self + 0x158u) * 4u + 0x10u, arg1);
    wr32(self + rd8(self + 0x158u) * 4u + 0x30u, 0u);
    wr32(self + rd8(self + 0x158u) * 4u + 0x50u, arg2);
    t8 = rd8(self + 0x158u);
    wr32(self + t8 * 4u + 0x70u, arg3);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = arg2;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10009f20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10009f20(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
