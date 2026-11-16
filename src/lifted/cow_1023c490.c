/* f_0x1023c490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023c490(Guest* g)
{
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
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, sp0 - 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x1011a730u), sp0 - 8u, rd32(self + 8u), g->edx, 0, 1, sp0 - 8u);
    t2 = g->edx;
    wr32(sp0 - 0xcu, sp0 - 8u);
    g->ecx = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x1023bf50u), 1, sp0 - 8u);
    t4 = g->ecx;
    wr32(sp0 - 0xcu, sp0 - 8u);
    wr32(sp0 - 0x10u, 0xa0u);
    wr32(sp0 - 0x14u, 8u);
    g->ecx = t4;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xa0u);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x10u, t5);
    g->edx = t7;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x1023c000u), 2, t5, sp0 - 8u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023c490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023c490(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
