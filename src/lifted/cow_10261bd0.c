/* f_0x10261bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10261bd0(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327a3bu));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x10u, self);
    wr32(self + 4u, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 0xcu, arg1);
    wr32(self + 0x14u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10269aa0u), self + 0x18u, 1, 0u);
    t2 = g->edx;
    t3 = rd32(self + 0xcu);
    wr32(self, COW_IMG(0x10340760u));
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x1cu, t3 + 0xcu);
    cow_thiscall(g, rd32(rd32(t3 + 0xcu) + 4u), rd32(t3 + 0xcu), 1, t3 + 0xcu);
    if (arg2 != 0u)
    {
        t10 = rd32(arg2 + 4u);
        wr32(self + 4u, t10);
        t11 = rd32(arg2 + 8u);
        wr32(self + 8u, t11);
        t12 = rd32(arg2 + 0x10u);
        wr32(self + 0x10u, t12);
        wr32(sp0 - 0x1cu, arg2 + 0x18u);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x10269d90u), self + 0x18u, 1, arg2 + 0x18u);
    }
    else
    {
        g->eax = arg2;
        g->edx = rd32(rd32(self + 0xcu));
        t4 = rd32(rd32(self + 0xcu));
        g->esp = sp0 - 0x18u;
        t5 = cow_thiscall(g, rd32(t4 + 0x14u), rd32(self + 0xcu), 0);
        t6 = g->edx;
        t7 = rd32(self + 0xcu);
        wr32(self + 0x10u, t5);
        g->eax = rd32(t7);
        t8 = rd32(t7);
        t9 = cow_thiscall(g, rd32(t8 + 0x18u), t7, 0);
        wr32(self + 8u, t9);
    }
    t13 = rd32(sp0 - 0xcu);
    t14 = rd32(sp0 - 0x14u);
    t15 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t13);
    g->esi = t14;
    g->edi = t15;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10261bd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10261bd0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
