/* f_0x10029e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10029e80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x20u) == 0u)
    {
        eax = self + 0x20u;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 0x20u);
        if (rd32(ecx + 4u) == 0u)
        {
            eax = self + 0x20u;
            edx = rd32(ecx + 4u);
            goto L_10029ea0;
        }
        edx = rd32(ecx + 4u);
        ecx = ecx + 4u;
L_10029e94: ;
        if (rd32(rd32(ecx) + 4u) != 0u)
        {
            ecx = rd32(ecx) + 4u;
            goto L_10029e94;
        }
        eax = ecx;
    }
L_10029ea0: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10029e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10029e80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
