/* f_0x1003efc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1003efc0(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    t1 = rd32(COW_IMG(0x1047b9d4u));
    wr32(arg1 + 0x30u, rd32(arg2));
    t2 = rd32(arg2 + 4u);
    wr32(arg1 + 0x34u, t2);
    wr32(sp0 - 0x1cu, in_edi);
    t3 = rd32(arg2 + 8u);
    wr32(arg1 + 0x38u, t3);
    t4 = rd16(arg3 + 0x170u) * 0x30u + rd32(arg3 + 0x22du);
    wr32(sp0 - 0x20u, t4);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0xcu, arg1, t4);
    t5 = rd32(sp0 - 0xcu);
    wr32(t1 + 0x24u, t5);
    t6 = rd32(sp0 - 8u);
    wr32(t1 + 0x28u, t6);
    t7 = rd32(sp0 - 4u);
    wr32(t1 + 0x2cu, t7);
    t8 = rd32(sp0 - 0xcu);
    wr32(t1, t8);
    t9 = rd32(sp0 - 8u);
    wr32(t1 + 4u, t9);
    t10 = rd32(sp0 - 4u);
    wr32(t1 + 8u, t10);
    t11 = rd16(arg3 + 0x170u) * 0x30u + rd32(arg3 + 0x22du) + 0xcu;
    wr32(sp0 - 0x20u, t11);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0xcu, arg1, t11);
    t12 = rd32(sp0 - 0xcu);
    wr32(t1 + 0x48u, t12);
    t13 = rd32(sp0 - 8u);
    wr32(t1 + 0x4cu, t13);
    t14 = rd32(sp0 - 4u);
    wr32(t1 + 0x50u, t14);
    t15 = rd16(arg3 + 0x170u) * 0x30u + rd32(arg3 + 0x22du) + 0x18u;
    wr32(sp0 - 0x20u, t15);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0xcu, arg1, t15);
    t16 = rd32(sp0 - 0xcu);
    wr32(t1 + 0x6cu, t16);
    t17 = rd32(sp0 - 8u);
    wr32(t1 + 0x70u, t17);
    t18 = rd32(sp0 - 4u);
    wr32(t1 + 0x74u, t18);
    t19 = rd16(arg3 + 0x170u) * 0x30u + rd32(arg3 + 0x22du) + 0x24u;
    wr32(sp0 - 0x20u, t19);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0xcu, arg1, t19);
    t20 = rd32(sp0 - 0xcu);
    wr32(t1 + 0xb4u, t20);
    t21 = rd32(sp0 - 8u);
    wr32(t1 + 0xb8u, t21);
    t22 = rd32(sp0 - 4u);
    wr32(t1 + 0xbcu, t22);
    t23 = rd32(sp0 - 0xcu);
    wr32(t1 + 0x90u, t23);
    t24 = rd32(sp0 - 8u);
    wr32(t1 + 0x94u, t24);
    t25 = rd32(sp0 - 4u);
    wr32(t1 + 0x98u, t25);
    wr32(COW_IMG(0x1047b9d4u), t1 + 0xd8u);
    g->edx = t24;
    return t25;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003efc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003efc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
