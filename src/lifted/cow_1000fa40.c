/* f_0x1000fa40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000fa40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd16(arg1) == 0u)
    {
        eax = arg1;
        goto L_1000fa74;
    }
    eax = arg1;
    ecx = arg1;
    edx = in_edx;
L_1000fa4f: ;
    if (rd16(ecx) == 0u)
    {
        edx = (edx & 0xffff0000u) | rd16(ecx);
    }
    else
    {
        edx = (edx & 0xffff0000u) | rd16(ecx);
        ecx = ecx + 2u;
    }
    if ((uint16_t)edx == 0x5cu) goto L_1000fa6c;
    if ((uint16_t)edx == 0x2fu) goto L_1000fa6c;
    if ((uint16_t)edx != 0x3au) goto L_1000fa6e;
L_1000fa6c: ;
    eax = ecx;
L_1000fa6e: ;
    if (rd16(ecx) != 0u) goto L_1000fa4f;
L_1000fa74: ;
    return (uint32_t)((int32_t)(eax - arg1) >> 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000fa40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000fa40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
