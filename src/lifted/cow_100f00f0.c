/* f_0x100f00f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=7 */
uint32_t cow_fn_100f00f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = arg3;
    g->edx = arg2;
    t1 = cow_call_regs(g, COW_IMG(0x100f0130u), arg1, g->ecx, g->edx, 1, 7, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_100f0120;
    }
    eax = t1;
    edx = t3;
    g->edx = edx;
    return eax;
L_100f0120: ;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x100f02a0u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->edx;
    g->edx = t5;
    return (t4 & 0xffffff00u) | (uint8_t)t4 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f00f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f00f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
