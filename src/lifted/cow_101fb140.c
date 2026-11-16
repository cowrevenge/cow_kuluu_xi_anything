/* f_0x101fb140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101fb140(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->eax = arg3;
    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x101fb180u), self, arg1, 3, arg1, arg2, arg3);
    t2 = g->edx;
    cow_thiscall(g, COW_IMG(0x101f9a50u), self, 7, 0xffffff9cu, 0u, 7u, 0u, 0u, 0u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fb140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fb140(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
