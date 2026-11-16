/* f_0x100be060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100be060(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    g->esp = sp0 - 0x5cu;
    cow_fastcall(g, COW_IMG(0x1018d2b0u), sp0 - 0x4cu, in_edx, 0);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(sp0 + 4u);
    wr8(sp0 - 0x50u, 0u);
    wr8(sp0 - 0x4fu, 0u);
    t4 = rd8(t3);
    wr8(sp0 - 0x4eu, 0u);
    wr8(sp0 + 4u, (uint8_t)t4);
    if ((uint8_t)rd32(sp0 + 4u) - 0xau > 0x15u)
    {
        edx = t2;
        goto L_100be5f1;
    }
    eax = t3;
    ecx = (uint8_t)rd32(sp0 + 4u) - 0xau;
    edi = (uint8_t)rd32(sp0 + 4u);
    t5 = rd32(COW_IMG(0x100be62cu) + rd8(COW_IMG(0x100be65cu) + ecx) * 4u);
    switch (t5 - RD)
    {
    case 0x100be0aeu: edx = rd8(COW_IMG(0x100be65cu) + ecx); goto L_100be0ae;
    case 0x100be0f4u: edx = rd8(COW_IMG(0x100be65cu) + ecx); goto L_100be0f4;
    case 0x100be12fu: edx = rd8(COW_IMG(0x100be65cu) + ecx); goto L_100be12f;
    case 0x100be231u: edx = rd8(COW_IMG(0x100be65cu) + ecx); goto L_100be231;
    case 0x100be34cu: goto L_100be34c;
    case 0x100be3c7u: goto L_100be3c7;
    case 0x100be404u: goto L_100be404;
    case 0x100be441u: goto L_100be441;
    case 0x100be470u: goto L_100be470;
    case 0x100be4a9u: goto L_100be4a9;
    case 0x100be581u: goto L_100be581;
    case 0x100be5f1u: edx = rd8(COW_IMG(0x100be65cu) + ecx); goto L_100be5f1;
    default: rt_fatal(g, COW_IMG(0x100be0a7u), "switch");
    }
    return 0;
L_100be0ae: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xbfeu) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xbfeu) * 4u);
        goto L_100be0d7;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xbfeu) * 4u);
    t117 = rd32(self + 0x10u);
    wr32(sp0 - 0x60u, t117);
    g->edx = t117;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t117);
    t118 = g->edx;
    edx = t118;
L_100be5f1: ;
    t121 = rd32(self + 0xcu);
    wr32(sp0 - 0x60u, t121);
    g->eax = t121;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t122 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0x4cu, 0);
    t123 = g->edx;
    wr32(sp0 - 0x64u, t122);
    t124 = rd32(self + 0x704u);
    wr32(sp0 - 0x68u, t124);
    g->edx = t123;
    g->esp = sp0 - 0x44u;
    t125 = cow_call_regs(g, COW_IMG(0x100c2bf0u), t122, t124, g->edx, 1, 9, t124, t122, rd32(sp0 - 0x60u), in_edi, in_esi, in_ebx, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
    t126 = g->edx;
    wr32(self + 0x704u, t125);
    wr32(self + 0xcu, 0u);
    g->esp = sp0 - 0x5cu;
    t127 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, t126, 0);
    return (t127 & 0xffffff00u) | 1u;
L_100be0d7: ;
    if (rd16(eax + 0x210u) == 0u)
    {
        wr32(sp0 - 0x60u, eax + 0x7cu);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, eax + 0x7cu);
        t120 = g->edx;
        edx = t120;
    }
    else
    {
        wr32(sp0 - 0x60u, eax + 0x214u);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, eax + 0x214u);
        t119 = g->edx;
        edx = t119;
    }
    goto L_100be5f1;
L_100be0f4: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xc00u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xc00u) * 4u);
        goto L_100be0d7;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xc00u) * 4u);
    t115 = rd32(self + 0x14u);
    wr32(sp0 - 0x60u, t115);
    g->edx = t115;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t115);
    t116 = g->edx;
    edx = t116;
    goto L_100be5f1;
L_100be12f: ;
    if (edi == 0x12u)
    {
        eax = eax + 1u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        wr32(sp0 - 0x64u, eax);
        wr32(sp0 - 0x68u, self + 0x50u);
        g->esp = sp0 - 0x5cu;
        cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
        t97 = g->edx;
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
        edx = t97;
    }
    else
    {
        eax = eax + 1u;
        edi = edi - 0x12u;
        if (edi == 1u)
        {
            wr32(sp0 - 0x60u, sp0 - 0x20u);
            wr32(sp0 - 0x64u, eax);
            wr32(sp0 - 0x68u, self + 0x50u);
            g->esp = sp0 - 0x5cu;
            cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
            eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
            edx = rd32(self + 4u);
        }
        else
        {
            edi = edi - 1u;
            if (edi != 1u)
            {
                eax = rd32(sp0 + 4u);
            }
            else
            {
                wr32(sp0 - 0x60u, sp0 - 0x20u);
                wr32(sp0 - 0x64u, eax);
                wr32(sp0 - 0x68u, self + 0x50u);
                g->esp = sp0 - 0x5cu;
                cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
                t96 = g->edx;
                eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc50u);
                edx = t96;
            }
        }
    }
    if (eax == 0u) goto L_100be5f1;
    wr32(sp0 - 0x60u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t98 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t99 = g->edx;
    if (t98 != 0u)
    {
        eax = t98;
        edx = t99;
        goto L_100be1ca;
    }
    eax = t98;
    edx = t99;
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t100 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, edx, 0);
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return t100 & 0xffffff00u;
L_100be1ca: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t101 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t102 = g->ecx;
    t103 = g->edx;
    if (t101 == 0u)
    {
        edx = t103;
    }
    else
    {
        ecx = t102;
        edx = t103;
        edi = t101;
        wr32(sp0 - 0x60u, 2u);
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        g->eax = sp0 - 0x50u;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t104 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x50u, 2u);
        t105 = g->edx;
        wr8(sp0 - 0x4eu, 0u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        t106 = cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, sp0 - 0x50u);
        g->edx = rd32(edi);
        t107 = rd32(edi);
        t108 = cow_thiscall(g, rd32(t107 + 4u), edi, 0);
        t109 = g->edx;
        wr32(sp0 - 0x60u, t108);
        g->edx = t109;
        cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, t108);
        t110 = g->ecx;
        t111 = g->edx;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        g->eax = sp0 - 0x50u;
        g->edx = t111;
        t112 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x50u);
        t113 = g->edx;
        wr8(sp0 - 0x4eu, 0u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        g->edx = t113;
        cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, sp0 - 0x50u);
        t114 = g->edx;
        edx = t114;
    }
    goto L_100be5f1;
L_100be231: ;
    if (edi == 0x15u)
    {
        eax = eax + 1u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        wr32(sp0 - 0x64u, eax);
        wr32(sp0 - 0x68u, self + 0x50u);
        g->esp = sp0 - 0x5cu;
        t70 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
        t71 = g->edx;
        eax = t70;
        edx = t71;
        edi = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
    }
    else
    {
        eax = eax + 1u;
        edi = edi - 0x15u;
        if (edi == 1u)
        {
            wr32(sp0 - 0x60u, sp0 - 0x20u);
            wr32(sp0 - 0x64u, eax);
            wr32(sp0 - 0x68u, self + 0x50u);
            g->esp = sp0 - 0x5cu;
            cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
            t69 = g->edx;
            eax = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
            edx = t69;
            edi = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
        }
        else
        {
            edi = edi - 1u;
            if (edi != 1u)
            {
                edi = rd32(sp0 + 4u);
            }
            else
            {
                wr32(sp0 - 0x60u, sp0 - 0x20u);
                wr32(sp0 - 0x64u, eax);
                wr32(sp0 - 0x68u, self + 0x50u);
                g->esp = sp0 - 0x5cu;
                t68 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
                eax = t68;
                edx = rd32(self + 4u);
                edi = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc50u);
            }
        }
    }
    if (edi == 0u) goto L_100be5f1;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t72 = cow_thiscall(g, COW_IMG(0x10155550u), sp0 - 0x40u, 0);
    t73 = g->edx;
    wr32(sp0 - 0x60u, sp0 - 0x40u);
    wr32(sp0 - 0x64u, edi);
    g->esp = sp0 - 0x64u;
    t74 = cow_call_regs(g, COW_IMG(0x10153ff0u), t72, sp0 - 0x40u, t73, 1, 0);
    t75 = g->edx;
    g->edx = t75;
    g->esp = sp0 - 0x5cu;
    t76 = cow_thiscall(g, COW_IMG(0x10154a40u), t74, 2, rd32(sp0 - 0x64u), sp0 - 0x40u);
    t77 = g->ecx;
    t78 = g->edx;
    if ((uint8_t)t76 != 0u)
    {
        eax = t76;
        ecx = t77;
        goto L_100be2e4;
    }
    eax = t76;
    edx = t78;
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t79 = cow_fastcall(g, COW_IMG(0x10155500u), sp0 - 0x40u, edx, 0);
    t80 = g->edx;
    t81 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, t80, 0);
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return t81 & 0xffffff00u;
L_100be2e4: ;
    wr32(sp0 - 0x60u, 3u);
    wr32(sp0 - 0x64u, sp0 - 0x50u);
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x5cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x50u, 3u);
    t82 = g->edx;
    wr8(sp0 - 0x4eu, 0u);
    wr32(sp0 - 0x60u, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->edx = t82;
    t83 = cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, sp0 - 0x50u);
    t84 = g->edx;
    t85 = cow_thiscall(g, COW_IMG(0x10155600u), sp0 - 0x40u, 0);
    g->edx = rd32(t85);
    t86 = rd32(t85);
    t87 = cow_thiscall(g, rd32(t86 + 4u), t85, 0);
    t88 = g->edx;
    wr32(sp0 - 0x60u, t87);
    g->edx = t88;
    cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, t87);
    t89 = g->ecx;
    t90 = g->edx;
    wr32(sp0 - 0x60u, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->edx = t90;
    t91 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x50u);
    t92 = g->edx;
    wr8(sp0 - 0x4eu, 0u);
    wr32(sp0 - 0x60u, sp0 - 0x50u);
    g->edx = t92;
    t93 = cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, sp0 - 0x50u);
    t94 = g->edx;
    cow_fastcall(g, COW_IMG(0x10155500u), sp0 - 0x40u, t94, 0);
    t95 = g->edx;
    edx = t95;
    goto L_100be5f1;
L_100be34c: ;
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    t54 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t55 = g->edx;
    cow_fastcall(g, COW_IMG(0x10258c20u), sp0 - 0x40u, t55, 0);
    wr32(sp0 - 0x60u, 0u);
    t56 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
    wr32(sp0 - 0x64u, t56);
    wr32(sp0 - 0x68u, sp0 - 0x40u);
    g->eax = sp0 - 0x40u;
    g->edx = rd32(self + 4u);
    t57 = rd32(self + 4u);
    t58 = cow_thiscall(g, COW_IMG(0x10157050u), rd32(COW_IMG(0x10578768u)), 3, sp0 - 0x40u, t56, 0u);
    t59 = g->edx;
    if (t58 != 0u)
    {
        eax = t58;
        edx = t59;
        goto L_100be3aa;
    }
    eax = t58;
    edx = t59;
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t60 = cow_fastcall(g, COW_IMG(0x10258be0u), sp0 - 0x40u, edx, 0);
    t61 = g->edx;
    t62 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, t61, 0);
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return t62 & 0xffffff00u;
L_100be3aa: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t63 = cow_thiscall(g, COW_IMG(0x10258c50u), sp0 - 0x40u, 0);
    t64 = g->edx;
    wr32(sp0 - 0x60u, t63);
    g->edx = t64;
    t65 = cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t63);
    t66 = g->edx;
    cow_fastcall(g, COW_IMG(0x10258be0u), sp0 - 0x40u, t66, 0);
    t67 = g->edx;
    edx = t67;
    goto L_100be5f1;
L_100be3c7: ;
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax + 1u, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t49 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc50u);
    wr32(sp0 - 0x60u, t49);
    t50 = rd16(sp0 - 0x20u);
    t51 = cow_call_regs(g, COW_IMG(0x10227330u), (uint32_t)(int16_t)t50, rd32(COW_IMG(0x106671b4u)), t49, 0, 1, t49);
    t52 = g->edx;
    wr32(sp0 - 0x60u, t51);
    g->edx = t52;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t51);
    t53 = g->edx;
    edx = t53;
    goto L_100be5f1;
L_100be404: ;
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax + 1u, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t44 = g->edx;
    t45 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
    wr32(sp0 - 0x60u, t45);
    g->eax = t45;
    g->edx = t44;
    t46 = cow_thiscall(g, COW_IMG(0x101673d0u), rd32(COW_IMG(0x10621950u)), 1, t45);
    t47 = g->edx;
    wr32(sp0 - 0x60u, t46);
    g->edx = t47;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t46);
    t48 = g->edx;
    edx = t48;
    goto L_100be5f1;
L_100be441: ;
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    t38 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t39 = g->edx;
    t40 = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
    wr32(sp0 - 0x6cu, t40);
    wr32(sp0 - 0x70u, 0x14u);
    g->edx = t39;
    g->esp = sp0 - 0x68u;
    t41 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, t40);
    t42 = g->edx;
    wr32(sp0 - 0x60u, t41);
    g->edx = t42;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t41);
    t43 = g->edx;
    edx = t43;
    goto L_100be5f1;
L_100be470: ;
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t33 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
    wr32(sp0 - 0x6cu, t33);
    wr32(sp0 - 0x70u, 0x14u);
    g->eax = t33;
    g->edx = rd32(self + 4u);
    t34 = rd32(self + 4u);
    g->esp = sp0 - 0x68u;
    t35 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, t33);
    t36 = g->edx;
    wr32(sp0 - 0x60u, t35);
    g->edx = t36;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t35);
    t37 = g->edx;
    edx = t37;
    goto L_100be5f1;
L_100be4a9: ;
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax + 1u, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t18 = g->edx;
    if (edi == 0x1du)
    {
        edx = t18;
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
    }
    else
    {
        edx = t18;
        edi = edi - 0x1du;
        if (edi == 1u)
        {
            eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
            edx = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
        }
        else
        {
            edi = edi - 1u;
            if (edi != 1u)
            {
                eax = rd32(sp0 + 4u);
            }
            else
            {
                eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc50u);
            }
        }
    }
    wr32(sp0 - 0x60u, eax + 0xe000u);
    g->eax = eax + 0xe000u;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t19 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax + 0xe000u);
    t20 = g->edx;
    if (t19 != 0u)
    {
        eax = t19;
        edx = t20;
        goto L_100be51d;
    }
    eax = t19;
    edx = t20;
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t21 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, edx, 0);
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return t21 & 0xffffff00u;
L_100be51d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t22 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t23 = g->edx;
    if (t22 == 0u)
    {
        edx = t23;
    }
    else
    {
        eax = t22;
        edx = t23;
        edi = t22;
        wr32(sp0 - 0x60u, 8u);
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        g->eax = eax;
        g->esp = sp0 - 0x5cu;
        t24 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x50u, 2, sp0 - 0x50u, 8u);
        wr8(sp0 - 0x4eu, 0u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        g->edx = sp0 - 0x50u;
        cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, sp0 - 0x50u);
        t25 = g->edx;
        g->eax = rd32(edi);
        g->edx = t25;
        t26 = rd32(edi);
        t27 = cow_thiscall(g, rd32(t26 + 4u), edi, 0);
        t28 = g->edx;
        wr32(sp0 - 0x60u, t27);
        g->edx = t28;
        t29 = cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, t27);
        t30 = g->edx;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        t31 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x50u);
        wr8(sp0 - 0x4eu, 0u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        g->edx = sp0 - 0x50u;
        cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, sp0 - 0x50u);
        t32 = g->edx;
        edx = t32;
    }
    goto L_100be5f1;
L_100be581: ;
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax + 1u, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t6 = g->edx;
    t7 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
    wr32(sp0 - 0x60u, t7);
    g->eax = t7;
    g->edx = t6;
    t8 = cow_thiscall(g, COW_IMG(0x101c8150u), COW_IMG(0x10489948u), 1, t7);
    t9 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        goto L_100be5c6;
    }
    eax = t8;
    edx = t9;
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t10 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, edx, 0);
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return t10 & 0xffffff00u;
L_100be5c6: ;
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, eax);
    wr32(sp0 - 0x68u, sp0 - 0x30u);
    g->eax = eax;
    g->edx = sp0 - 0x30u;
    g->esp = sp0 - 0x64u;
    t11 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0x30u);
    t12 = g->edx;
    g->edx = t12;
    g->esp = sp0 - 0x5cu;
    t13 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x64u), 0u);
    t14 = g->edx;
    wr32(sp0 - 0x60u, t13);
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t13);
    t16 = g->edx;
    cow_call_regs(g, COW_IMG(0x10257b40u), t15, sp0 - 0x30u, t16, 1, 0);
    t17 = g->edx;
    edx = t17;
    goto L_100be5f1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100be060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100be060(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
