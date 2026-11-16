/* f_0x101262a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101262a0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t self = g->ecx;

    t1 = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - (uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) >> 0x1fu)) >> 1u);
    t2 = rd32(COW_IMG(0x106218b8u));
    t3 = rd32(COW_IMG(0x106218b4u));
    wr32(self + 0x38u, t1);
    t4 = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - (uint32_t)((int32_t)(uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) >> 0x1fu)) >> 1u);
    wr32(self + 0x3cu, t4);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101262a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101262a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
