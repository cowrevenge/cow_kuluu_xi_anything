/* f_0x10258170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10258170(Guest* g)
{
    uint32_t ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0xffffffffu)
    {
        if (arg5 == 0u) goto L_102581a0;
        if (arg4 == 0u)
        {
            ecx = COW_IMG(0x10389df0u);
            goto L_102581a5;
        }
L_102581a0: ;
        ecx = COW_IMG(0x10389db0u);
    }
    else
    {
        if (arg1 == 0u)
        {
            ecx = COW_IMG(0x10389e30u);
        }
        else
        {
            ecx = COW_IMG(0x10389e70u);
        }
    }
L_102581a5: ;
    if (arg3 == 0u) goto L_102581b9;
    g->edx = arg3;
    return rd32(arg2 * 0x10u + ecx + 0xcu);
L_102581b9: ;
    if (arg4 == 0u) goto L_102581e2;
    if (arg4 == 1u) goto L_102581d6;
    if (arg4 == 2u) goto L_102581ca;
    g->edx = arg3;
    return COW_IMG(0x103d3c84u);
L_102581ca: ;
    g->edx = arg2 << 4u;
    return rd32(arg2 * 0x10u + ecx + 8u);
L_102581d6: ;
    g->edx = arg3;
    return rd32(arg2 * 0x10u + ecx + 4u);
L_102581e2: ;
    g->edx = arg2 << 4u;
    return rd32(arg2 * 0x10u + ecx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10258170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10258170(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
