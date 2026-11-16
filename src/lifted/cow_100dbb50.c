/* f_0x100dbb50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100dbb50(Guest* g)
{
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 464u);

    wr32(sp0 - 0x178u, in_esi);
    if (arg1 == 0u) goto L_100dbbe1;
    g->esp = sp0 - 0x178u;
    t1 = cow_thiscall(g, COW_IMG(0x100db140u), self, 0);
    t2 = g->ecx;
    if (t1 == 0x64u) goto L_100dbbff;
    ecx = t2;
    t3 = rd32(arg1 + 0x48u);
    wr32(sp0 - 0x17cu, t3);
    t4 = rd32(arg1 + 0x44u);
    wr32(sp0 - 0x180u, t4);
    t5 = rd32(arg1 + 0x40u);
    wr32(sp0 - 0x184u, t5);
    t6 = rd32(arg1 + 0x3cu);
    wr32(sp0 - 0x188u, t6);
    t7 = rd32(arg1 + 0x38u);
    wr32(sp0 - 0x18cu, t7);
    t8 = rd32(arg1 + 0x34u);
    wr32(sp0 - 0x190u, t8);
    t9 = rd32(arg1 + 0x30u);
    wr32(sp0 - 0x194u, t9);
    t10 = rd32(arg1 + 0x2cu);
    wr32(sp0 - 0x198u, t10);
    t11 = rd32(arg1 + 0x28u);
    wr32(sp0 - 0x19cu, t11);
    t12 = rd32(arg1 + 0x24u);
    wr32(sp0 - 0x1a0u, t12);
    t13 = rd32(arg1 + 0x20u);
    wr32(sp0 - 0x1a4u, t13);
    t14 = rd32(arg1 + 0x1cu);
    wr32(sp0 - 0x1a8u, t14);
    t15 = rd32(arg1 + 0x4cu);
    wr32(sp0 - 0x1acu, t15);
    t16 = rd32(arg1 + 0x18u);
    wr32(sp0 - 0x1b0u, t16);
    t17 = rd32(arg1 + 0x14u);
    wr32(sp0 - 0x1b4u, t17);
    t18 = rd32(arg1 + 0x10u);
    wr32(sp0 - 0x1b8u, t18);
    g->edx = t18;
    g->esp = sp0 - 0x1b4u;
    t19 = cow_thiscall(g, COW_IMG(0x100db7b0u), ecx, 1, t18);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x1b8u, t19);
    wr32(sp0 - 0x1bcu, arg1);
    wr32(sp0 - 0x1c0u, COW_IMG(0x10360280u));
    wr32(sp0 - 0x1c4u, sp0 - 0x174u);
    g->edx = t21;
    g->esp = sp0 - 0x1b0u;
    t22 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x174u, COW_IMG(0x10360280u), arg1, t19, rd32(sp0 - 0x1b4u));
    t23 = g->edx;
    wr32(sp0 - 0x1c8u, 1u);
    wr32(sp0 - 0x1ccu, sp0 - 0x174u);
    g->esp = sp0 - 0x1c4u;
    cow_cdecl(g, COW_IMG(0x10017630u), 2, sp0 - 0x174u, 1u);
    g->esi = rd32(sp0 - 0x178u);
    return 0u;
L_100dbbe1: ;
    wr32(sp0 - 0x17cu, COW_IMG(0x1036024cu));
    wr32(sp0 - 0x180u, sp0 - 0x174u);
    g->ecx = self;
    g->edx = sp0 - 0x174u;
    g->esp = sp0 - 0x16cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x174u, COW_IMG(0x1036024cu), in_esi, rd32(sp0 - 0x174u), rd32(sp0 - 0x170u));
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x184u, 0u);
    wr32(sp0 - 0x188u, sp0 - 0x174u);
    g->esp = sp0 - 0x180u;
    cow_cdecl(g, COW_IMG(0x10017630u), 2, sp0 - 0x174u, 0u);
L_100dbbff: ;
    g->esi = rd32(sp0 - 0x178u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dbb50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dbb50(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
