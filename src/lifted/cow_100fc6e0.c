/* f_0x100fc6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100fc6e0(Guest* g)
{
    uint32_t ecx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t zf;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        esi = rd32(COW_IMG(0x104dfd98u));
        goto L_100fc6ef;
    }
    return in_eax & 0xffffff00u;
L_100fc6ef: ;
    if ((uint16_t)arg1 >= 0x180u) goto L_100fc72a;
    if ((int32_t)(arg1 & 7u) >= 0)
    {
        ecx = arg1 & 7u;
        pf = PARITY(arg1 & 7u);
        zf = (arg1 & 7u) == 0u;
        sf = (int32_t)(arg1 & 7u) < 0;
        of = 0u;
    }
    else
    {
        ecx = ((arg1 & 7u) - 1u | 0xfffffff8u) + 1u;
        pf = PARITY((uint8_t)(((arg1 & 7u) - 1u | 0xfffffff8u) + 1u));
        zf = ((arg1 & 7u) - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)(((arg1 & 7u) - 1u | 0xfffffff8u) + 1u) < 0;
        of = ((arg1 & 7u) - 1u | 0xfffffff8u) + 1u == 0x80000000u;
    }
    return ((uint8_t)(1u << (ecx & 0x1fu)) & rd8(esi + ((uint16_t)arg1 >> 3u) + 0x3c409u)) != 0u;
L_100fc72a: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fc6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fc6e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
