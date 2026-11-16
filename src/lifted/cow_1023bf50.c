/* f_0x1023bf50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1023bf50(Guest* g)
{
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int16_t)rd16(arg1) < 16)
    {
        wr16(arg1, 0x10u);
    }
    if ((int16_t)rd16(arg1 + 4u) < (int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x10u))
    {
        ecx = rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u));
        wr16(arg1 + 4u, (uint16_t)(ecx - 0x10u));
        ecx = ecx - 0x10u;
    }
    if ((int16_t)rd16(arg1 + 2u) < 16)
    {
        wr16(arg1 + 2u, 0x10u);
    }
    if ((int16_t)rd16(arg1 + 6u) >= (int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x10u))
    {
        ecx = (ecx & 0xffff0000u) | (uint16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
        wr16(arg1 + 6u, (uint16_t)(ecx - 0x10u));
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023bf50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1023bf50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
