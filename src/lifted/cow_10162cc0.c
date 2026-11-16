/* f_0x10162cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10162cc0(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
    int64_t q1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint16_t)(arg2 - arg1) != 0u) goto L_10162ce0;
    return (arg2 - arg1 & 0xffff0000u) | (uint16_t)arg1;
L_10162ce0: ;
    if ((int16_t)(arg2 - arg1) >= 0)
    {
        esi = 1u;
    }
    else
    {
        esi = 0xffffffffu;
    }
    if ((int32_t)(((uint32_t)(int16_t)(arg2 - arg1) ^ (uint32_t)((int32_t)(uint32_t)(int16_t)(arg2 - arg1) >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)(arg2 - arg1) >> 0x1fu)) <= 16)
    {
        q1 = (int64_t)cow_muls(0x88888889u, (0xau - (uint32_t)(int16_t)arg3) * esi * 0x10u);
        t2 = (uint32_t)((int32_t)(cow_qhi(q1) + (0xau - (uint32_t)(int16_t)arg3) * esi * 0x10u) >> 5u);
        t3 = t2 + (t2 >> 0x1fu);
        eax = t3;
    }
    else
    {
        eax = (uint32_t)((int32_t)((esi << 4u) - (uint32_t)((int32_t)(esi << 4u) >> 0x1fu)) >> 1u);
    }
    t4 = (uint32_t)(int16_t)arg1 - (uint32_t)(int16_t)arg2;
    if ((int32_t)(((uint32_t)(int16_t)eax ^ (uint32_t)((int32_t)(uint32_t)(int16_t)eax >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)eax >> 0x1fu)) <= (int32_t)((t4 ^ (uint32_t)((int32_t)((uint32_t)(int16_t)arg1 - (uint32_t)(int16_t)arg2) >> 0x1fu)) - (uint32_t)((int32_t)((uint32_t)(int16_t)arg1 - (uint32_t)(int16_t)arg2) >> 0x1fu)))
    {
        esi = (uint32_t)(int16_t)eax;
        goto L_10162d4b;
    }
    eax = ((uint32_t)(int16_t)eax ^ (uint32_t)((int32_t)(uint32_t)(int16_t)eax >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)eax >> 0x1fu);
    return (eax & 0xffff0000u) | (uint16_t)arg2;
L_10162d4b: ;
    return esi + (uint32_t)(int16_t)arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10162cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10162cc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
