/* f_0x1009ee60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_1009ee60(Guest* g)
{
    double d36;
    double d37;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = rd16(rd32(sp0 + 0xcu) + 0x14u);
    wr32(sp0 - 0x20u, t1);
    g->ecx = t1;
    g->edx = in_edx;
    t2 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x1cu;
    t3 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        ecx = t4;
        edx = t5;
        esi = t2;
        goto L_1009ee84;
    }
    eax = t3;
    return eax;
L_1009ee84: ;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_1009ee98;
    }
    eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    return eax & 0xffffff00u;
L_1009ee98: ;
    t6 = rd32(eax + 0x74u);
    wr32(sp0 - 8u, t6);
    if (rd32(eax + 0x78u) == rd32(esi + 0x10u))
    {
        ecx = t6;
        edi = rd32(eax + 0x78u);
        goto L_1009eeb2;
    }
    eax = rd32(esi + 0x10u);
    return eax & 0xffffff00u;
L_1009eeb2: ;
    if (rd8(esi + 0x16u) > 0xau)
    {
        eax = rd8(esi + 0x16u);
        goto L_1009f292;
    }
    eax = rd8(esi + 0x16u);
    t7 = rd32(COW_IMG(0x1009f29cu) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x1009eec9u: goto L_1009eec9;
    case 0x1009ef1bu: goto L_1009ef1b;
    case 0x1009f039u: goto L_1009f039;
    case 0x1009f06du: goto L_1009f06d;
    case 0x1009f0c3u: goto L_1009f0c3;
    case 0x1009f18du: goto L_1009f18d;
    case 0x1009f1e8u: goto L_1009f1e8;
    case 0x1009f22bu: goto L_1009f22b;
    case 0x1009f26au: goto L_1009f26a;
    case 0x1009f292u: goto L_1009f292;
    default: rt_fatal(g, COW_IMG(0x1009eec2u), "switch");
    }
    return 0;
L_1009eec9: ;
    wr32(sp0 - 0x20u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t89 = cow_call_regs(g, COW_IMG(0x1009ecc0u), eax, g->ecx, g->edx, 1, 1, esi);
    t90 = g->ecx;
    t91 = g->edx;
    g->edx = t91;
    t92 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t93 = g->edx;
    if (edi != rd32(t92 + 4u))
    {
        eax = t92;
        goto L_1009f292;
    }
    eax = t92;
    edx = t93;
    t94 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t94);
    g->eax = eax;
    g->ecx = t94;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t95 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t94);
    t96 = g->ecx;
    t97 = g->edx;
    if ((uint8_t)t95 != 0u)
    {
        eax = t95;
        ecx = t96;
        edx = t97;
        goto L_1009eefa;
    }
    eax = t95;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return eax;
L_1009eefa: ;
    if (rd8(COW_IMG(0x10351220u)) != 1u) goto L_1009f292;
    g->ebx = (in_ebx & 0xffffff00u) | 1u;
    g->esp = sp0 - 0x1cu;
    t98 = cow_call_regs(g, COW_IMG(0x1008f200u), eax, g->ecx, g->edx, 1, 0);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return (t98 & 0xffffff00u) | 1u;
L_1009ef1b: ;
    wr32(sp0 - 0x20u, esi);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x1009ecc0u), eax, g->ecx, g->edx, 1, 1, esi);
    t68 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x120u);
    if (!(t68 >> 9u & 1u))
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u);
        ecx = t68;
        edx = t68 >> 9u;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u);
        ecx = t68;
        edx = t68 >> 9u;
        if (!(ecx >> 7u & 1u))
        {
            ecx = ecx >> 7u;
        }
        else
        {
            wr32(sp0 - 0x20u, in_ebp);
            t69 = rd32(eax + 4u);
            t70 = rd32(eax + 0xd4u);
            wr32(rd32(t70 + 0x260u) + 0x140u, t69);
            t71 = rd32(eax + 8u);
            wr32(rd32(t70 + 0x260u) + 0x144u, t71);
            t72 = rd32(eax + 0xcu);
            wr32(rd32(t70 + 0x260u) + 0x148u, t72);
            t73 = rd32(eax + 0x10u);
            wr32(rd32(t70 + 0x260u) + 0x14cu, t73);
            t74 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x14u);
            t75 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u);
            t76 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0xd4u);
            wr32(rd32(t76 + 0x260u) + 0x150u, t74);
            t77 = rd32(t75 + 0x18u);
            wr32(rd32(t76 + 0x260u) + 0x154u, t77);
            t78 = rd32(t75 + 0x1cu);
            wr32(rd32(t76 + 0x260u) + 0x158u, t78);
            t79 = rd32(t75 + 0x20u);
            t80 = rd32(t76 + 0x260u);
            wr32(t80 + 0x15cu, t79);
            eax = t75;
            ecx = t80;
            edx = t79;
        }
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t81 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t82 = g->ecx;
    t83 = g->edx;
    if (edi != rd32(t81 + 4u))
    {
        eax = t81;
        goto L_1009f292;
    }
    ecx = t82;
    edx = t83;
    t84 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t84);
    g->eax = t84;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t85 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t84);
    t86 = g->edx;
    if ((uint8_t)t85 != 0u)
    {
        eax = t85;
        edx = t86;
        goto L_1009f00a;
    }
    eax = t85;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return eax;
L_1009f00a: ;
    t87 = rd8(COW_IMG(0x10351220u));
    wr8(COW_IMG(0x1047faafu), 0u);
    if ((uint8_t)t87 != 1u)
    {
        eax = (eax & 0xffffff00u) | t87;
        goto L_1009f292;
    }
    eax = (eax & 0xffffff00u) | t87;
    g->ebx = (in_ebx & 0xffffff00u) | 1u;
    g->esp = sp0 - 0x1cu;
    t88 = cow_call_regs(g, COW_IMG(0x1008f200u), eax, g->ecx, g->edx, 1, 0);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return (t88 & 0xffffff00u) | 1u;
L_1009f039: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x1cu;
    t64 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t65 = g->ecx;
    if (edi != rd32(t64 + 4u))
    {
        eax = t64;
        goto L_1009f064;
    }
    eax = t64;
    ecx = t65;
    t66 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t66);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t67 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t66);
    if ((uint8_t)t67 != 0u)
    {
        eax = t67;
        goto L_1009f05d;
    }
    eax = t67;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return eax;
L_1009f05d: ;
    wr8(COW_IMG(0x1047faafu), 0u);
L_1009f064: ;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return (eax & 0xffffff00u) | 1u;
L_1009f06d: ;
    wr32(sp0 - 0x20u, esi);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x1009ecc0u), eax, g->ecx, g->edx, 1, 1, esi);
    t59 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x120u) & 0xffff00ffu) | (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x120u) >> 8u & 0xbfu) << 8u;
    t60 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u);
    wr32(t60 + 0x120u, t59);
    t61 = rd8(esi + 0x16u);
    t62 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u);
    wr8(t62 + 0x144u, (uint8_t)t61);
    g->eax = (t60 & 0xffffff00u) | t61;
    t63 = cow_thiscall(g, COW_IMG(0x10092900u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u), 0);
    g->ebx = in_ebx;
    return (t63 & 0xffffff00u) | 1u;
L_1009f0c3: ;
    t38 = rd32(esi + 0xcu);
    wr32(sp0 - 0x10u, t38);
    t39 = rd32(esi + 8u);
    wr32(sp0 - 0xcu, t39);
    t40 = rd32(esi + 4u);
    wr32(sp0 - 8u, t40);
    wr32(sp0 - 0x20u, sp0 + 0xcu);
    wr32(sp0 - 0x24u, 0x41f00000u);
    wr32(sp0 - 0x28u, t38);
    wr32(sp0 - 0x2cu, t39);
    wr32(sp0 - 0x30u, t40);
    t41 = rd32(COW_IMG(0x10631f24u));
    wr32(sp0 + 0xcu, 0u);
    g->eax = t38;
    g->edx = t40;
    g->esp = sp0 - 0x1cu;
    t42 = cow_thiscall(g, COW_IMG(0x10181290u), t41, 5, t40, t39, t38, 0x41f00000u, sp0 + 0xcu);
    t43 = g->ecx;
    t44 = g->edx;
    if ((uint8_t)t42 != 1u)
    {
        eax = t42;
        ecx = t43;
        edx = t44;
    }
    else
    {
        ecx = t43;
        edx = t44;
        t45 = rd32(sp0 + 0xcu);
        wr32(esi + 8u, t45);
        eax = t45;
    }
    wr32(sp0 - 0x20u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t46 = cow_call_regs(g, COW_IMG(0x1009ecc0u), eax, g->ecx, g->edx, 1, 1, esi);
    t47 = g->ecx;
    t48 = g->edx;
    g->edx = t48;
    t49 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t50 = g->edx;
    if (edi != rd32(t49 + 4u))
    {
        eax = t49;
        goto L_1009f292;
    }
    eax = t49;
    edx = t50;
    t51 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t51);
    g->eax = eax;
    g->ecx = t51;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t52 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t51);
    t53 = g->ecx;
    t54 = g->edx;
    if ((uint8_t)t52 != 0u)
    {
        eax = t52;
        ecx = t53;
        edx = t54;
        goto L_1009f140;
    }
    eax = t52;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return eax;
L_1009f140: ;
    wr8(COW_IMG(0x1048098eu), 0u);
    wr8(COW_IMG(0x10482f18u), 0u);
    g->esp = sp0 - 0x1cu;
    t55 = cow_call_regs(g, COW_IMG(0x100875c0u), eax, g->ecx, g->edx, 1, 0);
    t56 = rd32(COW_IMG(0x10456a28u));
    wr8(COW_IMG(0x104807f3u), 1u);
    wr32(t56, 0x60u);
    if (rd8(COW_IMG(0x10351220u)) != 1u)
    {
        eax = (t55 & 0xffffff00u) | rd8(COW_IMG(0x10351220u));
        goto L_1009f292;
    }
    edx = t56;
    g->ebx = (in_ebx & 0xffffff00u) | 1u;
    t57 = rd16(esi + 0x14u);
    g->esp = sp0 - 0x1cu;
    t58 = cow_call_regs(g, COW_IMG(0x1008f200u), t57, g->ecx, g->edx, 1, 0);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return (t58 & 0xffffff00u) | 1u;
L_1009f18d: ;
    wr32(sp0 - 0x20u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t24 = cow_call_regs(g, COW_IMG(0x1009ecc0u), eax, g->ecx, g->edx, 1, 1, esi);
    t25 = g->ecx;
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t28 = g->edx;
    if (edi != rd32(t27 + 4u))
    {
        eax = t27;
        goto L_1009f292;
    }
    eax = t27;
    edx = t28;
    t29 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t29);
    g->eax = eax;
    g->ecx = t29;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t30 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t29);
    t31 = g->ecx;
    t32 = g->edx;
    if ((uint8_t)t30 != 0u)
    {
        eax = t30;
        ecx = t31;
        edx = t32;
        goto L_1009f1be;
    }
    eax = t30;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return eax;
L_1009f1be: ;
    if (rd8(COW_IMG(0x10351220u)) == 1u)
    {
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t33 = cow_call_regs(g, COW_IMG(0x1008f200u), eax, g->ecx, g->edx, 1, 0);
        t34 = g->edx;
        eax = t33;
        edx = t34;
    }
    wr32(sp0 - 0x20u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t35 = cow_stdcall(g, COW_IMG(0x1018ba80u), 1, 0u);
    d36 = cow_take_float(g);
    d37 = cow_take_float(g);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    fpush(g, d36);
    fpush(g, d37);
    return (t35 & 0xffffff00u) | 1u;
L_1009f1e8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t17 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t18 = g->edx;
    if (edi != rd32(t17 + 4u))
    {
        eax = t17;
        goto L_1009f292;
    }
    eax = t17;
    edx = t18;
    t19 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t19);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t20 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t19);
    if ((uint8_t)t20 != 0u)
    {
        eax = t20;
        goto L_1009f210;
    }
    eax = t20;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return eax;
L_1009f210: ;
    t21 = rd32(COW_IMG(0x10456a28u));
    t22 = rd32(sp0 - 0x1cu);
    wr8(COW_IMG(0x10482f1eu), 1u);
    t23 = rd32(sp0 - 0x18u);
    wr32(t21, 0x70u);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = t23;
    g->edi = t22;
    return (eax & 0xffffff00u) | 1u;
L_1009f22b: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t9 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (edi != rd32(t9 + 4u))
    {
        eax = t9;
        goto L_1009f292;
    }
    ecx = t10;
    edx = t11;
    t12 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t12);
    g->eax = t12;
    g->esp = sp0 - 0x1cu;
    t13 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t12);
    if ((uint8_t)t13 != 0u)
    {
        eax = t13;
        goto L_1009f24f;
    }
    eax = t13;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return eax;
L_1009f24f: ;
    t14 = rd32(COW_IMG(0x10456a28u));
    t15 = rd32(sp0 - 0x1cu);
    wr8(COW_IMG(0x104807f3u), 1u);
    t16 = rd32(sp0 - 0x18u);
    wr32(t14, 0x60u);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = t16;
    g->edi = t15;
    return (eax & 0xffffff00u) | 1u;
L_1009f26a: ;
    wr32(sp0 - 0x20u, esi);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x1009edd0u), 3, esi, in_edi, in_esi);
    if (!(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x120u) >> 9u & 1u))
    {
        eax = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x120u) >> 9u;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x120u) >> 9u;
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u);
        edx = rd16(esi + 0x14u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t8 = cow_thiscall(g, COW_IMG(0x10092b20u), ecx, 0);
        eax = t8;
    }
L_1009f292: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009ee60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009ee60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
