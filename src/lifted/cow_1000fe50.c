/* f_0x1000fe50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1000fe50(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg4 == 0u)
    {
        eax = 0x80004003u;
        edx = in_edx;
        goto L_1000fea1;
    }
    wr32(arg4, 0u);
    if (arg2 == 0u) goto L_1000fe97;
    if (rd32(arg3) != 0u) goto L_1000fe8e;
    if (rd32(arg3 + 4u) != 0u) goto L_1000fe8e;
    if (rd32(arg3 + 8u) != 0xc0u) goto L_1000fe8e;
    if (rd32(arg3 + 0xcu) == 0x46000000u) goto L_1000fe97;
L_1000fe8e: ;
    g->edx = arg2;
    return 0x80040110u;
L_1000fe97: ;
    g->eax = arg1;
    g->edx = arg2;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, rd32(arg1 + 0x20u), arg4, 3, arg2, arg3, arg4);
    t2 = g->edx;
    eax = t1;
    edx = t2;
L_1000fea1: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000fe50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000fe50(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
