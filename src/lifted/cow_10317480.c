/* f_0x10317480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10317480(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((arg1 & 3u) == 0u)
    {
        ecx = arg1;
        goto L_103174a0;
    }
    eax = in_eax;
    ecx = arg1;
L_1031748c: ;
    if (rd8(ecx) == 0u)
    {
        ecx = ecx + 1u;
        edx = in_edx;
        goto L_103174d3;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx);
    ecx = ecx + 1u;
    if ((ecx & 3u) != 0u) goto L_1031748c;
L_103174a0: ;
    if (((~rd32(ecx) ^ rd32(ecx) + 0x7efefeffu) & 0x81010100u) == 0u)
    {
        ecx = ecx + 4u;
        goto L_103174a0;
    }
    edx = rd32(ecx) + 0x7efefeffu;
    ecx = ecx + 4u;
    if ((uint8_t)rd32(ecx - 4u) == 0u) goto L_103174f1;
    eax = rd32(ecx - 4u);
    if ((uint8_t)(eax >> 8u) == 0u) goto L_103174e7;
    if ((eax & 0xff0000u) == 0u) goto L_103174dd;
    if ((eax & 0xff000000u) == 0u) goto L_103174d3;
    goto L_103174a0;
L_103174d3: ;
    g->edx = edx;
    return ecx - 1u - arg1;
L_103174dd: ;
    g->edx = edx;
    return ecx - 2u - arg1;
L_103174e7: ;
    g->edx = edx;
    return ecx - 3u - arg1;
L_103174f1: ;
    g->edx = edx;
    return ecx - 4u - arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10317480(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
