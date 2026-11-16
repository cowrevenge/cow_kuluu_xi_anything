/* f_0x102c2baa - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102c2baa(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_102c2c03;
    }
    if (arg2 == 0u)
    {
        edx = in_edx;
        goto L_102c2c03;
    }
    if ((rd32(arg2 + 8u) & 0x1000u) == 0u)
    {
        edx = in_edx;
        goto L_102c2c03;
    }
    if (arg3 == 0u)
    {
        edx = in_edx;
        goto L_102c2c03;
    }
    if (arg5 == 0u)
    {
        edx = in_edx;
        goto L_102c2c03;
    }
    if (arg6 == 0u)
    {
        edx = arg6;
        goto L_102c2c03;
    }
    t1 = rd32(arg2 + 0xc4u);
    wr32(arg3, t1);
    t2 = rd32(arg2 + 0xc8u);
    wr32(arg5, t2);
    t3 = rd32(arg2 + 0xccu);
    wr32(arg6, t3);
    t4 = rd8(arg2 + 0xd0u);
    wr32(arg4, t4);
    eax = 0x1000u;
    edx = arg4;
L_102c2c05: ;
    g->edx = edx;
    return eax;
L_102c2c03: ;
    eax = 0u;
    goto L_102c2c05;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c2baa(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c2baa(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
