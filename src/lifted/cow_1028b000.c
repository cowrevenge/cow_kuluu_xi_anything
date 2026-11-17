/* f_0x1028b000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1028b000(Guest* g)
{
    double d117;
    double d121;
    double d125;
    double d129;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
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
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if ((int32_t)(rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u) <= 0)
    {
        eax = rd32(COW_IMG(0x1099d200u));
        ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u;
        edx = in_edx;
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1028b316;
    }
    eax = rd32(COW_IMG(0x1099d200u));
    edx = in_edx;
    esi = 0u;
    loc_10 = in_ebx;
    loc_14 = in_ebp;
    loc_18 = in_esi;
    loc_1c = in_edi;
L_1028b01d: ;
    if ((rd32(eax + esi * 8u + 0xa20u) & 0x10u) != 0u)
    {
        eax = rd32(eax + esi * 8u + 0xa20u) & 0x10u;
        wr32(sp0 - 0x20u, esi);
        g->eax = eax;
        g->ecx = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_cdecl(g, COW_IMG(0x1028bb30u), 3, esi, loc_1c, loc_18);
        t2 = g->ecx;
        t3 = g->edx;
        if (esi != 1u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            goto L_1028b0ad;
        }
        t4 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa24u);
        wr32(sp0 - 4u, t4);
        t5 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa20u);
        if ((t5 & 0x40000u) != 0u)
        {
            ecx = rd32(COW_IMG(0x1099d200u));
            goto L_1028b06a;
        }
        ecx = rd32(COW_IMG(0x1099d200u));
        edx = t5;
        if ((edx & esi) == 0u)
        {
            eax = 0u;
            edx = edx & esi;
            goto L_1028b0ad;
        }
L_1028b06a: ;
        t6 = rd32(ecx + 0x930u);
        wr32(sp0 - 0x20u, t6);
        t7 = rd32(ecx + 0x938u);
        wr32(sp0 - 0x24u, t7);
        t8 = rd32(ecx + 0x91cu);
        wr32(sp0 - 0x28u, t8);
        t9 = rd32(ecx + 0x918u);
        wr32(sp0 - 0x2cu, t9);
        wr32(sp0 - 0x30u, 0u);
        t10 = rd32(ecx + 0x940u);
        wr32(sp0 - 0x34u, t10);
        g->ecx = t10;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x1029c970u), 6, t10, 0u, t9, t8, t7, t6);
        t11 = g->ecx;
        wr32(sp0 - 0x38u, 1u);
        t12 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x938u);
        wr32(sp0 - 0x3cu, t12);
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x1028a790u), 2, t12, 1u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
L_1028b10a: ;
    if ((rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 8u) != 0u)
    {
        eax = rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 8u;
        edx = rd32(COW_IMG(0x1099d200u));
        wr32(sp0 - 0x20u, esi);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x1028bb30u), 3, esi, loc_1c, loc_18);
        t22 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
        wr32(sp0 - 0x24u, t22);
        t23 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu);
        wr32(sp0 - 0x28u, t23);
        t24 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
        wr32(sp0 - 0x2cu, t24);
        t25 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
        wr32(sp0 - 0x30u, t25);
        g->edx = t25;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1029c630u), 9, t25, t24, t23, t22, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
        t26 = g->edx;
        wr32(sp0 - 0x34u, esi);
        t27 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
        wr32(sp0 - 0x38u, t27);
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x1028a790u), 2, t27, esi);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    if ((rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x100000u) != 0u)
    {
        eax = rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x100000u;
        edx = rd32(COW_IMG(0x1099d200u));
        wr32(sp0 - 0x20u, esi);
        g->eax = eax;
        g->ecx = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t28 = cow_cdecl(g, COW_IMG(0x1028bb30u), 3, esi, loc_1c, loc_18);
        t29 = g->ecx;
        t30 = g->edx;
        g->esp = sp0 - 0x1cu;
        cow_stdcall(g, COW_IMG(0x1028bb90u), 0);
        t31 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
        wr32(sp0 - 0x20u, t31);
        t32 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu);
        wr32(sp0 - 0x24u, t32);
        t33 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x920u);
        wr32(sp0 - 0x28u, t33);
        t34 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
        wr32(sp0 - 0x2cu, t34);
        if (rd32(rd32(COW_IMG(0x1099d200u)) + 0xe24u) == 0u)
        {
            eax = rd32(COW_IMG(0x1099d200u));
            edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
            loc_20 = t31;
            loc_24 = t32;
            loc_28 = t33;
            loc_2c = t34;
            ecx = rd32(eax + 0x928u);
        }
        else
        {
            eax = rd32(COW_IMG(0x1099d200u));
            edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
            loc_20 = t31;
            loc_24 = t32;
            loc_28 = t33;
            loc_2c = t34;
            ecx = rd32(eax + 0x92cu);
        }
        wr32(sp0 - 0x30u, ecx);
        wr32(sp0 - 0x34u, edx);
        t35 = rd32(eax + 0x940u);
        wr32(sp0 - 0x38u, t35);
        g->eax = t35;
        g->esp = sp0 - 4u;
        t36 = cow_cdecl(g, COW_IMG(0x1029c4a0u), 13, t35, edx, ecx, loc_2c, loc_28, loc_24, loc_20, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        wr32(sp0 - 0x20u, esi);
        t37 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
        wr32(sp0 - 0x24u, t37);
        g->edx = t37;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x1028a790u), 2, t37, esi);
        t38 = g->edx;
        t39 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
        wr32(sp0 - 0x28u, t39);
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x1028a7b0u), 1, t39);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    if ((rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x8000000u) == 0u)
    {
        edx = rd32(COW_IMG(0x1099d200u));
    }
    else
    {
        eax = rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x8000000u;
        edx = rd32(COW_IMG(0x1099d200u));
        g->esp = sp0 - 0x1cu;
        cow_stdcall(g, COW_IMG(0x1028bb90u), 0);
        t40 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
        wr32(sp0 - 0x20u, t40);
        t41 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu);
        wr32(sp0 - 0x24u, t41);
        t42 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
        wr32(sp0 - 0x28u, t42);
        g->eax = t42;
        t43 = cow_cdecl(g, COW_IMG(0x1029bf70u), 3, t42, t41, t40);
        t44 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
        wr32(sp0 - 0x2cu, t44);
        g->edx = t44;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x1028a7b0u), 1, t44);
        t45 = g->edx;
        edx = t45;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    if ((rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x20000000u) != 0u)
    {
        eax = rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x20000000u;
        wr32(sp0 - 0x20u, esi);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x1028bb30u), 3, esi, loc_1c, loc_18);
        t46 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
        wr32(sp0 - 0x24u, t46);
        t47 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
        wr32(sp0 - 0x28u, t47);
        t48 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
        wr32(sp0 - 0x2cu, t48);
        g->eax = t48;
        g->esp = sp0 - 0x20u;
        t49 = cow_cdecl(g, COW_IMG(0x10297340u), 3, t48, t47, t46);
        wr32(sp0 - 0x30u, esi);
        t50 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
        wr32(sp0 - 0x34u, t50);
        g->edx = t50;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x1028a790u), 2, t50, esi);
        t51 = g->edx;
        edx = t51;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    if ((rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x40000u) == 0u)
    {
        ecx = 0u;
    }
    else
    {
        eax = rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x40000u;
        g->esp = sp0 - 0x1cu;
        cow_stdcall(g, COW_IMG(0x1028bb90u), 0);
        t52 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
        wr32(sp0 - 0x20u, t52);
        t53 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu);
        wr32(sp0 - 0x24u, t53);
        t54 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
        wr32(sp0 - 0x28u, t54);
        t55 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
        wr32(sp0 - 0x2cu, t55);
        g->edx = t55;
        cow_cdecl(g, COW_IMG(0x1029bd70u), 4, t55, t54, t53, t52);
        t56 = g->edx;
        t57 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
        wr32(sp0 - 0x30u, t57);
        g->ecx = t57;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x1028a7b0u), 1, t57);
        t58 = g->ecx;
        ecx = t58;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    if ((int32_t)(esi + 1u) < (int32_t)(rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u))
    {
        eax = rd32(COW_IMG(0x1099d200u));
        edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u;
        esi = esi + 1u;
        goto L_1028b01d;
    }
    eax = rd32(COW_IMG(0x1099d200u));
    edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u;
L_1028b316: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t59 = cow_stdcall(g, COW_IMG(0x10284ee0u), 0);
    t60 = g->ecx;
    t61 = g->edx;
    g->ecx = t60;
    g->edx = t61;
    t62 = cow_stdcall(g, COW_IMG(0x10283260u), 0);
    t63 = g->ecx;
    t64 = g->edx;
    g->ecx = t63;
    g->edx = t64;
    t65 = cow_stdcall(g, COW_IMG(0x10284430u), 0);
    t66 = g->ecx;
    t67 = g->edx;
    g->ecx = t66;
    g->edx = t67;
    t68 = cow_stdcall(g, COW_IMG(0x10283440u), 0);
    t69 = g->ecx;
    t70 = g->edx;
    cow_call_regs(g, COW_IMG(0x10281dd0u), g->eax, g->ecx, t70, 1, 0);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x2d0u) != 0u)
    {
        eax = rd32(COW_IMG(0x1099d200u));
        ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
        goto L_1028b8b4;
    }
    eax = rd32(COW_IMG(0x1099d200u));
    ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
    if (ecx == 0u) goto L_1028bb21;
    if (!(rd8(eax + 0xa30u) & 1u))
    {
        ebx = 0u;
    }
    else
    {
        if ((int32_t)rd32(eax + 0x95cu) < (int32_t)rd32(eax + 0x940u))
        {
            if (rd32(eax + 0x958u) != 0u)
            {
                ecx = rd32(eax + 0x958u);
                wr32(sp0 - 0x20u, ecx);
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 1, ecx);
                eax = rd32(COW_IMG(0x1099d200u));
            }
            t71 = rd32(eax + 0x940u);
            wr32(eax + 0x95cu, t71);
            t72 = rd32(COW_IMG(0x1099d200u)) + 0x958u;
            wr32(sp0 - 0x20u, t72);
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 2u);
            wr32(sp0 - 0x2cu, 0x208u);
            t73 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x95cu) * 0xcu;
            wr32(sp0 - 0x30u, t73);
            wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), t73, 0x208u, 2u, 0u, t72);
            eax = rd32(COW_IMG(0x1099d200u));
        }
        wr32(sp0 - 0x20u, 0x2000u);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        t74 = rd32(eax + 0x940u) * 0xcu;
        wr32(sp0 - 0x28u, t74);
        wr32(sp0 - 0x2cu, 0u);
        t75 = rd32(eax + 0x958u);
        wr32(sp0 - 0x30u, t75);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(rd32(eax + 0x958u)) + 0x2cu), t75, 5, t75, 0u, t74, sp0 - 0xcu, 0x2000u);
        t76 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u) * 0xcu;
        t77 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
        t78 = rd32(sp0 - 0xcu);
        esi = t77;
        edi = t78;
        ecx = t76 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t76 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t79 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x958u);
        wr32(sp0 - 0x20u, t79);
        cow_thiscall(g, rd32(rd32(t79) + 0x30u), rd32(t79), 1, t79);
        wr32(sp0 - 0x20u, 0xcu);
        t80 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x958u);
        wr32(sp0 - 0x24u, t80);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), t80, 4, rd32(COW_IMG(0x1066941cu)), 0u, t80, 0xcu);
        eax = rd32(COW_IMG(0x1099d200u));
        ebx = 1u;
    }
    if ((rd8(eax + 0xa30u) & 2u) != 0u)
    {
        if ((int32_t)rd32(eax + 0x964u) < (int32_t)rd32(eax + 0x940u))
        {
            edx = rd32(eax + 0x964u);
            if (rd32(eax + 0x960u) != 0u)
            {
                ecx = rd32(eax + 0x960u);
                wr32(sp0 - 0x20u, ecx);
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 1, ecx);
                eax = rd32(COW_IMG(0x1099d200u));
            }
            t81 = rd32(eax + 0x940u);
            wr32(eax + 0x964u, t81);
            t82 = rd32(COW_IMG(0x1099d200u)) + 0x960u;
            wr32(sp0 - 0x20u, t82);
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0x10u);
            wr32(sp0 - 0x2cu, 0x208u);
            t83 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x964u) * 0xcu;
            wr32(sp0 - 0x30u, t83);
            wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), t83, 0x208u, 0x10u, 0u, t82);
            eax = rd32(COW_IMG(0x1099d200u));
        }
        wr32(sp0 - 0x20u, 0x2000u);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        t84 = rd32(eax + 0x940u) * 0xcu;
        wr32(sp0 - 0x28u, t84);
        wr32(sp0 - 0x2cu, 0u);
        t85 = rd32(eax + 0x960u);
        wr32(sp0 - 0x30u, t85);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(rd32(eax + 0x960u)) + 0x2cu), t85, 5, t85, 0u, t84, sp0 - 0xcu, 0x2000u);
        t86 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u) * 0xcu;
        t87 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu);
        t88 = rd32(sp0 - 0xcu);
        esi = t87;
        edi = t88;
        ecx = t86 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t86 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t89 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x960u);
        wr32(sp0 - 0x20u, t89);
        cow_thiscall(g, rd32(rd32(t89) + 0x30u), rd32(t89), 1, t89);
        wr32(sp0 - 0x20u, 0xcu);
        t90 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x960u);
        wr32(sp0 - 0x24u, t90);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), rd32(COW_IMG(0x1066941cu)), 4, rd32(COW_IMG(0x1066941cu)), ebx, t90, 0xcu);
        eax = rd32(COW_IMG(0x1099d200u));
        ebx = ebx + 1u;
    }
    if ((int32_t)(rd32(eax + 0xb18u) + 1u) <= 0) goto L_1028b67b;
    ebp = 0u;
L_1028b557: ;
    if ((rd8(eax + ebp * 4u + 0xa34u) & 4u) != 0u)
    {
        if ((int32_t)rd32(eax + ebp * 4u + 0x970u) < (int32_t)rd32(eax + 0x940u))
        {
            edx = rd32(eax + ebp * 4u + 0x970u);
            if (rd32(eax + ebp * 4u + 0x968u) != 0u)
            {
                ecx = rd32(eax + ebp * 4u + 0x968u);
                wr32(sp0 - 0x20u, ecx);
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 1, ecx);
                eax = rd32(COW_IMG(0x1099d200u));
            }
            t91 = rd32(eax + 0x940u);
            wr32(eax + ebp * 4u + 0x970u, t91);
            if (ebp != 0u)
            {
                eax = rd32(COW_IMG(0x1066941cu));
                ecx = rd32(COW_IMG(0x1099d200u));
                edx = rd32(rd32(COW_IMG(0x1066941cu)));
                t92 = ebp * 4u + ecx + 0x968u;
                wr32(sp0 - 0x20u, t92);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0x200u);
                ecx = rd32(ebp * 4u + ecx + 0x970u);
                loc_20 = t92;
                loc_28 = 0x200u;
                loc_24 = 0u;
            }
            else
            {
                eax = rd32(COW_IMG(0x1066941cu));
                ecx = rd32(COW_IMG(0x1099d200u));
                edx = rd32(rd32(COW_IMG(0x1066941cu)));
                wr32(sp0 - 0x20u, ecx + 0x968u);
                wr32(sp0 - 0x24u, ebp);
                wr32(sp0 - 0x28u, 0x100u);
                loc_20 = ecx + 0x968u;
                ecx = rd32(ecx + 0x970u);
                loc_28 = 0x100u;
                loc_24 = ebp;
            }
            wr32(sp0 - 0x2cu, 0x208u);
            wr32(sp0 - 0x30u, ecx << 3u);
            wr32(sp0 - 0x34u, eax);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(edx + 0x5cu), ecx << 3u, 6, eax, ecx << 3u, 0x208u, loc_28, loc_24, loc_20);
            eax = rd32(COW_IMG(0x1099d200u));
        }
        wr32(sp0 - 0x20u, 0x2000u);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        t93 = rd32(eax + 0x940u) << 3u;
        wr32(sp0 - 0x28u, t93);
        wr32(sp0 - 0x2cu, 0u);
        t94 = rd32(eax + ebp * 4u + 0x968u);
        wr32(sp0 - 0x30u, t94);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(rd32(eax + ebp * 4u + 0x968u)) + 0x2cu), t94, 5, t94, 0u, t93, sp0 - 0xcu, 0x2000u);
        t95 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u) << 3u;
        t96 = rd32(ebp * 4u + rd32(COW_IMG(0x1099d200u)) + 0x920u);
        t97 = rd32(sp0 - 0xcu);
        esi = t96;
        edi = t97;
        ecx = t95 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t95 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t98 = rd32(ebp * 4u + rd32(COW_IMG(0x1099d200u)) + 0x968u);
        wr32(sp0 - 0x20u, t98);
        cow_thiscall(g, rd32(rd32(t98) + 0x30u), rd32(t98), 1, t98);
        wr32(sp0 - 0x20u, 8u);
        t99 = rd32(ebp * 4u + rd32(COW_IMG(0x1099d200u)) + 0x968u);
        wr32(sp0 - 0x24u, t99);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), rd32(COW_IMG(0x1066941cu)), 4, rd32(COW_IMG(0x1066941cu)), ebx, t99, 8u);
        eax = rd32(COW_IMG(0x1099d200u));
        ebx = ebx + 1u;
    }
    if ((int32_t)(ebp + 1u) < (int32_t)(rd32(eax + 0xb18u) + 1u))
    {
        ebp = ebp + 1u;
        goto L_1028b557;
    }
L_1028b67b: ;
    if ((rd8(eax + 0xa30u) & 0x10u) != 0u)
    {
        if ((int32_t)rd32(eax + 0x97cu) < (int32_t)rd32(eax + 0x940u))
        {
            edx = rd32(eax + 0x97cu);
            if (rd32(eax + 0x978u) != 0u)
            {
                ecx = rd32(eax + 0x978u);
                wr32(sp0 - 0x20u, ecx);
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 1, ecx);
                eax = rd32(COW_IMG(0x1099d200u));
            }
            t100 = rd32(eax + 0x940u);
            wr32(eax + 0x97cu, t100);
            t101 = rd32(COW_IMG(0x1099d200u)) + 0x978u;
            wr32(sp0 - 0x20u, t101);
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, 0x208u);
            t102 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x97cu) * 0xcu;
            wr32(sp0 - 0x30u, t102);
            wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), t102, 0x208u, 0u, 0u, t101);
            eax = rd32(COW_IMG(0x1099d200u));
        }
        wr32(sp0 - 0x20u, 0x2000u);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        t103 = rd32(eax + 0x940u) * 0xcu;
        wr32(sp0 - 0x28u, t103);
        wr32(sp0 - 0x2cu, 0u);
        t104 = rd32(eax + 0x978u);
        wr32(sp0 - 0x30u, t104);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(rd32(eax + 0x978u)) + 0x2cu), t104, 5, t104, 0u, t103, sp0 - 0xcu, 0x2000u);
        t105 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u) * 0xcu;
        t106 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x928u);
        t107 = rd32(sp0 - 0xcu);
        esi = t106;
        edi = t107;
        ecx = t105 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t105 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t108 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x978u);
        wr32(sp0 - 0x20u, t108);
        cow_thiscall(g, rd32(rd32(t108) + 0x30u), rd32(t108), 1, t108);
        wr32(sp0 - 0x20u, 0xcu);
        t109 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x978u);
        wr32(sp0 - 0x24u, t109);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), rd32(COW_IMG(0x1066941cu)), 4, rd32(COW_IMG(0x1066941cu)), ebx, t109, 0xcu);
        eax = rd32(COW_IMG(0x1099d200u));
        ebx = ebx + 1u;
    }
    if ((rd8(eax + 0xa30u) & 8u) == 0u) goto L_1028bb21;
    if ((int32_t)rd32(eax + 0x98cu) < (int32_t)rd32(eax + 0x940u))
    {
        if (rd32(eax + 0x988u) != 0u)
        {
            ecx = rd32(eax + 0x988u);
            wr32(sp0 - 0x20u, ecx);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 1, ecx);
            eax = rd32(COW_IMG(0x1099d200u));
        }
        t110 = rd32(eax + 0x940u);
        wr32(eax + 0x98cu, t110);
        t111 = rd32(COW_IMG(0x1099d200u)) + 0x988u;
        wr32(sp0 - 0x20u, t111);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0x208u);
        t112 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x98cu) << 2u;
        wr32(sp0 - 0x30u, t112);
        wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), t112, 6, rd32(COW_IMG(0x1066941cu)), t112, 0x208u, 0u, 0u, t111);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    wr32(sp0 - 0x20u, 0x2000u);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    t113 = rd32(eax + 0x940u) << 2u;
    wr32(sp0 - 0x28u, t113);
    wr32(sp0 - 0x2cu, 0u);
    t114 = rd32(eax + 0x988u);
    wr32(sp0 - 0x30u, t114);
    g->edx = rd32(rd32(eax + 0x988u));
    t115 = rd32(rd32(eax + 0x988u));
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(t115 + 0x2cu), t114, 5, t114, 0u, t113, sp0 - 0xcu, 0x2000u);
    t116 = g->edx;
    wr32(sp0 - 8u, 0u);
    if ((int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u) <= 0)
    {
        eax = rd32(COW_IMG(0x1099d200u));
        edx = t116;
        goto L_1028b882;
    }
    eax = rd32(COW_IMG(0x1099d200u));
    ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
    edx = t116;
    esi = rd32(sp0 - 0xcu);
    edi = rd32(rd32(COW_IMG(0x1099d200u)) + 0x930u);
    loc_8 = 0u;
L_1028b824: ;
    g->ecx = ecx;
    g->edx = edx;
    d117 = fr(g, (double)rdf32(edi + 8u) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d117);
    g->esp = sp0 - 0x1cu;
    t118 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t119 = g->ecx;
    t120 = g->edx;
    wr8(esi, (uint8_t)t118);
    g->ecx = t119;
    g->edx = t120;
    d121 = fr(g, (double)rdf32(edi + 4u) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d121);
    t122 = cow_call_regs(g, COW_IMG(0x10311c6cu), t118, g->ecx, g->edx, 1, 0);
    t123 = g->ecx;
    t124 = g->edx;
    wr8(esi + 1u, (uint8_t)t122);
    g->ecx = t123;
    g->edx = t124;
    d125 = fr(g, (double)rdf32(edi) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d125);
    t126 = cow_call_regs(g, COW_IMG(0x10311c6cu), t122, g->ecx, g->edx, 1, 0);
    t127 = g->ecx;
    t128 = g->edx;
    wr8(esi + 2u, (uint8_t)t126);
    d129 = fr(g, (double)rdf32(edi + 0xcu) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d129);
    t130 = cow_call_regs(g, COW_IMG(0x10311c6cu), t126, g->ecx, g->edx, 1, 0);
    t131 = rd32(sp0 - 8u);
    wr8(esi + 3u, (uint8_t)t130);
    wr32(sp0 - 8u, t131 + 1u);
    if ((int32_t)(t131 + 1u) < (int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u))
    {
        eax = rd32(COW_IMG(0x1099d200u));
        ecx = t131 + 1u;
        edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
        esi = esi + 4u;
        edi = edi + 0x10u;
        loc_8 = t131 + 1u;
        goto L_1028b824;
    }
    eax = rd32(COW_IMG(0x1099d200u));
    edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
L_1028b882: ;
    t132 = rd32(eax + 0x988u);
    wr32(sp0 - 0x20u, t132);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(t132) + 0x30u), rd32(t132), 1, t132);
    wr32(sp0 - 0x20u, 4u);
    t133 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x988u);
    wr32(sp0 - 0x24u, t133);
    wr32(sp0 - 0x28u, ebx);
    wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), t133, 4, rd32(COW_IMG(0x1066941cu)), ebx, t133, 4u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_1028b0ad: ;
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, COW_IMG(0x1028bb90u), 0);
    t13 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
    wr32(sp0 - 0x20u, t13);
    t14 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
    wr32(sp0 - 0x24u, t14);
    t15 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu);
    wr32(sp0 - 0x28u, t15);
    t16 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
    wr32(sp0 - 0x2cu, t16);
    wr32(sp0 - 0x30u, 1u);
    t17 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
    wr32(sp0 - 0x34u, t17);
    g->eax = t17;
    t18 = cow_cdecl(g, COW_IMG(0x1029c970u), 6, t17, 1u, t16, t15, t14, t13);
    wr32(sp0 - 0x38u, esi);
    t19 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
    wr32(sp0 - 0x3cu, t19);
    g->edx = t19;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x1028a790u), 2, t19, esi);
    t20 = g->edx;
    t21 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
    wr32(sp0 - 0x40u, t21);
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x1028a7b0u), 1, t21);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_1028b10a;
L_1028b8b4: ;
    if (ecx != 0u)
    {
        if (!(rd8(eax + 0xa30u) & 1u))
        {
            edi = 0u;
        }
        else
        {
            if (rd32(eax + 0x95cu) == 0u)
            {
                wr32(eax + 0x95cu, 0xc00u);
                t134 = rd32(COW_IMG(0x1099d200u)) + 0x958u;
                wr32(sp0 - 0x20u, t134);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 2u);
                wr32(sp0 - 0x2cu, 0x208u);
                t135 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x95cu) * 0xcu;
                wr32(sp0 - 0x30u, t135);
                wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), t135, 0x208u, 2u, 0u, t134);
                eax = rd32(COW_IMG(0x1099d200u));
            }
            wr32(sp0 - 0x20u, 0xcu);
            t136 = rd32(eax + 0x958u);
            wr32(sp0 - 0x24u, t136);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), rd32(COW_IMG(0x1066941cu)), 4, rd32(COW_IMG(0x1066941cu)), 0u, t136, 0xcu);
            eax = rd32(COW_IMG(0x1099d200u));
            edi = 1u;
        }
        if ((rd8(eax + 0xa30u) & 2u) != 0u)
        {
            if (rd32(eax + 0x964u) == 0u)
            {
                wr32(eax + 0x964u, 0xc00u);
                t137 = rd32(COW_IMG(0x1099d200u)) + 0x960u;
                wr32(sp0 - 0x20u, t137);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0x10u);
                wr32(sp0 - 0x2cu, 0x208u);
                t138 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x964u) * 0xcu;
                wr32(sp0 - 0x30u, t138);
                wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), t138, 0x208u, 0x10u, 0u, t137);
                eax = rd32(COW_IMG(0x1099d200u));
            }
            wr32(sp0 - 0x20u, 0xcu);
            t139 = rd32(eax + 0x960u);
            wr32(sp0 - 0x24u, t139);
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), edi, 4, rd32(COW_IMG(0x1066941cu)), edi, t139, 0xcu);
            eax = rd32(COW_IMG(0x1099d200u));
            edi = edi + 1u;
        }
        if ((int32_t)(rd32(eax + 0xb18u) + 1u) <= 0) goto L_1028ba52;
        esi = 0u;
L_1028b9b2: ;
        if ((rd8(eax + esi * 4u + 0xa34u) & 4u) != 0u)
        {
            if (rd32(eax + esi * 4u + 0x970u) == 0u)
            {
                wr32(eax + esi * 4u + 0x970u, 0xc00u);
                if (esi != 0u)
                {
                    eax = rd32(COW_IMG(0x1066941cu));
                    ecx = rd32(COW_IMG(0x1099d200u));
                    edx = rd32(rd32(COW_IMG(0x1066941cu)));
                    t140 = ecx + esi * 4u + 0x968u;
                    wr32(sp0 - 0x20u, t140);
                    wr32(sp0 - 0x24u, 0u);
                    wr32(sp0 - 0x28u, 0x200u);
                    ecx = rd32(ecx + esi * 4u + 0x970u);
                    loc_28 = 0x200u;
                    loc_20 = t140;
                    loc_24 = 0u;
                }
                else
                {
                    eax = rd32(COW_IMG(0x1066941cu));
                    ecx = rd32(COW_IMG(0x1099d200u));
                    edx = rd32(rd32(COW_IMG(0x1066941cu)));
                    wr32(sp0 - 0x20u, ecx + 0x968u);
                    wr32(sp0 - 0x24u, esi);
                    wr32(sp0 - 0x28u, 0x100u);
                    loc_28 = 0x100u;
                    loc_20 = ecx + 0x968u;
                    ecx = rd32(ecx + 0x970u);
                    loc_24 = esi;
                }
                wr32(sp0 - 0x2cu, 0x208u);
                wr32(sp0 - 0x30u, ecx << 3u);
                wr32(sp0 - 0x34u, eax);
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(edx + 0x5cu), ecx << 3u, 6, eax, ecx << 3u, 0x208u, loc_28, loc_24, loc_20);
                eax = rd32(COW_IMG(0x1099d200u));
            }
            wr32(sp0 - 0x20u, 8u);
            t141 = rd32(eax + esi * 4u + 0x968u);
            wr32(sp0 - 0x24u, t141);
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), edi, 4, rd32(COW_IMG(0x1066941cu)), edi, t141, 8u);
            eax = rd32(COW_IMG(0x1099d200u));
            edi = edi + 1u;
        }
        if ((int32_t)(esi + 1u) < (int32_t)(rd32(eax + 0xb18u) + 1u))
        {
            esi = esi + 1u;
            goto L_1028b9b2;
        }
L_1028ba52: ;
        if ((rd8(eax + 0xa30u) & 0x10u) != 0u)
        {
            if (rd32(eax + 0x97cu) == 0u)
            {
                wr32(eax + 0x97cu, 0xc00u);
                t142 = rd32(COW_IMG(0x1099d200u)) + 0x978u;
                wr32(sp0 - 0x20u, t142);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 0x208u);
                t143 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x97cu) * 0xcu;
                wr32(sp0 - 0x30u, t143);
                wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), t143, 0x208u, 0u, 0u, t142);
                eax = rd32(COW_IMG(0x1099d200u));
            }
            wr32(sp0 - 0x20u, 0xcu);
            t144 = rd32(eax + 0x978u);
            wr32(sp0 - 0x24u, t144);
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), edi, 4, rd32(COW_IMG(0x1066941cu)), edi, t144, 0xcu);
            eax = rd32(COW_IMG(0x1099d200u));
            edi = edi + 1u;
        }
        if ((rd8(eax + 0xa30u) & 8u) != 0u)
        {
            if (rd32(eax + 0x98cu) == 0u)
            {
                wr32(eax + 0x98cu, 0xc00u);
                t145 = rd32(COW_IMG(0x1099d200u)) + 0x988u;
                wr32(sp0 - 0x20u, t145);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 0x208u);
                t146 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x98cu) << 2u;
                wr32(sp0 - 0x30u, t146);
                wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), t146, 6, rd32(COW_IMG(0x1066941cu)), t146, 0x208u, 0u, 0u, t145);
                eax = rd32(COW_IMG(0x1099d200u));
            }
            wr32(sp0 - 0x20u, 4u);
            t147 = rd32(eax + 0x988u);
            wr32(sp0 - 0x24u, t147);
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), rd32(COW_IMG(0x1066941cu)), 4, rd32(COW_IMG(0x1066941cu)), edi, t147, 4u);
        }
    }
L_1028bb21: ;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028b000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028b000(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
