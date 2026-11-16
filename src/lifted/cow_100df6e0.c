/* f_0x100df6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_100df6e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd32(sp0 + 0xcu) + rd32(sp0 + 0x1cu) + 7u) >> 3u > rd32(sp0 + 8u))
    {
        eax = rd32(sp0 + 0xcu);
        goto L_100df775;
    }
    eax = rd32(sp0 + 0xcu);
    ecx = rd32(sp0 + 0x1cu);
    wr32(sp0 + 8u, arg6 + ecx);
    if ((arg6 + ecx + 7u) >> 3u > arg5) goto L_100df775;
    ecx = arg6 + ecx;
    if (arg6 < ecx)
    {
        wr32(sp0 + 0x1cu, eax - arg6);
        eax = eax - arg6;
        edx = arg6;
L_100df72b: ;
        t1 = (eax + edx & 7u) != 0u ? (uint8_t)((((edx & 7u) != 0u ? (uint8_t)(uint32_t)((int32_t)(uint32_t)(int8_t)rd8(arg4 + (edx >> 3u)) >> ((edx & 7u) < 8u ? edx & 7u : 7u)) : rd8(arg4 + (edx >> 3u))) & 1u) << (eax + edx & 7u)) : ((edx & 7u) != 0u ? (uint8_t)(uint32_t)((int32_t)(uint32_t)(int8_t)rd8(arg4 + (edx >> 3u)) >> ((edx & 7u) < 8u ? edx & 7u : 7u)) : rd8(arg4 + (edx >> 3u))) & 1u;
        t2 = rd8(arg4 + (edx >> 3u));
        wr8(sp0 + 0xcu, 1u);
        t3 = rd32(sp0 + 8u);
        t4 = rd8(arg1 + ((eax + edx) >> 3u));
        wr8(arg1 + ((eax + edx) >> 3u), (uint8_t)((uint8_t)t1 + ((uint8_t)~(uint8_t)((eax + edx & 7u) != 0u ? (uint8_t)(rd8(sp0 + 0xcu) << (eax + edx & 7u)) : rd8(sp0 + 0xcu)) & t4)));
        if (edx + 1u < t3)
        {
            ecx = (ecx & 0xffffff00u) | t4;
            edx = edx + 1u;
            goto L_100df727;
        }
        eax = t3;
    }
    return eax & 0xffffff00u;
L_100df727: ;
    eax = rd32(sp0 + 0x1cu);
    goto L_100df72b;
L_100df775: ;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100df6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100df6e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
