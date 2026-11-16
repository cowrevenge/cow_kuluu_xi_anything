/* f_0x1025f660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1025f660(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327778u));
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
    t3 = rd32(self + 0x64u);
    wr32(self + 0x74u, 0u);
    if (t3 != 1u)
    {
        eax = 0u;
        ecx = t3;
        edx = t2;
    }
    else
    {
        edx = t2;
        wr32(self + 0x64u, 0u);
        g->eax = rd32(self);
        g->edx = edx;
        t4 = rd32(self);
        g->esp = sp0 - 0x18u;
        t5 = cow_thiscall(g, rd32(t4 + 0x44u), self, 0);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x1cu, 1u);
        g->edx = t7;
        t8 = cow_thiscall(g, rd32(COW_IMG(0x103293fcu)), t6, 1, 1u);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    wr32(sp0 - 0x1cu, self + 0x94u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 0x94u);
    t11 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t11);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025f660(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
