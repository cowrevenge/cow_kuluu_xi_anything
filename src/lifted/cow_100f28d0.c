/* f_0x100f28d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f28d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(sp0 + 8u) >= 0x32u)
    {
        ebx = rd32(sp0 + 8u);
        goto L_100f294a;
    }
    ebx = rd32(sp0 + 8u);
    edi = COW_IMG(0x104df8d4u);
    eax = 0x20202020u;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 + 8u, ebx);
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(COW_IMG(0x104df8d4u) + ebx, 0u);
    if (arg1 == 0u) goto L_100f297b;
    eax = arg1;
    ecx = ebx;
    edx = arg1;
    esi = COW_IMG(0x104df8d4u);
L_100f2916: ;
    if (rd8(edx) == 0u) goto L_100f297b;
    eax = (eax & 0xffffff00u) | rd8(edx);
    if (ecx == 0u) goto L_100f297b;
    if ((int8_t)eax >= 0) goto L_100f2935;
    if (rd8(edx + 1u) == 0u) goto L_100f297b;
    ebx = (ebx & 0xffffff00u) | rd8(edx + 1u);
    if (ecx <= 1u) goto L_100f297b;
    wr8(esi, (uint8_t)eax);
    ecx = ecx - 1u;
    edx = edx + 1u;
    esi = esi + 1u;
L_100f2935: ;
    t1 = rd8(edx);
    wr8(esi, (uint8_t)t1);
    if (edx + 1u != 0u)
    {
        eax = (eax & 0xffffff00u) | t1;
        ecx = ecx - 1u;
        edx = edx + 1u;
        esi = esi + 1u;
        goto L_100f2916;
    }
    return COW_IMG(0x104df8d4u);
L_100f294a: ;
    if (arg1 == 0u)
    {
        esi = COW_IMG(0x104df8d4u);
        goto L_100f2978;
    }
    eax = 0x32u;
    ecx = self;
    edx = arg1;
    esi = COW_IMG(0x104df8d4u);
L_100f294e: ;
    if (rd8(edx) == 0u) goto L_100f2978;
    ecx = (ecx & 0xffffff00u) | rd8(edx);
    if (eax == 0u) goto L_100f2978;
    if ((int8_t)ecx >= 0) goto L_100f296d;
    if (rd8(edx + 1u) == 0u) goto L_100f2978;
    ebx = (ebx & 0xffffff00u) | rd8(edx + 1u);
    if (eax <= 1u) goto L_100f2978;
    wr8(esi, (uint8_t)ecx);
    eax = eax - 1u;
    edx = edx + 1u;
    esi = esi + 1u;
L_100f296d: ;
    t2 = rd8(edx);
    wr8(esi, (uint8_t)t2);
    if (edx + 1u != 0u)
    {
        eax = eax - 1u;
        ecx = (ecx & 0xffffff00u) | t2;
        edx = edx + 1u;
        esi = esi + 1u;
        goto L_100f294e;
    }
    esi = esi + 1u;
L_100f2978: ;
    wr8(esi, 0u);
L_100f297b: ;
    return COW_IMG(0x104df8d4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f28d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f28d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
