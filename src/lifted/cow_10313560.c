/* f_0x10313560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10313560(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 0u)
    {
        edx = in_edx;
        goto L_10313614;
    }
    if ((arg1 & 3u) == 0u)
    {
        edi = arg1;
        goto L_1031358a;
    }
    eax = in_eax;
    edi = arg1;
L_1031357b: ;
    if (rd8(edi) == 0u)
    {
        edx = in_edx;
        edi = edi + 1u;
        goto L_103135bb;
    }
    eax = (eax & 0xffffff00u) | rd8(edi);
    edi = edi + 1u;
    if ((edi & 3u) != 0u) goto L_1031357b;
L_1031358a: ;
    if (((~rd32(edi) ^ rd32(edi) + 0x7efefeffu) & 0x81010100u) == 0u)
    {
        edi = edi + 4u;
        goto L_1031358a;
    }
    edx = rd32(edi) + 0x7efefeffu;
    edi = edi + 4u;
    if ((uint8_t)rd32(edi - 4u) == 0u) goto L_103135c8;
    eax = rd32(edi - 4u);
    if ((uint8_t)(eax >> 8u) == 0u) goto L_103135c3;
    if ((eax & 0xff0000u) == 0u) goto L_103135be;
    if ((eax & 0xff000000u) != 0u) goto L_1031358a;
L_103135bb: ;
    edi = edi - 1u;
L_103135cb: ;
    if ((arg2 & 3u) != 0u)
    {
        ecx = arg3;
        esi = arg2;
        goto L_103135e0;
    }
    if (arg3 >> 2u != 0u)
    {
        ecx = arg3 >> 2u;
        ebx = arg3;
        esi = arg2;
        goto L_1031362c;
    }
    ebx = arg3;
    esi = arg2;
L_103135fc: ;
    if ((ebx & 3u) == 0u)
    {
        ecx = ebx & 3u;
        goto L_10313610;
    }
    ecx = ebx & 3u;
L_10313603: ;
    t1 = rd8(esi);
    wr8(edi, (uint8_t)t1);
    if ((uint8_t)t1 == 0u)
    {
        edx = (edx & 0xffffff00u) | t1;
        goto L_10313612;
    }
    edx = (edx & 0xffffff00u) | t1;
    esi = esi + 1u;
    edi = edi + 1u;
    if (ecx != 1u)
    {
        ecx = ecx - 1u;
        goto L_10313603;
    }
    ecx = ecx - 1u;
L_10313610: ;
    wr8(edi, (uint8_t)ecx);
L_10313612: ;
L_10313614: ;
    g->edx = edx;
    return arg1;
L_103135be: ;
    edi = edi - 2u;
    goto L_103135cb;
L_103135c3: ;
    edi = edi - 3u;
    goto L_103135cb;
L_103135c8: ;
    edi = edi - 4u;
    goto L_103135cb;
L_103135e0: ;
    if (rd8(esi) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(esi);
        goto L_1031361a;
    }
    edx = (edx & 0xffffff00u) | rd8(esi);
    esi = esi + 1u;
    wr8(edi, (uint8_t)edx);
    if (ecx == 1u)
    {
        ecx = ecx - 1u;
        edi = edi + 1u;
        goto L_10313610;
    }
    ecx = ecx - 1u;
    edi = edi + 1u;
    if ((esi & 3u) != 0u) goto L_103135e0;
    if (ecx >> 2u != 0u)
    {
        ebx = ecx;
        ecx = ecx >> 2u;
        goto L_1031362c;
    }
    ebx = ecx;
    goto L_103135fc;
L_1031361a: ;
    wr8(edi, (uint8_t)edx);
    g->edx = edx;
    return arg1;
L_10313624: ;
    wr32(edi, edx);
    if (ecx == 1u)
    {
        edi = edi + 4u;
        goto L_103135fc;
    }
    ecx = ecx - 1u;
    edi = edi + 4u;
L_1031362c: ;
    if (((~rd32(esi) ^ rd32(esi) + 0x7efefeffu) & 0x81010100u) == 0u)
    {
        edx = rd32(esi);
        esi = esi + 4u;
        goto L_10313624;
    }
    edx = rd32(esi);
    esi = esi + 4u;
    if ((uint8_t)edx == 0u) goto L_1031361a;
    if ((uint8_t)(edx >> 8u) == 0u) goto L_10313678;
    if ((edx & 0xff0000u) == 0u) goto L_10313668;
    if ((edx & 0xff000000u) != 0u) goto L_10313624;
    wr32(edi, edx);
    g->edx = edx;
    return arg1;
L_10313668: ;
    wr16(edi, (uint16_t)edx);
    wr8(edi + 2u, 0u);
    g->edx = 0u;
    return arg1;
L_10313678: ;
    wr16(edi, (uint16_t)edx);
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10313560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10313560(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
