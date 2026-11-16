/* f_0x103232da - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_103232da(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = COW_IMG(0x103d34a4u);
    ecx = self;
L_103232df: ;
    if ((uint16_t)arg1 == rd16(eax)) goto L_103232f6;
    ecx = (ecx & 0xffff0000u) | (uint16_t)arg1;
    if (eax + 2u < COW_IMG(0x103d34b8u))
    {
        eax = eax + 2u;
        goto L_103232df;
    }
    return 1u;
L_103232f6: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103232da(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103232da(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
