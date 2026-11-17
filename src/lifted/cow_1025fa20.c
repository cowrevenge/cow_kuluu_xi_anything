/* f_0x1025fa20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025fa20(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327800u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    t2 = rd32(rd32(sp0 + 4u) + 0xccu) + 0x7cu;
    wr32(sp0 - 0x24u, t2);
    t3 = rd32(COW_IMG(0x1032918cu));
    t4 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t5 = cow_thiscall(g, t3, self, 1, t2);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 4u, 0u);
    t8 = rd32(t4 + 0xccu) + 0x94u;
    wr32(sp0 - 0x24u, t8);
    wr32(sp0 - 0x10u, t8);
    g->edx = t7;
    t9 = cow_thiscall(g, t3, t6, 1, t8);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x24u, t4);
    wr8(sp0 - 4u, 1u);
    cow_fastcall(g, COW_IMG(0x10263810u), t10, t11, 1, t4);
    t12 = g->edx;
    g->eax = rd32(rd32(t4 + 0xccu));
    g->edx = t12;
    t13 = rd32(rd32(t4 + 0xccu));
    t14 = rd32(t4 + 0xccu);
    t15 = cow_thiscall(g, rd32(t13 + 0x84u), t14, 0);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x24u, t8);
    t18 = rd32(COW_IMG(0x10329188u));
    wr8(sp0 - 4u, 0u);
    t19 = cow_thiscall(g, t18, t16, 1, t8);
    g->edx = rd32(rd32(t4 + 0xccu));
    t20 = rd32(t4 + 0xccu);
    t21 = rd32(rd32(t4 + 0xccu));
    t22 = cow_thiscall(g, rd32(t21 + 0x64u), t20, 0);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x24u, t2);
    g->edx = t24;
    cow_thiscall(g, t18, t23, 1, t2);
    t25 = g->edx;
    t26 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t26);
    g->edx = t25;
    return t22;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025fa20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025fa20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
