/* f_0x102354d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102354d0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    wr32(sp0 - 0x1cu, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x10235510u), sp0 - 0x10u, g->ecx, g->edx, 1, 2, arg1, sp0 - 0x10u);
    t2 = g->edx;
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x1cu;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x10235730u), sp0 - 0x10u, 1, sp0 - 0x10u);
    t4 = g->ecx;
    wr32(sp0 - 0x24u, 0xfu);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    wr32(sp0 - 0x2cu, arg1);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10312090u), t3, g->ecx, g->edx, 1, 3, arg1, sp0 - 0x10u, 0xfu);
    wr8(arg1 + 0xfu, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102354d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102354d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
