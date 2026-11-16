/* f_0x1026ccc5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1026ccc5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_ebp);
    wr32(arg1 + 0x10u, 0xffffffffu);
    wr32(sp0 - 8u, 0x10u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, arg1);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10316dd0u), 3, arg1, 0u, 0x10u);
    wr32(arg1 + 0x20u, arg2);
    wr32(arg1 + 0x402cu, 0u);
    wr32(arg1 + 0x4030u, 0u);
    wr32(arg1 + 0x8034u, 0u);
    wr32(arg1 + 0x8038u, 0u);
    wr32(arg1 + 0xc03cu, 0u);
    wr32(arg1 + 0xc040u, 0u);
    wr32(arg1 + 0x10044u, 0u);
    wr32(arg1 + 0x10048u, 0u);
    wr32(arg1 + 0x24u, 0u);
    wr32(arg1 + 0x28u, 0u);
    wr32(arg1 + 0x1004cu, 0u);
    wr32(arg1 + 0x10050u, 0u);
    wr32(arg1 + 0x10054u, 0u);
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026ccc5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026ccc5(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
