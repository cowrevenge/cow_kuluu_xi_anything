/* f_0x1011acc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1011acc0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1011a710u), self, 1, sp0 - 0xcu);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    t1 = rd32(sp0 - 6u) - rd32(sp0 - 0xau);
    wr32(sp0 - 0x24u, t1);
    t2 = rd32(sp0 - 8u) - rd32(sp0 - 0xcu);
    wr32(sp0 - 0x28u, t2);
    t3 = rd32(sp0 - 0xau) + (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x2cu, t3);
    t4 = rd32(sp0 - 0xcu) + (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x30u, t4);
    cow_thiscall(g, COW_IMG(0x1011a5a0u), self, 7, t4, t3, t2, t1, 1u, 0u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011acc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1011acc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
