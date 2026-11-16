/* f_0x102612f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102612f0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327918u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 4u, 0u);
    t2 = rd32(self + 0x3cu);
    wr32(sp0 - 0x18u, t2);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, t2);
    t3 = g->edx;
    if (rd32(self + 0x18u) == 0u)
    {
        eax = rd32(self + 0x18u);
        edx = t3;
    }
    else
    {
        eax = rd32(self + 0x18u);
        edx = t3;
        wr32(sp0 - 0x18u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t4 = cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t5 = g->edx;
        wr32(self + 0x18u, 0u);
        eax = t4;
        edx = t5;
    }
    wr32(sp0 - 4u, 0xffffffffu);
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x10265980u), self + 4u, edx, 0);
    t6 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t6);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102612f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102612f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
