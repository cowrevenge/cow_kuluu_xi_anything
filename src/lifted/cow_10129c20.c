/* f_0x10129c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_10129c20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint16_t)arg1 != 0xffffu) goto L_10129c30;
    return (arg1 & 0xffff0000u) | (uint16_t)arg1;
L_10129c30: ;
    if ((int16_t)(arg1 + 1u) < 100)
    {
        eax = arg1 + 1u;
    }
    else
    {
        eax = 0u;
    }
    if ((uint16_t)eax == rd16(self + 0x14u))
    {
        ecx = (self & 0xffff0000u) | rd16(self + 0x14u);
        eax = ecx;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10129c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10129c20(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
