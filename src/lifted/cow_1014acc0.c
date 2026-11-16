/* f_0x1014acc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=2 */
uint32_t cow_fn_1014acc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 1u > 0x18u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_1014af2b;
    }
    t1 = rd32(COW_IMG(0x1014af34u) + rd8(COW_IMG(0x1014af4cu) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x1014ace3u: ecx = rd8(COW_IMG(0x1014af4cu) + (uint32_t)(int16_t)arg1 - 1u); goto L_1014ace3;
    case 0x1014ae3au: goto L_1014ae3a;
    case 0x1014ae52u: goto L_1014ae52;
    case 0x1014aeadu: goto L_1014aead;
    case 0x1014af08u: goto L_1014af08;
    case 0x1014af2bu: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_1014af2b;
    default: rt_fatal(g, COW_IMG(0x1014acdcu), "switch");
    }
    return 0;
L_1014ace3: ;
    if ((uint32_t)(int16_t)arg2 == 0xbu) goto L_1014addd;
    if ((uint32_t)(int16_t)arg2 == 0xcu) goto L_1014ad80;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        goto L_1014ad0a;
    }
    eax = rd32(self + 8u);
    if (rd8(eax + 0x62u) == 0u)
    {
        edx = in_edx;
        goto L_1014af2b;
    }
L_1014ad0a: ;
    if (rd8(self + 0x5eu) == 0u) goto L_1014ad63;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t37 = cow_thiscall(g, COW_IMG(0x1014b530u), self, 0);
    t38 = g->ecx;
    t39 = g->edx;
    if (rd32(self + 0x58u) != 0u)
    {
        eax = rd32(self + 0x58u);
        ecx = t38;
        edx = t39;
        goto L_1014ad73;
    }
    edx = t39;
    edi = t37;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t40 = cow_stdcall(g, COW_IMG(0x1014b440u), 1, edi);
    t41 = g->ecx;
    t42 = g->edx;
    if ((uint8_t)t40 != 0u)
    {
        eax = t40;
        ecx = t41;
        edx = t42;
        goto L_1014ad73;
    }
    edx = t42;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t43 = cow_stdcall(g, COW_IMG(0x1014b490u), 1, edi);
    t44 = g->ecx;
    t45 = g->edx;
    if ((uint8_t)t43 == 0u)
    {
        eax = t43;
        ecx = t44;
        edx = t45;
        goto L_1014ad73;
    }
    ecx = t44;
    edx = t45;
    if (rd32(COW_IMG(0x10578438u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10578438u));
        goto L_1014af2b;
    }
    eax = rd32(COW_IMG(0x10578438u));
    if ((int32_t)edi <= 0) goto L_1014af2b;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t46 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t47 = g->edx;
    g->edx = t47;
    t48 = cow_call_regs(g, COW_IMG(0x1014b580u), t46, g->ecx, g->edx, 0, 1, edi);
    t49 = g->edx;
    g->edx = t49;
    return (t48 & 0xffffff00u) | 1u;
L_1014ad63: ;
    g->edx = in_edx;
    t50 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0xcu;
    t51 = cow_thiscall(g, COW_IMG(0x10129e30u), t50, 1, 0xb2u);
    t52 = g->ecx;
    t53 = g->edx;
    eax = t51;
    ecx = t52;
    edx = t53;
L_1014ad73: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t54 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t55 = g->edx;
    g->edx = t55;
    return t54 & 0xffffff00u;
L_1014ad80: ;
    if (rd32(self + 0x58u) != 0u) goto L_1014adb3;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t56 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t57 = g->edx;
    t58 = (t57 & 0xffffff00u) | rd8(self + 0x54u);
    wr16(self + 0x60u, (uint16_t)t56);
    wr32(self + 0x58u, 1u);
    g->edx = t58;
    t59 = cow_thiscall(g, COW_IMG(0x1014afa0u), self, 2, t58, 1u);
    t60 = g->ecx;
    t61 = g->edx;
    g->edx = t61;
    t62 = cow_thiscall(g, COW_IMG(0x10037b30u), t60, 0);
    t63 = g->edx;
    g->edx = t63;
    return t62 & 0xffffff00u;
L_1014adb3: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t64 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t65 = g->edx;
    wr16(self + 0x62u, (uint16_t)t64);
    t66 = (t64 & 0xffffff00u) | rd8(self + 0x54u);
    wr32(self + 0x58u, 0u);
    g->eax = t66;
    g->edx = t65;
    t67 = cow_thiscall(g, COW_IMG(0x1014afa0u), self, 2, t66, 0u);
    t68 = g->ecx;
    t69 = g->edx;
    g->edx = t69;
    t70 = cow_thiscall(g, COW_IMG(0x10037b30u), t68, 0);
    t71 = g->edx;
    g->edx = t71;
    return t70 & 0xffffff00u;
L_1014addd: ;
    if (rd32(self + 0x58u) != 0u) goto L_1014ae10;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t72 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t73 = g->ecx;
    t74 = g->edx;
    t75 = (t73 & 0xffffff00u) | rd8(self + 0x54u);
    wr16(self + 0x60u, (uint16_t)t72);
    wr32(self + 0x58u, 1u);
    g->edx = t74;
    t76 = cow_thiscall(g, COW_IMG(0x1014afa0u), self, 2, t75, 1u);
    t77 = g->ecx;
    t78 = g->edx;
    g->edx = t78;
    t79 = cow_thiscall(g, COW_IMG(0x10037b30u), t77, 0);
    t80 = g->edx;
    g->edx = t80;
    return t79 & 0xffffff00u;
L_1014ae10: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t81 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t82 = g->edx;
    t83 = (t82 & 0xffffff00u) | rd8(self + 0x54u);
    wr16(self + 0x62u, (uint16_t)t81);
    wr32(self + 0x58u, 0u);
    g->edx = t83;
    t84 = cow_thiscall(g, COW_IMG(0x1014afa0u), self, 2, t83, 0u);
    t85 = g->ecx;
    t86 = g->edx;
    g->edx = t86;
    t87 = cow_thiscall(g, COW_IMG(0x10037b30u), t85, 0);
    t88 = g->edx;
    g->edx = t88;
    return t87 & 0xffffff00u;
L_1014ae3a: ;
    t34 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t35 = cow_call_regs(g, COW_IMG(0x1015e790u), t34, COW_IMG(0x10621838u), g->edx, 0, 2, t34, 1u);
    t36 = g->edx;
    g->edx = t36;
    return t35 & 0xffffff00u;
L_1014ae52: ;
    if (rd32(self + 0x58u) != 0u)
    {
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t25 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
        t26 = g->edx;
        t27 = rd8(self + 0x54u);
        wr16(self + 0x62u, (uint16_t)t25);
        wr32(self + 0x58u, 0u);
        t28 = (t26 & 0xffffff00u) | t27;
        eax = t25;
        edx = t28;
        loc_10 = 0u;
        loc_14 = t28;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t20 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
        t21 = g->ecx;
        t22 = g->edx;
        t23 = rd8(self + 0x54u);
        wr16(self + 0x60u, (uint16_t)t20);
        wr32(self + 0x58u, 1u);
        t24 = (t21 & 0xffffff00u) | t23;
        eax = t20;
        edx = t22;
        loc_10 = 1u;
        loc_14 = t24;
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1014afa0u), self, 2, loc_14, loc_10);
    t29 = g->ecx;
    t30 = g->edx;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        ecx = t29;
        edx = t30;
    }
    else
    {
        eax = rd32(self + 8u);
        ecx = t29;
        edx = t30;
        wr8(eax + 0x62u, 1u);
        t31 = rd32(self + 8u);
        wr8(t31 + 0x61u, 1u);
        eax = t31;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t32 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t33 = g->edx;
    g->edx = t33;
    return t32 & 0xffffff00u;
L_1014aead: ;
    if (rd32(self + 0x58u) != 0u)
    {
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t11 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
        t12 = g->edx;
        t13 = rd8(self + 0x54u);
        wr16(self + 0x62u, (uint16_t)t11);
        wr32(self + 0x58u, 0u);
        t14 = (t12 & 0xffffff00u) | t13;
        eax = t11;
        edx = t14;
        loc_10 = 0u;
        loc_14 = t14;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
        t7 = g->ecx;
        t8 = g->edx;
        t9 = rd8(self + 0x54u);
        wr16(self + 0x60u, (uint16_t)t6);
        wr32(self + 0x58u, 1u);
        t10 = (t7 & 0xffffff00u) | t9;
        eax = t6;
        edx = t8;
        loc_10 = 1u;
        loc_14 = t10;
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1014afa0u), self, 2, loc_14, loc_10);
    t15 = g->ecx;
    t16 = g->edx;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        ecx = t15;
        edx = t16;
    }
    else
    {
        eax = rd32(self + 8u);
        ecx = t15;
        edx = t16;
        wr8(eax + 0x62u, 1u);
        t17 = rd32(self + 8u);
        wr8(t17 + 0x61u, 1u);
        eax = t17;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t18 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t19 = g->edx;
    g->edx = t19;
    return t18 & 0xffffff00u;
L_1014af08: ;
    if (rd32(self + 0x58u) != 0u) goto L_1014af22;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t3 = g->edx;
    wr16(self + 0x60u, (uint16_t)t2);
    g->edx = t3;
    return t2 & 0xffffff00u;
L_1014af22: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t5 = g->edx;
    wr16(self + 0x62u, (uint16_t)t4);
    eax = t4;
    edx = t5;
L_1014af2b: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014acc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014acc0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
