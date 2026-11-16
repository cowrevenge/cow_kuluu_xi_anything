/* f_0x1014f4d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1014f4d0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr8(self + 0x164u, 1u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), in_eax, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
    t1 = g->edx;
    t2 = rd32(self + 0x160u);
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014f4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014f4d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
