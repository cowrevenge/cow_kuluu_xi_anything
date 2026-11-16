/* f_0x10263700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10263700(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 != 0u) goto L_10263712;
    return 0x80004003u;
L_10263712: ;
    wr32(arg4, 0u);
    if ((int32_t)arg3 <= 0)
    {
        eax = 0u;
        edx = in_edx;
    }
    else
    {
        edi = arg3;
L_10263729: ;
        t1 = rd32(arg2 + rd32(arg4) * 4u);
        g->eax = rd32(arg1);
        g->edx = t1;
        t2 = rd32(arg1);
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, rd32(t2 + 0x18u), rd32(arg4), 2, arg1, t1);
        t4 = g->edx;
        if (t3 != 0u)
        {
            eax = t3;
            edx = t4;
            goto L_10263744;
        }
        eax = t3;
        edi = edi - 1u;
        t5 = rd32(arg4) + 1u;
        wr32(arg4, t5);
        if ((int32_t)edi > 0) goto L_10263729;
        edx = t5;
    }
L_10263744: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10263700(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
