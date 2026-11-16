/* f_0x10240a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10240a70(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr8(rd32(self + 8u) + 0x85u, 0u);
    wr8(rd32(self + 8u) + 0x86u, 0u);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    t1 = rd32(self + 8u);
    wr8(t1 + 0x84u, 0u);
    t2 = rd32(self + 8u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1011a710u), t2, 1, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 1u);
    t3 = rd32(sp0 - 6u) - rd32(sp0 - 0xau);
    wr32(sp0 - 0x28u, t3);
    t4 = rd32(sp0 - 8u) - rd32(sp0 - 0xcu);
    wr32(sp0 - 0x2cu, t4);
    t5 = rd32(sp0 - 0xau) + (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x30u, t5);
    t6 = rd32(sp0 - 0xcu) + (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x34u, t6);
    g->eax = t6;
    g->edx = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu);
    t7 = rd32(COW_IMG(0x106218b8u));
    t8 = rd32(COW_IMG(0x106218b4u));
    t9 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t6, t5, t4, t3, 1u, 0u, 0u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10240a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10240a70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
