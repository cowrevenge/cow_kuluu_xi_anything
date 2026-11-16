/* f_0x102408a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102408a0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    cow_frame(g, sp0, 24u);

    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    wr32(sp0 - 0xcu, sp0 - 8u);
    wr32(COW_IMG(0x10669060u), self + 0x14u);
    g->edx = sp0 - 8u;
    t1 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1011a730u), self + 0x14u, t1, g->edx, 0, 1, sp0 - 8u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xcu, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x1023bf50u), 1, sp0 - 8u);
    t5 = g->edx;
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, COW_IMG(0x10669060u));
    g->edx = t5;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x1023c040u), 2, COW_IMG(0x10669060u), sp0 - 8u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102408a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102408a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
