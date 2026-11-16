/* f_0x10142040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10142040(Guest* g)
{
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 != 0u) goto L_1014204c;
    loc_4 = 0u;
L_10142052: ;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100fd4f0u), 1, loc_4);
    t2 = g->edx;
    g->edx = t2;
    return COW_IMG(0x10370480u) + (uint8_t)t1 * 0x10u;
L_1014204c: ;
    if ((uint8_t)arg1 != 1u) goto L_10142068;
    loc_4 = 1u;
    goto L_10142052;
L_10142068: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10142040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10142040(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
