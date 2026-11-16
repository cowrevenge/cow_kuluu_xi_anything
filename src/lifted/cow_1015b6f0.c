/* f_0x1015b6f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1015b6f0(Guest* g)
{
    uint32_t eax;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x14b4u) == 0u)
    {
        eax = rd32(self + 0x14b4u);
        goto L_1015b715;
    }
    eax = rd32(self + 0x14b4u);
    if (rd16(eax) == 5u) goto L_1015b709;
    eax = (eax & 0xffff0000u) | rd16(eax);
    if ((uint16_t)eax != 4u) goto L_1015b715;
L_1015b709: ;
    return (rd32(self + 0x151cu) & 0xffffff00u) | rd32(self + 0x151cu) != 0u;
L_1015b715: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b6f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015b6f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
