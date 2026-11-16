/* f_0x10084740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10084740(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x70u) == 0u) goto L_10084773;
    eax = rd32(self + 0x70u);
    wr8(eax + 0xefu, (uint8_t)arg1);
    if ((uint8_t)arg1 == 0u)
    {
        ecx = rd32(eax + 0x12cu);
        goto L_10084767;
    }
    ecx = rd32(eax + 0x12cu);
    wr32(eax + 0x12cu, ecx | 0x40u);
    return eax;
L_10084767: ;
    wr32(eax + 0x12cu, ecx & 0xffffffbfu);
    return eax;
L_10084773: ;
    wr32(COW_IMG(0x1047d614u), arg1);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10084740(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
