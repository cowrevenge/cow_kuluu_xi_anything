/* f_0x10136870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10136870(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
    int64_t q1;
    int64_t q3;
    uint32_t t2;
    uint32_t t4;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr8(self + 0x48u, (uint8_t)arg1);
    if ((int16_t)arg2 >= 0)
    {
        esi = arg2;
    }
    else
    {
        q1 = (int64_t)cow_muls(0x51eb851fu, ((uint32_t)(int16_t)rd16(COW_IMG(0x106218b8u)) - (uint32_t)(int16_t)rd16(COW_IMG(0x106218b4u))) * (uint32_t)(int16_t)arg2);
        t2 = (uint32_t)((int32_t)cow_qhi(q1) >> 5u);
        esi = 0xffffff50u - (t2 + (t2 >> 0x1fu));
    }
    if ((int16_t)arg3 >= 0)
    {
        eax = arg3;
    }
    else
    {
        q3 = (int64_t)cow_muls(0x51eb851fu, ((uint32_t)(int16_t)rd16(COW_IMG(0x106218bau)) - (uint32_t)(int16_t)rd16(COW_IMG(0x106218b6u))) * (uint32_t)(int16_t)arg3);
        t4 = (uint32_t)((int32_t)cow_qhi(q3) >> 5u);
        eax = 0xffffffe0u - (t4 + (t4 >> 0x1fu));
    }
    wr16(self + 0x4au, (uint16_t)esi);
    wr16(self + 0x4cu, (uint16_t)eax);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10136870(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
