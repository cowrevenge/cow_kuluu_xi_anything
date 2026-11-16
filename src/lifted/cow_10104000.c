/* f_0x10104000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10104000(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd16(arg1 + 2u) == 0u)
    {
        ecx = 0u;
        edx = (in_edx & 0xffff0000u) | rd16(arg1 + 2u);
    }
    else
    {
        edx = (in_edx & 0xffff0000u) | rd16(arg1 + 2u);
        ecx = 0u;
L_10104015: ;
        if (arg2 == rd32(arg1 + (uint16_t)ecx * 8u + 8u)) goto L_10104029;
        if ((uint16_t)(ecx + 1u) < (uint16_t)edx)
        {
            ecx = ecx + 1u;
            goto L_10104015;
        }
        ecx = ecx + 1u;
    }
L_10104029: ;
    if ((uint16_t)ecx < (uint16_t)edx)
    {
        wr16(arg1 + 2u, (uint16_t)(edx - 1u));
        if ((uint16_t)ecx >= (uint16_t)(edx - 1u))
        {
            edx = edx - 1u;
            goto L_10104057;
        }
L_10104038: ;
        t1 = rd32(arg1 + (uint16_t)ecx * 8u + 0x10u);
        wr32(arg1 + (uint16_t)ecx * 8u + 8u, t1);
        t2 = rd32(arg1 + (uint16_t)ecx * 8u + 0x14u);
        wr32(arg1 + (uint16_t)ecx * 8u + 0xcu, t2);
        if ((uint16_t)(ecx + 1u) < rd16(arg1 + 2u))
        {
            ecx = ecx + 1u;
            goto L_10104038;
        }
        edx = (uint16_t)ecx;
    }
L_10104057: ;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10104000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10104000(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
