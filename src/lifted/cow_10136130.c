/* f_0x10136130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10136130(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 8u) == 0u)
    {
        eax = self;
        edx = in_edx;
        goto L_101361ef;
    }
    ecx = rd32(self + 8u);
    if (rd32(self + 0x14u) > 0x10u)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
        goto L_101361ef;
    }
    eax = rd32(self + 0x14u);
    t1 = rd32(COW_IMG(0x101361f0u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10136150u: goto L_10136150;
    case 0x1013615au: goto L_1013615a;
    case 0x10136164u: goto L_10136164;
    case 0x1013616eu: goto L_1013616e;
    case 0x10136178u: goto L_10136178;
    case 0x10136182u: goto L_10136182;
    case 0x1013618cu: goto L_1013618c;
    case 0x10136196u: goto L_10136196;
    case 0x101361a0u: goto L_101361a0;
    case 0x101361aau: goto L_101361aa;
    case 0x101361b4u: goto L_101361b4;
    case 0x101361beu: goto L_101361be;
    case 0x101361c8u: goto L_101361c8;
    case 0x101361d2u: goto L_101361d2;
    case 0x101361dcu: goto L_101361dc;
    case 0x101361e6u: goto L_101361e6;
    case 0x101361efu: edx = in_edx; goto L_101361ef;
    default: rt_fatal(g, COW_IMG(0x10136149u), "switch");
    }
    return 0;
L_10136150: ;
    g->edx = in_edx;
    g->esp = sp0;
    t32 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 1u, 0u);
    t33 = g->edx;
    g->edx = t33;
    return t32;
L_1013615a: ;
    g->edx = in_edx;
    g->esp = sp0;
    t30 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 2u, 0u);
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_10136164: ;
    g->edx = in_edx;
    g->esp = sp0;
    t28 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 9u, 0u);
    t29 = g->edx;
    g->edx = t29;
    return t28;
L_1013616e: ;
    g->edx = in_edx;
    g->esp = sp0;
    t26 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 3u, 0u);
    t27 = g->edx;
    g->edx = t27;
    return t26;
L_10136178: ;
    g->edx = in_edx;
    g->esp = sp0;
    t24 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 4u, 0u);
    t25 = g->edx;
    g->edx = t25;
    return t24;
L_10136182: ;
    g->edx = in_edx;
    g->esp = sp0;
    t22 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 5u, 0u);
    t23 = g->edx;
    g->edx = t23;
    return t22;
L_1013618c: ;
    g->edx = in_edx;
    g->esp = sp0;
    t20 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 6u, 0u);
    t21 = g->edx;
    g->edx = t21;
    return t20;
L_10136196: ;
    g->edx = in_edx;
    g->esp = sp0;
    t18 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 7u, 0u);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_101361a0: ;
    g->edx = in_edx;
    g->esp = sp0;
    t16 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 8u, 0u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_101361aa: ;
    g->edx = in_edx;
    g->esp = sp0;
    t14 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 0xau, 0u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_101361b4: ;
    g->edx = in_edx;
    g->esp = sp0;
    t12 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 0xbu, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101361be: ;
    g->edx = in_edx;
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 0xcu, 0u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_101361c8: ;
    g->edx = in_edx;
    g->esp = sp0;
    t8 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 0xdu, 0u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_101361d2: ;
    g->edx = in_edx;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 0xeu, 0u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_101361dc: ;
    g->edx = in_edx;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 0xfu, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_101361e6: ;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 0x10u, 0u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_101361ef: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10136130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
