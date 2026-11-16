/* f_0x1011a730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1011a730(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10118f70u), in_eax, self, g->edx, 0, 1, arg1);
    t1 = g->edx;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x1011a770u), self, 0);
    t3 = g->edx;
    t4 = cow_thiscall(g, COW_IMG(0x1011a790u), self, 0);
    wr16(arg1, (uint16_t)(rd16(arg1) + (uint16_t)t2));
    wr16(arg1 + 4u, (uint16_t)((uint16_t)t2 + rd16(arg1 + 4u)));
    wr16(arg1 + 2u, (uint16_t)((uint16_t)t4 + rd16(arg1 + 2u)));
    wr16(arg1 + 6u, (uint16_t)((uint16_t)t4 + rd16(arg1 + 6u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011a730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1011a730(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
