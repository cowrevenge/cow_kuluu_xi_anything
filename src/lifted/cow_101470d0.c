/* f_0x101470d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101470d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_3c;
    uint32_t loc_44;
    uint32_t sf;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 124u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101470f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; sf = g->sf; loc_34 = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x30u); goto E_101470f5;
    case 0x1014712fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; sf = g->sf; loc_34 = rd32(sp0 - 0x34u); goto E_1014712f;
    case 0x1014713du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x34u); goto E_1014713d;
    case 0x10147146u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10147146;
    case 0x10147151u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10147151;
    case 0x10147156u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10147156;
    case 0x101471c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_101471c4;
    case 0x101471cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_101471cd;
    case 0x1014723fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_1014723f;
    case 0x10147273u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_10147273;
    case 0x10147287u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_10147287;
    case 0x1014729fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_1014729f;
    case 0x10147318u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_10147318;
    case 0x10147339u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_10147339;
    case 0x101473c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_101473c1;
    case 0x101473e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_101473e2;
    case 0x101474a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_101474a4;
    case 0x101474bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_24 = rd32(sp0 - 0x24u); goto E_101474ba;
    case 0x101474d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); loc_24 = rd32(sp0 - 0x24u); goto E_101474d8;
    case 0x1014751du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_1014751d;
    case 0x10147537u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_10147537;
    case 0x10147539u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_10147539;
    case 0x10147551u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_10147551;
    case 0x10147560u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_10147560;
    case 0x1014756du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_1014756d;
    case 0x1014756eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1014756e;
    default: break;
    }
#endif

    COW_AT(101470d0)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, 1u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x38u, 0u);
    g->edx = t3;
    g->esp = sp0 - 0x34u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), t2, 1, 0u);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        edi = in_edi;
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
    }
    else
    {
        eax = t4;
        edx = t5;
        ebx = t4;
        ebp = t1;
    COW_AT(101470f5)
        wr32(sp0 - 0x34u, 0x80808080u);
        wr32(sp0 - 0x38u, ebx + 2u);
        t6 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 7u);
        wr32(sp0 - 0x3cu, t6);
        t7 = ((eax & 0xffff0000u) | rd16(self + 0x14u)) + 4u;
        wr32(sp0 - 0x40u, t7);
        t8 = ((t6 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - rd16(self + 0x14u))) - 6u;
        wr32(sp0 - 0x44u, t8);
        g->eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
        g->ecx = t7;
        g->edx = t8;
        t9 = rd16(self + 0x14u);
        g->esp = sp0 - 0x30u;
        t10 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, t8, t7, t6, ebx + 2u, 0x80808080u);
        t11 = g->ecx;
        t12 = g->edx;
        if (!(rd8(COW_IMG(0x10485824u)) & 1u))
        {
            eax = (t10 & 0xffffff00u) | rd8(COW_IMG(0x10485824u));
            edx = t12;
            edi = in_edi;
            loc_28 = in_ebx;
            loc_2c = in_ebp;
            loc_30 = in_esi;
        }
        else
        {
            eax = (t10 & 0xffffff00u) | rd8(COW_IMG(0x10485824u));
            ecx = t11;
            edx = t12;
    COW_AT(1014712f)
            wr32(sp0 - 0x34u, in_edi);
            if (rd8(COW_IMG(0x10485640u)) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
                loc_34 = in_edi;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
    COW_AT(1014713d)
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                t13 = cow_call_regs(g, COW_IMG(0x100991d0u), eax, g->ecx, g->edx, 1, 0);
                t14 = g->ecx;
                t15 = g->edx;
                if (t13 == 0u)
                {
                    ecx = t14;
                    edx = t15;
                    goto L_10147151;
                }
                eax = t13;
                ecx = t14;
                edx = t15;
    COW_AT(10147146)
                if ((rd8(eax + 3u) & 0x40u) != 0u)
                {
                    edi = 0x802060a0u;
                    goto L_10147156;
                }
L_10147151: ;
    COW_AT(10147151)
                edi = 0x80808080u;
L_10147156: ;
    COW_AT(10147156)
                wr32(sp0 - 0x38u, rd8(COW_IMG(0x10485641u)));
                wr32(sp0 - 0x3cu, 0x59u);
                wr32(sp0 - 0x40u, 0xau);
                g->eax = rd8(COW_IMG(0x10485641u));
                g->edx = edx;
                t16 = rd8(COW_IMG(0x10485641u));
                g->esp = sp0 - 0x38u;
                t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x59u);
                t18 = g->edx;
                wr32(sp0 - 0x3cu, t17);
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->ebx = ebx;
                g->ecx = sp0 - 0x20u;
                g->esp = sp0 - 0x2cu;
                t19 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, t17, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t20 = g->ecx;
                wr32(sp0 - 0x44u, edi);
                wr32(sp0 - 0x48u, sp0 - 0x20u);
                t21 = (t19 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x13u);
                wr32(sp0 - 0x4cu, t21);
                t22 = (t20 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 4u);
                wr32(sp0 - 0x50u, t22);
                g->eax = t21;
                t23 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t22, t21, sp0 - 0x20u, edi, sp0 - 0x20u, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, edi);
                t24 = (uint32_t)(int16_t)rd16(self + 0x16u) + 0x13u;
                wr32(sp0 - 0x44u, t24);
                t25 = (uint32_t)(int16_t)(t23 + 2u);
                wr32(sp0 - 0x48u, t25);
                g->eax = t25;
                g->edx = rd32(ebp);
                t26 = rd32(rd32(ebp) + (uint8_t)rd32(COW_IMG(0x10485640u)) * 4u + 0x350u);
                t27 = rd32(ebp);
                g->esp = sp0 - 0x34u;
                t28 = cow_thiscall(g, COW_IMG(0x1011fb60u), t26, 5, t25, t24, edi, 0u, 0u);
                t29 = g->ecx;
                t30 = g->edx;
                eax = t28;
                ecx = t29;
                edx = t30;
                loc_34 = rd32(sp0 - 0x34u);
            }
    COW_AT(101471c4)
            if (rd8(COW_IMG(0x10485642u)) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485642u));
            }
            else
            {
    COW_AT(101471cd)
                wr32(sp0 - 0x38u, rd8(COW_IMG(0x10485643u)));
                wr32(sp0 - 0x3cu, 0x59u);
                wr32(sp0 - 0x40u, 0xau);
                g->eax = rd8(COW_IMG(0x10485643u));
                g->edx = edx;
                t31 = rd8(COW_IMG(0x10485643u));
                g->esp = sp0 - 0x38u;
                t32 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x59u);
                t33 = g->edx;
                wr32(sp0 - 0x3cu, t32);
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->ebx = ebx;
                g->ecx = sp0 - 0x20u;
                g->esp = sp0 - 0x2cu;
                t34 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, t32, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t35 = g->ecx;
                wr32(sp0 - 0x44u, 0x80808080u);
                wr32(sp0 - 0x48u, sp0 - 0x20u);
                t36 = (t34 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x1fu);
                wr32(sp0 - 0x4cu, t36);
                t37 = (t35 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 4u);
                wr32(sp0 - 0x50u, t37);
                g->eax = t36;
                t38 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t37, t36, sp0 - 0x20u, 0x80808080u, sp0 - 0x20u, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, 0x80808080u);
                t39 = (uint32_t)(int16_t)rd16(self + 0x16u) + 0x1fu;
                wr32(sp0 - 0x44u, t39);
                t40 = (uint32_t)(int16_t)(t38 + 2u);
                wr32(sp0 - 0x48u, t40);
                g->eax = t40;
                g->edx = rd32(ebp);
                t41 = rd32(rd32(ebp) + rd8(COW_IMG(0x10485642u)) * 4u + 0x350u);
                t42 = rd32(ebp);
                g->esp = sp0 - 0x34u;
                t43 = cow_thiscall(g, COW_IMG(0x1011fb60u), t41, 5, t40, t39, 0x80808080u, 0u, 0u);
                t44 = g->ecx;
                t45 = g->edx;
                eax = t43;
                ecx = t44;
                edx = t45;
                loc_34 = rd32(sp0 - 0x34u);
            }
    COW_AT(1014723f)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t46 = cow_stdcall(g, COW_IMG(0x101cc5f0u), 0);
            t47 = g->ecx;
            t48 = g->edx;
            g->ecx = t47;
            g->edx = t48;
            t49 = cow_stdcall(g, COW_IMG(0x101cc600u), 0);
            t50 = g->ecx;
            t51 = g->edx;
            wr32(sp0 - 0x38u, 0x80808080u);
            wr32(sp0 - 0x3cu, COW_IMG(0x103718b4u));
            t52 = (t49 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x2bu);
            wr32(sp0 - 0x40u, t52);
            t53 = (t50 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 4u);
            wr32(sp0 - 0x44u, t53);
            g->eax = t52;
            g->ecx = t53;
            g->edx = t51;
            g->esp = sp0 - 0x20u;
            t54 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t53, t52, COW_IMG(0x103718b4u), 0x80808080u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
            t55 = g->ecx;
            t56 = g->edx;
            if (t46 != 0u)
            {
                eax = t54;
                ecx = t55;
                edx = t56;
    COW_AT(10147287)
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                t59 = cow_stdcall(g, COW_IMG(0x101cc5f0u), 0);
                t60 = g->ecx;
                t61 = g->edx;
                wr32(sp0 - 0x38u, t59);
                wr32(sp0 - 0x3cu, COW_IMG(0x103718a4u));
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->ebx = ebx;
                g->eax = sp0 - 0x20u;
                g->edx = t61;
                g->esp = sp0 - 0x2cu;
                t62 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103718a4u), t59, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t63 = g->edx;
                eax = t62;
                edx = t63;
            }
            else
            {
                eax = t54;
                ecx = t55;
    COW_AT(10147273)
                wr32(sp0 - 0x38u, COW_IMG(0x103718acu));
                wr32(sp0 - 0x3cu, sp0 - 0x20u);
                g->ebx = ebx;
                g->eax = eax;
                g->edx = sp0 - 0x20u;
                g->esp = sp0 - 0x28u;
                t57 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103718acu), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
                t58 = g->edx;
                eax = t57;
                edx = t58;
            }
    COW_AT(1014729f)
            wr32(sp0 - 0x38u, 0x3f800000u);
            wr32(sp0 - 0x3cu, 0x3f800000u);
            wr32(sp0 - 0x40u, 1u);
            wr32(sp0 - 0x44u, 0x80808080u);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            t64 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x2bu);
            wr32(sp0 - 0x4cu, t64);
            t65 = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x46u);
            wr32(sp0 - 0x50u, t65);
            g->eax = t65;
            g->edx = t64;
            g->esp = sp0 - 0x34u;
            t66 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x20u, 7, t65, t64, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t67 = g->ecx;
            t68 = g->edx;
            g->edx = t68;
            g->esp = sp0 - 0x50u;
            t69 = cow_stdcall(g, COW_IMG(0x101cc600u), 0);
            t70 = g->edx;
            wr32(sp0 - 0x54u, t69);
            wr32(sp0 - 0x58u, COW_IMG(0x1037189cu));
            wr32(sp0 - 0x5cu, sp0 - 0x20u);
            g->ebx = ebx;
            g->ecx = sp0 - 0x20u;
            g->esp = sp0 - 0x48u;
            t71 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1037189cu), t69, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
            t72 = g->ecx;
            wr32(sp0 - 0x60u, 0x80808080u);
            wr32(sp0 - 0x64u, sp0 - 0x20u);
            t73 = (t71 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x2bu);
            wr32(sp0 - 0x68u, t73);
            t74 = (t72 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x4au);
            wr32(sp0 - 0x6cu, t74);
            g->eax = t73;
            g->edx = sp0 - 0x20u;
            t75 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t74, t73, sp0 - 0x20u, 0x80808080u, sp0 - 0x20u, COW_IMG(0x1037189cu), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
            t76 = g->edx;
            wr32(sp0 - 0x38u, 0x17u);
            g->esp = sp0 - 0x34u;
            t77 = cow_stdcall(g, COW_IMG(0x101470a0u), 1, 0x17u);
            if (t77 == 0x80808080u)
            {
                eax = t77;
                edi = t77;
            }
            else
            {
                edi = t77;
    COW_AT(10147318)
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, 0x80808080u);
                t78 = (uint32_t)(int16_t)rd16(self + 0x16u) + 0x3bu;
                wr32(sp0 - 0x44u, t78);
                t79 = (uint32_t)(int16_t)rd16(self + 0x14u) + 0x17u;
                wr32(sp0 - 0x48u, t79);
                g->eax = t79;
                g->esp = sp0 - 0x34u;
                t80 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t79, t78, 0x80808080u, 0u, 0u);
                eax = t80;
            }
    COW_AT(10147339)
            t81 = rd32(ebx + 0x20u);
            wr32(sp0 - 0x38u, t81);
            wr32(sp0 - 0x3cu, COW_IMG(0x103715c8u));
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->ebx = ebx;
            g->ecx = t81;
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x2cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103715c8u), t81, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t82 = g->ecx;
            t83 = g->edx;
            wr32(sp0 - 0x44u, 0x3f800000u);
            wr32(sp0 - 0x48u, 0x3f800000u);
            wr32(sp0 - 0x4cu, 1u);
            wr32(sp0 - 0x50u, 0x80808080u);
            wr32(sp0 - 0x54u, sp0 - 0x20u);
            t84 = (t82 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x3au);
            wr32(sp0 - 0x58u, t84);
            t85 = (t83 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x46u);
            wr32(sp0 - 0x5cu, t85);
            g->edx = t85;
            g->esp = sp0 - 0x40u;
            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t84, 7, t85, t84, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t86 = g->edx;
            wr32(sp0 - 0x60u, rd32(COW_IMG(0x10485638u)));
            wr32(sp0 - 0x64u, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x68u, sp0 - 0x20u);
            g->ebx = ebx;
            g->eax = rd32(COW_IMG(0x10485638u));
            g->ecx = sp0 - 0x20u;
            t87 = rd32(COW_IMG(0x10485638u));
            g->esp = sp0 - 0x54u;
            t88 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t87, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
            t89 = g->ecx;
            wr32(sp0 - 0x6cu, edi);
            wr32(sp0 - 0x70u, sp0 - 0x20u);
            t90 = (t88 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x3au);
            wr32(sp0 - 0x74u, t90);
            t91 = (t89 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x48u);
            wr32(sp0 - 0x78u, t91);
            g->eax = t90;
            g->edx = sp0 - 0x20u;
            t92 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t91, t90, sp0 - 0x20u, edi, sp0 - 0x20u, COW_IMG(0x10352ff0u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
            t93 = g->edx;
            wr32(sp0 - 0x38u, 0x18u);
            g->esp = sp0 - 0x34u;
            t94 = cow_stdcall(g, COW_IMG(0x101470a0u), 1, 0x18u);
            if (t94 == 0x80808080u)
            {
                eax = t94;
                edi = t94;
            }
            else
            {
                edi = t94;
    COW_AT(101473c1)
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, 0x80808080u);
                t95 = (uint32_t)(int16_t)rd16(self + 0x16u) + 0x47u;
                wr32(sp0 - 0x44u, t95);
                t96 = (uint32_t)(int16_t)rd16(self + 0x14u) + 0x17u;
                wr32(sp0 - 0x48u, t96);
                g->eax = t96;
                g->esp = sp0 - 0x34u;
                t97 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t96, t95, 0x80808080u, 0u, 0u);
                eax = t97;
            }
    COW_AT(101473e2)
            t98 = rd32(ebx + 0x24u);
            wr32(sp0 - 0x38u, t98);
            wr32(sp0 - 0x3cu, COW_IMG(0x103715c8u));
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->ebx = ebx;
            g->ecx = t98;
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x2cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103715c8u), t98, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t99 = g->ecx;
            t100 = g->edx;
            wr32(sp0 - 0x44u, 0x3f800000u);
            wr32(sp0 - 0x48u, 0x3f800000u);
            wr32(sp0 - 0x4cu, 1u);
            wr32(sp0 - 0x50u, 0x80808080u);
            wr32(sp0 - 0x54u, sp0 - 0x20u);
            t101 = (t99 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x46u);
            wr32(sp0 - 0x58u, t101);
            t102 = (t100 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x46u);
            wr32(sp0 - 0x5cu, t102);
            g->edx = t102;
            g->esp = sp0 - 0x40u;
            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t101, 7, t102, t101, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t103 = g->edx;
            wr32(sp0 - 0x60u, rd32(COW_IMG(0x1048563cu)));
            wr32(sp0 - 0x64u, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x68u, sp0 - 0x20u);
            g->ebx = ebx;
            g->eax = rd32(COW_IMG(0x1048563cu));
            g->ecx = sp0 - 0x20u;
            t104 = rd32(COW_IMG(0x1048563cu));
            g->esp = sp0 - 0x54u;
            t105 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t104, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
            t106 = g->ecx;
            wr32(sp0 - 0x6cu, edi);
            wr32(sp0 - 0x70u, sp0 - 0x20u);
            t107 = (t105 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x46u);
            wr32(sp0 - 0x74u, t107);
            t108 = (t106 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x48u);
            wr32(sp0 - 0x78u, t108);
            g->ecx = t108;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, t108, t107, sp0 - 0x20u, edi, sp0 - 0x20u, COW_IMG(0x10352ff0u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
            t109 = g->ecx;
            t110 = rd32(ebx + 0x28u);
            wr32(sp0 - 0x38u, t110);
            wr32(sp0 - 0x3cu, COW_IMG(0x1036f9d0u));
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->ebx = ebx;
            g->eax = sp0 - 0x20u;
            g->edx = t110;
            g->esp = sp0 - 0x2cu;
            t111 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036f9d0u), t110, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t112 = g->edx;
            wr32(sp0 - 0x44u, 0x3f800000u);
            wr32(sp0 - 0x48u, 0x3f800000u);
            wr32(sp0 - 0x4cu, 1u);
            wr32(sp0 - 0x50u, 0x80808080u);
            wr32(sp0 - 0x54u, sp0 - 0x20u);
            t113 = (t112 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x52u);
            wr32(sp0 - 0x58u, t113);
            t114 = (t111 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x4bu);
            wr32(sp0 - 0x5cu, t114);
            g->eax = t114;
            g->edx = t113;
            g->esp = sp0 - 0x40u;
            t115 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x20u, 7, t114, t113, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t116 = g->edx;
            eax = t115;
            edx = t116;
            ebp = 0u;
            edi = (edi & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x60u);
L_101474a4: ;
    COW_AT(101474a4)
            wr32(sp0 - 0x38u, ebp + 0x10u);
            g->eax = eax;
            g->esp = sp0 - 0x34u;
            t117 = cow_stdcall(g, COW_IMG(0x101470a0u), 1, ebp + 0x10u);
            wr32(sp0 - 0x24u, t117);
            if (t117 == 0x80808080u)
            {
                eax = t117;
                loc_24 = t117;
            }
            else
            {
                loc_24 = t117;
    COW_AT(101474ba)
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, 0x80808080u);
                t118 = (uint32_t)(int16_t)edi + 1u;
                wr32(sp0 - 0x44u, t118);
                t119 = (uint32_t)(int16_t)rd16(self + 0x14u) + 0x1fu;
                wr32(sp0 - 0x48u, t119);
                g->eax = t119;
                g->esp = sp0 - 0x34u;
                t120 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t119, t118, 0x80808080u, 0u, 0u);
                eax = t120;
                loc_24 = rd32(sp0 - 0x24u);
            }
    COW_AT(101474d8)
            t121 = rd16(COW_IMG(0x10485648u) + ebp * 2u);
            wr32(sp0 - 0x38u, t121);
            wr32(sp0 - 0x3cu, COW_IMG(0x1036f9d0u));
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x32u);
            g->edx = sp0 - 0x20u;
            t122 = rd16(self + 0x14u);
            g->esp = sp0 - 0x2cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036f9d0u), t121, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t123 = g->edx;
            t124 = rd32(sp0 - 0x24u);
            wr32(sp0 - 0x44u, t124);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            wr32(sp0 - 0x4cu, edi);
            t125 = (ebx & 0xffff0000u) | (uint16_t)(t122 + 0x32u);
            wr32(sp0 - 0x50u, t125);
            g->eax = t124;
            g->ecx = sp0 - 0x20u;
            g->edx = t123;
            t126 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t125, edi, sp0 - 0x20u, t124, sp0 - 0x20u, COW_IMG(0x1036f9d0u), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t127 = g->ecx;
            t128 = g->edx;
            if ((int16_t)rd16(COW_IMG(0x10485656u) + ebp * 2u) <= 0)
            {
                eax = (t126 & 0xffff0000u) | rd16(COW_IMG(0x10485656u) + ebp * 2u);
                ecx = t127;
                edx = t128;
                ebx = t126;
                sf = (int16_t)rd16(COW_IMG(0x10485656u) + ebp * 2u) < 0;
                goto L_10147537;
            }
            eax = (t126 & 0xffff0000u) | rd16(COW_IMG(0x10485656u) + ebp * 2u);
            ecx = t127;
            ebx = t126;
    COW_AT(1014751d)
            wr32(sp0 - 0x38u, (uint32_t)(int16_t)eax);
            wr32(sp0 - 0x3cu, COW_IMG(0x103715c0u));
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->ebx = ebx;
            g->eax = sp0 - 0x20u;
            g->edx = (uint32_t)(int16_t)eax;
            g->esp = sp0 - 0x2cu;
            t129 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103715c0u), (uint32_t)(int16_t)eax, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t130 = g->edx;
            wr32(sp0 - 0x44u, 0x80408040u);
            eax = t129;
            edx = t130;
            loc_3c = COW_IMG(0x103715c0u);
            loc_44 = 0x80408040u;
L_10147551: ;
    COW_AT(10147551)
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            wr32(sp0 - 0x4cu, edi);
            wr32(sp0 - 0x50u, ebx);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t133 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, ebx, edi, sp0 - 0x20u, loc_44, sp0 - 0x20u, loc_3c, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t134 = g->edx;
            eax = t133;
            edx = t134;
L_10147560: ;
    COW_AT(10147560)
            if ((int32_t)(ebp + 1u) < 7)
            {
                ebp = ebp + 1u;
                edi = edi + 0xdu;
                goto L_101474a4;
            }
    COW_AT(1014756d)
            edi = rd32(sp0 - 0x34u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
        }
    }
    COW_AT(1014756e)
    g->ebx = loc_28;
    g->esi = loc_30;
    g->edi = edi;
    g->ebp = loc_2c;
    g->edx = edx;
    return eax;
L_10147537: ;
    COW_AT(10147537)
    if (!sf) goto L_10147560;
    COW_AT(10147539)
    wr32(sp0 - 0x38u, (uint32_t)(int16_t)eax);
    wr32(sp0 - 0x3cu, COW_IMG(0x1036c00cu));
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->ebx = ebx;
    g->eax = sp0 - 0x20u;
    g->edx = (uint32_t)(int16_t)eax;
    g->esp = sp0 - 0x2cu;
    t131 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036c00cu), (uint32_t)(int16_t)eax, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t132 = g->edx;
    wr32(sp0 - 0x44u, 0x80804040u);
    eax = t131;
    edx = t132;
    loc_3c = COW_IMG(0x1036c00cu);
    loc_44 = 0x80804040u;
    goto L_10147551;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101470d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101470f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        loc_34 = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1014712fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_34;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1014713du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10147146u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10147151u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10147156u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x101471c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x101471cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1014723fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10147273u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10147287u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1014729fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10147318u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x64u, sp0 - 0x20u);
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10147339u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x64u, sp0 - 0x20u);
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101473c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101473e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101474a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101474bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101474d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1014751du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10147537u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10147539u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10147551u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10147560u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1014756du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1014756eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101470d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101470d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
