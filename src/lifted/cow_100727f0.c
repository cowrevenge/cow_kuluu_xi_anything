/* f_0x100727f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100727f0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg5 != 0xffffffffu) goto L_10072819;
    g->edx = arg3;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10072430u), arg2, g->ecx, g->edx, 0, 4, arg1, arg2, arg3, arg4);
    t1 = g->edx;
    g->edx = t1;
    return arg1;
L_10072819: ;
    t2 = rd32(COW_IMG(0x1047d130u)) + 1u;
    wr32(COW_IMG(0x1047d130u), t2);
    g->edx = arg2;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10072850u), arg3, g->ecx, g->edx, 0, 7, arg1, arg2, arg3, arg4 & arg5, arg5, t2, 0u);
    t3 = g->edx;
    g->edx = t3;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100727f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100727f0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
