/* f_0x100be700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100be700(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u) goto L_100be71d;
    wr32(arg1, 0u);
    return arg2 & 0xffffff00u;
L_100be71d: ;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x10153ff0u), arg2, self, in_edx, 1, 0);
    t2 = g->edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x10154a40u), t1, 2, arg2, self + 0x72cu);
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        goto L_100be74a;
    }
    eax = t3;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, rd32(rd32(self + 0x72cu) + 8u), self + 0x72cu, 0);
    wr32(arg1, t4);
    return (t4 & 0xffffff00u) | 1u;
L_100be74a: ;
    wr32(arg1, 0u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100be700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100be700(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
