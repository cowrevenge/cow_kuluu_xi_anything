/* f_0x102e690b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e690b(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
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
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1032849fu));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102e6915u));
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if ((int32_t)rd32(rd32(sp0 + 4u) + 4u) > 827611204)
    {
        eax = rd32(rd32(sp0 + 4u) + 4u);
        edi = rd32(sp0 + 4u);
        loc_10 = t1;
        goto L_102e6e16;
    }
    eax = rd32(rd32(sp0 + 4u) + 4u);
    edi = rd32(sp0 + 4u);
    zf = rd32(rd32(sp0 + 4u) + 4u) == 0x31545844u;
    loc_10 = t1;
    if (zf) goto L_102e6dec;
    if ((int32_t)eax > 40) goto L_102e6b9d;
    zf = eax == 0x28u;
    if (zf) goto L_102e6b73;
    if (eax - 0x14u > 0xeu)
    {
        edx = in_edx;
        esi = 0u;
        goto L_102e701b;
    }
    eax = eax - 0x14u;
    t2 = rd32(COW_IMG(0x102e702bu) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x102e6954u: goto L_102e6954;
    case 0x102e697bu: goto L_102e697b;
    case 0x102e69a5u: goto L_102e69a5;
    case 0x102e69cfu: goto L_102e69cf;
    case 0x102e69f9u: goto L_102e69f9;
    case 0x102e6a23u: goto L_102e6a23;
    case 0x102e6a4du: goto L_102e6a4d;
    case 0x102e6a77u: goto L_102e6a77;
    case 0x102e6aa1u: goto L_102e6aa1;
    case 0x102e6acbu: goto L_102e6acb;
    case 0x102e6af5u: goto L_102e6af5;
    case 0x102e6b1fu: goto L_102e6b1f;
    case 0x102e6b49u: goto L_102e6b49;
    case 0x102e701bu: edx = in_edx; esi = 0u; goto L_102e701b;
    default: rt_fatal(g, COW_IMG(0x102e694du), "switch");
    }
    return 0;
L_102e6954: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t51 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t52 = g->edx;
    wr32(sp0 + 4u, t51);
    wr32(sp0 - 8u, 0u);
    if (t51 == 0u)
    {
        edx = t52;
        loc_8 = 0u;
        goto L_102e7002;
    }
    ecx = t51;
    edx = t52;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t53 = cow_fastcall(g, COW_IMG(0x102e53e6u), ecx, edx, 1, edi);
    t54 = g->edx;
    eax = t53;
    edx = t54;
    loc_8 = 0u;
L_102e7004: ;
    wr32(sp0 - 8u, 0xffffffffu);
    if (eax == 0u)
    {
        esi = eax;
    }
    else
    {
        esi = eax;
        if (rd32(esi + 0x10u) != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, rd32(rd32(esi) + 0xcu), esi, 0);
            t151 = g->edx;
            edx = t151;
        }
    }
L_102e701b: ;
    wr32(g->fs_base, loc_10);
    g->ebp = in_ebp;
    g->edx = edx;
    return esi;
L_102e697b: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t47 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t48 = g->edx;
    wr32(sp0 + 4u, t47);
    wr32(sp0 - 8u, 1u);
    if (t47 == 0u)
    {
        edx = t48;
        loc_8 = 1u;
        goto L_102e7002;
    }
    ecx = t47;
    edx = t48;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t49 = cow_fastcall(g, COW_IMG(0x102e551bu), ecx, edx, 1, edi);
    t50 = g->edx;
    eax = t49;
    edx = t50;
    loc_8 = 1u;
    goto L_102e7004;
L_102e69a5: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t43 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t44 = g->edx;
    wr32(sp0 + 4u, t43);
    wr32(sp0 - 8u, 2u);
    if (t43 == 0u)
    {
        edx = t44;
        loc_8 = 2u;
        goto L_102e7002;
    }
    ecx = t43;
    edx = t44;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t45 = cow_fastcall(g, COW_IMG(0x102e5558u), ecx, edx, 1, edi);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    loc_8 = 2u;
    goto L_102e7004;
L_102e69cf: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t39 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t40 = g->edx;
    wr32(sp0 + 4u, t39);
    wr32(sp0 - 8u, 3u);
    if (t39 == 0u)
    {
        edx = t40;
        loc_8 = 3u;
        goto L_102e7002;
    }
    ecx = t39;
    edx = t40;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t41 = cow_fastcall(g, COW_IMG(0x102e5595u), ecx, edx, 1, edi);
    t42 = g->edx;
    eax = t41;
    edx = t42;
    loc_8 = 3u;
    goto L_102e7004;
L_102e69f9: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t35 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t36 = g->edx;
    wr32(sp0 + 4u, t35);
    wr32(sp0 - 8u, 4u);
    if (t35 == 0u)
    {
        edx = t36;
        loc_8 = 4u;
        goto L_102e7002;
    }
    ecx = t35;
    edx = t36;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t37 = cow_fastcall(g, COW_IMG(0x102e57beu), ecx, edx, 1, edi);
    t38 = g->edx;
    eax = t37;
    edx = t38;
    loc_8 = 4u;
    goto L_102e7004;
L_102e6a23: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t31 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t32 = g->edx;
    wr32(sp0 + 4u, t31);
    wr32(sp0 - 8u, 5u);
    if (t31 == 0u)
    {
        edx = t32;
        loc_8 = 5u;
        goto L_102e7002;
    }
    ecx = t31;
    edx = t32;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t33 = cow_fastcall(g, COW_IMG(0x102e57fbu), ecx, edx, 1, edi);
    t34 = g->edx;
    eax = t33;
    edx = t34;
    loc_8 = 5u;
    goto L_102e7004;
L_102e6a4d: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t27 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t28 = g->edx;
    wr32(sp0 + 4u, t27);
    wr32(sp0 - 8u, 6u);
    if (t27 == 0u)
    {
        edx = t28;
        loc_8 = 6u;
        goto L_102e7002;
    }
    ecx = t27;
    edx = t28;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t29 = cow_fastcall(g, COW_IMG(0x102e5b09u), ecx, edx, 1, edi);
    t30 = g->edx;
    eax = t29;
    edx = t30;
    loc_8 = 6u;
    goto L_102e7004;
L_102e6a77: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t23 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t24 = g->edx;
    wr32(sp0 + 4u, t23);
    wr32(sp0 - 8u, 7u);
    if (t23 == 0u)
    {
        edx = t24;
        loc_8 = 7u;
        goto L_102e7002;
    }
    ecx = t23;
    edx = t24;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t25 = cow_fastcall(g, COW_IMG(0x102e5b46u), ecx, edx, 1, edi);
    t26 = g->edx;
    eax = t25;
    edx = t26;
    loc_8 = 7u;
    goto L_102e7004;
L_102e6aa1: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t19 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t20 = g->edx;
    wr32(sp0 + 4u, t19);
    wr32(sp0 - 8u, 8u);
    if (t19 == 0u)
    {
        edx = t20;
        loc_8 = 8u;
        goto L_102e7002;
    }
    ecx = t19;
    edx = t20;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t21 = cow_fastcall(g, COW_IMG(0x102e5b83u), ecx, edx, 1, edi);
    t22 = g->edx;
    eax = t21;
    edx = t22;
    loc_8 = 8u;
    goto L_102e7004;
L_102e6acb: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t16 = g->edx;
    wr32(sp0 + 4u, t15);
    wr32(sp0 - 8u, 9u);
    if (t15 == 0u)
    {
        edx = t16;
        loc_8 = 9u;
        goto L_102e7002;
    }
    ecx = t15;
    edx = t16;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t17 = cow_fastcall(g, COW_IMG(0x102e5bc0u), ecx, edx, 1, edi);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    loc_8 = 9u;
    goto L_102e7004;
L_102e6af5: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t11 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t12 = g->edx;
    wr32(sp0 + 4u, t11);
    wr32(sp0 - 8u, 0xau);
    if (t11 == 0u)
    {
        edx = t12;
        loc_8 = 0xau;
        goto L_102e7002;
    }
    ecx = t11;
    edx = t12;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t13 = cow_fastcall(g, COW_IMG(0x102e5bfdu), ecx, edx, 1, edi);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    loc_8 = 0xau;
    goto L_102e7004;
L_102e6b1f: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t8 = g->edx;
    wr32(sp0 + 4u, t7);
    wr32(sp0 - 8u, 0xbu);
    if (t7 == 0u)
    {
        edx = t8;
        loc_8 = 0xbu;
        goto L_102e7002;
    }
    ecx = t7;
    edx = t8;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t9 = cow_fastcall(g, COW_IMG(0x102e5cc7u), ecx, edx, 1, edi);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    loc_8 = 0xbu;
    goto L_102e7004;
L_102e6b49: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t4 = g->edx;
    wr32(sp0 + 4u, t3);
    wr32(sp0 - 8u, 0xcu);
    if (t3 == 0u)
    {
        edx = t4;
        loc_8 = 0xcu;
        goto L_102e7002;
    }
    ecx = t3;
    edx = t4;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t5 = cow_fastcall(g, COW_IMG(0x102e5d73u), ecx, edx, 1, edi);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    loc_8 = 0xcu;
    goto L_102e7004;
L_102e6b73: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t55 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t56 = g->edx;
    wr32(sp0 + 4u, t55);
    wr32(sp0 - 8u, 0xdu);
    if (t55 == 0u)
    {
        edx = t56;
        loc_8 = 0xdu;
        goto L_102e7002;
    }
    ecx = t55;
    edx = t56;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t57 = cow_fastcall(g, COW_IMG(0x102e5fa2u), ecx, edx, 1, edi);
    t58 = g->edx;
    eax = t57;
    edx = t58;
    loc_8 = 0xdu;
    goto L_102e7004;
L_102e6b9d: ;
    if ((int32_t)eax > 62) goto L_102e6cfa;
    zf = eax == 0x3eu;
    if (zf) goto L_102e6cd0;
    if (eax == 0x29u) goto L_102e6ca6;
    eax = eax - 0x29u;
    if (eax == 9u) goto L_102e6c7c;
    eax = eax - 9u;
    if (eax == 1u) goto L_102e6c52;
    eax = eax - 1u;
    if (eax == 1u) goto L_102e6c28;
    eax = eax - 1u;
    if (eax == 8u) goto L_102e6bfe;
    eax = eax - 8u;
    if (eax != 1u)
    {
        edx = in_edx;
        esi = 0u;
        goto L_102e701b;
    }
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t59 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t60 = g->edx;
    wr32(sp0 + 4u, t59);
    wr32(sp0 - 8u, 0x13u);
    if (t59 == 0u)
    {
        edx = t60;
        loc_8 = 0x13u;
        goto L_102e7002;
    }
    ecx = t59;
    edx = t60;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t61 = cow_fastcall(g, COW_IMG(0x102e622du), ecx, edx, 1, edi);
    t62 = g->edx;
    eax = t61;
    edx = t62;
    loc_8 = 0x13u;
    goto L_102e7004;
L_102e6bfe: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t63 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t64 = g->edx;
    wr32(sp0 + 4u, t63);
    wr32(sp0 - 8u, 0x12u);
    if (t63 == 0u)
    {
        edx = t64;
        loc_8 = 0x12u;
        goto L_102e7002;
    }
    ecx = t63;
    edx = t64;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t65 = cow_fastcall(g, COW_IMG(0x102e61f0u), ecx, edx, 1, edi);
    t66 = g->edx;
    eax = t65;
    edx = t66;
    loc_8 = 0x12u;
    goto L_102e7004;
L_102e6c28: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t67 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t68 = g->edx;
    wr32(sp0 + 4u, t67);
    wr32(sp0 - 8u, 0x11u);
    if (t67 == 0u)
    {
        edx = t68;
        loc_8 = 0x11u;
        goto L_102e7002;
    }
    ecx = t67;
    edx = t68;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t69 = cow_fastcall(g, COW_IMG(0x102e60b2u), ecx, edx, 1, edi);
    t70 = g->edx;
    eax = t69;
    edx = t70;
    loc_8 = 0x11u;
    goto L_102e7004;
L_102e6c52: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t71 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t72 = g->edx;
    wr32(sp0 + 4u, t71);
    wr32(sp0 - 8u, 0x10u);
    if (t71 == 0u)
    {
        edx = t72;
        loc_8 = 0x10u;
        goto L_102e7002;
    }
    ecx = t71;
    edx = t72;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t73 = cow_fastcall(g, COW_IMG(0x102e6059u), ecx, edx, 1, edi);
    t74 = g->edx;
    eax = t73;
    edx = t74;
    loc_8 = 0x10u;
    goto L_102e7004;
L_102e6c7c: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t75 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t76 = g->edx;
    wr32(sp0 + 4u, t75);
    wr32(sp0 - 8u, 0xfu);
    if (t75 == 0u)
    {
        edx = t76;
        loc_8 = 0xfu;
        goto L_102e7002;
    }
    ecx = t75;
    edx = t76;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t77 = cow_fastcall(g, COW_IMG(0x102e601cu), ecx, edx, 1, edi);
    t78 = g->edx;
    eax = t77;
    edx = t78;
    loc_8 = 0xfu;
    goto L_102e7004;
L_102e6ca6: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t79 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t80 = g->edx;
    wr32(sp0 + 4u, t79);
    wr32(sp0 - 8u, 0xeu);
    if (t79 == 0u)
    {
        edx = t80;
        loc_8 = 0xeu;
        goto L_102e7002;
    }
    ecx = t79;
    edx = t80;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t81 = cow_fastcall(g, COW_IMG(0x102e5fdfu), ecx, edx, 1, edi);
    t82 = g->edx;
    eax = t81;
    edx = t82;
    loc_8 = 0xeu;
    goto L_102e7004;
L_102e6cd0: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t83 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t84 = g->edx;
    wr32(sp0 + 4u, t83);
    wr32(sp0 - 8u, 0x14u);
    if (t83 == 0u)
    {
        edx = t84;
        loc_8 = 0x14u;
        goto L_102e7002;
    }
    ecx = t83;
    edx = t84;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t85 = cow_fastcall(g, COW_IMG(0x102e626au), ecx, edx, 1, edi);
    t86 = g->edx;
    eax = t85;
    edx = t86;
    loc_8 = 0x14u;
    goto L_102e7004;
L_102e6cfa: ;
    if (eax == 0x3fu) goto L_102e6dc2;
    eax = eax - 0x3fu;
    if (eax == 1u) goto L_102e6d98;
    eax = eax - 1u;
    if (eax == 1u) goto L_102e6d6e;
    eax = eax - 1u;
    if (eax == 2u) goto L_102e6d44;
    eax = eax - 2u;
    if (eax != 3u)
    {
        edx = in_edx;
        esi = 0u;
        goto L_102e701b;
    }
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t87 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t88 = g->edx;
    wr32(sp0 + 4u, t87);
    wr32(sp0 - 8u, 0x19u);
    if (t87 == 0u)
    {
        edx = t88;
        loc_8 = 0x19u;
        goto L_102e7002;
    }
    ecx = t87;
    edx = t88;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t89 = cow_fastcall(g, COW_IMG(0x102e639bu), ecx, edx, 1, edi);
    t90 = g->edx;
    eax = t89;
    edx = t90;
    loc_8 = 0x19u;
    goto L_102e7004;
L_102e6d44: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t91 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t92 = g->edx;
    wr32(sp0 + 4u, t91);
    wr32(sp0 - 8u, 0x18u);
    if (t91 == 0u)
    {
        edx = t92;
        loc_8 = 0x18u;
        goto L_102e7002;
    }
    ecx = t91;
    edx = t92;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t93 = cow_fastcall(g, COW_IMG(0x102e635eu), ecx, edx, 1, edi);
    t94 = g->edx;
    eax = t93;
    edx = t94;
    loc_8 = 0x18u;
    goto L_102e7004;
L_102e6d6e: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t95 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t96 = g->edx;
    wr32(sp0 + 4u, t95);
    wr32(sp0 - 8u, 0x17u);
    if (t95 == 0u)
    {
        edx = t96;
        loc_8 = 0x17u;
        goto L_102e7002;
    }
    ecx = t95;
    edx = t96;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t97 = cow_fastcall(g, COW_IMG(0x102e6321u), ecx, edx, 1, edi);
    t98 = g->edx;
    eax = t97;
    edx = t98;
    loc_8 = 0x17u;
    goto L_102e7004;
L_102e6d98: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t99 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t100 = g->edx;
    wr32(sp0 + 4u, t99);
    wr32(sp0 - 8u, 0x16u);
    if (t99 == 0u)
    {
        edx = t100;
        loc_8 = 0x16u;
        goto L_102e7002;
    }
    ecx = t99;
    edx = t100;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t101 = cow_fastcall(g, COW_IMG(0x102e62e4u), ecx, edx, 1, edi);
    t102 = g->edx;
    eax = t101;
    edx = t102;
    loc_8 = 0x16u;
    goto L_102e7004;
L_102e6dc2: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t103 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t104 = g->edx;
    wr32(sp0 + 4u, t103);
    wr32(sp0 - 8u, 0x15u);
    if (t103 == 0u)
    {
        edx = t104;
        loc_8 = 0x15u;
        goto L_102e7002;
    }
    ecx = t103;
    edx = t104;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t105 = cow_fastcall(g, COW_IMG(0x102e62a7u), ecx, edx, 1, edi);
    t106 = g->edx;
    eax = t105;
    edx = t106;
    loc_8 = 0x15u;
    goto L_102e7004;
L_102e6dec: ;
    wr32(sp0 - 0x1cu, 0x10c4u);
    g->esp = sp0 - 0x10u;
    t107 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x10c4u, in_edi, in_esi);
    t108 = g->edx;
    wr32(sp0 + 4u, t107);
    wr32(sp0 - 8u, 0x20u);
    if (t107 == 0u)
    {
        edx = t108;
        loc_8 = 0x20u;
        goto L_102e7002;
    }
    ecx = t107;
    edx = t108;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t109 = cow_fastcall(g, COW_IMG(0x102e6775u), ecx, edx, 1, edi);
    t110 = g->edx;
    eax = t109;
    edx = t110;
    loc_8 = 0x20u;
    goto L_102e7004;
L_102e6e16: ;
    if ((int32_t)eax > 909200416) goto L_102e6f54;
    zf = eax == 0x36314c20u;
    if (zf) goto L_102e6f2a;
    if (eax == 0x32545844u) goto L_102e6f00;
    if (eax == 0x32595559u) goto L_102e6ed6;
    if (eax == 0x33545844u) goto L_102e6eac;
    if (eax == 0x34545844u) goto L_102e6e82;
    if (eax != 0x35545844u)
    {
        edx = in_edx;
        esi = 0u;
        goto L_102e701b;
    }
    wr32(sp0 - 0x1cu, 0x10c4u);
    g->esp = sp0 - 0x10u;
    t111 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x10c4u, in_edi, in_esi);
    t112 = g->edx;
    wr32(sp0 + 4u, t111);
    wr32(sp0 - 8u, 0x24u);
    if (t111 == 0u)
    {
        edx = t112;
        loc_8 = 0x24u;
        goto L_102e7002;
    }
    ecx = t111;
    edx = t112;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t113 = cow_fastcall(g, COW_IMG(0x102e6859u), ecx, edx, 1, edi);
    t114 = g->edx;
    eax = t113;
    edx = t114;
    loc_8 = 0x24u;
    goto L_102e7004;
L_102e6e82: ;
    wr32(sp0 - 0x1cu, 0x10c4u);
    g->esp = sp0 - 0x10u;
    t115 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x10c4u, in_edi, in_esi);
    t116 = g->edx;
    wr32(sp0 + 4u, t115);
    wr32(sp0 - 8u, 0x23u);
    if (t115 == 0u)
    {
        edx = t116;
        loc_8 = 0x23u;
        goto L_102e7002;
    }
    ecx = t115;
    edx = t116;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t117 = cow_fastcall(g, COW_IMG(0x102e6820u), ecx, edx, 1, edi);
    t118 = g->edx;
    eax = t117;
    edx = t118;
    loc_8 = 0x23u;
    goto L_102e7004;
L_102e6eac: ;
    wr32(sp0 - 0x1cu, 0x10c4u);
    g->esp = sp0 - 0x10u;
    t119 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x10c4u, in_edi, in_esi);
    t120 = g->edx;
    wr32(sp0 + 4u, t119);
    wr32(sp0 - 8u, 0x22u);
    if (t119 == 0u)
    {
        edx = t120;
        loc_8 = 0x22u;
        goto L_102e7002;
    }
    ecx = t119;
    edx = t120;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t121 = cow_fastcall(g, COW_IMG(0x102e67e7u), ecx, edx, 1, edi);
    t122 = g->edx;
    eax = t121;
    edx = t122;
    loc_8 = 0x22u;
    goto L_102e7004;
L_102e6ed6: ;
    wr32(sp0 - 0x1cu, 0x109cu);
    g->esp = sp0 - 0x10u;
    t123 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x109cu, in_edi, in_esi);
    t124 = g->edx;
    wr32(sp0 + 4u, t123);
    wr32(sp0 - 8u, 0x1fu);
    if (t123 == 0u)
    {
        edx = t124;
        loc_8 = 0x1fu;
        goto L_102e7002;
    }
    ecx = t123;
    edx = t124;
    wr32(sp0 - 0x1cu, edi);
    g->ebp = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t125 = cow_thiscall(g, COW_IMG(0x102e68f3u), ecx, 1, edi);
    t126 = g->edx;
    eax = t125;
    edx = t126;
    loc_8 = 0x1fu;
    goto L_102e7004;
L_102e6f00: ;
    wr32(sp0 - 0x1cu, 0x10c4u);
    g->esp = sp0 - 0x10u;
    t127 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x10c4u, in_edi, in_esi);
    t128 = g->edx;
    wr32(sp0 + 4u, t127);
    wr32(sp0 - 8u, 0x21u);
    if (t127 == 0u)
    {
        edx = t128;
        loc_8 = 0x21u;
        goto L_102e7002;
    }
    ecx = t127;
    edx = t128;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t129 = cow_fastcall(g, COW_IMG(0x102e67aeu), ecx, edx, 1, edi);
    t130 = g->edx;
    eax = t129;
    edx = t130;
    loc_8 = 0x21u;
    goto L_102e7004;
L_102e6f2a: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t131 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t132 = g->edx;
    wr32(sp0 + 4u, t131);
    wr32(sp0 - 8u, 0x1au);
    if (t131 == 0u)
    {
        edx = t132;
        loc_8 = 0x1au;
        goto L_102e7002;
    }
    ecx = t131;
    edx = t132;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t133 = cow_fastcall(g, COW_IMG(0x102e63d8u), ecx, edx, 1, edi);
    t134 = g->edx;
    eax = t133;
    edx = t134;
    loc_8 = 0x1au;
    goto L_102e7004;
L_102e6f54: ;
    if (eax == 0x36314c41u) goto L_102e6fdf;
    eax = eax - 0x36314c41u;
    if (eax == 0x5dfu) goto L_102e6fbc;
    eax = eax - 0x5dfu;
    if (eax == 0x21u) goto L_102e6f99;
    eax = eax - 0x21u;
    if (eax != 0x23250714u)
    {
        edx = in_edx;
        esi = 0u;
        goto L_102e701b;
    }
    wr32(sp0 - 0x1cu, 0x109cu);
    g->esp = sp0 - 0x10u;
    t135 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x109cu, in_edi, in_esi);
    t136 = g->edx;
    wr32(sp0 + 4u, t135);
    wr32(sp0 - 8u, 0x1eu);
    if (t135 == 0u)
    {
        edx = t136;
        loc_8 = 0x1eu;
        goto L_102e7002;
    }
    ecx = t135;
    edx = t136;
    wr32(sp0 - 0x1cu, edi);
    g->ebp = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t137 = cow_thiscall(g, COW_IMG(0x102e68dbu), ecx, 1, edi);
    t138 = g->edx;
    eax = t137;
    edx = t138;
    loc_8 = 0x1eu;
    goto L_102e7004;
L_102e6f99: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t139 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t140 = g->edx;
    wr32(sp0 + 4u, t139);
    wr32(sp0 - 8u, 0x1du);
    if (t139 == 0u)
    {
        edx = t140;
        loc_8 = 0x1du;
        goto L_102e7002;
    }
    ecx = t139;
    edx = t140;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t141 = cow_fastcall(g, COW_IMG(0x102e6738u), ecx, edx, 1, edi);
    t142 = g->edx;
    eax = t141;
    edx = t142;
    loc_8 = 0x1du;
    goto L_102e7004;
L_102e6fbc: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t143 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t144 = g->edx;
    wr32(sp0 + 4u, t143);
    wr32(sp0 - 8u, 0x1cu);
    if (t143 == 0u)
    {
        edx = t144;
        loc_8 = 0x1cu;
        goto L_102e7002;
    }
    ecx = t143;
    edx = t144;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t145 = cow_fastcall(g, COW_IMG(0x102e66fbu), ecx, edx, 1, edi);
    t146 = g->edx;
    eax = t145;
    edx = t146;
    loc_8 = 0x1cu;
    goto L_102e7004;
L_102e6fdf: ;
    wr32(sp0 - 0x1cu, 0x106cu);
    g->esp = sp0 - 0x10u;
    t147 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t148 = g->edx;
    wr32(sp0 + 4u, t147);
    wr32(sp0 - 8u, 0x1bu);
    if (t147 == 0u)
    {
        edx = t148;
        loc_8 = 0x1bu;
        goto L_102e7002;
    }
    ecx = t147;
    edx = t148;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    t149 = cow_fastcall(g, COW_IMG(0x102e66beu), ecx, edx, 1, edi);
    t150 = g->edx;
    eax = t149;
    edx = t150;
    loc_8 = 0x1bu;
    goto L_102e7004;
L_102e7002: ;
    eax = 0u;
    goto L_102e7004;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e690b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e690b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
