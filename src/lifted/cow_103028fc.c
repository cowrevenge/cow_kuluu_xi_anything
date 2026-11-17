/* f_0x103028fc - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_103028fc(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(rd32(arg1) + 0x14u, 0x30u);
    cow_thiscall_cdecl(g, rd32(rd32(arg1)), rd32(arg1), 1, arg1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103028fc(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103028fc(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
