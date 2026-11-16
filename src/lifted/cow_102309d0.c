/* f_0x102309d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102309d0(Guest* g)
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u)
    {
        eax = in_eax;
        goto L_10230a2c;
    }
    if ((rd8(COW_IMG(0x104807ecu)) & 4u) == 0u)
    {
        eax = in_eax;
        goto L_10230a2c;
    }
    if ((uint16_t)arg1 < 0xe000u)
    {
        eax = arg1;
        goto L_10230a2c;
    }
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
    if ((rd8(COW_IMG(0x104805e0u) + (eax >> 3u)) & (uint8_t)(1u << (ecx & 0x1fu))) == 0u)
    {
        eax = (eax >> 3u & 0xffffff00u) | rd8(COW_IMG(0x104805e0u) + (eax >> 3u));
        goto L_10230a2c;
    }
    if (rd32(arg2 + 0x1560u) == 0u)
    {
        eax = rd32(arg2 + 0x1560u);
        goto L_10230a2c;
    }
    eax = rd32(arg2 + 0x1560u);
    if (rd32(eax) != 0u) goto L_10230a2c;
    return (eax & 0xffffff00u) | 1u;
L_10230a2c: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102309d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102309d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
