/* f_0x1020ce40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1020ce40(Guest* g)
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
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100e6b10u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint16_t)t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        edx = t3;
        g->eax = eax;
        g->edx = edx;
        t4 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, COW_IMG(0x10118b60u), t4, 2, 5u, 8u);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, 1u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    else
    {
        eax = t8;
        edx = t10;
        g->eax = eax;
        g->edx = edx;
        t11 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        t12 = cow_thiscall(g, COW_IMG(0x10118b60u), t11, 2, 5u, 9u);
        t13 = g->ecx;
        t14 = g->edx;
        eax = t12;
        ecx = t13;
        edx = t14;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, 2u);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
    }
    else
    {
        eax = t15;
        edx = t17;
        g->eax = eax;
        g->edx = edx;
        t18 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        t19 = cow_thiscall(g, COW_IMG(0x10118b60u), t18, 2, 5u, 0xdu);
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t22 = cow_stdcall(g, COW_IMG(0x100fc9a0u), 0);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 != 0u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
    }
    else
    {
        eax = t22;
        edx = t24;
        g->eax = eax;
        g->edx = edx;
        t25 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        t26 = cow_thiscall(g, COW_IMG(0x10118b60u), t25, 2, 5u, 0xau);
        t27 = g->ecx;
        t28 = g->edx;
        eax = t26;
        ecx = t27;
        edx = t28;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t29 = cow_call_regs(g, COW_IMG(0x1020ce10u), eax, g->ecx, g->edx, 1, 0);
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 == 0u)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
    }
    else
    {
        eax = t29;
        edx = t31;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t32 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xau);
        t33 = g->edx;
        g->edx = t33;
        t34 = rd32(self + 8u);
        t35 = cow_thiscall(g, COW_IMG(0x10118b60u), t34, 2, 5u, 0xeu);
        t36 = g->ecx;
        t37 = g->edx;
        eax = t35;
        ecx = t36;
        edx = t37;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t38 = cow_call_regs(g, COW_IMG(0x1020cdf0u), eax, g->ecx, g->edx, 1, 0);
    t39 = g->ecx;
    t40 = g->edx;
    if ((uint8_t)t38 == 0u)
    {
        eax = t38;
        ecx = t39;
        edx = t40;
    }
    else
    {
        eax = t38;
        edx = t40;
        g->eax = eax;
        g->edx = edx;
        t41 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        t42 = cow_thiscall(g, COW_IMG(0x10118b60u), t41, 2, 5u, 0xcu);
        t43 = g->ecx;
        t44 = g->edx;
        eax = t42;
        ecx = t43;
        edx = t44;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t45 = cow_stdcall(g, COW_IMG(0x1020cdd0u), 0);
    t46 = g->ecx;
    t47 = g->edx;
    if ((uint8_t)t45 != 0u)
    {
        eax = t45;
        edx = t47;
        goto L_1020cef6;
    }
    eax = t45;
    ecx = t46;
    edx = t47;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t48 = cow_call_regs(g, COW_IMG(0x1020cdc0u), eax, g->ecx, g->edx, 1, 0);
    t49 = g->ecx;
    t50 = g->edx;
    if ((uint8_t)t48 == 0u)
    {
        eax = t48;
        ecx = t49;
        edx = t50;
        goto L_1020cf02;
    }
    eax = t48;
    edx = t50;
L_1020cef6: ;
    g->eax = eax;
    g->edx = edx;
    t51 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t52 = cow_thiscall(g, COW_IMG(0x10118b60u), t51, 2, 5u, 0xeu);
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
L_1020cf02: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t55 = cow_stdcall(g, COW_IMG(0x1020ce20u), 0);
    t56 = g->ecx;
    t57 = g->edx;
    if ((uint8_t)t55 != 0u)
    {
        eax = t55;
        edx = t57;
        goto L_1020cf14;
    }
    eax = t55;
    ecx = t56;
    edx = t57;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t58 = cow_call_regs(g, COW_IMG(0x1020cdc0u), eax, g->ecx, g->edx, 1, 0);
    t59 = g->ecx;
    t60 = g->edx;
    if ((uint8_t)t58 == 0u)
    {
        eax = t58;
        ecx = t59;
        edx = t60;
        goto L_1020cf2c;
    }
    eax = t58;
    edx = t60;
L_1020cf14: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t61 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xcu);
    t62 = g->edx;
    g->edx = t62;
    t63 = rd32(self + 8u);
    t64 = cow_thiscall(g, COW_IMG(0x10118b60u), t63, 2, 5u, 0xau);
    t65 = g->ecx;
    t66 = g->edx;
    eax = t64;
    ecx = t65;
    edx = t66;
L_1020cf2c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t67 = cow_stdcall(g, COW_IMG(0x1020ce30u), 0);
    t68 = g->edx;
    if ((uint8_t)t67 == 0u)
    {
        eax = t67;
        edx = t68;
    }
    else
    {
        eax = t67;
        edx = t68;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t69 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xcu);
        t70 = g->edx;
        g->edx = t70;
        t71 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xeu);
        t72 = g->edx;
        g->edx = t72;
        t73 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xau);
        t74 = g->edx;
        eax = t73;
        edx = t74;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020ce40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020ce40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
