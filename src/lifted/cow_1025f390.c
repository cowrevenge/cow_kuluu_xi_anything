/* f_0x1025f390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1025f390(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327718u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, self + 0x94u);
    wr32(sp0 - 0x10u, self + 0x94u);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 0x94u);
    t2 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(self + 0xc0u) == 0u)
    {
        eax = 0u;
        ecx = rd32(self + 0xc0u);
        edx = t2;
    }
    else
    {
        edx = t2;
        wr32(self + 0xc0u, 0u);
        g->eax = rd32(self);
        g->edx = edx;
        t3 = rd32(self);
        g->esp = sp0 - 0x18u;
        t4 = cow_thiscall(g, rd32(t3 + 0x60u), self, 0);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    wr32(sp0 - 0x1cu, self + 0x94u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 0x94u);
    t7 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t7);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025f390(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
