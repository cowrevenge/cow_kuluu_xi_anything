/* f_0x100fcea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_100fcea0(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 >= 4u) goto L_100fcec4;
    g->ebx = arg1;
    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x100fcdd0u), self, in_edx, 0);
    if (t1 == 0u) goto L_100fcec4;
    ecx = t1;
    g->ebx = in_ebx;
    return rd16(ecx + (uint8_t)arg1 * 4u + 0x6cu);
L_100fcec4: ;
    g->ebx = in_ebx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fcea0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fcea0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
