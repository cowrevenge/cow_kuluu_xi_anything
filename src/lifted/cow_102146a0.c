/* f_0x102146a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102146a0(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd16(self + 0x16au) + rd16(self + 0x16cu) + rd16(rd32(self + rd32(self + 0x150u) * 4u + 0xcu) + 0x1au) + (uint32_t)(int16_t)rd16(rd32(self + rd32(self + 0x150u) * 4u + 0xcu) + 0x16u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10214760u), self, 3, arg1, arg2, t1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102146a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102146a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
