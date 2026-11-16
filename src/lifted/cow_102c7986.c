/* f_0x102c7986 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c7986(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg1 + 0x28u);
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, t1, arg2, arg3, in_edi, in_esi);
    t2 = arg3 + rd32(arg1 + 0x28u);
    wr32(arg1 + 0x34u, t2);
    wr32(arg1 + 0x30u, t2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c7986(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c7986(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
