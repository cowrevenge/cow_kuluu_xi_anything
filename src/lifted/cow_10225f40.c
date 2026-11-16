/* f_0x10225f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10225f40(Guest* g)
{
    double d40;
    double d65;
    double d80;
    double d86;
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
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);

    if (rd32(self + 0x6cu) == 0u) goto L_10225f78;
    eax = rd32(self + 0x6cu);
    if (eax == 1u) goto L_10225f63;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10225f8d;
    }
    t1 = rd32(sp0 + 8u);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t1);
    wr32(sp0 + 4u, t2);
    edx = t2;
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if ((uint32_t)(int16_t)rd32(sp0 + 4u) - 5u > 0x14u)
    {
        eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 5u;
        edi = rd32(sp0 + 4u);
        goto L_10225efd;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 5u;
    edi = rd32(sp0 + 4u);
    t3 = rd32(COW_IMG(0x10225f10u) + rd8(COW_IMG(0x10225f24u) + eax) * 4u);
    switch (t3 - RD)
    {
    case 0x10225ee2u: goto L_10225ee2;
    case 0x10225ee9u: goto L_10225ee9;
    case 0x10225ef5u: goto L_10225ef5;
    case 0x10225efdu: goto L_10225efd;
    case 0x10225f0au: goto L_10225f0a;
    default: rt_fatal(g, COW_IMG(0x10225edbu), "switch");
    }
    return 0;
L_10225c70: ;
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if ((uint32_t)(int16_t)rd32(sp0 + 4u) - 1u > 0x18u)
    {
        edi = rd32(sp0 + 4u);
        goto L_10225db9;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 1u;
    edi = rd32(sp0 + 4u);
    t24 = rd32(COW_IMG(0x10225dccu) + rd8(COW_IMG(0x10225de4u) + eax) * 4u);
    switch (t24 - RD)
    {
    case 0x10225c94u: goto L_10225c94;
    case 0x10225d37u: goto L_10225d37;
    case 0x10225d63u: goto L_10225d63;
    case 0x10225d93u: goto L_10225d93;
    case 0x10225db1u: goto L_10225db1;
    case 0x10225db9u: goto L_10225db9;
    default: rt_fatal(g, COW_IMG(0x10225c8du), "switch");
    }
    return 0;
L_10225c94: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t48 = cow_thiscall(g, COW_IMG(0x10225b30u), self, 0);
    t49 = g->edx;
    if ((uint8_t)t48 == 0u)
    {
        edx = t49;
        goto L_10225cab;
    }
    eax = t48;
    edx = t49;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t50 = cow_thiscall(g, COW_IMG(0x10225aa0u), self, 0);
    t51 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t51;
    return t50;
L_10225cab: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t52 = cow_thiscall(g, COW_IMG(0x10225650u), self, 0);
    t53 = g->ecx;
    t54 = g->edx;
    wr32(sp0 - 0xcu, t52);
    g->edx = t54;
    t55 = cow_cdecl(g, COW_IMG(0x102253e0u), 1, t52);
    t56 = g->edx;
    if ((uint8_t)t55 == 0u)
    {
        edx = t56;
        goto L_10225cd7;
    }
    edx = t56;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t57 = cow_thiscall(g, COW_IMG(0x10225650u), self, 0);
    t58 = g->ecx;
    t59 = g->edx;
    wr32(sp0 - 0xcu, t57);
    g->edx = t59;
    t60 = cow_thiscall_cdecl(g, COW_IMG(0x10225b90u), t58, 1, t57);
    t61 = g->ecx;
    t62 = g->edx;
    g->edx = t62;
    t63 = cow_thiscall(g, COW_IMG(0x10037c50u), t61, 0);
    t64 = g->edx;
    d65 = cow_take_float(g);
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t64;
    fpush(g, d65);
    return t63;
L_10225cd7: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t66 = cow_thiscall(g, COW_IMG(0x10225650u), self, 0);
    t67 = g->ecx;
    t68 = g->edx;
    wr32(sp0 - 0xcu, t66);
    g->ecx = t67;
    g->edx = t68;
    t69 = cow_cdecl(g, COW_IMG(0x10225430u), 1, t66);
    t70 = g->ecx;
    t71 = g->edx;
    if ((uint8_t)t69 == 0u)
    {
        eax = t69;
        edx = t71;
        goto L_10225d26;
    }
    ecx = t70;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    wr32(sp0 - 0x1cu, 0xc2u);
    wr32(sp0 - 0x20u, 7u);
    wr8(sp0 + 8u, 0x7bu);
    wr8(sp0 + 9u, 0u);
    wr8(sp0 + 0xau, 0u);
    g->eax = 0u;
    g->edx = sp0 + 8u;
    g->esp = sp0 - 0x18u;
    t72 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0xc2u);
    t73 = g->edx;
    wr32(sp0 - 0x1cu, t72);
    g->edx = t73;
    t74 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 8u;
    t75 = cow_thiscall(g, COW_IMG(0x10127c00u), t74, 5, t72, sp0 + 8u, 0u, 1u, 0u);
    t76 = g->ecx;
    t77 = g->edx;
    g->edx = t77;
    t78 = cow_thiscall(g, COW_IMG(0x10037c50u), t76, 0);
    t79 = g->edx;
    d80 = cow_take_float(g);
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t79;
    fpush(g, d80);
    return t78;
L_10225d26: ;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t81 = cow_call_regs(g, COW_IMG(0x10225c10u), eax, g->ecx, g->edx, 1, 0);
    t82 = g->ecx;
    t83 = g->edx;
    g->edx = t83;
    t84 = cow_thiscall(g, COW_IMG(0x10037b90u), t82, 0);
    t85 = g->edx;
    d86 = cow_take_float(g);
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t85;
    fpush(g, d86);
    return t84;
L_10225d37: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t41 = cow_call_regs(g, COW_IMG(0x10225b80u), eax, g->ecx, g->edx, 1, 0);
    t42 = g->edx;
    if ((uint8_t)t41 == 0u)
    {
        eax = t41;
        edx = t42;
        goto L_10225d57;
    }
    edx = t42;
    wr32(sp0 - 0xcu, 1u);
    t43 = rd32(self + 8u);
    wr32(sp0 - 0x10u, t43);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t44 = cow_call_regs(g, COW_IMG(0x1015e790u), t43, COW_IMG(0x10621838u), g->edx, 0, 2, t43, 1u);
    t45 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t45;
    return t44;
L_10225d57: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t46 = cow_call_regs(g, COW_IMG(0x10225b00u), eax, self, g->edx, 1, 0);
    t47 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t47;
    return t46;
L_10225d63: ;
    wr32(sp0 - 0xcu, 2u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102211b0u), rd32(COW_IMG(0x105781f8u)) + 0x20u, 1, 2u);
    wr32(sp0 - 0xcu, 0u);
    t33 = rd32(rd32(COW_IMG(0x10667144u)) + 8u);
    wr32(sp0 - 0x10u, t33);
    g->eax = t33;
    t34 = rd32(COW_IMG(0x10667144u));
    t35 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t34, 2, t33, 0u);
    t36 = g->ecx;
    t37 = g->edx;
    g->edx = t37;
    t38 = cow_thiscall(g, COW_IMG(0x10037e90u), t36, 0);
    t39 = g->edx;
    d40 = cow_take_float(g);
    g->edx = t39;
    fpush(g, d40);
    return t38;
L_10225d93: ;
    t26 = rd32(sp0 + 8u);
    wr32(sp0 - 0xcu, t26);
    wr32(sp0 - 0x10u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, edi, t26);
    t28 = g->ecx;
    t29 = g->edx;
    t30 = (t29 & 0xffffff00u) | rd8(self + 0x30u);
    wr32(sp0 - 0xcu, t30);
    g->edx = t30;
    t31 = cow_cdecl(g, COW_IMG(0x10225370u), 1, t30);
    t32 = g->edx;
    g->edx = t32;
    return t31;
L_10225db1: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101c86e0u), rd32(self + 0x68u), 0);
    t25 = g->edx;
    edx = t25;
L_10225db9: ;
    t87 = rd32(sp0 + 8u);
    wr32(sp0 - 0xcu, t87);
    wr32(sp0 - 0x10u, edi);
    g->eax = t87;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t88 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, edi, t87);
    t89 = g->edx;
    g->edx = t89;
    return t88;
L_10225e00: ;
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if ((uint32_t)(int16_t)rd32(sp0 + 4u) - 5u > 0x14u)
    {
        edi = rd32(sp0 + 4u);
        goto L_10225e73;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 5u;
    edi = rd32(sp0 + 4u);
    t12 = rd32(COW_IMG(0x10225e88u) + rd8(COW_IMG(0x10225e9cu) + eax) * 4u);
    switch (t12 - RD)
    {
    case 0x10225e22u: goto L_10225e22;
    case 0x10225e34u: goto L_10225e34;
    case 0x10225e6bu: goto L_10225e6b;
    case 0x10225e73u: goto L_10225e73;
    case 0x10225e80u: goto L_10225e80;
    default: rt_fatal(g, COW_IMG(0x10225e1bu), "switch");
    }
    return 0;
L_10225e22: ;
    t18 = rd32(self + 0x30u);
    wr32(self + 0x6cu, 2u);
    wr32(self + 0x70u, t18);
    g->edx = t18;
    return eax;
L_10225e34: ;
    wr32(self + 0x6cu, 0u);
    wr32(sp0 - 0xcu, 2u);
    g->eax = rd32(COW_IMG(0x105781f8u));
    t14 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x102211b0u), t14 + 0x20u, 1, 2u);
    t16 = rd32(COW_IMG(0x10667144u));
    wr32(sp0 + 8u, 0u);
    t17 = rd32(t16 + 8u);
    wr32(sp0 + 4u, t17);
    g->esp = sp0;
    g->edx = t17;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t15, COW_IMG(0x10621838u), t17);
L_10225e6b: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101c86e0u), rd32(self + 0x68u), 0);
    t13 = g->edx;
    edx = t13;
L_10225e73: ;
    t19 = rd32(sp0 + 8u);
    wr32(sp0 - 0xcu, t19);
    wr32(sp0 - 0x10u, edi);
    g->eax = t19;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t20 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, edi, t19);
    t21 = g->edx;
    eax = t20;
    edx = t21;
L_10225e80: ;
    g->edx = edx;
    return eax;
L_10225ee2: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x102258d0u), self, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_10225ee9: ;
    wr32(self + 0x6cu, 1u);
    g->edx = edx;
    return eax;
L_10225ef5: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x101c86e0u), rd32(self + 0x68u), 0);
    eax = t4;
L_10225efd: ;
    t7 = rd32(sp0 + 8u);
    wr32(sp0 - 0xcu, t7);
    wr32(sp0 - 0x10u, edi);
    g->eax = eax;
    g->edx = t7;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, edi, t7);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_10225f0a: ;
    g->edx = edx;
    return eax;
L_10225f63: ;
    t10 = rd32(sp0 + 8u);
    t11 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t10);
    wr32(sp0 + 4u, t11);
    edx = t11;
    goto L_10225e00;
L_10225f78: ;
    t22 = rd32(sp0 + 8u);
    t23 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t22);
    wr32(sp0 + 4u, t23);
    edx = t23;
    goto L_10225c70;
L_10225f8d: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10225f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10225f40(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
