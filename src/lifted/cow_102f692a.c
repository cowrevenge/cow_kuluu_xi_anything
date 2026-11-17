/* f_0x102f692a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102f692a(Guest* g)
{
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = arg1;
    t1 = cow_thiscall_cdecl(g, rd32(rd32(arg1 + 4u)), rd32(arg1 + 4u), 3, arg1, 0u, 0x82u);
    wr8(t1 + 0x80u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f692a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f692a(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
