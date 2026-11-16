/* f_0x102330b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102330b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(self + 0x68u) > 6u)
    {
        eax = rd32(self + 0x68u);
        goto L_102330fe;
    }
    eax = rd32(self + 0x68u);
    t1 = rd32(COW_IMG(0x10233104u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x102330bfu: goto L_102330bf;
    case 0x102330d4u: goto L_102330d4;
    case 0x102330e9u: goto L_102330e9;
    default: rt_fatal(g, COW_IMG(0x102330b8u), "switch");
    }
    return 0;
L_10232e40: ;
    if (rd32(self + 0x64u) != 0u) goto L_10233018;
    if ((uint32_t)(int16_t)rd32(sp0 + 4u) - 3u > 6u)
    {
        eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 3u;
        ebx = rd32(sp0 + 8u);
        edi = rd32(sp0 + 4u);
        goto L_10233009;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 3u;
    ebx = rd32(sp0 + 8u);
    edi = rd32(sp0 + 4u);
    t8 = rd32(COW_IMG(0x10233044u) + eax * 4u);
    switch (t8 - RD)
    {
    case 0x10232e6eu: goto L_10232e6e;
    case 0x10232ec3u: goto L_10232ec3;
    case 0x10232eefu: goto L_10232eef;
    case 0x10232f6eu: goto L_10232f6e;
    case 0x10232fe8u: goto L_10232fe8;
    case 0x10233009u: goto L_10233009;
    default: rt_fatal(g, COW_IMG(0x10232e67u), "switch");
    }
    return 0;
L_10232e6e: ;
    if ((uint32_t)(int16_t)rd32(sp0 + 8u) == 9u)
    {
        eax = (uint32_t)(int16_t)rd32(sp0 + 8u) - 9u;
        ecx = rd32(sp0 + 8u);
        goto L_10232eb3;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 8u) - 9u;
    ecx = rd32(sp0 + 8u);
    if (eax == 1u) goto L_10232ea3;
    if (rd32(self + 0x40u) == 0u)
    {
        eax = rd32(self + 0x40u);
        goto L_1023303c;
    }
    eax = rd32(self + 0x40u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t58 = cow_thiscall(g, COW_IMG(0x10221c50u), self, 0);
    t59 = g->edx;
    g->edx = t59;
    t60 = cow_thiscall(g, COW_IMG(0x10221c90u), self, 0);
    t61 = g->edx;
    wr32(self + 0x64u, 1u);
    g->ebx = in_ebx;
    g->edx = t61;
    return t60;
L_10232ea3: ;
    g->eax = rd32(self);
    g->edx = edx;
    t62 = rd32(self);
    g->esp = sp0 - 0xcu;
    t63 = cow_thiscall(g, rd32(t62 + 0x18u), self, 2, 3u, ecx);
    t64 = g->edx;
    g->ebx = in_ebx;
    g->edx = t64;
    return t63;
L_10232eb3: ;
    g->eax = eax;
    g->edx = rd32(self);
    t65 = rd32(self);
    g->esp = sp0 - 0xcu;
    t66 = cow_thiscall(g, rd32(t65 + 0x18u), self, 2, 4u, ecx);
    t67 = g->edx;
    g->ebx = in_ebx;
    g->edx = t67;
    return t66;
L_10232ec3: ;
    t51 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t52 = cow_call_regs(g, COW_IMG(0x1015e790u), t51, COW_IMG(0x10621838u), g->edx, 0, 2, t51, 0u);
    t53 = g->edx;
    t54 = cow_fastcall(g, COW_IMG(0x10221c70u), rd32(COW_IMG(0x10668eccu)), t53, 0);
    t55 = g->edx;
    g->edx = t55;
    t56 = cow_thiscall(g, COW_IMG(0x10221c60u), rd32(COW_IMG(0x10668eccu)), 0);
    t57 = g->edx;
    g->ebx = in_ebx;
    g->edx = t57;
    return t56;
L_10232eef: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0;
    t33 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, self, g->edx, 1, 7, 0x3eu, 0xa8u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    t34 = g->edx;
    if ((uint8_t)t33 == 0u)
    {
        edx = t34;
        goto L_10232f1a;
    }
    eax = t33;
    edx = t34;
    t35 = rd32(sp0 + 8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t36 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, 0x19u, t35);
    t37 = g->edx;
    g->ebx = in_ebx;
    g->edx = t37;
    return t36;
L_10232f1a: ;
    t38 = rd32(self + 0x6cu) + 1u;
    wr32(self + 0x6cu, t38);
    if ((int32_t)t38 < 11)
    {
        ecx = t38;
    }
    else
    {
        ecx = t38;
        wr32(self + 0x6cu, 0u);
    }
    if ((int32_t)rd32(self + 0x6cu) < 5)
    {
        eax = rd32(self + 0x6cu);
        goto L_10232f58;
    }
    eax = rd32(self + 0x6cu);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t39 = cow_cdecl(g, COW_IMG(0x10233060u), 1, eax);
    t40 = g->edx;
    if ((uint8_t)t39 != 0u)
    {
        eax = t39;
        edx = t40;
        goto L_10232f58;
    }
    t41 = rd32(sp0 + 8u);
    g->eax = t41;
    g->edx = rd32(self);
    t42 = rd32(self);
    g->esp = sp0 - 0xcu;
    t43 = cow_thiscall(g, rd32(t42 + 0x18u), self, 2, 3u, t41);
    t44 = g->edx;
    g->ebx = in_ebx;
    g->edx = t44;
    return t43;
L_10232f58: ;
    t45 = rd32(self + 0x6cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t46 = cow_thiscall(g, COW_IMG(0x102307f0u), self, 1, t45);
    t47 = g->ecx;
    t48 = g->edx;
    g->edx = t48;
    t49 = cow_thiscall(g, COW_IMG(0x10037b30u), t47, 0);
    t50 = g->edx;
    g->ebx = in_ebx;
    g->edx = t50;
    return t49;
L_10232f6e: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, self, g->edx, 1, 7, 0x3eu, 0xa8u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        ecx = t14;
        edx = t15;
        goto L_10232f99;
    }
    eax = t13;
    t16 = rd32(sp0 + 8u);
    g->eax = eax;
    g->edx = t16;
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, 0x18u, t16);
    t18 = g->edx;
    g->ebx = in_ebx;
    g->edx = t18;
    return t17;
L_10232f99: ;
    t19 = rd32(self + 0x6cu) - 1u;
    t20 = rd32(self + 0x6cu);
    wr32(self + 0x6cu, t19);
    if ((int32_t)(t20 - 1u) < 0)
    {
        wr32(self + 0x6cu, 0xau);
    }
    if ((int32_t)rd32(self + 0x6cu) < 5)
    {
        eax = rd32(self + 0x6cu);
        goto L_10232fd2;
    }
    eax = rd32(self + 0x6cu);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t21 = cow_cdecl(g, COW_IMG(0x10233060u), 1, eax);
    t22 = g->edx;
    if ((uint8_t)t21 != 0u)
    {
        eax = t21;
        goto L_10232fd2;
    }
    edx = t22;
    t23 = rd32(sp0 + 8u);
    g->eax = rd32(self);
    g->edx = edx;
    t24 = rd32(self);
    g->esp = sp0 - 0xcu;
    t25 = cow_thiscall(g, rd32(t24 + 0x18u), self, 2, 4u, t23);
    t26 = g->edx;
    g->ebx = in_ebx;
    g->edx = t26;
    return t25;
L_10232fd2: ;
    t27 = rd32(self + 0x6cu);
    g->eax = eax;
    g->edx = t27;
    g->esp = sp0 - 0xcu;
    t28 = cow_thiscall(g, COW_IMG(0x102307f0u), self, 1, t27);
    t29 = g->ecx;
    t30 = g->edx;
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x10037b30u), t29, 0);
    t32 = g->edx;
    g->ebx = in_ebx;
    g->edx = t32;
    return t31;
L_10232fe8: ;
    if ((int16_t)ebx < 9)
    {
        eax = (uint32_t)(int16_t)ebx;
        goto L_10233002;
    }
    eax = (uint32_t)(int16_t)ebx;
    if ((int32_t)eax > 10) goto L_10233002;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, COW_IMG(0x10221cd0u), self, 0);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_10233002: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x10221ce0u), self, 0);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_10233009: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t68 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, edi, ebx);
    t69 = g->edx;
    g->ebx = in_ebx;
    g->edx = t69;
    return t68;
L_10233018: ;
    if ((int16_t)rd16(sp0 + 4u) < 5)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u);
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u);
        if ((int32_t)eax <= 6)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t70 = cow_thiscall(g, COW_IMG(0x10221c60u), self, 0);
            t71 = g->edx;
            g->edx = t71;
            t72 = cow_thiscall(g, COW_IMG(0x10221cb0u), self, 0);
            t73 = g->edx;
            wr32(self + 0x64u, 0u);
            eax = t72;
            edx = t73;
        }
    }
L_1023303c: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_102330bf: ;
    t6 = rd32(sp0 + 8u);
    t7 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t6);
    wr32(sp0 + 4u, t7);
    edx = t7;
    goto L_10232e40;
L_102330d4: ;
    t4 = rd32(sp0 + 8u);
    t5 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t4);
    wr32(sp0 + 4u, t5);
    g->esp = sp0;
    g->edx = t5;
    return cow_tailcall(g, COW_IMG(0x10232b80u), t4, self, t5);
L_102330e9: ;
    t2 = rd32(sp0 + 8u);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t2);
    wr32(sp0 + 4u, t3);
    g->esp = sp0;
    g->edx = t3;
    return cow_tailcall(g, COW_IMG(0x10231ac0u), t2, self, t3);
L_102330fe: ;
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102330b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102330b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
