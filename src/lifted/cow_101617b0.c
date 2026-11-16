/* f_0x101617b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101617b0(Guest* g)
{
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        goto L_101617c0;
    }
    return in_eax & 0xffff0000u;
L_101617c0: ;
    if ((uint16_t)arg1 < 0x20u) goto L_101617d0;
    return arg1 & 0xffff0000u;
L_101617d0: ;
    return rd16(ecx + (uint16_t)arg1 * 2u + 0x2d638u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101617b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101617b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
