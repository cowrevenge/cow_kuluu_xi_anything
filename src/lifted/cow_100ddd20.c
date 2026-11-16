/* f_0x100ddd20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100ddd20(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)(arg2 + arg3 & 0x80000003u) >= 0)
    {
        ecx = arg2 + arg3 & 0x80000003u;
    }
    else
    {
        ecx = ((arg2 + arg3 & 0x80000003u) - 1u | 0xfffffffcu) + 1u;
    }
    t1 = rd16(arg1);
    wr16(arg1, (uint16_t)(((ecx != 0u) + (uint32_t)((int32_t)(arg2 + arg3 + ((uint32_t)((int32_t)(arg2 + arg3) >> 0x1fu) & 3u)) >> 2u)) << 9u ^ (t1 & 0x1ffu)));
    if ((((ecx != 0u) + (uint32_t)((int32_t)(arg2 + arg3 + ((uint32_t)((int32_t)(arg2 + arg3) >> 0x1fu) & 3u)) >> 2u)) << 9u >> 8u & 0xfeu) == 0u)
    {
        ecx = ((ecx != 0u) + (uint32_t)((int32_t)(arg2 + arg3 + ((uint32_t)((int32_t)(arg2 + arg3) >> 0x1fu) & 3u)) >> 2u)) << 9u ^ (t1 & 0x1ffu);
        edx = t1 & 0x1ffu;
        goto L_100ddda0;
    }
    ecx = ((ecx != 0u) + (uint32_t)((int32_t)(arg2 + arg3 + ((uint32_t)((int32_t)(arg2 + arg3) >> 0x1fu) & 3u)) >> 2u)) << 9u ^ (t1 & 0x1ffu);
    if ((uint16_t)ecx >> 9u << 2u > 0x104u)
    {
        edx = (uint16_t)ecx >> 9u << 2u;
        goto L_100ddda0;
    }
    t2 = rd32(arg1 + 0x10cu);
    wr16(arg1 + 2u, 0u);
    if (rd16(t2 + 0x2cu) == 0u)
    {
        ecx = t2;
        t3 = rd32(ecx + 0x10u) - 1u;
        wr32(ecx + 0x10u, t3);
    }
    t4 = rd32(arg1 + 0x10cu);
    wr16(t4 + 0x2cu, 0u);
    g->edx = 0u;
    return t4;
L_100ddda0: ;
    wr16(arg1 + 2u, 0u);
    wr16(arg1, ecx & 0x1ffu);
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ddd20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ddd20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
