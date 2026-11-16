/* f_0x1031f64b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1031f64b(Guest* g)
{
    uint32_t ecx;
    uint32_t loc_8;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0x7ff00000u) goto L_1031f662;
    if (arg1 != 0u) goto L_1031f674;
    loc_8 = 1u;
L_1031f69e: ;
    g->edx = 0u;
    return loc_8;
L_1031f662: ;
    if (arg2 != 0xfff00000u) goto L_1031f674;
    if (arg1 != 0u) goto L_1031f674;
    loc_8 = 2u;
    goto L_1031f69e;
L_1031f674: ;
    if ((rd32(sp0 + 0xau) & 0x7ff8u) != 0x7ff8u)
    {
        ecx = rd32(sp0 + 0xau) & 0x7ff8u;
        goto L_1031f687;
    }
    loc_8 = 3u;
    goto L_1031f69e;
L_1031f687: ;
    if ((uint16_t)ecx != 0x7ff0u) goto L_1031f6a1;
    if ((arg2 & 0x7ffffu) != 0u) goto L_1031f69c;
    if (arg1 == 0u) goto L_1031f6a1;
L_1031f69c: ;
    loc_8 = 4u;
    goto L_1031f69e;
L_1031f6a1: ;
    g->edx = 0u;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031f64b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031f64b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
