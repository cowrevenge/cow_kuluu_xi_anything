/* f_0x100767c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100767c0(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 24u);

    wr8(sp0 + 4u, rd8(sp0 + 4u));
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 0x14u, arg2);
    t1 = rd32(COW_IMG(0x10578158u));
    wr8(sp0 + 5u, 0u);
    wr8(sp0 + 6u, 0u);
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10127c00u), t1, 5, arg2, sp0 + 4u, 0u, 1u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100767c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100767c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
