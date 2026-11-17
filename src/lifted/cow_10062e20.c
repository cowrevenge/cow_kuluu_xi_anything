/* f_0x10062e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_10062e20(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, arg1);
    wr32(sp0 - 8u, sp0 + 4u);
    g->eax = arg1;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 + 4u, arg1);
    wr32(sp0 - 4u, arg2);
    wr32(sp0 - 8u, 7u);
    t2 = rd32(t1);
    wr8(rd32(t2) + 0x1au, rd8(rd32(t2) + 0x1au) | 0x10u);
    wr32(sp0 - 0xcu, sp0 + 4u);
    g->eax = rd32(t2);
    t3 = rd32(t2);
    t4 = cow_thiscall(g, COW_IMG(0x10072290u), t3, 3, sp0 + 4u, 7u, arg2);
    if (rd32(t4) == 0u)
    {
        eax = rd32(t4);
    }
    else
    {
        eax = rd32(t4);
        wr32(sp0 - 4u, 0u);
        wr32(sp0 - 8u, arg5);
        wr32(sp0 - 0xcu, arg4);
        wr32(sp0 - 0x10u, arg3);
        t5 = rd32(eax);
        g->esp = sp0;
        t6 = cow_call_regs(g, COW_IMG(0x10056c70u), t5, t5, g->edx, 0, 4, arg3, arg4, arg5, 0u);
        eax = t6;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10062e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10062e20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
