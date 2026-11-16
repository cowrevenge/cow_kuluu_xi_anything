/* f_0x1022f110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1022f110(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(self + 4u) <= 0)
    {
        eax = 0u;
        edx = rd32(self + 4u);
        goto L_1022f133;
    }
    edx = rd32(self + 4u);
    eax = 0u;
    ecx = rd32(self + 8u);
L_1022f122: ;
    if (rd16(ecx) == arg1) goto L_1022f136;
    if ((int32_t)(eax + 1u) < (int32_t)edx)
    {
        eax = eax + 1u;
        ecx = ecx + 2u;
        goto L_1022f122;
    }
    eax = eax + 1u;
L_1022f133: ;
    eax = 0xffffffffu;
L_1022f136: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022f110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022f110(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
