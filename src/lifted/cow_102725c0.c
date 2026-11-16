/* f_0x102725c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102725c0(Guest* g)
{
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x10u, in_esi);
    if (arg1 != 0xffffffffu)
    {
        esi = arg1;
    }
    else
    {
        esi = rd32(COW_IMG(0x1099b0f8u));
    }
    wr32(sp0 - 0x14u, sp0 - 0xcu);
    wr32(sp0 - 0x18u, arg2);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1028dbd0u), 2, arg2, sp0 - 0xcu);
    t1 = COW_IMG(0x1099bf20u) + esi * 0x7cu;
    wr32(sp0 - 0x1cu, t1);
    t2 = rd32(sp0 - 0xcu);
    t3 = rd32(sp0 - 4u);
    wr32(t1 + 0x5cu, t2);
    wr32(t1 + 0x60u, 0u);
    wr32(t1 + 0x64u, t3);
    g->eax = t2;
    g->ecx = t3;
    g->edx = (esi << 5u) - esi;
    g->esp = sp0 - 0x18u;
    t4 = cow_cdecl(g, COW_IMG(0x1026e210u), 1, t1);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x20u, 0x3e800000u);
    wr32(sp0 - 0x24u, 0x3e800000u);
    wr32(sp0 - 0x28u, 0x3e800000u);
    wr32(sp0 - 0x2cu, t1 + 0x1cu);
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102806d0u), 4, t1 + 0x1cu, 0x3e800000u, 0x3e800000u, 0x3e800000u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102725c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102725c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
