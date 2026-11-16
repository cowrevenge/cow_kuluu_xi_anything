/* f_0x101d3380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101d3380(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
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
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;

    t1 = rd32(sp0 + 0xcu) == 9u;
    t2 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t1);
    if ((int32_t)rd32(sp0 + 4u) < 0) goto L_101d37c5;
    eax = rd32(sp0 + 4u);
    esi = t2;
    ecx = self;
    edx = in_edx;
    ebx = rd32(sp0 + 8u);
L_101d33a6: ;
    if ((int32_t)rd32(sp0 + 4u) >= 5) goto L_101d37c5;
    g->edi = self;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10097b40u), eax, g->ecx, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        goto L_101d33c6;
    }
    ecx = t4;
    edx = t5;
    if (rd32(sp0 + 4u) != 0u) goto L_101d37c5;
    eax = rd32(sp0 + 4u);
L_101d33c6: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101d33e0;
    }
    eax = t6;
    edx = t7;
    if (rd32(sp0 + 4u) != 0u) goto L_101d37c5;
L_101d33e0: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t9 = g->edx;
    if (t8 == 0u) goto L_101d37c5;
    edx = t9;
    if (rd32(sp0 + 4u) > 4u)
    {
        eax = rd32(sp0 + 4u);
        goto L_101d37b4;
    }
    eax = rd32(sp0 + 4u);
    t10 = rd32(COW_IMG(0x101d37ccu) + eax * 4u);
    switch (t10 - RD)
    {
    case 0x101d3406u: goto L_101d3406;
    case 0x101d3438u: goto L_101d3438;
    case 0x101d3527u: goto L_101d3527;
    case 0x101d36bcu: goto L_101d36bc;
    case 0x101d372eu: goto L_101d372e;
    default: rt_fatal(g, COW_IMG(0x101d33ffu), "switch");
    }
    return;
L_101d3406: ;
    g->eax = eax;
    t93 = rd32(COW_IMG(0x10664420u));
    g->esp = sp0 - 0x10u;
    t94 = cow_fastcall(g, COW_IMG(0x10207360u), t93, edx, 0);
    t95 = g->ecx;
    t96 = g->edx;
    if ((uint8_t)t94 != 0u)
    {
        eax = t94;
        edx = t96;
        goto L_101d36d9;
    }
    eax = t94;
    ecx = t95;
    edx = t96;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t97 = cow_cdecl(g, COW_IMG(0x100a1860u), 1, 0x3bu);
    t98 = g->ecx;
    t99 = g->edx;
    wr32(sp0 + 4u, 0u);
    wr32(sp0 + 0xcu, 0u);
    eax = t97;
    ecx = t98;
    edx = t99;
    ebx = 0xffffffffu;
    esi = 1u;
    goto L_101d33a6;
L_101d3438: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t69 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
    t70 = g->edx;
    if ((uint8_t)t69 != 0u)
    {
        eax = t69;
        edx = t70;
        if (rd16(self + 0x1cu) != 0u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t91 = cow_thiscall(g, COW_IMG(0x101d55d0u), self, 1, 1u);
            t92 = g->edx;
            eax = t91;
            edx = t92;
        }
    }
    else
    {
        eax = t69;
        edx = t70;
        wr16(self + 0x7e6u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t71 = cow_call_regs(g, COW_IMG(0x101d39a0u), eax, self, g->edx, 0, 1, 0x80808080u);
        t72 = g->edx;
        t73 = cow_fastcall(g, COW_IMG(0x1017a590u), rd32(COW_IMG(0x10631f24u)), t72, 1, 2u);
        t74 = g->edx;
        eax = t73;
        edx = t74;
        ebx = 2u;
        esi = self + 0x4cu;
L_101d346f: ;
        ebp = 0x51u;
L_101d3474: ;
        if (rd32(esi) != 0u)
        {
            ecx = rd32(esi);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t75 = cow_call_regs(g, COW_IMG(0x101ce1e0u), eax, ecx, g->edx, 0, 2, 0u, 5u);
            t76 = g->edx;
            eax = t75;
            edx = t76;
        }
        if (ebp != 1u)
        {
            ebp = ebp - 1u;
            esi = esi + 4u;
            goto L_101d3474;
        }
        esi = esi + 4u;
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            goto L_101d346f;
        }
        if (rd32(self + 0x38u) == 0u)
        {
            eax = rd32(self + 0x38u);
        }
        else
        {
            eax = rd32(self + 0x38u);
            wr8(eax + 0xc0u, 1u);
        }
        g->eax = eax;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t77 = cow_stdcall(g, COW_IMG(0x101d3fb0u), 0);
        t78 = g->ecx;
        t79 = g->edx;
        g->ecx = t78;
        g->edx = t79;
        cow_cdecl(g, COW_IMG(0x101236e0u), 1, 0xffffu);
        t80 = g->ecx;
        t81 = g->edx;
        t82 = rd32(COW_IMG(0x1057876cu));
        wr8(t82 + 0x74u, rd8(t82 + 0x74u) & 0xefu);
        g->eax = t82;
        g->edx = t81;
        t83 = cow_stdcall(g, COW_IMG(0x10150cc0u), 2, 0u, 0u);
        t84 = g->edx;
        g->edx = t84;
        cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 0u);
        t85 = g->edx;
        if (rd32(rd32(COW_IMG(0x105782b4u)) + 8u) != 0u)
        {
            eax = rd32(rd32(COW_IMG(0x105782b4u)) + 8u);
            ecx = rd32(COW_IMG(0x105782b4u));
            edx = t85;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x105782b4u)) + 8u);
            edx = t85;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t86 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036fff0u), 1u, 0u);
            t87 = g->ecx;
            t88 = g->edx;
            eax = t86;
            ecx = t87;
            edx = t88;
        }
        if (rd16(self + 0x1cu) == 1u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t89 = cow_stdcall(g, COW_IMG(0x100f0c80u), 0);
            t90 = g->edx;
            eax = t89;
            edx = t90;
        }
    }
L_101d37b4: ;
    t124 = rd16(sp0 + 4u);
    wr16(self + 0x1eu, rd16(self + 0x1cu));
    wr16(self + 0x1cu, (uint16_t)t124);
L_101d37c5: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
L_101d3527: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t22 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
    t23 = g->edx;
    if ((uint8_t)t22 != 0u)
    {
        eax = t22;
        edx = t23;
    }
    else
    {
        eax = t22;
        edx = t23;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t24 = cow_call_regs(g, COW_IMG(0x101d39a0u), eax, self, g->edx, 0, 1, 0x80808080u);
        t25 = g->edx;
        if (rd8(self + 0x24u) != 0u)
        {
            eax = (t24 & 0xffffff00u) | rd8(self + 0x24u);
            edx = t25;
        }
        else
        {
            eax = (t24 & 0xffffff00u) | rd8(self + 0x24u);
            edx = t25;
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t26 = cow_fastcall(g, COW_IMG(0x1017a590u), rd32(COW_IMG(0x10631f24u)), edx, 1, 0u);
            t27 = g->edx;
            eax = t26;
            edx = t27;
        }
        wr32(sp0 + 8u, 2u);
        esi = self + 0x4cu;
L_101d3560: ;
        ebp = 0x51u;
L_101d3565: ;
        if (rd32(esi) != 0u)
        {
            ecx = rd32(esi);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t28 = cow_call_regs(g, COW_IMG(0x101ce1e0u), eax, ecx, g->edx, 0, 2, 1u, 5u);
            t29 = g->edx;
            eax = t28;
            edx = t29;
        }
        if (ebp != 1u)
        {
            ebp = ebp - 1u;
            esi = esi + 4u;
            goto L_101d3565;
        }
        esi = esi + 4u;
        t30 = rd32(sp0 + 8u) - 1u;
        t31 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t30);
        if (t31 != 1u)
        {
            eax = t30;
            goto L_101d3560;
        }
        if (rd32(self + 0x38u) == 0u)
        {
            eax = rd32(self + 0x38u);
        }
        else
        {
            eax = rd32(self + 0x38u);
            wr8(eax + 0xc0u, 2u);
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t32 = cow_thiscall(g, COW_IMG(0x101d3f60u), self, 0);
        t33 = g->ecx;
        t34 = g->edx;
        wr32(self + 0x7e8u, 1u);
        wr32(self + 0x7f0u, 0u);
        g->edx = t34;
        t35 = cow_cdecl(g, COW_IMG(0x101236e0u), 1, 0x42u);
        t36 = g->edx;
        g->edx = t36;
        t37 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f5b4u));
        t38 = g->edx;
        g->edx = t38;
        t39 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1035bad8u));
        t40 = g->edx;
        g->edx = t40;
        t41 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10371b4cu));
        t42 = g->edx;
        g->edx = t42;
        t43 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036fff0u));
        t44 = g->edx;
        g->edx = t44;
        cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037160cu));
        t45 = g->edx;
        t46 = rd32(COW_IMG(0x1057876cu));
        t47 = rd8(rd32(COW_IMG(0x1057876cu)) + 0x74u);
        wr8(t46 + 0x74u, (uint8_t)(t47 | 0x10u));
        g->eax = t46;
        g->edx = (t45 & 0xffffff00u) | t47 | 0x10u;
        t48 = rd32(COW_IMG(0x1057876cu));
        t49 = cow_thiscall(g, COW_IMG(0x10157660u), t48, 1, 0u);
        t50 = g->ecx;
        t51 = g->edx;
        g->edx = t51;
        g->esp = sp0 - 0x14u;
        t52 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 4u);
        t53 = g->edx;
        g->ecx = rd32(COW_IMG(0x1057847cu));
        g->edx = t53;
        t54 = rd32(COW_IMG(0x1057847cu));
        g->esp = sp0 - 0x10u;
        t55 = cow_stdcall(g, COW_IMG(0x10150cc0u), 2, t52, 0u);
        t56 = g->ecx;
        t57 = g->edx;
        g->edx = t57;
        g->esp = sp0 - 0x14u;
        t58 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0xeu);
        t59 = g->edx;
        g->edx = t59;
        g->esp = sp0 - 0x10u;
        t60 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t58, 0u);
        t61 = g->edx;
        if ((int32_t)ebx < 0)
        {
            eax = t60;
            edx = t61;
            goto L_101d3682;
        }
        eax = t60;
        edx = t61;
        if ((int32_t)ebx >= 81) goto L_101d3682;
        if (rd32(ebx * 4u + self + rd32(sp0 + 0xcu) * 0x144u + 0x4cu) == 0u)
        {
            eax = rd32(ebx * 4u + self + rd32(sp0 + 0xcu) * 0x144u + 0x4cu);
            edx = ebx + rd32(sp0 + 0xcu) * 0x48u;
            goto L_101d3682;
        }
        eax = rd32(ebx * 4u + self + rd32(sp0 + 0xcu) * 0x144u + 0x4cu);
        edx = ebx + rd32(sp0 + 0xcu) * 0x48u;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t62 = cow_call_regs(g, COW_IMG(0x101cd990u), eax, eax, g->edx, 1, 0);
        t63 = g->edx;
        wr16(self + 0x7e6u, (uint16_t)t62);
        eax = t62;
        edx = t63;
    }
    goto L_101d37b4;
L_101d3682: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t64 = cow_thiscall(g, COW_IMG(0x101d3e70u), self, 0);
    t65 = g->edx;
    t66 = rd16(self + 0x48u);
    wr16(self + 0x7e6u, (uint16_t)t64);
    if ((uint16_t)t66 != 0u)
    {
        eax = t64;
        edx = t65;
    }
    else
    {
        eax = t64;
        edx = t65;
        if ((uint16_t)eax == 0u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t67 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ec94u), 1u, 0u);
            t68 = g->edx;
            eax = t67;
            edx = t68;
        }
    }
    goto L_101d37b4;
L_101d36bc: ;
    if (rd32(COW_IMG(0x106631e4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106631e4u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t20 = cow_thiscall(g, COW_IMG(0x101d6c90u), ecx, 1, COW_IMG(0x101d3bf0u));
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    goto L_101d37b4;
L_101d36d9: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t100 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
    t101 = g->ecx;
    t102 = g->edx;
    if ((uint8_t)t100 == 0u)
    {
        eax = t100;
        ecx = t101;
        edx = t102;
        goto L_101d3705;
    }
    eax = t100;
    edx = t102;
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t103 = cow_stdcall(g, COW_IMG(0x101d6020u), 0);
    t104 = g->ecx;
    t105 = g->edx;
    if ((uint8_t)t103 == 0u)
    {
        eax = t103;
        ecx = t104;
        edx = t105;
        goto L_101d3705;
    }
    eax = t103;
    edx = t105;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t106 = cow_thiscall(g, COW_IMG(0x101d55d0u), self, 1, 0u);
    t107 = g->edx;
    g->edx = t107;
    t108 = cow_thiscall(g, COW_IMG(0x10157660u), rd32(COW_IMG(0x1057876cu)), 1, 0u);
    t109 = g->edx;
    eax = t108;
    edx = t109;
L_101d3778: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t116 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1035bad8u));
    t117 = g->edx;
    g->edx = t117;
    t118 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10371b4cu));
    t119 = g->edx;
    g->edx = t119;
    t120 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ec80u));
    t121 = g->edx;
    g->edx = t121;
    t122 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037160cu));
    t123 = g->edx;
    eax = t122;
    edx = t123;
    goto L_101d37b4;
L_101d3705: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x101236e0u), 1, 0x42u);
    t110 = g->edx;
    g->ebx = ebx;
    g->eax = rd32(COW_IMG(0x10664420u));
    g->edx = t110;
    t111 = rd32(COW_IMG(0x10664420u));
    t112 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, t111);
    t113 = g->edx;
    g->edx = t113;
    t114 = cow_thiscall(g, COW_IMG(0x10157660u), rd32(COW_IMG(0x1057876cu)), 1, 0u);
    t115 = g->edx;
    eax = t114;
    edx = t115;
    goto L_101d3778;
L_101d372e: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        eax = t11;
        edx = t13;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t18 = cow_thiscall(g, COW_IMG(0x101d55d0u), self, 1, 0u);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    else
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t14 = cow_cdecl(g, COW_IMG(0x101236e0u), 1, 0x42u);
        t15 = g->edx;
        if ((int32_t)ebx < 0)
        {
            eax = t14;
            edx = t15;
        }
        else
        {
            eax = t14;
            edx = t15;
            if ((int32_t)ebx < 81)
            {
                if (rd32(ebx * 4u + self + rd32(sp0 + 0xcu) * 0x144u + 0x4cu) == 0u)
                {
                    eax = ebx + rd32(sp0 + 0xcu) * 0x51u;
                }
                else
                {
                    eax = ebx + rd32(sp0 + 0xcu) * 0x51u;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t16 = cow_thiscall(g, COW_IMG(0x101d3910u), rd32(COW_IMG(0x106631d4u)), 2, ebx, esi);
                    t17 = g->edx;
                    eax = t16;
                    edx = t17;
                }
            }
        }
    }
    goto L_101d3778;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d3380(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
