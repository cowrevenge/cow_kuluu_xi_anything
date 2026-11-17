/* f_0x1000abe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1000abe0(Guest* g)
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
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10009920u), in_eax, self, g->edx, 1, 0);
    t1 = g->edx;
    t2 = rd32(self + 0xcu);
    t3 = rd32(t2);
    cow_thiscall(g, rd32(t3 + 0xc8u), t3, 3, t2, 0xeu, 0u);
    t4 = g->ecx;
    t5 = rd32(self + 0xcu);
    g->edx = rd32(t5);
    t6 = rd32(t5);
    cow_thiscall(g, rd32(t6 + 0xc8u), t4, 3, t5, 9u, 1u);
    t7 = g->edx;
    t8 = rd32(self + 0xcu);
    t9 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t9 + 0xfcu), t9, 4, t8, 0u, 0xbu, 0u);
    t10 = g->ecx;
    t11 = rd32(self + 0xcu);
    g->edx = rd32(rd32(self + 0xcu));
    t12 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t12 + 0xfcu), t10, 4, t11, 0u, 0xdu, 3u);
    t13 = g->edx;
    t14 = rd32(self + 0xcu);
    t15 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t15 + 0xfcu), t15, 4, t14, 0u, 0xeu, 3u);
    t16 = g->ecx;
    t17 = rd32(self + 0xcu);
    g->edx = rd32(rd32(self + 0xcu));
    t18 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t18 + 0xfcu), t16, 4, t17, 0u, 0x10u, 2u);
    t19 = g->edx;
    t20 = rd32(self + 0xcu);
    t21 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t21 + 0xfcu), t21, 4, t20, 0u, 0x11u, 2u);
    t22 = g->ecx;
    t23 = rd32(self + 0xcu);
    g->edx = rd32(rd32(self + 0xcu));
    t24 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t24 + 0xfcu), t22, 4, t23, 0u, 1u, 2u);
    t25 = g->edx;
    t26 = rd32(self + 0xcu);
    t27 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t27 + 0xfcu), t27, 4, t26, 0u, 2u, 2u);
    t28 = g->ecx;
    t29 = rd32(self + 0xcu);
    g->edx = rd32(rd32(self + 0xcu));
    t30 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t30 + 0xfcu), t28, 4, t29, 0u, 4u, 2u);
    t31 = g->edx;
    t32 = rd32(self + 0xcu);
    t33 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t33 + 0xfcu), t33, 4, t32, 0u, 5u, 2u);
    t34 = g->ecx;
    t35 = rd32(self + 0xcu);
    g->edx = rd32(rd32(self + 0xcu));
    t36 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t36 + 0xfcu), t34, 4, t35, 1u, 4u, 1u);
    t37 = g->edx;
    t38 = rd32(self + 0xcu);
    t39 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t39 + 0xfcu), t39, 4, t38, 1u, 1u, 1u);
    t40 = g->ecx;
    t41 = rd32(self + 0xcu);
    g->edx = rd32(t41);
    t42 = rd32(t41);
    cow_thiscall(g, rd32(t42 + 0xc8u), t40, 3, t41, 7u, 0u);
    t43 = g->edx;
    t44 = rd32(self + 0xcu);
    t45 = rd32(t44);
    cow_thiscall(g, rd32(t45 + 0xc8u), t45, 3, t44, 0x1bu, 0u);
    t46 = g->ecx;
    t47 = rd32(self + 0xcu);
    g->edx = rd32(t47);
    t48 = rd32(t47);
    cow_thiscall(g, rd32(t48 + 0xc8u), t46, 3, t47, 0x19u, 5u);
    t49 = g->edx;
    t50 = rd32(self + 0xcu);
    cow_thiscall(g, rd32(rd32(t50) + 0xc8u), rd32(t50), 3, t50, 0x18u, 0u);
    g->edx = arg2;
    cow_thiscall(g, COW_IMG(0x1000a3b0u), self, 2, arg1, arg2);
    t51 = g->edx;
    t52 = rd32(self + 0xcu);
    t53 = rd32(t52);
    cow_thiscall(g, rd32(t53 + 0xc8u), t53, 3, t52, 0xeu, 1u);
    t54 = g->ecx;
    t55 = rd32(self + 0xcu);
    g->edx = rd32(t55);
    t56 = rd32(t55);
    cow_thiscall(g, rd32(t56 + 0xc8u), t54, 3, t55, 9u, 2u);
    t57 = g->edx;
    t58 = rd32(self + 0xcu);
    g->eax = t58;
    t59 = rd32(t58);
    t60 = cow_thiscall(g, rd32(t59 + 0xc8u), t59, 3, t58, 7u, 1u);
    t61 = g->ecx;
    t62 = rd32(self + 0xcu);
    cow_thiscall(g, rd32(rd32(t62) + 0xc8u), t61, 3, t62, 0x1bu, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000abe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1000abe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
