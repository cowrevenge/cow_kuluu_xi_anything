/* f_0x102c9e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102c9e30(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(arg1 + 0x1cu, arg2);
    wr32(arg1 + 0x20u, arg3);
    wr32(arg1 + 0x28u, rd32(arg4));
    g->edx = arg4;
    t1 = rd32(arg4);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x102c9e90u), arg3, 1, arg1);
    t3 = g->edx;
    if ((int32_t)t2 < 0)
    {
        edx = t3;
        goto L_102c9e7e;
    }
    eax = t2;
    edx = t3;
    if (eax != 1u) goto L_102c9e6c;
    wr32(arg5, 0u);
    g->edx = edx;
    return 0u;
L_102c9e6c: ;
    if (eax != 2u) goto L_102c9e7e;
    t4 = rd32(arg1 + 0x2cu);
    wr32(arg5, t4);
    g->edx = t4;
    return 0u;
L_102c9e7e: ;
    g->edx = edx;
    return 0x80000005u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c9e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c9e30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
