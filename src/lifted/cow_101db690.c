/* f_0x101db690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101db690(Guest* g)
{
    double d66;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 3u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_101db95e;
    }
    t1 = rd32(COW_IMG(0x101db964u) + (uint32_t)(int16_t)arg1 * 4u - 0xcu);
    switch (t1 - RD)
    {
    case 0x101db6acu: goto L_101db6ac;
    case 0x101db77fu: goto L_101db77f;
    case 0x101db814u: goto L_101db814;
    case 0x101db8b9u: goto L_101db8b9;
    case 0x101db953u: goto L_101db953;
    case 0x101db95eu: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; goto L_101db95e;
    default: rt_fatal(g, COW_IMG(0x101db6a5u), "switch");
    }
    return 0;
L_101db6ac: ;
    g->eax = rd32(self);
    g->edx = in_edx;
    t58 = rd32(self);
    g->esp = sp0 - 8u;
    t59 = cow_thiscall(g, rd32(t58 + 0x64u), self, 0);
    t60 = g->edx;
    if (t59 != 1u)
    {
        eax = t59;
        ecx = rd32(rd32(COW_IMG(0x10663740u)) + 0x60u);
        edx = rd32(COW_IMG(0x10663740u));
    }
    else
    {
        eax = t59;
        edx = t60;
        ecx = rd32(rd32(COW_IMG(0x10663468u)) + 0x5cu);
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t61 = cow_call_regs(g, COW_IMG(0x1021cc60u), eax, ecx, g->edx, 1, 0);
    t62 = g->ecx;
    t63 = g->edx;
    if ((int8_t)t61 >= 0)
    {
        eax = t61;
        edx = t63;
        goto L_101db6df;
    }
    eax = t61;
    ecx = t62;
    edx = t63;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t64 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t65 = g->edx;
    d66 = cow_take_float(g);
    g->edx = t65;
    fpush(g, d66);
    return t64;
L_101db6df: ;
    wr8(self + 4u, 1u);
    wr8(self + 5u, rd8(arg4 + 2u));
    if (rd32(arg4 + 4u) <= 1u)
    {
        eax = rd32(arg4 + 4u);
    }
    else
    {
        eax = rd32(arg4 + 4u);
        g->esp = sp0 - 0xcu;
        t67 = cow_call_regs(g, COW_IMG(0x1013e3b0u), eax, rd32(COW_IMG(0x10578204u)), edx, 0, 4, 1u, 0u, 0u, 0u);
        eax = t67;
    }
    t68 = rd32(COW_IMG(0x10663468u));
    wr32(t68 + 0x64u, arg4);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t69 = cow_thiscall(g, rd32(rd32(self) + 0x64u), self, 0);
    if (t69 != 1u)
    {
        eax = t69;
        edi = t68 + 0x64u;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t73 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u)) + 0x54u), rd32(rd32(COW_IMG(0x10663468u)) + 0x58u), 0);
        wr32(edi + 4u, t73);
        t74 = rd32(rd32(COW_IMG(0x10663740u)) + 0x64u);
        t75 = rd32(COW_IMG(0x10663740u));
        wr32(edi + 8u, t74);
        eax = t75;
    }
    else
    {
        edi = t68 + 0x64u;
        t70 = rd32(rd32(COW_IMG(0x10663740u)) + 0x64u);
        wr32(edi + 4u, t70);
        g->eax = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
        t71 = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
        g->esp = sp0 - 0xcu;
        t72 = cow_thiscall(g, rd32(t71 + 0x54u), rd32(rd32(COW_IMG(0x10663468u)) + 0x58u), 0);
        wr32(edi + 8u, t72);
        eax = t72;
    }
    t76 = rd32(arg4 + 4u);
    g->eax = eax;
    g->edx = t76;
    t77 = rd32(COW_IMG(0x10578200u));
    g->esp = sp0 - 0xcu;
    t78 = cow_thiscall(g, COW_IMG(0x1013a870u), t77, 5, 1u, t76, COW_IMG(0x101db980u), edi, 0u);
    t79 = g->ecx;
    t80 = g->edx;
    g->edx = t80;
    t81 = cow_thiscall(g, COW_IMG(0x10037b90u), t79, 0);
    t82 = g->edx;
    g->edx = t82;
    return t81;
L_101db77f: ;
    g->esp = sp0 - 8u;
    t33 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 3u, self, g->edx, 1, 4, 0x3eu, 0xb6u, 4u, 0xffffffffu);
    if ((uint8_t)t33 == 0u)
    {
        eax = t33;
        goto L_101db7c0;
    }
    g->eax = rd32(COW_IMG(0x10663468u));
    g->edx = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
    t34 = rd32(COW_IMG(0x10663468u));
    t35 = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
    g->esp = sp0 - 8u;
    t36 = cow_thiscall(g, rd32(t35 + 0x54u), rd32(t34 + 0x58u), 0);
    t37 = g->edx;
    if (t36 == 0x11u)
    {
        eax = t36;
        edx = t37;
        goto L_101db95e;
    }
    edx = t37;
    g->eax = rd32(self);
    g->edx = edx;
    t38 = rd32(self);
    g->esp = sp0 - 8u;
    t39 = cow_thiscall(g, rd32(t38 + 0x54u), self, 0);
    t40 = g->edx;
    t41 = cow_fastcall(g, COW_IMG(0x101dbba0u), self, t40, 1, t39);
    t42 = g->edx;
    eax = t41;
    edx = t42;
L_101db850: ;
    if (eax == 0x12u) goto L_101db95e;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t43 = cow_fastcall(g, COW_IMG(0x101dba30u), self, edx, 1, eax);
    t44 = g->edx;
    g->edx = t44;
    return t43;
L_101db7c0: ;
    g->eax = eax;
    g->edx = rd32(self);
    t45 = rd32(self);
    g->esp = sp0 - 8u;
    t46 = cow_thiscall(g, rd32(t45 + 0x64u), self, 0);
    t47 = g->ecx;
    t48 = g->edx;
    if (t46 != 1u)
    {
        eax = t46;
        edx = t48;
        goto L_101db95e;
    }
    eax = t46;
    ecx = t47;
    edx = t48;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t49 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0xa8u, 4u, 0xffffffffu);
    t50 = g->edx;
    if ((uint8_t)t49 != 0u)
    {
        eax = t49;
        edx = t50;
        goto L_101db95e;
    }
    edx = t50;
    if (rd32(rd32(COW_IMG(0x10663468u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10663468u)) + 8u);
        goto L_101db95e;
    }
    ecx = rd32(COW_IMG(0x10663468u));
    g->esp = sp0 - 8u;
    t51 = cow_call_regs(g, COW_IMG(0x101f7080u), (uint32_t)(int16_t)arg2, ecx, g->edx, 0, 2, 0xffffffffu, (uint32_t)(int16_t)arg2);
    eax = t51;
    ecx = rd32(COW_IMG(0x10663468u));
L_101db939: ;
    t52 = rd32(ecx + 8u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t53 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t52, 2, t52, 0u);
    t54 = g->ecx;
    t55 = g->edx;
    g->edx = t55;
    t56 = cow_thiscall(g, COW_IMG(0x10037e90u), t54, 0);
    t57 = g->edx;
    g->edx = t57;
    return t56;
L_101db814: ;
    g->esp = sp0 - 8u;
    t16 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 3u, self, g->edx, 1, 4, 0x3eu, 0xb5u, 4u, 0xffffffffu);
    if ((uint8_t)t16 == 0u)
    {
        eax = t16;
        goto L_101db866;
    }
    g->eax = rd32(COW_IMG(0x10663468u));
    g->edx = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
    t17 = rd32(COW_IMG(0x10663468u));
    t18 = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
    g->esp = sp0 - 8u;
    t19 = cow_thiscall(g, rd32(t18 + 0x54u), rd32(t17 + 0x58u), 0);
    t20 = g->edx;
    if (t19 == 0x11u)
    {
        eax = t19;
        edx = t20;
        goto L_101db95e;
    }
    edx = t20;
    g->eax = rd32(self);
    g->edx = edx;
    t21 = rd32(self);
    g->esp = sp0 - 8u;
    t22 = cow_thiscall(g, rd32(t21 + 0x54u), self, 0);
    t23 = g->edx;
    t24 = cow_fastcall(g, COW_IMG(0x101dbb20u), self, t23, 1, t22);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    goto L_101db850;
L_101db866: ;
    g->eax = eax;
    g->edx = rd32(self);
    t26 = rd32(self);
    g->esp = sp0 - 8u;
    t27 = cow_thiscall(g, rd32(t26 + 0x64u), self, 0);
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 != 0u)
    {
        eax = t27;
        edx = t29;
        goto L_101db95e;
    }
    eax = t27;
    ecx = t28;
    edx = t29;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t30 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0xa8u, 4u, 0xffffffffu);
    t31 = g->edx;
    if ((uint8_t)t30 != 0u)
    {
        eax = t30;
        edx = t31;
        goto L_101db95e;
    }
    edx = t31;
    if (rd32(rd32(COW_IMG(0x10663740u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
        goto L_101db95e;
    }
    ecx = rd32(COW_IMG(0x10663740u));
    g->esp = sp0 - 8u;
    t32 = cow_call_regs(g, COW_IMG(0x101f7080u), (uint32_t)(int16_t)arg2, ecx, g->edx, 0, 2, 0xffffffffu, (uint32_t)(int16_t)arg2);
    eax = t32;
    ecx = rd32(COW_IMG(0x10663740u));
    goto L_101db939;
L_101db8b9: ;
    g->eax = rd32(self);
    t4 = rd32(self);
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, rd32(t4 + 0x64u), self, 0);
    if (t5 != 0u)
    {
        eax = rd32(COW_IMG(0x10663748u));
        t7 = rd32(rd32(COW_IMG(0x10663740u)) + 0x60u);
        wr32(eax + 0x14u, t7);
        ecx = rd32(rd32(COW_IMG(0x10663740u)) + 0x5cu);
    }
    else
    {
        eax = rd32(COW_IMG(0x10663748u));
        t6 = rd32(rd32(COW_IMG(0x10663468u)) + 0x5cu);
        wr32(eax + 0x14u, t6);
        ecx = rd32(rd32(COW_IMG(0x10663468u)) + 0x58u);
    }
    g->eax = rd32(ecx);
    g->edx = rd32(COW_IMG(0x10663474u));
    t8 = rd32(ecx);
    t9 = rd32(COW_IMG(0x10663474u));
    t10 = rd32(rd32(COW_IMG(0x10663474u)));
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, rd32(t8 + 0x54u), ecx, 0);
    t12 = g->edx;
    t13 = cow_thiscall(g, rd32(t10 + 0x58u), rd32(COW_IMG(0x10663474u)), 1, t11);
    wr32(rd32(COW_IMG(0x10663474u)) + 8u, self);
    t14 = cow_thiscall(g, rd32(rd32(self) + 0x64u), self, 0);
    wr32(rd32(COW_IMG(0x10663474u)) + 0x10u, t14);
    t15 = rd32(COW_IMG(0x10663474u));
    wr32(rd32(COW_IMG(0x10663748u)) + 0x18u, t15);
    eax = t15;
    ecx = rd32(COW_IMG(0x10663748u));
    goto L_101db939;
L_101db953: ;
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x101dca30u), rd32(COW_IMG(0x10663468u)), 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_101db95e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101db690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101db690(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
