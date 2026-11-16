/* f_0x100b3690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100b3690(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int16_t)rd16(self + rd16(self + 0x258u) * 0x20u + 0x24u) > (int32_t)arg1) goto L_100b36b0;
L_100b36aa: ;
    return 0u;
L_100b36b0: ;
    eax = 0u;
    ecx = self + 0x24u;
L_100b36b5: ;
    if ((int16_t)rd16(ecx) <= (int32_t)arg1) goto L_100b36aa;
    if ((int32_t)(eax + 1u) < 16)
    {
        eax = eax + 1u;
        ecx = ecx + 0x20u;
        goto L_100b36b5;
    }
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b3690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100b3690(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
