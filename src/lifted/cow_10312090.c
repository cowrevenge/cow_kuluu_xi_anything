/* f_0x10312090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10312090(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 0u)
    {
        edx = in_edx;
        goto L_10312113;
    }
    if ((arg2 & 3u) != 0u)
    {
        eax = in_eax;
        ecx = arg3;
        esi = arg2;
        edi = arg1;
        goto L_103120b4;
    }
    if (arg3 >> 2u != 0u)
    {
        ecx = arg3 >> 2u;
        ebx = arg3;
        esi = arg2;
        edi = arg1;
        goto L_10312121;
    }
    eax = in_eax;
    edx = in_edx;
    ebx = arg3;
    esi = arg2;
    edi = arg1;
L_103120d5: ;
    t2 = rd8(esi);
    wr8(edi, (uint8_t)t2);
    if ((uint8_t)t2 == 0u)
    {
        eax = (eax & 0xffffff00u) | t2;
        edi = edi + 1u;
        goto L_1031210e;
    }
    eax = (eax & 0xffffff00u) | t2;
    esi = esi + 1u;
    edi = edi + 1u;
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        goto L_103120d5;
    }
L_103120e2: ;
    g->edx = edx;
    return arg1;
L_103120b4: ;
    t1 = rd8(esi);
    wr8(edi, (uint8_t)t1);
    if (ecx == 1u)
    {
        edx = in_edx;
        goto L_103120e2;
    }
    eax = (eax & 0xffffff00u) | t1;
    ecx = ecx - 1u;
    esi = esi + 1u;
    edi = edi + 1u;
    if ((uint8_t)eax == 0u) goto L_103120ea;
    if ((esi & 3u) != 0u) goto L_103120b4;
    if (ecx >> 2u != 0u)
    {
        ebx = ecx;
        ecx = ecx >> 2u;
        goto L_10312121;
    }
    edx = in_edx;
    ebx = ecx;
L_103120d0: ;
    if ((ebx & 3u) == 0u) goto L_103120e2;
    ebx = ebx & 3u;
    goto L_103120d5;
L_103120ea: ;
    if ((edi & 3u) == 0u) goto L_10312104;
L_103120f2: ;
    wr8(edi, (uint8_t)eax);
    if (ecx == 1u)
    {
        edx = in_edx;
        goto L_10312186;
    }
    ecx = ecx - 1u;
    edi = edi + 1u;
    if ((edi & 3u) != 0u) goto L_103120f2;
L_10312104: ;
    if (ecx >> 2u != 0u)
    {
        edx = in_edx;
        ebx = ecx;
        ecx = ecx >> 2u;
        goto L_10312177;
    }
    edx = in_edx;
    ebx = ecx;
L_1031210b: ;
    wr8(edi, (uint8_t)eax);
    edi = edi + 1u;
L_1031210e: ;
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        goto L_1031210b;
    }
L_10312113: ;
    g->edx = edx;
    return arg1;
L_10312119: ;
    wr32(edi, edx);
    if (ecx == 1u)
    {
        edi = edi + 4u;
        goto L_103120d0;
    }
    ecx = ecx - 1u;
    edi = edi + 4u;
L_10312121: ;
    if (((~rd32(esi) ^ rd32(esi) + 0x7efefeffu) & 0x81010100u) == 0u)
    {
        eax = ~rd32(esi) ^ rd32(esi) + 0x7efefeffu;
        edx = rd32(esi);
        esi = esi + 4u;
        goto L_10312119;
    }
    eax = ~rd32(esi) ^ rd32(esi) + 0x7efefeffu;
    edx = rd32(esi);
    esi = esi + 4u;
    if ((uint8_t)edx == 0u) goto L_1031216b;
    if ((uint8_t)(edx >> 8u) == 0u) goto L_10312161;
    if ((edx & 0xff0000u) == 0u) goto L_10312157;
    if ((edx & 0xff000000u) != 0u) goto L_10312119;
    wr32(edi, edx);
L_1031216f: ;
    if (ecx == 1u)
    {
        edi = edi + 4u;
        goto L_10312181;
    }
    ecx = ecx - 1u;
    edi = edi + 4u;
L_10312177: ;
L_10312179: ;
    wr32(edi, 0u);
    if (ecx != 1u)
    {
        ecx = ecx - 1u;
        edi = edi + 4u;
        goto L_10312179;
    }
    edi = edi + 4u;
L_10312181: ;
    if ((ebx & 3u) != 0u)
    {
        eax = 0u;
        ebx = ebx & 3u;
        goto L_1031210b;
    }
L_10312186: ;
    g->edx = edx;
    return arg1;
L_10312157: ;
    wr32(edi, (uint16_t)edx);
    edx = (uint16_t)edx;
    goto L_1031216f;
L_10312161: ;
    wr32(edi, (uint8_t)edx);
    edx = (uint8_t)edx;
    goto L_1031216f;
L_1031216b: ;
    wr32(edi, 0u);
    edx = 0u;
    goto L_1031216f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10312090(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
