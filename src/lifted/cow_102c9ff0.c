/* f_0x102c9ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102c9ff0(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(arg1 + 0x20u, arg2);
    wr32(arg1 + 0x28u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x102c9e90u), self, 1, arg1);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        zf = t1 == 0u;
        goto L_102ca017;
    }
    edx = t2;
    g->edx = edx;
    return 0x80000005u;
L_102ca017: ;
    if (!zf) goto L_102ca031;
    wr32(arg4, 1u);
    wr32(arg3, 0u);
    g->edx = arg3;
    return 0u;
L_102ca031: ;
    wr32(arg4, 0u);
    t3 = rd32(arg1 + 0x2cu);
    wr32(arg3, t3);
    g->edx = arg3;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c9ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c9ff0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
