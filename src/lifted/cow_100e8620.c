/* f_0x100e8620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e8620(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104ca3f0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x104ca3f0u));
        goto L_100e862e;
    }
    return 0xffffffffu;
L_100e862e: ;
    t1 = rd8(ecx + (uint16_t)arg1 * 0x2cu + 0x1cu);
    g->edx = t1;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e8620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e8620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
