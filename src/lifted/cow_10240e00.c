/* f_0x10240e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10240e00(Guest* g)
{
    uint32_t t1;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    wr8(rd32(self + 8u) + 0x85u, 0u);
    wr8(rd32(self + 8u) + 0x86u, 0u);
    t1 = rd32(self + 8u);
    wr8(t1 + 0x84u, 0u);
    t2 = (rd16(rd32(self + 8u) + 0x48u) & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 8u) + 0x48u) - rd16(rd32(self + 8u) + 0x44u));
    t3 = (t1 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 8u) + 0x46u) - rd16(rd32(self + 8u) + 0x42u));
    t4 = ((in_esi & 0xffff0000u) | rd16(rd32(self + 8u) + 0x44u)) + (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u) >> 0x1fu)) >> 1u);
    t5 = ((in_edi & 0xffff0000u) | rd16(rd32(self + 8u) + 0x42u)) + (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu)) >> 1u);
    g->eax = t5;
    g->edx = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu);
    t6 = rd32(COW_IMG(0x106218b8u));
    t7 = rd32(COW_IMG(0x106218b4u));
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t5, t4, t3, t2, 1u, 0u, 0u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10240e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10240e00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
