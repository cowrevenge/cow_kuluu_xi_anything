/* f_0x10199ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10199ea0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 120u);

    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, 0x14u);
    t1 = rd32(self + 0x40u);
    wr16(sp0 - 0x48u, 0u);
    wr16(sp0 - 0x46u, 0u);
    wr16(sp0 - 0x44u, 0u);
    wr16(sp0 - 0x42u, 0u);
    t2 = rd32(self + 0x2cu);
    wr32(sp0 - 0x54u, t2);
    wr32(sp0 - 0x58u, t1);
    t3 = (in_edx & 0xffffff00u) | rd8(self + 0x23u) == 1u;
    wr32(sp0 - 0x5cu, t3);
    wr32(sp0 - 0x60u, 4u);
    g->edx = t3;
    g->esp = sp0 - 0x4cu;
    cow_call_regs(g, COW_IMG(0x10196b80u), t2, self, g->edx, 0, 5, 4u, t3, t1, t2, 0x14u);
    t4 = g->edx;
    wr32(sp0 - 0x50u, 1u);
    wr32(sp0 - 0x54u, 1u);
    wr32(sp0 - 0x58u, 4u);
    wr32(sp0 - 0x5cu, sp0 - 0x48u);
    g->eax = sp0 - 0x48u;
    t5 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x48u, 4u, 1u, 1u);
    t6 = rd32(self + 0x40u);
    wr32(sp0 - 0x50u, t6);
    wr32(sp0 - 0x54u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x58u, sp0 - 0x40u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x10352ff0u), t6, in_esi, rd32(sp0 - 0x48u));
    wr32(sp0 - 0x5cu, 0x3f800000u);
    wr32(sp0 - 0x60u, 0x3f800000u);
    wr32(sp0 - 0x64u, 1u);
    wr32(sp0 - 0x68u, 0x80808080u);
    wr32(sp0 - 0x6cu, sp0 - 0x40u);
    t7 = rd32(sp0 - 0x46u) - 0xeu;
    wr32(sp0 - 0x70u, t7);
    t8 = rd32(sp0 - 0x44u) - 0x10u;
    wr32(sp0 - 0x74u, t8);
    g->esp = sp0 - 0x58u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t7, 7, t8, t7, sp0 - 0x40u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10199ea0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10199ea0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
