/* f_0x1025ebf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1025ebf0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 != 0u) goto L_1025ec02;
    return 0x80004003u;
L_1025ec02: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x102660f0u), arg2, self, g->edx, 0, 2, arg2, COW_IMG(0x10385e28u));
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        goto L_1025ec47;
    }
    eax = t1;
    g->eax = eax;
    g->edx = rd32(arg1 - 0xcu);
    t3 = rd32(arg1 - 0xcu);
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, rd32(t3 + 0x1cu), arg1 - 0xcu, 1, eax);
    t5 = g->edx;
    if (t4 == 0u)
    {
        edx = t5;
        goto L_1025ec37;
    }
    eax = t4;
    edx = t5;
    wr32(arg3, eax + 0xcu);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(eax + 0xcu) + 4u), rd32(eax + 0xcu), 1, eax + 0xcu);
    t6 = g->edx;
    g->edx = t6;
    return 0u;
L_1025ec37: ;
    wr32(arg3, 0u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(0u) + 4u), rd32(0u), 1, 0u);
    t7 = g->edx;
    g->edx = t7;
    return 0u;
L_1025ec47: ;
    wr32(arg3, 0u);
    g->edx = edx;
    return 0x80040216u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025ebf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025ebf0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
