/* f_0x102a5ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a5ff0(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg1 + 0x13u) == 4u) goto L_102a6021;
    if ((int8_t)rd8(arg1 + 0x12u) < 0) goto L_102a6021;
    if ((int32_t)(arg2 & 0x1fu) < 8) goto L_102a6025;
    if ((int32_t)(arg2 & 0x1fu) >= 16) goto L_102a6018;
    return arg2 + 8u;
L_102a6018: ;
    if ((int32_t)(arg2 & 0x1fu) >= 24) goto L_102a6025;
    return arg2 - 8u;
L_102a6021: ;
L_102a6025: ;
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a5ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a5ff0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
