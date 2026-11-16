/* f_0x10101bf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10101bf0(Guest* g)
{
    uint32_t eax;
    int64_t q1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    q1 = (int64_t)cow_muls(0x66666667u, (uint8_t)arg1 + 9u);
    t2 = (uint32_t)((int32_t)cow_qhi(q1) >> 2u);
    if ((uint8_t)(t2 + (t2 >> 0x1fu)) < 0xbu)
    {
        eax = t2 + (t2 >> 0x1fu);
    }
    else
    {
        eax = t2 + (t2 >> 0x1fu);
        eax = (eax & 0xffffff00u) | 0xau;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10101bf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10101bf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
