/* f_0x10107070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10107070(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int16_t)arg2 <= 1)
    {
        eax = in_eax;
        ecx = arg2;
        edx = 0u;
        esi = arg1;
    }
    else
    {
        eax = (uint16_t)(((in_eax & 0xffff0000u) | (uint16_t)((uint16_t)arg2 - 2u) >> 1u) + 1u);
        edx = 0u;
        esi = arg1;
L_10107097: ;
        if (eax != 1u)
        {
            eax = eax - 1u;
            edx = edx + rd16(esi);
            esi = esi + 2u;
            goto L_10107097;
        }
        eax = eax - 1u;
        edx = edx + rd16(esi);
        esi = esi + 2u;
        ecx = arg2 - (uint16_t)(((in_eax & 0xffff0000u) | (uint16_t)((uint16_t)arg2 - 2u) >> 1u) + 1u) * 2u;
    }
    if ((int16_t)ecx > 0)
    {
        eax = rd8(esi) << 8u;
        edx = edx + rd8(esi) * 0x100u;
    }
    t1 = (uint16_t)edx + (edx >> 0x10u);
    if (t1 + (t1 >> 0x10u) == 0u)
    {
        edx = t1 >> 0x10u;
        goto L_101070dc;
    }
    ecx = t1 + (t1 >> 0x10u);
    edx = t1 >> 0x10u;
    if (ecx >= 0xffffu) goto L_101070dc;
    g->edx = edx;
    return 0xffffu - ecx;
L_101070dc: ;
    g->edx = edx;
    return (eax & 0xffff0000u) | (uint16_t)(eax | 0xffffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10107070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10107070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
