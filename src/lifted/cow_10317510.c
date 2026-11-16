/* f_0x10317510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10317510(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((arg1 & 3u) == 0u)
    {
        ecx = arg1;
        goto L_1031752c;
    }
    eax = in_eax;
    ecx = arg1;
L_1031751d: ;
    if (rd8(ecx) == 0u)
    {
        ecx = ecx + 1u;
        edx = in_edx;
        goto L_1031755f;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx);
    ecx = ecx + 1u;
    if ((ecx & 3u) != 0u) goto L_1031751d;
L_1031752c: ;
    if (((~rd32(ecx) ^ rd32(ecx) + 0x7efefeffu) & 0x81010100u) == 0u)
    {
        ecx = ecx + 4u;
        goto L_1031752c;
    }
    edx = rd32(ecx) + 0x7efefeffu;
    ecx = ecx + 4u;
    if ((uint8_t)rd32(ecx - 4u) == 0u) goto L_1031756e;
    eax = rd32(ecx - 4u);
    if ((uint8_t)(eax >> 8u) == 0u) goto L_10317569;
    if ((eax & 0xff0000u) == 0u) goto L_10317564;
    if ((eax & 0xff000000u) == 0u) goto L_1031755f;
    goto L_1031752c;
L_1031755f: ;
    edi = ecx - 1u;
L_10317571: ;
    if ((arg2 & 3u) == 0u)
    {
        ecx = arg2;
        goto L_10317596;
    }
    ecx = arg2;
L_1031757d: ;
    if (rd8(ecx) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx);
        goto L_103175e8;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx);
    ecx = ecx + 1u;
    wr8(edi, (uint8_t)edx);
    if ((ecx & 3u) != 0u)
    {
        edi = edi + 1u;
        goto L_1031757d;
    }
    edi = edi + 1u;
L_10317596: ;
    if (((~rd32(ecx) ^ rd32(ecx) + 0x7efefeffu) & 0x81010100u) == 0u)
    {
        edx = rd32(ecx);
        ecx = ecx + 4u;
        goto L_10317591;
    }
    edx = rd32(ecx);
    ecx = ecx + 4u;
    if ((uint8_t)edx == 0u) goto L_103175e8;
    if ((uint8_t)(edx >> 8u) == 0u) goto L_103175df;
    if ((edx & 0xff0000u) == 0u) goto L_103175d2;
    if ((edx & 0xff000000u) == 0u) goto L_103175ca;
L_10317591: ;
    wr32(edi, edx);
    edi = edi + 4u;
    goto L_10317596;
L_10317564: ;
    edi = ecx - 2u;
    goto L_10317571;
L_10317569: ;
    edi = ecx - 3u;
    goto L_10317571;
L_1031756e: ;
    edi = ecx - 4u;
    goto L_10317571;
L_103175ca: ;
    wr32(edi, edx);
    return arg1;
L_103175d2: ;
    wr16(edi, (uint16_t)edx);
    wr8(edi + 2u, 0u);
    return arg1;
L_103175df: ;
    wr16(edi, (uint16_t)edx);
    return arg1;
L_103175e8: ;
    wr8(edi, (uint8_t)edx);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10317510(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
