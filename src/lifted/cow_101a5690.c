/* f_0x101a5690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101a5690(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_4 = self;
        goto L_101a59a1;
    }
    edi = rd32(self + 8u);
    g->edx = in_edx;
    t1 = rd32(self + 0x18u);
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x101a44b0u), in_eax, t1, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd8(self + 0x1cu) != 1u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u);
        edx = t4;
        ebx = (uint32_t)(int8_t)t2;
        loc_4 = (self & 0xffffffu) | rd8(t3 + 0xcu) << 0x18u;
        goto L_101a5835;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u);
    edx = t4;
    loc_4 = (self & 0xffffffu) | rd8(t3 + 0xcu) << 0x18u;
    if (eax - 1u > 0x11u)
    {
        eax = eax - 1u;
        goto L_101a59a1;
    }
    eax = eax - 1u;
    t5 = rd32(COW_IMG(0x101a59a8u) + rd8(COW_IMG(0x101a59d0u) + eax) * 4u);
    switch (t5 - RD)
    {
    case 0x101a56dcu: goto L_101a56dc;
    case 0x101a56f0u: goto L_101a56f0;
    case 0x101a576cu: goto L_101a576c;
    case 0x101a578fu: goto L_101a578f;
    case 0x101a57b2u: goto L_101a57b2;
    case 0x101a57d8u: goto L_101a57d8;
    case 0x101a57f4u: goto L_101a57f4;
    case 0x101a5809u: goto L_101a5809;
    case 0x101a581du: goto L_101a581d;
    case 0x101a59a1u: goto L_101a59a1;
    default: rt_fatal(g, COW_IMG(0x101a56d5u), "switch");
    }
    return 0;
L_101a56dc: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t47 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 1u);
    t48 = g->edx;
    g->edx = t48;
    return t47;
L_101a56f0: ;
    if (rd32(self + 0x44u) == 0u) goto L_101a5733;
    ecx = rd32(self + 0x44u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t32 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, ecx, g->edx, 0, 1, 0u);
    t33 = g->edx;
    if (t32 == 0u)
    {
        eax = t32;
        edx = t33;
        goto L_101a5733;
    }
    eax = t32;
    edx = t33;
    g->edx = edx;
    t34 = rd32(self + 0x44u);
    g->esp = sp0 - 0x10u;
    t35 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, t34, g->edx, 0, 1, 0u);
    t36 = g->ecx;
    t37 = g->edx;
    edi = t35;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        edx = t37;
        goto L_101a5733;
    }
    edx = t37;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t38 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, rd32(self + 0x44u), g->edx, 0, 1, eax);
    t39 = g->edx;
    g->esp = sp0 - 0x10u;
    t40 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t38, 2u);
    eax = t40;
L_101a5742: ;
    t42 = rd32(self + 8u);
    wr8(self + 0x1cu, 0u);
    wr8(t42 + 0x62u, 1u);
    g->esp = sp0 - 0x10u;
    t43 = cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), t42, 1, 0);
    t44 = g->edx;
    g->edx = t44;
    t45 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    t46 = g->edx;
    g->edx = t46;
    return t45;
L_101a5733: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t41 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 2u);
    eax = t41;
    goto L_101a5742;
L_101a576c: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t27 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 5u);
    t28 = g->edx;
    t29 = (t27 & 0xffff0000u) | rd16(self + 0x20u);
    g->edx = t28;
    t30 = cow_call_regs(g, COW_IMG(0x10118db0u), t29, rd32(self + 8u), g->edx, 0, 2, t29, 0u);
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_101a578f: ;
    g->edx = edx;
    t20 = rd32(COW_IMG(0x10662da0u));
    g->esp = sp0 - 0x10u;
    t21 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, t20, g->edx, 0, 1, 4u);
    t22 = g->ecx;
    t23 = g->edx;
    t24 = (t22 & 0xffff0000u) | rd16(self + 0x20u);
    g->edx = t23;
    t25 = cow_call_regs(g, COW_IMG(0x10118db0u), t21, rd32(self + 8u), g->edx, 0, 2, t24, 0u);
    t26 = g->edx;
    g->edx = t26;
    return t25;
L_101a57b2: ;
    if ((int32_t)rd32(self + 0x20u) <= 3)
    {
        eax = rd32(self + 0x20u);
        goto L_101a57ca;
    }
    eax = rd32(self + 0x20u);
    g->eax = eax - 1u;
    g->esp = sp0 - 0x10u;
    t16 = cow_fastcall(g, COW_IMG(0x101a5490u), self, edx, 1, eax - 1u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_101a57ca: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t18 = cow_fastcall(g, COW_IMG(0x101a5490u), self, edx, 1, 3u);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_101a57d8: ;
    if ((int32_t)rd32(self + 0x20u) >= 9)
    {
        eax = rd32(self + 0x20u);
        goto L_101a59a1;
    }
    eax = rd32(self + 0x20u);
    g->eax = eax + 1u;
    g->esp = sp0 - 0x10u;
    t14 = cow_fastcall(g, COW_IMG(0x101a5490u), self, edx, 1, eax + 1u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_101a57f4: ;
    t11 = (edx & 0xffff0000u) | rd16(self + 0x20u);
    g->edx = t11;
    g->esp = sp0 - 0x10u;
    t12 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, t11, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101a5809: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 3u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_101a581d: ;
    g->eax = rd32(rd32(COW_IMG(0x10662d40u)));
    g->edx = edx;
    t6 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, rd32(t6 + 8u), rd32(COW_IMG(0x10662d40u)), 3, 2u, 0u, 0u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_101a5835: ;
    if (eax == 5u) goto L_101a58a6;
    eax = eax - 5u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101a5890;
    }
    eax = eax - 1u;
    if (eax != 2u)
    {
        eax = eax - 2u;
        goto L_101a59a1;
    }
    eax = eax - 2u;
    if ((int16_t)rd16(sp0 + 8u) < 4)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        goto L_101a59a1;
    }
    eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
    if ((int16_t)eax > 9) goto L_101a59a1;
    t49 = self + (uint32_t)(int16_t)eax * 4u + 0x1cu;
    t50 = rd32(COW_IMG(0x106627bcu));
    wr32(t50 + 0x54u, t49);
    t51 = rd32(rd32(COW_IMG(0x106627bcu)) + 8u);
    g->eax = t50;
    g->esp = sp0 - 0x10u;
    t52 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t51, 2, t51, 0u);
    t53 = g->ecx;
    t54 = g->edx;
    g->edx = t54;
    t55 = cow_thiscall(g, COW_IMG(0x10037e90u), t53, 0);
    t56 = g->edx;
    g->edx = t56;
    return t55;
L_101a5890: ;
    g->esp = sp0 - 0x10u;
    t57 = cow_call_regs(g, COW_IMG(0x101a5da0u), eax, self, edx, 1, 0);
    t58 = g->edx;
    g->edx = t58;
    t59 = cow_thiscall(g, COW_IMG(0x101a4630u), rd32(self + 0x18u), 0);
    t60 = g->edx;
    g->edx = t60;
    return t59;
L_101a58a6: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        goto L_101a59a1;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    t61 = rd32(COW_IMG(0x101a59e4u) + rd8(COW_IMG(0x101a59f0u) + eax) * 4u);
    switch (t61 - RD)
    {
    case 0x101a58c4u: goto L_101a58c4;
    case 0x101a58fau: goto L_101a58fa;
    case 0x101a5995u: goto L_101a5995;
    default: rt_fatal(g, COW_IMG(0x101a58bdu), "switch");
    }
    return 0;
L_101a58c4: ;
    g->esp = sp0 - 0x10u;
    t74 = cow_call_regs(g, COW_IMG(0x101a5da0u), eax, self, edx, 1, 0);
    t75 = g->ecx;
    t76 = g->edx;
    if (loc_4 >> 0x18u != 2u)
    {
        eax = t74;
        ecx = t75;
        edx = t76;
        goto L_101a58e9;
    }
    eax = t74;
    ecx = t75;
    edx = t76;
    if (ebx != 0u)
    {
        zf = ebx == 0u;
        sf = (int32_t)ebx < 0;
        goto L_101a58eb;
    }
    t77 = rd32(self + 0x18u);
    wr8(t77 + 0xcu, 1u);
    g->esp = sp0 - 0x10u;
    t78 = cow_call_regs(g, COW_IMG(0x101a4480u), eax, rd32(self + 0x18u), t77, 0, 1, 9u);
    t79 = g->edx;
    eax = t78;
    edx = t79;
L_101a5937: ;
    g->esp = sp0 - 0x10u;
    t85 = cow_call_regs(g, COW_IMG(0x101a5e00u), eax, self, edx, 1, 0);
    t86 = g->edx;
    g->edx = t86;
    t87 = rd32(self + 0x44u);
    t88 = cow_call_regs(g, COW_IMG(0x101c5e50u), t85, t87, g->edx, 0, 1, 0u);
    t89 = g->ecx;
    t90 = g->edx;
    edi = t88;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        edx = t90;
        goto L_101a5974;
    }
    edx = t90;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t91 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, rd32(self + 0x44u), g->edx, 0, 1, eax);
    t92 = g->edx;
    g->edx = t92;
    g->esp = sp0 - 0x10u;
    t93 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t91, 2u);
    t94 = g->edx;
    g->edx = t94;
    return t93;
L_101a58e9: ;
    zf = ebx == 0u;
    sf = (int32_t)ebx < 0;
L_101a58eb: ;
    if (zf || sf) goto L_101a5932;
    t80 = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx - 1u);
    g->esp = sp0 - 0x10u;
    t81 = cow_call_regs(g, COW_IMG(0x101a4480u), eax, rd32(self + 0x18u), edx, 0, 1, t80);
    t82 = g->edx;
    eax = t81;
    edx = t82;
    goto L_101a5937;
L_101a58fa: ;
    g->esp = sp0 - 0x10u;
    t65 = cow_call_regs(g, COW_IMG(0x101a5da0u), eax, self, edx, 1, 0);
    t66 = g->ecx;
    t67 = g->edx;
    if (loc_4 >> 0x18u != 1u)
    {
        eax = t65;
        ecx = t66;
        edx = t67;
        goto L_101a5920;
    }
    eax = t65;
    ecx = t66;
    edx = t67;
    if (ebx != 9u)
    {
        sf = (int32_t)(ebx - 9u) < 0;
        of = ((ebx ^ 9u) & (ebx ^ ebx - 9u)) >> 0x1fu;
        goto L_101a5923;
    }
    t68 = rd32(self + 0x18u);
    wr8(t68 + 0xcu, 2u);
    g->esp = sp0 - 0x10u;
    t69 = cow_call_regs(g, COW_IMG(0x101a4480u), t68, rd32(self + 0x18u), edx, 0, 1, 0u);
    t70 = g->edx;
    eax = t69;
    edx = t70;
    goto L_101a5937;
L_101a5920: ;
    sf = (int32_t)(ebx - 9u) < 0;
    of = ((ebx ^ 9u) & (ebx ^ ebx - 9u)) >> 0x1fu;
L_101a5923: ;
    if (sf == of) goto L_101a5932;
    t71 = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
    g->esp = sp0 - 0x10u;
    t72 = cow_call_regs(g, COW_IMG(0x101a4480u), eax, rd32(self + 0x18u), edx, 0, 1, t71);
    t73 = g->edx;
    eax = t72;
    edx = t73;
    goto L_101a5937;
L_101a5932: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t83 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t84 = g->edx;
    eax = t83;
    edx = t84;
    goto L_101a5937;
L_101a5974: ;
    t95 = rd32(COW_IMG(0x1057847cu));
    wr32(sp0 + 8u, 2u);
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10150cc0u), eax, t95, edx);
L_101a5995: ;
    t62 = (uint32_t)(int16_t)rd16(edi + 0x4cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t63 = cow_fastcall(g, COW_IMG(0x101a5490u), self, edx, 1, t62);
    t64 = g->edx;
    eax = t63;
    edx = t64;
L_101a59a1: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a5690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a5690(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
