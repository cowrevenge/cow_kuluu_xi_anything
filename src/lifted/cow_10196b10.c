/* f_0x10196b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10196b10(Guest* g)
{
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->edi = 0u;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10118900u), ecx, 4, sp0 - 8u, arg1, 0u, 1u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, arg3);
        wr32(sp0 - 0x24u, 0x3f800000u);
        wr32(sp0 - 0x28u, arg2);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + 0x1cu), 8, 0u, 0u, arg2, 0x3f800000u, arg3, 0u, 0u, 0u);
    }
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10196b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10196b10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
