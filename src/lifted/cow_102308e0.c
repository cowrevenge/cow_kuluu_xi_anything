/* f_0x102308e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102308e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t zf;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd8(COW_IMG(0x104807ecu)) & 4u) != 0u) goto L_102308ec;
    return in_eax & 0xffffff00u;
L_102308ec: ;
    if ((uint16_t)arg1 >= 0xe000u) goto L_102308f9;
    return arg1 & 0xffffff00u;
L_102308f9: ;
    t1 = (uint16_t)(arg1 + 0x2000u);
    if ((int32_t)(t1 & 0x80000007u) >= 0)
    {
        eax = t1;
        ecx = t1 & 0x80000007u;
        pf = PARITY(t1 & 7u);
        zf = (t1 & 0x80000007u) == 0u;
        sf = (int32_t)(t1 & 0x80000007u) < 0;
        of = 0u;
    }
    else
    {
        eax = t1;
        ecx = t1 & 0x80000007u;
        pf = PARITY((uint8_t)((ecx - 1u | 0xfffffff8u) + 1u));
        zf = (ecx - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)((ecx - 1u | 0xfffffff8u) + 1u) < 0;
        of = (ecx - 1u | 0xfffffff8u) + 1u == 0x80000000u;
        ecx = (ecx - 1u | 0xfffffff8u) + 1u;
    }
    return (eax >> 3u & 0xffffff00u) | (rd8(COW_IMG(0x104805e0u) + (eax >> 3u)) & (uint8_t)((ecx & 0x1fu) != 0u ? (uint8_t)(1u << (ecx & 0x1fu)) : 1u)) != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102308e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102308e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
