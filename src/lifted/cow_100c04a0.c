/* f_0x100c04a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100c04a0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u) goto L_100c04bd;
    wr32(arg1, 0u);
    return arg2 & 0xffffff00u;
L_100c04bd: ;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x10153ff0u), arg2, self, in_edx, 1, 0);
    t2 = g->edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x10154a40u), t1, 2, arg2, self + 0x754u);
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        goto L_100c04ea;
    }
    eax = t3;
    g->eax = eax;
    g->edx = rd32(self + 0x754u);
    t4 = rd32(self + 0x754u);
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, rd32(t4 + 8u), self + 0x754u, 0);
    t6 = g->edx;
    wr32(arg1, t5);
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_100c04ea: ;
    wr32(arg1, 0u);
    g->edx = arg1;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c04a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c04a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
