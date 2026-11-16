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
    uint32_t loc_50;
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
    uint32_t t128;
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
    t4 = rd32(sp0 - 0x50u);
    wr8(sp0 + 4u, rd8(t3));
    if ((uint8_t)rd32(sp0 + 4u) - 0xau > 0x15u)
    {
        edx = t2;
        loc_50 = t4 & 0xff000000u;
        goto L_100be5f1;
    }
    eax = t3;
    ecx = (uint8_t)rd32(sp0 + 4u) - 0xau;
    edi = (uint8_t)rd32(sp0 + 4u);
    loc_50 = t4 & 0xff000000u;
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
    t118 = rd32(self + 0x10u);
    wr32(sp0 - 0x60u, t118);
    g->edx = t118;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t118);
    t119 = g->edx;
    edx = t119;
L_100be5f1: ;
    t122 = rd32(self + 0xcu);
    wr32(sp0 - 0x60u, t122);
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t123 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0x4cu, 0);
    t124 = g->edx;
    wr32(sp0 - 0x64u, t123);
    t125 = rd32(self + 0x704u);
    wr32(sp0 - 0x68u, t125);
    g->edx = t124;
    g->esp = sp0 - 0x44u;
    t126 = cow_call_regs(g, COW_IMG(0x100c2bf0u), t123, t125, g->edx, 1, 9, t125, t123, rd32(sp0 - 0x60u), in_edi, in_esi, in_ebx, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
    t127 = g->edx;
    wr32(self + 0x704u, t126);
    wr32(self + 0xcu, 0u);
    g->esp = sp0 - 0x5cu;
    t128 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, t127, 0);
    return (t128 & 0xffffff00u) | 1u;
L_100be0d7: ;
    if (rd16(eax + 0x210u) == 0u)
    {
        wr32(sp0 - 0x60u, eax + 0x7cu);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, eax + 0x7cu);
        t121 = g->edx;
        edx = t121;
    }
    else
    {
        wr32(sp0 - 0x60u, eax + 0x214u);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, eax + 0x214u);
        t120 = g->edx;
        edx = t120;
    }
    goto L_100be5f1;
L_100be0f4: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xc00u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xc00u) * 4u);
        goto L_100be0d7;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xc00u) * 4u);
    t116 = rd32(self + 0x14u);
    wr32(sp0 - 0x60u, t116);
    g->edx = t116;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t116);
    t117 = g->edx;
    edx = t117;
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
        t96 = g->edx;
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
        edx = t96;
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
                t95 = g->edx;
                eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc50u);
                edx = t95;
            }
        }
    }
    if (eax == 0u) goto L_100be5f1;
    wr32(sp0 - 0x60u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t97 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t98 = g->edx;
    if (t97 != 0u)
    {
        eax = t97;
        edx = t98;
        goto L_100be1ca;
    }
    eax = t97;
    edx = t98;
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t99 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, edx, 0);
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return t99 & 0xffffff00u;
L_100be1ca: ;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t100 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t101 = g->ecx;
    t102 = g->edx;
    if (t100 == 0u)
    {
        edx = t102;
    }
    else
    {
        ecx = t101;
        edx = t102;
        edi = t100;
        wr32(sp0 - 0x60u, 2u);
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t103 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x50u, 2u);
        t104 = g->edx;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        t105 = rd32(sp0 - 0x50u);
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
        g->edx = t111;
        t112 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x50u);
        t113 = g->edx;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        g->edx = t113;
        t114 = rd32(sp0 - 0x50u);
        cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, sp0 - 0x50u);
        t115 = g->edx;
        edx = t115;
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
        cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
        t69 = g->edx;
        edx = t69;
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
            t68 = g->edx;
            edx = t68;
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
                cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
                edx = rd32(self + 4u);
                edi = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc50u);
            }
        }
    }
    if (edi == 0u) goto L_100be5f1;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t70 = cow_thiscall(g, COW_IMG(0x10155550u), sp0 - 0x40u, 0);
    t71 = g->edx;
    wr32(sp0 - 0x60u, sp0 - 0x40u);
    wr32(sp0 - 0x64u, edi);
    g->esp = sp0 - 0x64u;
    t72 = cow_call_regs(g, COW_IMG(0x10153ff0u), t70, sp0 - 0x40u, t71, 1, 0);
    t73 = g->edx;
    g->edx = t73;
    g->esp = sp0 - 0x5cu;
    t74 = cow_thiscall(g, COW_IMG(0x10154a40u), t72, 2, rd32(sp0 - 0x64u), sp0 - 0x40u);
    t75 = g->ecx;
    t76 = g->edx;
    if ((uint8_t)t74 != 0u)
    {
        ecx = t75;
        goto L_100be2e4;
    }
    eax = t74;
    edx = t76;
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t77 = cow_fastcall(g, COW_IMG(0x10155500u), sp0 - 0x40u, edx, 0);
    t78 = g->edx;
    t79 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, t78, 0);
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return t79 & 0xffffff00u;
L_100be2e4: ;
    wr32(sp0 - 0x60u, 3u);
    wr32(sp0 - 0x64u, sp0 - 0x50u);
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x5cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x50u, 3u);
    t80 = g->edx;
    wr32(sp0 - 0x60u, sp0 - 0x50u);
    g->edx = t80;
    t81 = rd32(sp0 - 0x50u);
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, sp0 - 0x50u);
    t82 = g->edx;
    t83 = cow_thiscall(g, COW_IMG(0x10155600u), sp0 - 0x40u, 0);
    g->edx = rd32(t83);
    t84 = rd32(t83);
    t85 = cow_thiscall(g, rd32(t84 + 4u), t83, 0);
    t86 = g->edx;
    wr32(sp0 - 0x60u, t85);
    g->edx = t86;
    cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, t85);
    t87 = g->ecx;
    t88 = g->edx;
    wr32(sp0 - 0x60u, sp0 - 0x50u);
    g->edx = t88;
    t89 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x50u);
    t90 = g->edx;
    wr32(sp0 - 0x60u, sp0 - 0x50u);
    g->edx = t90;
    t91 = rd32(sp0 - 0x50u);
    t92 = cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, sp0 - 0x50u);
    t93 = g->edx;
    cow_fastcall(g, COW_IMG(0x10155500u), sp0 - 0x40u, t93, 0);
    t94 = g->edx;
    edx = t94;
    goto L_100be5f1;
L_100be34c: ;
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t55 = g->edx;
    cow_fastcall(g, COW_IMG(0x10258c20u), sp0 - 0x40u, t55, 0);
    wr32(sp0 - 0x60u, 0u);
    t56 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
    wr32(sp0 - 0x64u, t56);
    wr32(sp0 - 0x68u, sp0 - 0x40u);
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
    t50 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc50u);
    wr32(sp0 - 0x60u, t50);
    t51 = rd16(sp0 - 0x20u);
    t52 = cow_call_regs(g, COW_IMG(0x10227330u), (uint32_t)(int16_t)t51, rd32(COW_IMG(0x106671b4u)), t50, 0, 1, t50);
    t53 = g->edx;
    wr32(sp0 - 0x60u, t52);
    g->edx = t53;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t52);
    t54 = g->edx;
    edx = t54;
    goto L_100be5f1;
L_100be404: ;
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax + 1u, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t45 = g->edx;
    t46 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
    wr32(sp0 - 0x60u, t46);
    g->eax = t46;
    g->edx = t45;
    t47 = cow_stdcall(g, COW_IMG(0x101673d0u), 1, t46);
    t48 = g->edx;
    wr32(sp0 - 0x60u, t47);
    g->edx = t48;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t47);
    t49 = g->edx;
    edx = t49;
    goto L_100be5f1;
L_100be441: ;
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    t39 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t40 = g->edx;
    t41 = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
    wr32(sp0 - 0x6cu, t41);
    wr32(sp0 - 0x70u, 0x14u);
    g->edx = t40;
    g->esp = sp0 - 0x68u;
    t42 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, t41);
    t43 = g->edx;
    wr32(sp0 - 0x60u, t42);
    g->edx = t43;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t42);
    t44 = g->edx;
    edx = t44;
    goto L_100be5f1;
L_100be470: ;
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t34 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
    wr32(sp0 - 0x6cu, t34);
    wr32(sp0 - 0x70u, 0x14u);
    g->eax = t34;
    g->edx = rd32(self + 4u);
    t35 = rd32(self + 4u);
    g->esp = sp0 - 0x68u;
    t36 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, t34);
    t37 = g->edx;
    wr32(sp0 - 0x60u, t36);
    g->edx = t37;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t36);
    t38 = g->edx;
    edx = t38;
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
        edx = t23;
        edi = t22;
        wr32(sp0 - 0x60u, 8u);
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        g->esp = sp0 - 0x5cu;
        t24 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x50u, 2, sp0 - 0x50u, 8u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        g->edx = sp0 - 0x50u;
        t25 = rd32(sp0 - 0x50u);
        cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, sp0 - 0x50u);
        t26 = g->edx;
        g->eax = rd32(edi);
        g->edx = t26;
        t27 = rd32(edi);
        t28 = cow_thiscall(g, rd32(t27 + 4u), edi, 0);
        t29 = g->edx;
        wr32(sp0 - 0x60u, t28);
        g->edx = t29;
        cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, t28);
        t30 = g->edx;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        t31 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        g->edx = sp0 - 0x50u;
        t32 = rd32(sp0 - 0x50u);
        cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, sp0 - 0x50u);
        t33 = g->edx;
        edx = t33;
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
