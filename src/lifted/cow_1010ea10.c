/* f_0x1010ea10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=14 */
uint32_t cow_fn_1010ea10(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1020;
    uint32_t loc_102c;
    uint32_t loc_103c;
    uint32_t loc_1048;
    uint32_t loc_1050;
    uint32_t loc_1058;
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
    uint32_t t129;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 4224u);

    wr32(sp0 - 0x105cu, in_ebx);
    wr32(sp0 - 0x1060u, in_ebp);
    wr32(sp0 - 0x1064u, in_esi);
    wr32(sp0 - 0x1068u, in_edi);
    wr32(sp0 - 0x1040u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x1068u;
    t1 = cow_thiscall(g, COW_IMG(0x1010d220u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x1058u, t1);
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        loc_1058 = t1;
        goto L_1010ea43;
    }
    return 1u;
L_1010ea43: ;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t4 = cow_stdcall(g, COW_IMG(0x1010f8a0u), 0);
    t5 = g->edx;
    wr32(sp0 - 0x1050u, t4);
    if (t4 == 0u)
    {
        edx = t5;
        ebx = in_ebx;
        edi = self;
        goto L_1010f048;
    }
    edx = t5;
    loc_1050 = t4;
    wr32(sp0 - 0x1048u, 0u);
    t6 = rd32(esi + 0x54u);
    wr32(sp0 - 0x1020u, t6);
    eax = t6;
    ebx = in_ebx;
    edi = self;
    loc_1048 = 0u;
    loc_1020 = t6;
L_1010ea63: ;
    if (rd32(eax + 4u) == 0u) goto L_1010f048;
    if (rd32(eax + 8u) == 0u) goto L_1010f048;
    ecx = rd32(eax + 8u);
    if ((uint16_t)loc_1048 != rd16(edi + 0x46u)) goto L_1010eb66;
    ecx = (ecx & 0xffff0000u) | (uint16_t)loc_1048;
    if (rd8(rd32(eax) + 0x18u) == 0u) goto L_1010eb50;
    eax = rd32(eax);
    if (rd32(eax + 0xcu) != 0u) goto L_1010eb7c;
    wr32(sp0 - 0x103cu, 0u);
    t7 = rd32(loc_1050 + 0x10u);
    wr32(sp0 - 0x102cu, t7);
    edx = loc_1050;
    loc_103c = 0u;
    loc_102c = t7;
L_1010eab3: ;
    if (rd32(loc_102c + 4u) == 0u) goto L_1010eb50;
    ecx = loc_102c;
    if (rd32(ecx + 8u) == 0u)
    {
        edx = ecx;
        goto L_1010eb50;
    }
    edx = ecx;
    eax = rd32(loc_1020);
    ecx = rd32(loc_1020);
    ebx = rd32(edx);
    ebp = rd32(edx) - rd32(loc_1020);
    edi = 0u;
L_1010eadf: ;
    if (rd32(eax + ebp) > rd32(eax)) goto L_1010eaf3;
    cf = rd32(eax + ebp) < rd32(eax);
    if (cf) goto L_1010eb38;
    if ((int32_t)(edi + 1u) < 3)
    {
        eax = eax + 4u;
        edi = edi + 1u;
        goto L_1010eadf;
    }
L_1010eaf3: ;
    eax = ecx;
    esi = 0u;
    edi = ebx - ecx;
L_1010eafb: ;
    if (rd32(eax + edi) > rd32(eax))
    {
        edx = rd32(eax);
        goto L_1010eb50;
    }
    edx = rd32(eax);
    cf = rd32(eax + edi) < rd32(eax);
    if (cf) goto L_1010eb0f;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010eafb;
    }
    eax = eax + 4u;
L_1010eb0f: ;
    if ((uint16_t)loc_103c != rd16(rd32(sp0 - 0x1040u) + 0x48u)) goto L_1010eb38;
    ebp = rd32(sp0 - 0x1040u);
    wr32(sp0 - 0x106cu, ebx + 0xcu);
    wr32(sp0 - 0x1070u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t8 = cow_thiscall(g, COW_IMG(0x101116b0u), rd32(sp0 - 0x1058u), 2, ebx, ebx + 0xcu);
    t9 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        edx = t9;
        goto L_1010ee4f;
    }
    wr16(ebp + 0x48u, (uint16_t)(rd16(ebp + 0x48u) + 1u));
L_1010eb38: ;
    if (rd32(loc_102c + 8u) == 0u)
    {
        edx = loc_102c;
    }
    else
    {
        eax = rd32(loc_102c + 8u);
        edx = loc_102c;
        wr32(sp0 - 0x102cu, eax);
        loc_102c = eax;
    }
    wr32(sp0 - 0x103cu, loc_103c + 1u);
    loc_103c = loc_103c + 1u;
    goto L_1010eab3;
L_1010eb50: ;
    t100 = rd32(sp0 - 0x1040u);
    wr16(t100 + 0x46u, (uint16_t)(rd16(t100 + 0x46u) + 1u));
    wr16(t100 + 0x48u, 0u);
    eax = loc_1020;
    edi = t100;
L_1010eb66: ;
    if (rd32(eax + 8u) != 0u)
    {
        ecx = rd32(eax + 8u);
        wr32(sp0 - 0x1020u, ecx);
        eax = ecx;
        loc_1020 = ecx;
    }
    wr32(sp0 - 0x1048u, loc_1048 + 1u);
    loc_1048 = loc_1048 + 1u;
    goto L_1010ea63;
L_1010eb7c: ;
    t50 = rd32(loc_1050 + 0x10u);
    wr32(sp0 - 0x102cu, t50);
    t51 = rd32(loc_1020) + 0xcu;
    wr32(sp0 - 0x1050u, t51);
    eax = t50;
    ebp = rd32(loc_1020);
    loc_1050 = t51;
    loc_102c = t50;
L_1010eb94: ;
    if (rd32(eax + 4u) == 0u) goto L_1010ee3a;
    t52 = rd32(eax + 8u);
    wr32(sp0 - 0x1058u, t52);
    if (rd32(eax + 8u) == 0u) goto L_1010ee3a;
    loc_1058 = t52;
    ebx = rd32(eax);
    esi = 0u;
    edi = rd32(eax) - ebp;
    eax = ebp;
L_1010ebb8: ;
    if (rd32(eax + edi) > rd32(eax)) goto L_1010ebd0;
    cf = rd32(eax + edi) < rd32(eax);
    if (cf) goto L_1010ed36;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010ebb8;
    }
L_1010ebd0: ;
    eax = ebp;
    esi = 0u;
    edi = ebx - ebp;
L_1010ebd8: ;
    if (rd32(eax + edi) > rd32(eax)) goto L_1010ee3a;
    cf = rd32(eax + edi) < rd32(eax);
    if (cf) goto L_1010ebf0;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010ebd8;
    }
L_1010ebf0: ;
    eax = ebx + 0xcu;
    esi = 0u;
    edi = loc_1050 - (ebx + 0xcu);
L_1010ebfb: ;
    if (rd32(eax) > rd32(eax + edi)) goto L_1010ec13;
    cf = rd32(eax) < rd32(eax + edi);
    if (cf) goto L_1010ed36;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010ebfb;
    }
L_1010ec13: ;
    eax = rd32(loc_102c) + 0xcu;
    ebx = rd32(loc_102c);
    ebp = loc_102c;
    esi = 0u;
    edi = loc_1050 - (rd32(loc_102c) + 0xcu);
L_1010ec25: ;
    if (rd32(eax) > rd32(eax + edi)) goto L_1010ee3a;
    edx = rd32(eax + edi);
    cf = rd32(eax) < rd32(eax + edi);
    if (cf) goto L_1010ec3d;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010ec25;
    }
L_1010ec3d: ;
    if (rd32(ebx + 0x1cu) == 0u) goto L_1010ed43;
    g->edx = edx;
    t53 = rd32(ebp);
    g->esp = sp0 - 0x1068u;
    t54 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
    t55 = g->edx;
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    cow_thiscall(g, COW_IMG(0x1010c4d0u), t53, 1, sp0 - 0x1058u);
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    g->edx = sp0 - 0x1058u;
    t56 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x103cu, 1, sp0 - 0x1058u);
    t57 = g->edx;
    g->edx = t57;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
    t58 = g->edx;
    g->edx = t58;
    t59 = rd32(ebp);
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
    t60 = g->edx;
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    g->edx = t60;
    cow_thiscall(g, COW_IMG(0x1010c4d0u), t59 + 0xcu, 1, sp0 - 0x1058u);
    t61 = g->edx;
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    g->edx = t61;
    t62 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x1048u, 1, sp0 - 0x1058u);
    t63 = g->edx;
    g->edx = t63;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
    t64 = g->edx;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1050u, 0);
    if (rd32(sp0 - 0x1044u) == 0u) goto L_1010ecc1;
    eax = rd32(sp0 - 0x1044u);
    t65 = rd32(eax + 4u);
    if (rd32(eax + 4u) != 0u)
    {
        edx = t65;
        goto L_1010ecc6;
    }
L_1010ecc1: ;
    edx = COW_IMG(0x103d3c84u);
L_1010ecc6: ;
    if (rd32(sp0 - 0x1038u) == 0u) goto L_1010ecd5;
    eax = rd32(sp0 - 0x1038u);
    if (rd32(eax + 4u) != 0u)
    {
        ecx = rd32(eax + 4u);
        goto L_1010ecda;
    }
L_1010ecd5: ;
    ecx = COW_IMG(0x103d3c84u);
L_1010ecda: ;
    wr32(sp0 - 0x106cu, sp0 - 0x1050u);
    wr32(sp0 - 0x1070u, edx);
    wr32(sp0 - 0x1074u, ecx);
    t66 = rd32(rd32(ebp) + 0x18u);
    wr32(sp0 - 0x1078u, t66);
    g->esp = sp0 - 0x1068u;
    cow_thiscall_cdecl(g, rd32(rd32(ebp) + 0x1cu), ecx, 4, t66, ecx, edx, sp0 - 0x1050u);
    wr32(sp0 - 0x106cu, sp0 - 0x1050u);
    wr32(sp0 - 0x1070u, sp0 - 0x1048u);
    wr32(sp0 - 0x1074u, sp0 - 0x103cu);
    g->eax = sp0 - 0x1050u;
    g->edx = sp0 - 0x103cu;
    t67 = cow_thiscall(g, COW_IMG(0x1010d5e0u), rd32(sp0 - 0x1040u), 3, sp0 - 0x103cu, sp0 - 0x1048u, sp0 - 0x1050u);
    t68 = g->edx;
    g->edx = t68;
    t69 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1050u, 0);
    t70 = g->edx;
    g->edx = t70;
    t71 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1048u, 0);
    t72 = g->edx;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x103cu, 0);
    t73 = rd32(sp0 - 0x1060u);
    t74 = rd32(sp0 - 0x1064u);
    t75 = rd32(sp0 - 0x1068u);
    wr16(rd32(sp0 - 0x1040u) + 0x46u, (uint16_t)(rd16(rd32(sp0 - 0x1040u) + 0x46u) + 1u));
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = t74;
    g->edi = t75;
    g->ebp = t73;
    return 0u;
L_1010ed36: ;
    wr32(sp0 - 0x102cu, loc_1058);
    eax = loc_1058;
    loc_102c = loc_1058;
    goto L_1010eb94;
L_1010ed43: ;
    if (rd32(ebx + 0x20u) != 0u)
    {
        g->edx = edx;
        t76 = rd32(ebp);
        g->esp = sp0 - 0x1068u;
        cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
        t77 = g->edx;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->edx = t77;
        cow_thiscall(g, COW_IMG(0x1010c4d0u), t76, 1, sp0 - 0x1058u);
        t78 = g->edx;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->edx = t78;
        t79 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x1048u, 1, sp0 - 0x1058u);
        t80 = g->edx;
        g->edx = t80;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
        t81 = g->edx;
        t82 = rd32(ebp);
        t83 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->edx = sp0 - 0x1058u;
        cow_thiscall(g, COW_IMG(0x1010c4d0u), t82 + 0xcu, 1, sp0 - 0x1058u);
        t84 = g->edx;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->edx = t84;
        t85 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x1050u, 1, sp0 - 0x1058u);
        t86 = g->edx;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
        if (rd32(sp0 - 0x104cu) == 0u) goto L_1010edc3;
        eax = rd32(sp0 - 0x104cu);
        t87 = rd32(eax + 4u);
        if (rd32(eax + 4u) != 0u)
        {
            edx = t87;
            goto L_1010edc8;
        }
L_1010edc3: ;
        edx = COW_IMG(0x103d3c84u);
L_1010edc8: ;
        if (rd32(sp0 - 0x1044u) == 0u) goto L_1010edd7;
        eax = rd32(sp0 - 0x1044u);
        if (rd32(eax + 4u) != 0u)
        {
            ecx = rd32(eax + 4u);
            goto L_1010eddc;
        }
L_1010edd7: ;
        ecx = COW_IMG(0x103d3c84u);
L_1010eddc: ;
        wr32(sp0 - 0x106cu, 0x1000u);
        wr32(sp0 - 0x1070u, sp0 - 0x1000u);
        wr32(sp0 - 0x1074u, edx);
        wr32(sp0 - 0x1078u, ecx);
        t88 = rd32(rd32(ebp) + 0x18u);
        wr32(sp0 - 0x107cu, t88);
        g->esp = sp0 - 0x1068u;
        cow_thiscall_cdecl(g, rd32(rd32(ebp) + 0x20u), t88, 5, t88, ecx, edx, sp0 - 0x1000u, 0x1000u);
        wr32(sp0 - 0x106cu, sp0 - 0x1000u);
        g->edx = sp0 - 0x1000u;
        t89 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x1058u, 1, sp0 - 0x1000u);
        t90 = g->edx;
        wr32(sp0 - 0x106cu, t89);
        wr32(sp0 - 0x1070u, sp0 - 0x1050u);
        wr32(sp0 - 0x1074u, sp0 - 0x1048u);
        g->eax = sp0 - 0x1050u;
        g->edx = t90;
        t91 = cow_thiscall(g, COW_IMG(0x1010d5e0u), rd32(sp0 - 0x1040u), 3, sp0 - 0x1048u, sp0 - 0x1050u, t89);
        t92 = g->edx;
        g->edx = t92;
        t93 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
        t94 = g->edx;
        g->edx = t94;
        t95 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1050u, 0);
        t96 = g->edx;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1048u, 0);
    }
L_1010ee3a: ;
    t97 = rd32(sp0 - 0x1060u);
    t98 = rd32(sp0 - 0x1064u);
    t99 = rd32(sp0 - 0x1068u);
    wr16(rd32(sp0 - 0x1040u) + 0x46u, (uint16_t)(rd16(rd32(sp0 - 0x1040u) + 0x46u) + 1u));
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = t98;
    g->edi = t99;
    g->ebp = t97;
    return 0u;
L_1010ee4f: ;
    if (rd32(rd32(rd32(sp0 - 0x102cu)) + 0x1cu) == 0u)
    {
        eax = rd32(rd32(sp0 - 0x102cu));
        esi = rd32(sp0 - 0x102cu);
        goto L_1010ef45;
    }
    eax = rd32(rd32(sp0 - 0x102cu));
    esi = rd32(sp0 - 0x102cu);
    g->esp = sp0 - 0x1068u;
    t10 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    g->edx = sp0 - 0x1058u;
    cow_thiscall(g, COW_IMG(0x1010c4d0u), eax, 1, sp0 - 0x1058u);
    t11 = g->edx;
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x103cu, 1, sp0 - 0x1058u);
    t13 = g->edx;
    g->edx = t13;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
    t14 = g->edx;
    g->edx = t14;
    t15 = rd32(esi);
    t16 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
    t17 = g->edx;
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    cow_thiscall(g, COW_IMG(0x1010c4d0u), t15 + 0xcu, 1, sp0 - 0x1058u);
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    g->edx = sp0 - 0x1058u;
    t18 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x1048u, 1, sp0 - 0x1058u);
    t19 = g->edx;
    g->edx = t19;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
    t20 = g->edx;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1050u, 0);
    if (rd32(sp0 - 0x1044u) == 0u) goto L_1010eed7;
    eax = rd32(sp0 - 0x1044u);
    t21 = rd32(eax + 4u);
    if (rd32(eax + 4u) != 0u)
    {
        ecx = t21;
        goto L_1010eedc;
    }
L_1010eed7: ;
    ecx = COW_IMG(0x103d3c84u);
L_1010eedc: ;
    if (rd32(sp0 - 0x1038u) == 0u) goto L_1010eeeb;
    eax = rd32(sp0 - 0x1038u);
    if (rd32(eax + 4u) != 0u)
    {
        eax = rd32(eax + 4u);
        goto L_1010eef0;
    }
L_1010eeeb: ;
    eax = COW_IMG(0x103d3c84u);
L_1010eef0: ;
    wr32(sp0 - 0x106cu, sp0 - 0x1050u);
    wr32(sp0 - 0x1070u, ecx);
    wr32(sp0 - 0x1074u, eax);
    t22 = rd32(rd32(esi) + 0x18u);
    wr32(sp0 - 0x1078u, t22);
    g->esp = sp0 - 0x1068u;
    cow_thiscall_cdecl(g, rd32(rd32(esi) + 0x1cu), ecx, 4, t22, eax, ecx, sp0 - 0x1050u);
    wr32(sp0 - 0x106cu, sp0 - 0x1050u);
    wr32(sp0 - 0x1070u, sp0 - 0x1048u);
    wr32(sp0 - 0x1074u, sp0 - 0x103cu);
    g->eax = sp0 - 0x103cu;
    g->edx = sp0 - 0x1048u;
    t23 = cow_thiscall(g, COW_IMG(0x1010d5e0u), ebp, 3, sp0 - 0x103cu, sp0 - 0x1048u, sp0 - 0x1050u);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1050u, 0);
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1048u, 0);
    t28 = g->edx;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x103cu, 0);
    wr16(ebp + 0x48u, (uint16_t)(rd16(ebp + 0x48u) + 1u));
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = rd32(sp0 - 0x1064u);
    g->edi = rd32(sp0 - 0x1068u);
    g->ebp = rd32(sp0 - 0x1060u);
    return 0u;
L_1010ef45: ;
    if (rd32(eax + 0x20u) != 0u)
    {
        g->edx = edx;
        t29 = rd32(esi);
        g->esp = sp0 - 0x1068u;
        t30 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
        t31 = g->edx;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        cow_thiscall(g, COW_IMG(0x1010c4d0u), t29, 1, sp0 - 0x1058u);
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->edx = sp0 - 0x1058u;
        t32 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x1048u, 1, sp0 - 0x1058u);
        t33 = g->edx;
        g->edx = t33;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
        t34 = g->edx;
        g->edx = t34;
        t35 = rd32(esi);
        cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
        t36 = g->edx;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->edx = t36;
        cow_thiscall(g, COW_IMG(0x1010c4d0u), t35 + 0xcu, 1, sp0 - 0x1058u);
        t37 = g->edx;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->edx = t37;
        t38 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x1050u, 1, sp0 - 0x1058u);
        t39 = g->edx;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
        if (rd32(sp0 - 0x104cu) == 0u) goto L_1010efc3;
        eax = rd32(sp0 - 0x104cu);
        t40 = rd32(eax + 4u);
        if (rd32(eax + 4u) != 0u)
        {
            edx = t40;
            goto L_1010efc8;
        }
L_1010efc3: ;
        edx = COW_IMG(0x103d3c84u);
L_1010efc8: ;
        if (rd32(sp0 - 0x1044u) == 0u) goto L_1010efd7;
        eax = rd32(sp0 - 0x1044u);
        if (rd32(eax + 4u) != 0u)
        {
            ecx = rd32(eax + 4u);
            goto L_1010efdc;
        }
L_1010efd7: ;
        ecx = COW_IMG(0x103d3c84u);
L_1010efdc: ;
        wr32(sp0 - 0x106cu, 0x1000u);
        wr32(sp0 - 0x1070u, sp0 - 0x1000u);
        wr32(sp0 - 0x1074u, edx);
        wr32(sp0 - 0x1078u, ecx);
        t41 = rd32(rd32(esi) + 0x18u);
        wr32(sp0 - 0x107cu, t41);
        g->edx = t41;
        g->esp = sp0 - 0x1068u;
        cow_thiscall_cdecl(g, rd32(rd32(esi) + 0x20u), ecx, 5, t41, ecx, edx, sp0 - 0x1000u, 0x1000u);
        t42 = g->edx;
        wr32(sp0 - 0x106cu, sp0 - 0x1000u);
        t43 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x1058u, 1, sp0 - 0x1000u);
        wr32(sp0 - 0x106cu, t43);
        wr32(sp0 - 0x1070u, sp0 - 0x1050u);
        wr32(sp0 - 0x1074u, sp0 - 0x1048u);
        g->edx = sp0 - 0x1048u;
        t44 = cow_thiscall(g, COW_IMG(0x1010d5e0u), ebp, 3, sp0 - 0x1048u, sp0 - 0x1050u, t43);
        t45 = g->edx;
        g->edx = t45;
        t46 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
        t47 = g->edx;
        g->edx = t47;
        t48 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1050u, 0);
        t49 = g->edx;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1048u, 0);
    }
    wr16(ebp + 0x48u, (uint16_t)(rd16(ebp + 0x48u) + 1u));
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = rd32(sp0 - 0x1064u);
    g->edi = rd32(sp0 - 0x1068u);
    g->ebp = rd32(sp0 - 0x1060u);
    return 0u;
L_1010f048: ;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t101 = cow_thiscall(g, COW_IMG(0x1010f210u), edi, 0);
    t102 = g->edx;
    if ((uint8_t)t101 != 0u)
    {
        edx = t102;
        goto L_1010f06f;
    }
    edx = t102;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t103 = cow_thiscall(g, COW_IMG(0x1010f1c0u), edi, 0);
    t104 = g->edx;
    if ((uint16_t)t103 != 0u)
    {
        edx = t104;
        goto L_1010f06f;
    }
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = rd32(sp0 - 0x1064u);
    g->edi = rd32(sp0 - 0x1068u);
    g->ebp = rd32(sp0 - 0x1060u);
    return 1u;
L_1010f06f: ;
    wr32(sp0 - 0x106cu, 0u);
    wr32(sp0 - 0x1070u, 1u);
    wr32(sp0 - 0x1074u, 2u);
    wr32(sp0 - 0x1078u, edi);
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t105 = cow_thiscall(g, COW_IMG(0x1010f3a0u), sp0 - 0x101cu, 4, edi, 2u, 1u, 0u);
    t106 = g->edx;
    g->edx = t106;
    t107 = cow_call_regs(g, COW_IMG(0x1010f510u), t105, sp0 - 0x101cu, g->edx, 1, 0);
    t108 = g->edx;
    if ((uint8_t)t107 != 0u)
    {
        eax = t107;
        edx = t108;
        goto L_1010f10b;
    }
    eax = t107;
    edx = t108;
    edi = rd32(sp0 - 0x1040u);
L_1010f090: ;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t109 = cow_call_regs(g, COW_IMG(0x101124b0u), eax, sp0 - 0x1018u, g->edx, 1, 0);
    t110 = g->edx;
    if (rd32(t109 + 0x28u) == 0u)
    {
        eax = t109;
        edx = t110;
        goto L_1010f0f5;
    }
    eax = t109;
    edx = t110;
    esi = rd32(t109 + 0x28u);
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t111 = cow_call_regs(g, COW_IMG(0x1010a780u), eax, esi, g->edx, 1, 0);
    t112 = g->edx;
    if ((uint8_t)t111 != 0u)
    {
        eax = t111;
        edx = t112;
        goto L_1010f0f5;
    }
    edx = t112;
    wr32(sp0 - 0x106cu, esi + 0xcu);
    wr32(sp0 - 0x1070u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t113 = cow_thiscall(g, COW_IMG(0x1010d8e0u), edi, 2, esi, esi + 0xcu);
    t114 = g->edx;
    if (t113 == 0u)
    {
        eax = t113;
        edx = t114;
        goto L_1010f0f5;
    }
    eax = t113;
    edx = t114;
    wr32(sp0 - 0x106cu, eax);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t115 = cow_thiscall(g, COW_IMG(0x1010ad90u), esi, 1, eax);
    t116 = g->edx;
    if ((uint8_t)t115 == 0u)
    {
        eax = t115;
        edx = t116;
        goto L_1010f0f5;
    }
    eax = t115;
    edx = t116;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t117 = cow_call_regs(g, COW_IMG(0x101124b0u), eax, sp0 - 0x1018u, g->edx, 1, 0);
    t118 = g->edx;
    g->edx = t118;
    t119 = cow_thiscall(g, COW_IMG(0x10110b10u), t117, 0);
    t120 = g->edx;
    if (t119 == 0u)
    {
        eax = t119;
        edx = t120;
        goto L_1010f0f5;
    }
    eax = t119;
    edx = t120;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t121 = cow_call_regs(g, COW_IMG(0x101124b0u), eax, sp0 - 0x1018u, g->edx, 1, 0);
    t122 = g->edx;
    wr32(sp0 - 0x106cu, 1u);
    t123 = rd32(t121 + 4u);
    wr32(sp0 - 0x1070u, t123);
    g->edx = t122;
    t124 = cow_thiscall(g, COW_IMG(0x1010d560u), edi, 2, t123, 1u);
    t125 = g->edx;
    if (t124 != 0u)
    {
        eax = t124;
        edx = t125;
        goto L_1010f124;
    }
    eax = t124;
    edx = t125;
L_1010f0f5: ;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t126 = cow_call_regs(g, COW_IMG(0x1010f540u), eax, sp0 - 0x101cu, g->edx, 1, 0);
    t127 = g->edx;
    g->edx = t127;
    t128 = cow_call_regs(g, COW_IMG(0x1010f510u), t126, sp0 - 0x101cu, g->edx, 1, 0);
    t129 = g->edx;
    if ((uint8_t)t128 == 0u)
    {
        eax = t128;
        edx = t129;
        goto L_1010f090;
    }
    eax = t128;
    edx = t129;
L_1010f10b: ;
    g->esp = sp0 - 0x1068u;
    cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x101cu, 0);
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = rd32(sp0 - 0x1064u);
    g->edi = rd32(sp0 - 0x1068u);
    g->ebp = rd32(sp0 - 0x1060u);
    return 3u;
L_1010f124: ;
    g->esp = sp0 - 0x1068u;
    cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x101cu, 0);
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = rd32(sp0 - 0x1064u);
    g->edi = rd32(sp0 - 0x1068u);
    g->ebp = rd32(sp0 - 0x1060u);
    return 2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010ea10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010ea10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
