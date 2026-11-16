/* f_0x101c4340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c4340(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 0u)
    {
        eax = 0u;
        goto L_101c435f;
    }
    eax = 0u;
    ecx = arg3;
    edx = in_edx;
L_101c434e: ;
    if (rd8(ecx) != 0x20u)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx);
        esi = 0u;
        goto L_101c436c;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx);
    if (ecx + 1u != 0u)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        goto L_101c434e;
    }
    eax = eax + 1u;
L_101c435f: ;
    return 0xffffffffu;
L_101c4367: ;
    if (rd8(ecx) == 0x20u) goto L_101c438c;
    edx = arg2;
L_101c436c: ;
    if (rd8(ecx) == 0u) goto L_101c438c;
    edx = (edx & 0xffffff00u) | rd8(ecx);
    wr8(arg1 + esi, (uint8_t)edx);
    if ((int32_t)(esi + 1u) > (int32_t)arg2) goto L_101c435f;
    esi = esi + 1u;
    if (ecx + 1u != 0u)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        goto L_101c4367;
    }
    eax = eax + 1u;
    return 0xffffffffu;
L_101c438c: ;
    wr8(arg1 + esi, 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c4340(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
