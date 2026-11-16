/* f_0x102ea8a2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102ea8a2(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x10328567u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102ea8acu));
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 8u, 7u);
    g->eax = COW_IMG(0x102ea8acu);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x102f52f0u), self + 0x84u, 0);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x102f5225u), self + 0x74u, 0);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x102f5225u), self + 0x64u, 0);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x102f5225u), self + 0x54u, 0);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x102f5225u), self + 0x44u, 0);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x102f5225u), self + 0x34u, 0);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x102f5225u), self + 0x24u, 0);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x102f5225u), self + 0x14u, 0);
    t17 = g->edx;
    wr32(sp0 - 8u, 0xffffffffu);
    cow_thiscall(g, COW_IMG(0x102f52f0u), self, 0);
    t18 = rd32(sp0 - 0x10u);
    wr32(g->fs_base, t18);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ea8a2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ea8a2(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
