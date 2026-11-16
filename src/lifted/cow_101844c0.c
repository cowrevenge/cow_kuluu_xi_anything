/* f_0x101844c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101844c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_100;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_dc;
    uint32_t loc_e4;
    uint32_t loc_ec;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
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
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 276u);

    wr32(sp0 - 0xf0u, in_ebx);
    wr32(sp0 - 0xf4u, in_ebp);
    wr32(sp0 - 0xf8u, in_esi);
    wr32(sp0 - 0xfcu, in_edi);
    if (rd32(arg1 + 0x18u) != 0u)
    {
        ebp = rd32(arg1 + 0x18u);
        wr32(sp0 - 0xdcu, 0u);
        if (rd32(COW_IMG(0x106631d4u)) != 0u)
        {
            eax = rd32(COW_IMG(0x106631d4u));
            wr32(sp0 - 0x100u, 0x31305f6cu);
            g->eax = eax;
            g->esp = sp0 - 0xfcu;
            t1 = cow_stdcall(g, COW_IMG(0x10178760u), 1, 0x31305f6cu);
            wr32(sp0 - 0xdcu, t1);
            if (t1 == 0u)
            {
                loc_dc = t1;
                wr32(sp0 - 0x100u, 0u);
                t6 = rd32(self + 0x394b0u);
                wr32(sp0 - 0x104u, t6);
                t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x108u, t7);
                g->esp = sp0 - 0xfcu;
                cow_thiscall(g, rd32(rd32(t7) + 0xb8u), t6, 3, t7, t6, 0u);
            }
            else
            {
                edi = t1;
                loc_dc = t1;
                wr32(sp0 - 0x100u, 1u);
                t2 = rd32(self + 0x394b0u);
                wr32(sp0 - 0x104u, t2);
                t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x108u, t3);
                g->edx = t2;
                g->esp = sp0 - 0xfcu;
                cow_thiscall(g, rd32(rd32(t3) + 0xb8u), rd32(t3), 3, t3, t2, 1u);
                t4 = g->edx;
                wr32(sp0 - 0x100u, edi + 8u);
                t5 = rd32(self + 0x394b0u);
                wr32(sp0 - 0x104u, t5);
                cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t5, edi + 8u);
            }
        }
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 0x89u);
        t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t8);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t9 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 0x89u, 1u);
        t10 = g->edx;
        edi = sp0 - 0xd0u;
        eax = 0u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if (rd32(self + 0x394a4u) == 0u)
        {
            ecx = rd32(COW_IMG(0x1065cb04u));
            edx = t10;
            wr32(sp0 - 0x100u, 0u);
            wr32(sp0 - 0x104u, 0u);
            wr32(sp0 - 0x108u, sp0 - 0xd0u);
            g->eax = sp0 - 0xd0u;
            g->esp = sp0 - 0xfcu;
            t17 = cow_thiscall(g, COW_IMG(0x1018b9a0u), ecx, 3, sp0 - 0xd0u, 0u, 0u);
            wr32(sp0 - 0x100u, sp0 - 0xd0u);
            t18 = rd32(self + 0x394a8u);
            wr32(sp0 - 0x104u, t18);
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t18, sp0 - 0xd0u);
            edx = rd32(self + 0x394a8u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x1065cb04u));
            wr32(sp0 - 0x100u, sp0 - 0x68u);
            wr32(sp0 - 0x104u, sp0 - 0xd0u);
            g->eax = sp0 - 0xd0u;
            g->esp = sp0 - 0xfcu;
            t11 = cow_thiscall(g, COW_IMG(0x10188b70u), ecx, 2, sp0 - 0xd0u, sp0 - 0x68u);
            wr32(sp0 - 0x100u, sp0 - 0xd0u);
            t12 = rd32(self + 0x394a8u);
            wr32(sp0 - 0x104u, t12);
            g->edx = t12;
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t12, sp0 - 0xd0u);
            t13 = g->edx;
            wr32(sp0 - 0x100u, sp0 - 0x68u);
            t14 = rd32(self + 0x394acu);
            wr32(sp0 - 0x104u, t14);
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t14, sp0 - 0x68u);
            wr32(sp0 - 0x100u, 1u);
            t15 = rd32(self + 0x394a8u);
            wr32(sp0 - 0x104u, t15);
            t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t16);
            cow_thiscall(g, rd32(rd32(t16) + 0xb8u), rd32(t16), 3, t16, t15, 1u);
            edx = rd32(self + 0x394acu);
        }
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, edx);
        t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t19);
        g->edx = edx;
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t19) + 0xb8u), rd32(t19), 3, t19, edx, 1u);
        t20 = g->edx;
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0x104u, 0u);
        wr32(sp0 - 0x108u, sp0 - 0xe8u);
        cow_thiscall(g, COW_IMG(0x1018b9e0u), rd32(COW_IMG(0x1065cb04u)), 3, sp0 - 0xe8u, 0u, 0u);
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0x104u, 0u);
        wr32(sp0 - 0x108u, sp0 - 0xe0u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        cow_thiscall(g, COW_IMG(0x1018ba20u), rd32(COW_IMG(0x1065cb04u)), 5, sp0 - 0xd8u, sp0 - 0xd4u, sp0 - 0xe0u, 0u, 0u);
        t21 = rd32(sp0 - 0xe8u);
        wr32(sp0 - 0x100u, t21);
        wr32(sp0 - 0x104u, 0x8bu);
        t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t22);
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), t21, 3, t22, 0x8bu, t21);
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 0x1cu);
        t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t23);
        t24 = rd32(t23);
        cow_thiscall(g, rd32(t24 + 0xc8u), t24, 3, t23, 0x1cu, 1u);
        t25 = g->ecx;
        if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du) == 0u)
        {
            eax = rd32(COW_IMG(0x1045666cu));
            ecx = (t25 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du);
            goto L_1018492c;
        }
        eax = rd32(COW_IMG(0x1045666cu));
        ecx = (t25 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du);
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0x104u, 0x8cu);
        t26 = rd32(eax + 0xcu);
        wr32(sp0 - 0x108u, t26);
        g->edx = rd32(t26);
        t27 = rd32(t26);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(t27 + 0xc8u), ecx, 3, t26, 0x8cu, 0u);
        t28 = g->edx;
        wr32(sp0 - 0x100u, 3u);
        wr32(sp0 - 0x104u, 0x23u);
        t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t29);
        cow_thiscall(g, rd32(rd32(t29) + 0xc8u), rd32(t29), 3, t29, 0x23u, 3u);
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = rd32(COW_IMG(0x1045666cu));
L_101846cf: ;
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0x104u, 0x30u);
        wr32(sp0 - 0x108u, eax);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x30u, 0u);
L_101846dc: ;
        eax = rd32(COW_IMG(0x1045666cu));
L_101846e1: ;
        t37 = rd32(sp0 - 0xd8u);
        wr32(sp0 - 0x100u, t37);
        wr32(sp0 - 0x104u, 0x22u);
        t38 = rd32(eax + 0xcu);
        wr32(sp0 - 0x108u, t38);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(rd32(eax + 0xcu)) + 0xc8u), t37, 3, t38, 0x22u, t37);
        t39 = rd32(sp0 - 0xe0u);
        wr32(sp0 - 0x100u, t39);
        wr32(sp0 - 0x104u, 0x24u);
        t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t40);
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t40, 0x24u, t39);
        t41 = rd32(sp0 - 0xd4u);
        wr32(sp0 - 0x100u, t41);
        wr32(sp0 - 0x104u, 0x25u);
        t42 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t42);
        cow_thiscall(g, rd32(rd32(t42) + 0xc8u), rd32(t42), 3, t42, 0x25u, t41);
        wr32(sp0 - 0x100u, self + 0x3913cu);
        t43 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x104u, t43);
        g->edx = self + 0x3913cu;
        cow_thiscall(g, rd32(rd32(t43) + 0xa8u), rd32(t43), 2, t43, self + 0x3913cu);
        t44 = g->edx;
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 0x11u);
        wr32(sp0 - 0x108u, 0u);
        t45 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t45);
        cow_thiscall(g, rd32(rd32(t45) + 0xfcu), rd32(t45), 4, t45, 0u, 0x11u, 1u);
        wr32(sp0 - 0x100u, 2u);
        wr32(sp0 - 0x104u, 0x10u);
        wr32(sp0 - 0x108u, 0u);
        t46 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t46);
        cow_thiscall(g, rd32(rd32(t46) + 0xfcu), rd32(t46), 4, t46, 0u, 0x10u, 2u);
        wr32(sp0 - 0x100u, 5u);
        wr32(sp0 - 0x104u, 1u);
        wr32(sp0 - 0x108u, 0u);
        t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t47);
        cow_thiscall(g, rd32(rd32(t47) + 0xfcu), rd32(t47), 4, t47, 0u, 1u, 5u);
        wr32(sp0 - 0x100u, 2u);
        wr32(sp0 - 0x104u, 2u);
        wr32(sp0 - 0x108u, 0u);
        t48 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t48);
        cow_thiscall(g, rd32(rd32(t48) + 0xfcu), rd32(t48), 4, t48, 0u, 2u, 2u);
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 3u);
        wr32(sp0 - 0x108u, 0u);
        t49 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t49);
        cow_thiscall(g, rd32(rd32(t49) + 0xfcu), rd32(t49), 4, t49, 0u, 3u, 1u);
        wr32(sp0 - 0x100u, 6u);
        wr32(sp0 - 0x104u, 4u);
        wr32(sp0 - 0x108u, 0u);
        t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t50);
        cow_thiscall(g, rd32(rd32(t50) + 0xfcu), rd32(t50), 4, t50, 0u, 4u, 6u);
        wr32(sp0 - 0x100u, 2u);
        wr32(sp0 - 0x104u, 5u);
        wr32(sp0 - 0x108u, 0u);
        t51 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t51);
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t51, 0u, 5u, 2u);
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 6u);
        wr32(sp0 - 0x108u, 0u);
        t52 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t52);
        cow_thiscall(g, rd32(rd32(t52) + 0xfcu), rd32(t52), 4, t52, 0u, 6u, 1u);
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 4u);
        wr32(sp0 - 0x108u, 1u);
        t53 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t53);
        cow_thiscall(g, rd32(rd32(t53) + 0xfcu), rd32(t53), 4, t53, 1u, 4u, 1u);
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 1u);
        wr32(sp0 - 0x108u, 1u);
        t54 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t54);
        cow_thiscall(g, rd32(rd32(t54) + 0xfcu), rd32(t54), 4, t54, 1u, 1u, 1u);
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 1u);
        wr32(sp0 - 0x108u, 2u);
        t55 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t55);
        cow_thiscall(g, rd32(rd32(t55) + 0xfcu), rd32(t55), 4, t55, 2u, 1u, 1u);
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 4u);
        wr32(sp0 - 0x108u, 2u);
        t56 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t56);
        cow_thiscall(g, rd32(rd32(t56) + 0xfcu), rd32(t56), 4, t56, 2u, 4u, 1u);
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 0xdu);
        wr32(sp0 - 0x108u, 0u);
        t57 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t57);
        cow_thiscall(g, rd32(rd32(t57) + 0xfcu), rd32(t57), 4, t57, 0u, 0xdu, 1u);
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 0xeu);
        wr32(sp0 - 0x108u, 0u);
        t58 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t58);
        cow_thiscall(g, rd32(rd32(t58) + 0xfcu), rd32(t58), 4, t58, 0u, 0xeu, 1u);
        wr32(sp0 - 0x100u, 3u);
        wr32(sp0 - 0x104u, 0xdu);
        wr32(sp0 - 0x108u, 1u);
        t59 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t59);
        cow_thiscall(g, rd32(rd32(t59) + 0xfcu), rd32(t59), 4, t59, 1u, 0xdu, 3u);
        wr32(sp0 - 0x100u, 3u);
        wr32(sp0 - 0x104u, 0xeu);
        wr32(sp0 - 0x108u, 1u);
        t60 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t60);
        g->eax = t60;
        t61 = rd32(t60);
        t62 = cow_thiscall(g, rd32(t61 + 0xfcu), t61, 4, t60, 1u, 0xeu, 3u);
        t63 = g->ecx;
        wr32(sp0 - 0x100u, rd32(COW_IMG(0x10632038u)));
        g->edx = rd32(COW_IMG(0x10632038u));
        t64 = rd32(COW_IMG(0x10632038u));
        cow_cdecl(g, COW_IMG(0x10177400u), 1, t64);
        t65 = g->edx;
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0x104u, 0x1bu);
        t66 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t66);
        cow_thiscall(g, rd32(rd32(t66) + 0xc8u), rd32(t66), 3, t66, 0x1bu, 0u);
        if (arg2 == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
            wr32(sp0 - 0x100u, 0u);
            wr32(sp0 - 0x104u, 0xfu);
            loc_104 = 0xfu;
            loc_100 = 0u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
            wr32(sp0 - 0x100u, 1u);
            wr32(sp0 - 0x104u, 0xfu);
            wr32(sp0 - 0x108u, eax);
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0xfu, 1u);
            wr32(sp0 - 0x100u, 5u);
            wr32(sp0 - 0x104u, 0x19u);
            t67 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t67);
            cow_thiscall(g, rd32(rd32(t67) + 0xc8u), rd32(t67), 3, t67, 0x19u, 5u);
            wr32(sp0 - 0x100u, 0x60u);
            wr32(sp0 - 0x104u, 0x18u);
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
            loc_104 = 0x18u;
            loc_100 = 0x60u;
        }
        wr32(sp0 - 0x108u, eax);
        g->esp = sp0 - 0x104u;
        cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 1, eax);
        wr32(sp0 - 0x108u, 5u);
        wr32(sp0 - 0x10cu, 0x13u);
        t68 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x110u, t68);
        cow_thiscall(g, rd32(rd32(t68) + 0xc8u), rd32(t68), 3, t68, 0x13u, 5u);
        wr32(sp0 - 0x108u, 6u);
        wr32(sp0 - 0x10cu, 0x14u);
        t69 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x110u, t69);
        cow_thiscall(g, rd32(rd32(t69) + 0xc8u), rd32(t69), 3, t69, 0x14u, 6u);
        if (rd16(arg1 + 0xd4u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
            wr32(sp0 - 0x108u, 3u);
            loc_108 = 3u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
            wr32(sp0 - 0x108u, 2u);
            loc_108 = 2u;
        }
        wr32(sp0 - 0x10cu, 0x16u);
        wr32(sp0 - 0x110u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xfcu;
        t70 = cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 5, eax, 0x16u, loc_108, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u));
        t71 = g->edx;
        wr32(self + 0x39120u, 0u);
        wr32(sp0 - 0x100u, arg1 + 0x40u);
        wr32(sp0 - 0x104u, 0x100u);
        cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, arg1 + 0x40u);
        if (rd32(ebp + 0x60u) != 0u)
        {
            edi = rd32(ebp + 0x60u);
            wr32(sp0 - 0xe4u, 0u);
            if ((int32_t)rd32(ebp + 0x44u) <= 0) goto L_10184bcd;
            loc_e4 = 0u;
L_10184a21: ;
            wr32(sp0 - 0xecu, 0u);
            if ((int32_t)rd32(edi) > 0)
            {
                esi = rd32(edi + 4u);
                esi = esi + 4u;
                loc_ec = 0u;
L_10184a39: ;
                if (rd32(esi + 0x24u) != 0u)
                {
                    eax = rd32(esi + 0x24u);
                    wr32(sp0 - 0x100u, sp0 - 0xd0u);
                    wr32(sp0 - 0x104u, 0u);
                    g->esp = sp0 - 0xfcu;
                    cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, 0u, sp0 - 0xd0u);
                    t72 = rd32(sp0 - 0xe8u);
                    wr32(sp0 - 0x100u, t72);
                    wr32(sp0 - 0x104u, 0x8bu);
                    t73 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x108u, t73);
                    cow_thiscall(g, rd32(rd32(t73) + 0xc8u), rd32(t73), 3, t73, 0x8bu, t72);
                    t74 = rd32(sp0 - 0xd8u);
                    wr32(sp0 - 0x100u, t74);
                    wr32(sp0 - 0x104u, 0x22u);
                    t75 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x108u, t75);
                    cow_thiscall(g, rd32(rd32(t75) + 0xc8u), rd32(t75), 3, t75, 0x22u, t74);
                    t76 = rd32(sp0 - 0xe0u);
                    wr32(sp0 - 0x100u, t76);
                    wr32(sp0 - 0x104u, 0x24u);
                    t77 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x108u, t77);
                    cow_thiscall(g, rd32(rd32(t77) + 0xc8u), rd32(t77), 3, t77, 0x24u, t76);
                    t78 = rd32(sp0 - 0xd4u);
                    wr32(sp0 - 0x100u, t78);
                    wr32(sp0 - 0x104u, 0x25u);
                    t79 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x108u, t79);
                    g->edx = t78;
                    cow_thiscall(g, rd32(rd32(t79) + 0xc8u), rd32(t79), 3, t79, 0x25u, t78);
                    t80 = g->edx;
                    if ((uint32_t)(int16_t)rd16(esi + 0x20u) == rd32(self + 0x39120u))
                    {
                        edx = t80;
                    }
                    else
                    {
                        eax = (uint32_t)(int16_t)rd16(esi + 0x20u);
                        edx = t80;
                        wr32(self + 0x39120u, eax);
                        if (eax == 0u)
                        {
                            if (rd32(self + 0x390fcu) == 0u)
                            {
                                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                edx = rd32(COW_IMG(0x1045666cu));
                                wr32(sp0 - 0x100u, 3u);
                                loc_100 = 3u;
                            }
                            else
                            {
                                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                edx = rd32(COW_IMG(0x1045666cu));
                                wr32(sp0 - 0x100u, 2u);
                                loc_100 = 2u;
                            }
                        }
                        else
                        {
                            wr32(sp0 - 0x100u, 1u);
                            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            loc_100 = 1u;
                        }
                        wr32(sp0 - 0x104u, 0x16u);
                        wr32(sp0 - 0x108u, eax);
                        g->edx = edx;
                        g->esp = sp0 - 0xfcu;
                        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x16u, loc_100);
                        t81 = g->edx;
                        edx = t81;
                    }
                    if (rd32(esi) == 0u)
                    {
                        wr32(sp0 - 0x100u, 0u);
                        wr32(sp0 - 0x104u, 0u);
                        t83 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x108u, t83);
                        g->esp = sp0 - 0xfcu;
                        cow_thiscall(g, rd32(rd32(t83) + 0xf4u), rd32(t83), 3, t83, 0u, 0u);
                    }
                    else
                    {
                        eax = rd32(esi);
                        if (rd32(eax + 0x40u) == 0u)
                        {
                            eax = rd32(eax + 0x44u);
                        }
                        else
                        {
                            ecx = rd32(eax + 0x40u);
                            eax = ecx;
                        }
                        wr32(sp0 - 0x100u, eax);
                        wr32(sp0 - 0x104u, 0u);
                        t82 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x108u, t82);
                        g->esp = sp0 - 0xfcu;
                        cow_thiscall(g, rd32(rd32(t82) + 0xf4u), t82, 3, t82, 0u, eax);
                    }
                    t84 = (uint32_t)(int16_t)rd16(esi + 0x1cu);
                    wr32(sp0 - 0x100u, t84);
                    wr32(sp0 - 0x104u, 0x1bu);
                    t85 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x108u, t85);
                    g->esp = sp0 - 0xfcu;
                    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t85, 0x1bu, t84);
                    t86 = rd32(ebp + 0x20u);
                    wr32(sp0 - 0x100u, t86);
                    t87 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x104u, t87);
                    cow_thiscall(g, rd32(rd32(t87) + 0x130u), rd32(t87), 2, t87, t86);
                    t88 = rd32(ebp + 0x24u);
                    wr32(sp0 - 0x100u, t88);
                    t89 = rd32(esi + 0x24u);
                    wr32(sp0 - 0x104u, t89);
                    wr32(sp0 - 0x108u, 0u);
                    t90 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x10cu, t90);
                    g->edx = t89;
                    cow_thiscall(g, rd32(rd32(t90) + 0x14cu), rd32(t90), 4, t90, 0u, t89, t88);
                    t91 = g->edx;
                    t92 = rd32(esi + 0x14u);
                    wr32(sp0 - 0x100u, t92);
                    wr32(sp0 - 0x104u, 0u);
                    t93 = rd32(ebp + 0x2cu);
                    wr32(sp0 - 0x108u, t93);
                    cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, t93, 0u, t92);
                }
                wr32(sp0 - 0xecu, loc_ec + 1u);
                if ((int32_t)(loc_ec + 1u) < (int32_t)rd32(edi))
                {
                    esi = esi + 0xc0u;
                    loc_ec = loc_ec + 1u;
                    goto L_10184a39;
                }
            }
            wr32(sp0 - 0xe4u, loc_e4 + 1u);
            if ((int32_t)(loc_e4 + 1u) < (int32_t)rd32(ebp + 0x44u))
            {
                edi = edi + 0x24u;
                loc_e4 = loc_e4 + 1u;
                goto L_10184a21;
            }
L_10184bcd: ;
            wr32(sp0 - 0x100u, 0u);
            wr32(sp0 - 0x104u, 0x8bu);
            t94 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t94);
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, rd32(rd32(t94) + 0xc8u), rd32(t94), 3, t94, 0x8bu, 0u);
            wr32(sp0 - 0x100u, 1u);
            wr32(sp0 - 0x104u, 0x89u);
            t95 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t95);
            cow_thiscall(g, rd32(rd32(t95) + 0xc8u), rd32(t95), 3, t95, 0x89u, 1u);
            wr32(sp0 - 0x100u, 0u);
            wr32(sp0 - 0x104u, 0x1bu);
            t96 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t96);
            cow_thiscall(g, rd32(rd32(t96) + 0xc8u), rd32(t96), 3, t96, 0x1bu, 0u);
            wr32(sp0 - 0x100u, 1u);
            wr32(sp0 - 0x104u, 0xfu);
            t97 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t97);
            cow_thiscall(g, rd32(rd32(t97) + 0xc8u), rd32(t97), 3, t97, 0xfu, 1u);
            wr32(sp0 - 0x100u, 1u);
            wr32(sp0 - 0x104u, 0x16u);
            t98 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t98);
            cow_thiscall(g, rd32(rd32(t98) + 0xc8u), rd32(t98), 3, t98, 0x16u, 1u);
            if (rd32(sp0 - 0xdcu) != 0u)
            {
                wr32(sp0 - 0x100u, 0u);
                t99 = rd32(self + 0x394b0u);
                wr32(sp0 - 0x104u, t99);
                t100 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x108u, t100);
                g->esp = sp0 - 0xfcu;
                cow_thiscall(g, rd32(rd32(t100) + 0xb8u), rd32(t100), 3, t100, t99, 0u);
            }
        }
    }
    return;
L_1018492c: ;
    if (rd8(eax + 0x92eu) == 0u) goto L_101846e1;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x92eu);
    wr32(sp0 - 0x100u, 3u);
    wr32(sp0 - 0x104u, 0x8cu);
    t30 = rd32(eax + 0xcu);
    wr32(sp0 - 0x108u, t30);
    g->edx = rd32(t30);
    t31 = rd32(t30);
    g->esp = sp0 - 0xfcu;
    cow_thiscall(g, rd32(t31 + 0xc8u), ecx, 3, t30, 0x8cu, 3u);
    t32 = g->edx;
    wr32(sp0 - 0x100u, 0u);
    wr32(sp0 - 0x104u, 0x23u);
    t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x108u, t33);
    g->edx = t32;
    t34 = rd32(t33);
    cow_thiscall(g, rd32(t34 + 0xc8u), t34, 3, t33, 0x23u, 0u);
    t35 = g->ecx;
    t36 = g->edx;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = t36;
        goto L_101846cf;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = (t35 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu);
    wr32(sp0 - 0x100u, 1u);
    wr32(sp0 - 0x104u, 0x30u);
    wr32(sp0 - 0x108u, eax);
    g->esp = sp0 - 0xfcu;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), ecx, 3, eax, 0x30u, 1u);
    goto L_101846dc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101844c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101844c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
