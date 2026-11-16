/* f_0x101cf870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101cf870(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x101cf820u), 4, self + 0x8bcu, self + 0x69cu, COW_IMG(0x1037e6c4u), COW_IMG(0x1037e6b0u));
    g->eax = self + 0x8dcu;
    t1 = cow_stdcall(g, COW_IMG(0x101cf820u), 4, self + 0x8dcu, self + 0x6acu, COW_IMG(0x1037e708u), COW_IMG(0x1037e6f0u));
    g->edx = self + 0xadcu;
    cow_stdcall(g, COW_IMG(0x101cf820u), 4, self + 0xadcu, self + 0x7acu, COW_IMG(0x1037e6e4u), COW_IMG(0x1037e6d0u));
    t2 = g->edx;
    g->eax = self + 0x7bcu;
    g->edx = t2;
    t3 = cow_stdcall(g, COW_IMG(0x101cf820u), 4, self + 0xafcu, self + 0x7bcu, COW_IMG(0x1037e7c0u), COW_IMG(0x1037e7acu));
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101d0a40u), rd32(self + 8u), 1, 0xc4u);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x101d0a20u), rd32(self + 8u), 1, 0x1fu);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x101d09c0u), rd32(self + 8u), 1, 0u);
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x101d09e0u), rd32(self + 8u), 2, COW_IMG(0x1037e6b1u), 0x10u);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x101d09e0u), rd32(self + 8u), 2, COW_IMG(0x1037e6c4u), 0xcu);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x101d0a40u), rd32(self + 8u), 1, 0xc4u);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x101d0a20u), rd32(self + 8u), 1, 0xb5u);
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x101d09c0u), rd32(self + 8u), 1, 0x10u);
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x101d09e0u), rd32(self + 8u), 2, COW_IMG(0x1037e6f1u), 0x10u);
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x101d09e0u), rd32(self + 8u), 2, COW_IMG(0x1037e708u), 0xa2u);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x101d0a40u), rd32(self + 8u), 1, 0xc4u);
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x101d0a20u), rd32(self + 8u), 1, 0x1fu);
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x101d09c0u), rd32(self + 8u), 1, 1u);
    t30 = g->edx;
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x101d09e0u), rd32(self + 8u), 2, COW_IMG(0x1037e6d1u), 0x10u);
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x101d09e0u), rd32(self + 8u), 2, COW_IMG(0x1037e6e4u), 0xcu);
    t34 = g->edx;
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x101d0a40u), rd32(self + 8u), 1, 0xc4u);
    t36 = g->edx;
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x101d0a20u), rd32(self + 8u), 1, 0xb5u);
    t38 = g->edx;
    g->edx = t38;
    t39 = cow_thiscall(g, COW_IMG(0x101d09c0u), rd32(self + 8u), 1, 0x11u);
    t40 = g->edx;
    g->edx = t40;
    t41 = cow_thiscall(g, COW_IMG(0x101d09e0u), rd32(self + 8u), 2, COW_IMG(0x1037e7adu), 0x10u);
    t42 = g->edx;
    cow_thiscall(g, COW_IMG(0x101d09e0u), rd32(self + 8u), 2, COW_IMG(0x1037e7c0u), 0xa2u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cf870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cf870(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
