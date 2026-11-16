/* f_0x1011d8d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1011d8d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg2) != 0x20u)
    {
        esi = arg2;
        goto L_1011d8e2;
    }
    eax = in_eax;
    esi = arg2;
L_1011d8da: ;
    if (rd8(esi + 1u) == 0x20u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_1011d8da;
    }
    esi = esi + 1u;
L_1011d8e2: ;
    if (rd8(esi) == 0u)
    {
        edx = in_edx;
        goto L_1011d930;
    }
    ecx = (self & 0xffffff00u) | rd8(esi);
    if ((uint8_t)ecx == 0x20u)
    {
        eax = esi;
        goto L_1011d901;
    }
    eax = esi;
L_1011d8ef: ;
    if ((uint8_t)ecx == 0x2cu) goto L_1011d901;
    if ((uint8_t)ecx == 0u) goto L_1011d901;
    if (rd8(eax + 1u) != 0x20u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
        goto L_1011d8ef;
    }
    eax = eax + 1u;
L_1011d901: ;
    if ((int32_t)(eax - esi) <= 0)
    {
        edx = eax - esi;
        goto L_1011d930;
    }
    edx = eax - esi;
    if ((int32_t)edx > 63) goto L_1011d930;
    edi = arg1;
    ecx = edx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = edx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(arg1 + edx, 0u);
    g->edx = edx;
    return eax;
L_1011d930: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d8d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011d8d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
