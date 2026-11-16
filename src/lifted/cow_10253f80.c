/* f_0x10253f80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10253f80(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 0x208u) == 0u)
    {
        eax = rd32(self + 0x208u);
    }
    else
    {
        t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(t1) + 0xfcu), rd32(t1), 4, t1, 0u, 0x11u, 2u);
        t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t2) + 0xfcu), rd32(t2), 4, t2, 0u, 0x10u, 2u);
        t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t3) + 0xc8u), rd32(t3), 3, t3, 0x19u, 5u);
        t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t4) + 0xc8u), rd32(t4), 3, t4, 0x18u, 0x10u);
        cow_thiscall(g, COW_IMG(0x10026c70u), rd32(self + 0x208u), 9, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
        t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t5) + 0xfcu), rd32(t5), 4, t5, 0u, 0x11u, 2u);
        t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t6) + 0xfcu), rd32(t6), 4, t6, 0u, 0x10u, 1u);
        t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t7) + 0xc8u), rd32(t7), 3, t7, 0x19u, 5u);
        t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->eax = t8;
        t9 = cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 0x18u, 0u);
        eax = t9;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253f80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10253f80(g);
    g->esp = sp0;
    rt_return(g, r, 36u);
}
/* COW_ADAPTER END */
