/* f_0x10161e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10161e50(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    int64_t q3;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int16_t)arg1 >= 0) goto L_10161e6a;
    t1 = rd32(COW_IMG(0x1062193cu));
    t2 = rd16(rd32(COW_IMG(0x1062193cu)) + 0x52u);
    wr16(self + 0x52u, (uint16_t)t2);
    g->edx = (in_edx & 0xffff0000u) | t2;
    return t1;
L_10161e6a: ;
    q3 = (int64_t)cow_muls(0x51eb851fu, (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)) - 0x200u) * (uint32_t)(int16_t)arg1);
    t4 = (uint32_t)((int32_t)cow_qhi(q3) >> 5u);
    if ((int16_t)(t4 + (t4 >> 0x1fu) + 0x160u) <= (int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0xa0u))
    {
        eax = rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u));
        edx = t4 + (t4 >> 0x1fu) + 0x160u;
    }
    else
    {
        eax = rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u));
        edx = eax - 0xa0u;
    }
    if ((int16_t)edx < 352)
    {
        edx = 0x160u;
    }
    wr16(self + 0x52u, (uint16_t)edx);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10161e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10161e50(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
