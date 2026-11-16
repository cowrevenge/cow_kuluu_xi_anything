/* f_0x10160d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10160d60(Guest* g)
{
    uint32_t ecx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t zf;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg2 + 4u) != 0u) goto L_10160da1;
    if ((int32_t)(arg1 & 0x8000001fu) >= 0)
    {
        ecx = arg1 & 0x8000001fu;
        pf = PARITY(arg1 & 0x1fu);
        zf = (arg1 & 0x8000001fu) == 0u;
        sf = (int32_t)(arg1 & 0x8000001fu) < 0;
        of = 0u;
    }
    else
    {
        ecx = ((arg1 & 0x8000001fu) - 1u | 0xffffffe0u) + 1u;
        pf = PARITY((uint8_t)(((arg1 & 0x8000001fu) - 1u | 0xffffffe0u) + 1u));
        zf = ((arg1 & 0x8000001fu) - 1u | 0xffffffe0u) + 1u == 0u;
        sf = (int32_t)(((arg1 & 0x8000001fu) - 1u | 0xffffffe0u) + 1u) < 0;
        of = ((arg1 & 0x8000001fu) - 1u | 0xffffffe0u) + 1u == 0x80000000u;
    }
    t1 = rd32(self + (uint32_t)((int32_t)(arg1 + ((uint32_t)((int32_t)arg1 >> 0x1fu) & 0x1fu)) >> 5u) * 4u + 0x1cu) | 1u << (ecx & 0x1fu);
    wr32(self + (uint32_t)((int32_t)(arg1 + ((uint32_t)((int32_t)arg1 >> 0x1fu) & 0x1fu)) >> 5u) * 4u + 0x1cu, t1);
    g->edx = 1u << (ecx & 0x1fu);
    return self + (uint32_t)((int32_t)(arg1 + ((uint32_t)((int32_t)arg1 >> 0x1fu) & 0x1fu)) >> 5u) * 4u + 0x1cu & 0xffffff00u;
L_10160da1: ;
    return (arg2 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10160d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10160d60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
