/* f_0x10316dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10316dd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 0u) goto L_10316e23;
    if (arg3 < 4u)
    {
        eax = (uint8_t)arg2;
        edx = arg3;
        edi = arg1;
        goto L_10316e17;
    }
    if ((-arg1 & 3u) == 0u)
    {
        edx = arg3;
        edi = arg1;
    }
    else
    {
        ecx = -arg1 & 3u;
        edi = arg1;
L_10316df3: ;
        wr8(edi, (uint8_t)arg2);
        if (ecx != 1u)
        {
            ecx = ecx - 1u;
            edi = edi + 1u;
            goto L_10316df3;
        }
        edx = arg3 - (-arg1 & 3u);
        edi = edi + 1u;
    }
    t1 = (uint8_t)arg2 * 0x101u;
    if (edx >> 2u == 0u)
    {
        eax = t1 + (t1 << 0x10u);
        edx = edx & 3u;
        goto L_10316e17;
    }
    eax = t1 + (t1 << 0x10u);
    ecx = edx >> 2u;
    edx = edx & 3u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (edx == 0u) goto L_10316e1d;
L_10316e17: ;
    wr8(edi, (uint8_t)eax);
    if (edx != 1u)
    {
        edx = edx - 1u;
        edi = edi + 1u;
        goto L_10316e17;
    }
    edx = edx - 1u;
L_10316e1d: ;
    g->edx = edx;
    return arg1;
L_10316e23: ;
    g->edx = arg3;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10316dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10316dd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
