/* f_0x10230700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10230700(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        goto L_1023070d;
    }
    eax = rd32(self + 4u);
    return eax & 0xffff0000u;
L_1023070d: ;
    if (rd32(eax + 0x1578u) != 0u)
    {
        eax = rd32(eax + 0x1578u);
        goto L_1023071d;
    }
    eax = rd32(eax + 0x1578u);
    return eax & 0xffff0000u;
L_1023071d: ;
    if ((int32_t)arg1 < (int32_t)rd16(eax))
    {
        edx = rd16(eax);
        goto L_10230730;
    }
    edx = rd16(eax);
    g->edx = edx;
    return eax & 0xffff0000u;
L_10230730: ;
    g->edx = edx;
    return (eax & 0xffff0000u) | rd16(arg1 * 0x14u + eax + 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10230700(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
