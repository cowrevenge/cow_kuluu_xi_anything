/* f_0x101022e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101022e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint8_t)arg2 != 5u) goto L_10102308;
    if ((uint16_t)arg1 != 1u)
    {
        eax = arg1;
        goto L_10102334;
    }
    ecx = 0u;
L_101022f9: ;
    if (rd16(arg4 + ecx * 2u) == 0x199u) goto L_1010232f;
    if ((int32_t)(ecx + 1u) < 32)
    {
        ecx = ecx + 1u;
        goto L_101022f9;
    }
    return arg1;
L_10102308: ;
    if ((uint8_t)arg2 != 7u)
    {
        eax = arg1;
        goto L_10102334;
    }
    if ((arg3 & 0x20u) != 0u)
    {
        eax = arg1;
        goto L_10102334;
    }
    if ((uint16_t)arg1 != 1u)
    {
        eax = arg1;
        goto L_10102334;
    }
    ecx = 0u;
L_10102320: ;
    if (rd16(arg4 + ecx * 2u) == 0x248u) goto L_1010232f;
    if ((int32_t)(ecx + 1u) < 32)
    {
        ecx = ecx + 1u;
        goto L_10102320;
    }
    return arg1;
L_1010232f: ;
    eax = 5u;
L_10102334: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101022e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101022e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
