/* f_0x1002b5b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1002b5b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x44u) == 0u)
    {
        eax = self + 0x44u;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 0x44u);
        if (rd32(ecx + 4u) == 0u)
        {
            eax = self + 0x44u;
            edx = rd32(ecx + 4u);
            goto L_1002b5d0;
        }
        edx = rd32(ecx + 4u);
        ecx = ecx + 4u;
L_1002b5c4: ;
        if (rd32(rd32(ecx) + 4u) != 0u)
        {
            ecx = rd32(ecx) + 4u;
            goto L_1002b5c4;
        }
        eax = ecx;
    }
L_1002b5d0: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002b5b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002b5b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
