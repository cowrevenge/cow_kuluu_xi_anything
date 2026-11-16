/* f_0x10263390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10263390(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327bd8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 4u, 0u);
    if (rd32(self + 0x9cu) == 0u)
    {
        eax = rd32(self + 0x9cu);
        edx = in_edx;
        loc_c = t1;
    }
    else
    {
        eax = rd32(self + 0x9cu);
        loc_c = t1;
        wr32(sp0 - 0x18u, eax);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t2 = cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t3 = g->edx;
        wr32(self + 0x9cu, 0u);
        eax = t2;
        edx = t3;
    }
    wr32(sp0 - 4u, 0xffffffffu);
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x10262560u), self, edx, 0);
    t4 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t4);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10263390(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
