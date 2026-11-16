/* f_0x10312c57 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10312c57(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, 0x49u);
    wr32(sp0 - 0x28u, arg1);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x24u, arg1);
    g->ecx = self;
    g->esp = sp0 - 0x24u;
    t1 = cow_call_regs(g, COW_IMG(0x10311ecfu), g->eax, g->ecx, in_edx, 1, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x20u, t1 << 1u);
    wr32(sp0 - 0x2cu, sp0 + 0xcu);
    wr32(sp0 - 0x30u, arg2);
    wr32(sp0 - 0x34u, sp0 - 0x24u);
    g->esp = sp0 - 0x28u;
    cow_thiscall_cdecl(g, COW_IMG(0x1031a1c2u), t2, 3, sp0 - 0x24u, arg2, sp0 + 0xcu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312c57(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10312c57(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
