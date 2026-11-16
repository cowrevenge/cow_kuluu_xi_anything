/* f_0x1025c920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1025c920(Guest* g)
{
    int64_t q45;
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t46;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x18u) != 0u)
    {
        t1 = (rd8(self + 0xcu) != 0u) + 1u;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
        t3 = g->edx;
        g->edx = t3;
        t4 = rd32(t2);
        cow_thiscall(g, rd32(t4 + 0xfcu), t4, 4, t2, 0u, 0x11u, t1);
        t5 = g->ecx;
        t6 = g->edx;
        g->ecx = t5;
        t7 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
        t8 = g->ecx;
        g->edx = rd32(t7);
        t9 = rd32(t7);
        cow_thiscall(g, rd32(t9 + 0xfcu), t8, 4, t7, 1u, 0x11u, t1);
        t10 = g->ecx;
        t11 = g->edx;
        g->edx = t11;
        t12 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
        t13 = g->edx;
        g->edx = t13;
        t14 = rd32(t12);
        cow_thiscall(g, rd32(t14 + 0xfcu), t14, 4, t12, 0u, 0x10u, t1);
        t15 = g->ecx;
        t16 = g->edx;
        g->ecx = t15;
        t17 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
        t18 = g->ecx;
        g->edx = rd32(t17);
        t19 = rd32(t17);
        cow_thiscall(g, rd32(t19 + 0xfcu), t18, 4, t17, 1u, 0x10u, t1);
        t20 = g->ecx;
        t21 = g->edx;
        t22 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
        t23 = rd32(self + 8u);
        g->edx = t23;
        t24 = rd32(t22);
        cow_thiscall(g, rd32(t24 + 0xf4u), t24, 3, t22, 0u, t23);
        t25 = g->ecx;
        t26 = g->edx;
        g->edx = t26;
        t27 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
        t28 = g->edx;
        g->edx = t28;
        t29 = rd32(t27);
        cow_thiscall(g, rd32(t29 + 0xf4u), t29, 3, t27, 1u, 0u);
        t30 = g->ecx;
        t31 = g->edx;
        t32 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
        t33 = rd32(self + 0x10u);
        g->edx = rd32(t32);
        t34 = rd32(t32);
        cow_thiscall(g, rd32(t34 + 0x130u), t33, 2, t32, t33);
        t35 = g->ecx;
        t36 = g->edx;
        t37 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
        t38 = rd32(self + 0x14u);
        t39 = rd32(self + 4u);
        g->edx = rd32(t37);
        t40 = rd32(t37);
        cow_thiscall(g, rd32(t40 + 0x14cu), t39, 4, t37, 0u, t39, t38);
        t41 = g->ecx;
        t42 = g->edx;
        g->edx = t42;
        t43 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
        t44 = g->edx;
        q45 = (uint64_t)cow_mulu(0xaaaaaaabu, rd32(self + 0x18u));
        t46 = cow_qhi(q45) >> 1u;
        cow_thiscall(g, rd32(rd32(t43) + 0x118u), t43, 4, t43, 4u, 0u, t46);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025c920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025c920(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
