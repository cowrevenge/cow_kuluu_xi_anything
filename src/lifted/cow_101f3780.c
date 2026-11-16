/* f_0x101f3780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f3780(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u) goto L_101f3a4d;
    if (rd8(rd32(COW_IMG(0x10663740u)) + 0x90u) == 0u)
    {
        esi = rd32(COW_IMG(0x10663748u));
    }
    else
    {
        esi = rd32(COW_IMG(0x1066374cu));
    }
    if (rd32(esi + 0x14u) != rd32(COW_IMG(0x10666e30u)))
    {
        eax = rd32(esi + 0x14u);
        ecx = rd32(COW_IMG(0x10666e30u));
        goto L_101f37d8;
    }
    ecx = rd32(COW_IMG(0x10666e30u));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 1u);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t1, rd32(COW_IMG(0x10666e30u)), g->edx, 0, 3, 0u, 1u, 1u);
    t4 = g->edx;
    g->esp = sp0;
    g->edx = t4;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t3, esi, t4);
L_101f37d8: ;
    if (eax != rd32(COW_IMG(0x10666e34u))) goto L_101f3803;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 2u);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t5, rd32(COW_IMG(0x10666e34u)), g->edx, 0, 3, 0u, 1u, 2u);
    t8 = g->edx;
    g->esp = sp0;
    g->edx = t8;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t7, esi, t8);
L_101f3803: ;
    if (eax != rd32(COW_IMG(0x10666e40u))) goto L_101f382e;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 5u);
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t9, rd32(COW_IMG(0x10666e40u)), g->edx, 0, 3, 0u, 1u, 5u);
    t12 = g->edx;
    g->esp = sp0;
    g->edx = t12;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t11, esi, t12);
L_101f382e: ;
    if (eax != rd32(COW_IMG(0x10666e44u))) goto L_101f3859;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t13 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 6u);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t13, rd32(COW_IMG(0x10666e44u)), g->edx, 0, 3, 0u, 1u, 6u);
    t16 = g->edx;
    g->esp = sp0;
    g->edx = t16;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t15, esi, t16);
L_101f3859: ;
    if (eax != rd32(COW_IMG(0x10666e48u))) goto L_101f3884;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t17 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 7u);
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t17, rd32(COW_IMG(0x10666e48u)), g->edx, 0, 3, 0u, 1u, 7u);
    t20 = g->edx;
    g->esp = sp0;
    g->edx = t20;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t19, esi, t20);
L_101f3884: ;
    if (eax != rd32(COW_IMG(0x10666e3cu))) goto L_101f38af;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t21 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 4u);
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t21, rd32(COW_IMG(0x10666e3cu)), g->edx, 0, 3, 0u, 1u, 4u);
    t24 = g->edx;
    g->esp = sp0;
    g->edx = t24;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t23, esi, t24);
L_101f38af: ;
    if (eax != rd32(COW_IMG(0x10666e4cu))) goto L_101f38da;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t25 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 8u);
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t25, rd32(COW_IMG(0x10666e4cu)), g->edx, 0, 3, 0u, 1u, 8u);
    t28 = g->edx;
    g->esp = sp0;
    g->edx = t28;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t27, esi, t28);
L_101f38da: ;
    if (eax != rd32(COW_IMG(0x10666e50u))) goto L_101f3905;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t29 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 0xau);
    t30 = g->edx;
    g->edx = t30;
    t31 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t29, rd32(COW_IMG(0x10666e50u)), g->edx, 0, 3, 0u, 1u, 0xau);
    t32 = g->edx;
    g->esp = sp0;
    g->edx = t32;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t31, esi, t32);
L_101f3905: ;
    if (eax != rd32(COW_IMG(0x10666e54u))) goto L_101f3930;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t33 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 0xbu);
    t34 = g->edx;
    g->edx = t34;
    t35 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t33, rd32(COW_IMG(0x10666e54u)), g->edx, 0, 3, 0u, 1u, 0xbu);
    t36 = g->edx;
    g->esp = sp0;
    g->edx = t36;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t35, esi, t36);
L_101f3930: ;
    if (eax != rd32(COW_IMG(0x10666e58u))) goto L_101f395b;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t37 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 0xcu);
    t38 = g->edx;
    g->edx = t38;
    t39 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t37, rd32(COW_IMG(0x10666e58u)), g->edx, 0, 3, 0u, 1u, 0xcu);
    t40 = g->edx;
    g->esp = sp0;
    g->edx = t40;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t39, esi, t40);
L_101f395b: ;
    if (eax != rd32(COW_IMG(0x10666e5cu))) goto L_101f3986;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t41 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 0xdu);
    t42 = g->edx;
    g->edx = t42;
    t43 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t41, rd32(COW_IMG(0x10666e5cu)), g->edx, 0, 3, 0u, 1u, 0xdu);
    t44 = g->edx;
    g->esp = sp0;
    g->edx = t44;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t43, esi, t44);
L_101f3986: ;
    if (eax != rd32(COW_IMG(0x10666e60u))) goto L_101f39b1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t45 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 0xeu);
    t46 = g->edx;
    g->edx = t46;
    t47 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t45, rd32(COW_IMG(0x10666e60u)), g->edx, 0, 3, 0u, 1u, 0xeu);
    t48 = g->edx;
    g->esp = sp0;
    g->edx = t48;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t47, esi, t48);
L_101f39b1: ;
    if (eax != rd32(COW_IMG(0x10666e64u))) goto L_101f39dc;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t49 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 0xfu);
    t50 = g->edx;
    g->edx = t50;
    t51 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t49, rd32(COW_IMG(0x10666e64u)), g->edx, 0, 3, 0u, 1u, 0xfu);
    t52 = g->edx;
    g->esp = sp0;
    g->edx = t52;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t51, esi, t52);
L_101f39dc: ;
    if (eax != rd32(COW_IMG(0x10666e68u))) goto L_101f3a07;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t53 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 0x10u);
    t54 = g->edx;
    g->edx = t54;
    t55 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t53, rd32(COW_IMG(0x10666e68u)), g->edx, 0, 3, 0u, 1u, 0x10u);
    t56 = g->edx;
    g->esp = sp0;
    g->edx = t56;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t55, esi, t56);
L_101f3a07: ;
    if (eax != rd32(COW_IMG(0x10666e6cu))) goto L_101f3a32;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t57 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, 9u);
    t58 = g->edx;
    g->edx = t58;
    t59 = cow_call_regs(g, COW_IMG(0x1021c7c0u), t57, rd32(COW_IMG(0x10666e6cu)), g->edx, 0, 3, 0u, 1u, 9u);
    t60 = g->edx;
    g->esp = sp0;
    g->edx = t60;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t59, esi, t60);
L_101f3a32: ;
    g->ecx = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t61 = cow_cdecl(g, COW_IMG(0x100eb4f0u), 1, arg1);
    t62 = g->ecx;
    t63 = g->edx;
    g->edx = t63;
    g->esp = sp0 - 8u;
    t64 = cow_cdecl(g, COW_IMG(0x101f0460u), 1, t61);
    t65 = g->edx;
    g->esp = sp0;
    g->edx = t65;
    return cow_tailcall(g, COW_IMG(0x101f3740u), t64, esi, t65);
L_101f3a4d: ;
    return (in_eax & 0xffffff00u) | (uint8_t)arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f3780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f3780(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
