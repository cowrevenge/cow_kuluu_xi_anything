/* f_0x10323938 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10323938(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, sp0 + 8u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x103246d8u), self, 7, sp0 - 0x10u, sp0 + 8u, arg2, 0u, 0u, 0u, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1032384du), 5, sp0 - 0x10u, arg1, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10323938(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10323938(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
