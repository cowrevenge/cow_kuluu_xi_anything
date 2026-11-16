/* f_0x102c2a8b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=10 */
uint32_t cow_fn_102c2a8b(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u) goto L_102c2b26;
    if (arg2 == 0u) goto L_102c2b26;
    if ((rd8(arg2 + 8u) & 4u) == 0u) goto L_102c2b26;
    if (arg3 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        t1 = rd32(arg2 + 0x100u);
        wr32(arg3, t1);
        edx = t1;
    }
    if (arg4 != 0u)
    {
        t2 = rd32(arg2 + 0x104u);
        wr32(arg4, t2);
        edx = t2;
    }
    if (arg5 != 0u)
    {
        t3 = rd32(arg2 + 0x108u);
        wr32(arg5, t3);
        edx = t3;
    }
    if (arg6 != 0u)
    {
        t4 = rd32(arg2 + 0x10cu);
        wr32(arg6, t4);
        edx = t4;
    }
    if (arg7 != 0u)
    {
        t5 = rd32(arg2 + 0x110u);
        wr32(arg7, t5);
        edx = t5;
    }
    if (arg8 != 0u)
    {
        t6 = rd32(arg2 + 0x114u);
        wr32(arg8, t6);
        edx = t6;
    }
    if (arg9 != 0u)
    {
        t7 = rd32(arg2 + 0x118u);
        wr32(arg9, t7);
        edx = t7;
    }
    if (arg10 != 0u)
    {
        t8 = rd32(arg2 + 0x11cu);
        wr32(arg10, t8);
    }
    g->edx = edx;
    return 4u;
L_102c2b26: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c2a8b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c2a8b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
