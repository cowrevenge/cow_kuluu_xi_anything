/* f_0x102c2d8a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102c2d8a(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_102c2dcf;
    }
    if (arg2 == 0u)
    {
        edx = in_edx;
        goto L_102c2dcf;
    }
    if ((rd32(arg2 + 8u) & 0x100u) == 0u)
    {
        edx = in_edx;
        goto L_102c2dcf;
    }
    if (arg3 == 0u)
    {
        edx = in_edx;
        goto L_102c2dcf;
    }
    if (arg4 == 0u)
    {
        edx = in_edx;
        goto L_102c2dcf;
    }
    if (arg5 == 0u)
    {
        edx = arg5;
        goto L_102c2dcf;
    }
    t1 = rd32(arg2 + 0x64u);
    wr32(arg3, t1);
    t2 = rd32(arg2 + 0x68u);
    wr32(arg4, t2);
    t3 = rd8(arg2 + 0x6cu);
    wr32(arg5, t3);
    eax = 0x100u;
    edx = arg5;
L_102c2dd1: ;
    g->edx = edx;
    return eax;
L_102c2dcf: ;
    eax = 0u;
    goto L_102c2dd1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c2d8a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c2d8a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
