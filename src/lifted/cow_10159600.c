/* f_0x10159600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10159600(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        goto L_1015960c;
    }
    eax = rd32(self + 8u);
    return eax & 0xffffff00u;
L_1015960c: ;
    if (eax != arg1) goto L_10159619;
    return eax & 0xffffff00u;
L_10159619: ;
    if ((rd32(arg1 + 0x1d0u) >> 8u & 4u) != 0u)
    {
        edx = rd32(arg1 + 0x1d0u);
        goto L_10159629;
    }
    edx = rd32(arg1 + 0x1d0u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_10159629: ;
    g->edx = edx;
    return (rd32(eax + 0x1d0u) >> 0xau & 0xffffff00u) | (rd32(eax + 0x1d0u) >> 0xau & 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159600(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
