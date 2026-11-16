/* f_0x10245b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10245b20(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 16u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 8u, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 0xcu, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = t2;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x1018c180u), t1, 1, sp0 - 4u);
    t4 = g->edx;
    wr32(sp0 - 0xcu, rd32(t3));
    g->eax = rd32(t3);
    g->edx = t4;
    t5 = rd32(t3);
    t6 = cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 8u, 1, t5);
    t7 = g->edx;
    wr32(sp0 - 0xcu, arg1);
    t8 = cow_thiscall(g, COW_IMG(0x1018bf50u), sp0 - 8u, 1, arg1);
    wr32(sp0 - 0xcu, arg2);
    g->edx = arg2;
    cow_thiscall(g, COW_IMG(0x1018bf00u), sp0 - 8u, 1, arg2);
    t9 = g->ecx;
    t10 = g->edx;
    t11 = rd32(sp0 - 8u);
    wr32(sp0 - 0xcu, t11);
    cow_cdecl(g, COW_IMG(0x1018c1e0u), 1, t11);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10245b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10245b20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
