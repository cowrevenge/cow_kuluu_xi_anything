/* f_0x10312c8d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10312c8d(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = arg1;
    edx = in_edx;
    esi = in_esi;
L_10312c93: ;
    if (rd16(eax) == 0u) goto L_10312cc9;
    ecx = arg2;
    edx = eax - arg2;
L_10312ca3: ;
    if (rd16(ecx) == 0u)
    {
        esi = (esi & 0xffff0000u) | rd16(ecx);
        goto L_10312cbf;
    }
    esi = (esi & 0xffff0000u) | rd16(ecx);
    if (rd16(ecx + edx) != (uint16_t)esi)
    {
        esi = (uint16_t)esi;
        goto L_10312cbf;
    }
    esi = (uint16_t)esi;
    if (rd16(ecx + edx + 2u) != 0u)
    {
        ecx = ecx + 2u;
        goto L_10312ca3;
    }
    ecx = ecx + 2u;
L_10312cbf: ;
    if (rd16(ecx) == 0u) goto L_10312ccb;
    eax = eax + 2u;
    goto L_10312c93;
L_10312cc9: ;
    eax = 0u;
L_10312ccb: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312c8d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10312c8d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
