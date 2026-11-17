/* f_0x100df5d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100df5d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg1) != 1u) goto L_100df64d;
    edx = rd32(arg5);
    t1 = rd32(sp0 + 8u) - 8u;
    t2 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t1);
    if (t2 == 8u)
    {
        esi = 0u;
        goto L_100df63e;
    }
    ecx = t1;
    eax = 0u;
    esi = 0u;
L_100df5f9: ;
    if (((eax & 7u) != 0u ? (uint8_t)(uint32_t)((int32_t)(uint32_t)(int8_t)rd8(arg1 + (eax >> 3u) + 1u) >> ((eax & 7u) < 8u ? eax & 7u : 7u)) : rd8(arg1 + (eax >> 3u) + 1u)) & 1u)
    {
        edx = rd32(edx + 4u);
    }
    else
    {
        edx = rd32(edx);
    }
    if (rd32(edx) != 0u) goto L_100df635;
    if (rd32(edx + 4u) != 0u) goto L_100df635;
    wr8(arg3 + esi, rd8(edx + 0xcu));
    if (esi + 1u >= arg4) goto L_100df645;
    esi = esi + 1u;
    edx = rd32(arg5);
L_100df635: ;
    if (eax + 1u < rd32(sp0 + 8u))
    {
        eax = eax + 1u;
        ecx = rd32(sp0 + 8u);
        goto L_100df5f9;
    }
L_100df63e: ;
    return esi;
L_100df645: ;
    return 0xffffffffu;
L_100df64d: ;
    t3 = (rd32(sp0 + 8u) - 8u) >> 3u;
    esi = arg1 + 1u;
    edi = arg3;
    ecx = t3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t3 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100df5d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100df5d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
