/* f_0x1025c160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1025c160(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 20u);

    COW_AT(1025c160)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, arg2);
    wr32(sp0 - 0xcu, 3u);
    wr32(sp0 - 0x10u, sp0 + 8u);
    g->eax = arg2;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1025bfd0u), g->eax, g->ecx, in_edx, 1, 3, sp0 + 8u, 3u, arg2);
    wr32(sp0 - 8u, sp0 + 8u);
    wr8(sp0 + t1 + 8u, 0u);
    cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, sp0 + 8u);
    g->esi = in_esi;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025c160(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025c160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
