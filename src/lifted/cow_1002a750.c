/* f_0x1002a750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1002a750(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10026e10u), 1, arg2);
    t1 = g->edx;
    cow_thiscall(g, COW_IMG(0x1002a780u), self, 2, arg1, arg2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002a750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1002a750(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
