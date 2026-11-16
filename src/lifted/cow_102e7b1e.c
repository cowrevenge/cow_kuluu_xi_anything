/* f_0x102e7b1e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e7b1e(Guest* g)
{
    double d93;
    double d95;
    double d96;
    double d97;
    double d98;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_64;
    uint32_t loc_68;
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
    uint32_t t94;
    uint32_t t99;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 124u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0xcu) == 0u)
    {
        esi = rd32(sp0 + 4u);
        wr32(sp0 - 0x68u, in_ebx);
        if (rd32(esi + 0x10u) != 0u)
        {
            edx = in_edx;
        }
        else
        {
            wr32(sp0 + 4u, 0u);
            edx = in_edx;
L_102e7b4a: ;
            t1 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t1);
            g->esp = sp0 - 0x5cu;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xd0u), rd32(rd32(esi + 8u)), 4, t1, in_ebx, in_edi, in_esi);
            t2 = (rd32(esi + 0x1cu) != 0u) * 2u + 0x142u;
            wr32(sp0 - 0x60u, t2);
            t3 = rd32(esi + 8u);
            wr32(sp0 - 0x64u, t3);
            g->edx = t2;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x130u), rd32(rd32(esi + 8u)), 2, t3, t2);
            t4 = g->edx;
            if (rd32(esi + 0x1cu) != 0u)
            {
                edx = t4;
            }
            else
            {
                wrf32(sp0 - 0x24u, (float)(double)(float)0.0);
                wr32(sp0 - 0x60u, sp0 - 0x5cu);
                wrf32(sp0 - 0x28u, (float)(double)(float)0.0);
                wr32(sp0 - 0x64u, 2u);
                t5 = rd32(esi + 8u);
                wr32(sp0 - 0x68u, t5);
                wrf32(sp0 - 0x2cu, (float)(double)(float)0.0);
                wrf32(sp0 - 0x30u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x38u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x3cu, (float)(double)(float)0.0);
                wrf32(sp0 - 0x40u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x44u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x4cu, (float)(double)(float)0.0);
                wrf32(sp0 - 0x50u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x54u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x58u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x20u, (float)(double)(float)1.0);
                wrf32(sp0 - 0x34u, (float)(double)(float)1.0);
                wrf32(sp0 - 0x48u, (float)(double)(float)1.0);
                wrf32(sp0 - 0x5cu, (float)(double)(float)1.0);
                g->esp = sp0 - 0x5cu;
                cow_thiscall(g, rd32(rd32(t5) + 0x94u), rd32(t5), 3, t5, 2u, sp0 - 0x5cu);
                wr32(sp0 - 0x60u, sp0 - 0x5cu);
                wr32(sp0 - 0x64u, 3u);
                t6 = rd32(esi + 8u);
                wr32(sp0 - 0x68u, t6);
                g->edx = sp0 - 0x5cu;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x94u), rd32(rd32(esi + 8u)), 3, t6, 3u, sp0 - 0x5cu);
                t7 = g->edx;
                if (rd32(sp0 + 4u) != 0u)
                {
                    edx = t7;
                }
                else
                {
                    wr32(sp0 - 0x60u, sp0 - 0x5cu);
                    wr32(sp0 - 0x64u, 0x100u);
                    t8 = rd32(esi + 8u);
                    wr32(sp0 - 0x68u, t8);
                    g->edx = sp0 - 0x5cu;
                    g->esp = sp0 - 0x5cu;
                    cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x94u), rd32(rd32(esi + 8u)), 3, t8, 0x100u, sp0 - 0x5cu);
                    t9 = g->edx;
                    edx = t9;
                }
            }
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 7u);
            t10 = rd32(esi + 8u);
            wr32(sp0 - 0x68u, t10);
            g->edx = edx;
            g->esp = sp0 - 0x5cu;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t10, 7u, 0u);
            t11 = g->edx;
            wr32(sp0 - 0x60u, 3u);
            wr32(sp0 - 0x64u, 8u);
            t12 = rd32(esi + 8u);
            wr32(sp0 - 0x68u, t12);
            g->edx = t11;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t12, 8u, 3u);
            t13 = g->edx;
            wr32(sp0 - 0x60u, 1u);
            wr32(sp0 - 0x64u, 0x16u);
            t14 = rd32(esi + 8u);
            wr32(sp0 - 0x68u, t14);
            g->edx = t13;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t14, 0x16u, 1u);
            t15 = g->edx;
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 0x80u);
            t16 = rd32(esi + 8u);
            wr32(sp0 - 0x68u, t16);
            g->edx = t15;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t16, 0x80u, 0u);
            t17 = g->edx;
            wr32(sp0 - 0x60u, 1u);
            wr32(sp0 - 0x64u, 0x88u);
            t18 = rd32(esi + 8u);
            wr32(sp0 - 0x68u, t18);
            g->edx = t17;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t18, 0x88u, 1u);
            t19 = g->edx;
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 0x97u);
            t20 = rd32(esi + 8u);
            wr32(sp0 - 0x68u, t20);
            g->edx = t19;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t20, 0x97u, 0u);
            t21 = g->edx;
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 0x98u);
            t22 = rd32(esi + 8u);
            wr32(sp0 - 0x68u, t22);
            g->edx = t21;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t22, 0x98u, 0u);
            t23 = g->edx;
            wr32(sp0 - 0x60u, 1u);
            wr32(sp0 - 0x64u, 0xa4u);
            t24 = rd32(esi + 8u);
            wr32(sp0 - 0x68u, t24);
            g->edx = t23;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t24, 0xa4u, 1u);
            t25 = g->edx;
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 0xa7u);
            t26 = rd32(esi + 8u);
            wr32(sp0 - 0x68u, t26);
            g->edx = t25;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t26, 0xa7u, 0u);
            t27 = g->edx;
            if (rd32(esi + 0x1cu) != 0u)
            {
                edx = t27;
            }
            else
            {
                edx = t27;
                wr32(sp0 - 0x60u, 0u);
                wr32(sp0 - 0x64u, 0x1cu);
                t28 = rd32(esi + 8u);
                wr32(sp0 - 0x68u, t28);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t28, 0x1cu, 0u);
                t29 = g->edx;
                wr32(sp0 - 0x60u, 0u);
                wr32(sp0 - 0x64u, 0x1du);
                t30 = rd32(esi + 8u);
                wr32(sp0 - 0x68u, t30);
                g->edx = t29;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t30, 0x1du, 0u);
                t31 = g->edx;
                wr32(sp0 - 0x60u, 0u);
                wr32(sp0 - 0x64u, 0x34u);
                t32 = rd32(esi + 8u);
                wr32(sp0 - 0x68u, t32);
                g->edx = t31;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t32, 0x34u, 0u);
                t33 = g->edx;
                wr32(sp0 - 0x60u, 0u);
                wr32(sp0 - 0x64u, 0x89u);
                t34 = rd32(esi + 8u);
                wr32(sp0 - 0x68u, t34);
                g->edx = t33;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t34, 0x89u, 0u);
                t35 = g->edx;
                wr32(sp0 - 0x60u, 1u);
                wr32(sp0 - 0x64u, 0x91u);
                t36 = rd32(esi + 8u);
                wr32(sp0 - 0x68u, t36);
                g->edx = t35;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t36, 0x91u, 1u);
                t37 = g->edx;
                edx = t37;
            }
            wr32(sp0 - 0x60u, 4u);
            wr32(sp0 - 0x64u, 1u);
            wr32(sp0 - 0x68u, 0u);
            t38 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t38);
            g->edx = edx;
            g->esp = sp0 - 0x5cu;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t38, 0u, 1u, 4u);
            t39 = g->edx;
            wr32(sp0 - 0x60u, 2u);
            wr32(sp0 - 0x64u, 2u);
            wr32(sp0 - 0x68u, 0u);
            t40 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t40);
            g->edx = t39;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t40, 0u, 2u, 2u);
            t41 = g->edx;
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 3u);
            wr32(sp0 - 0x68u, 0u);
            t42 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t42);
            g->edx = t41;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t42, 0u, 3u, 0u);
            t43 = g->edx;
            wr32(sp0 - 0x60u, 4u);
            wr32(sp0 - 0x64u, 4u);
            wr32(sp0 - 0x68u, 0u);
            t44 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t44);
            g->edx = t43;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t44, 0u, 4u, 4u);
            t45 = g->edx;
            wr32(sp0 - 0x60u, 2u);
            wr32(sp0 - 0x64u, 5u);
            wr32(sp0 - 0x68u, 0u);
            t46 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t46);
            g->edx = t45;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t46, 0u, 5u, 2u);
            t47 = g->edx;
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 6u);
            wr32(sp0 - 0x68u, 0u);
            t48 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t48);
            g->edx = t47;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t48, 0u, 6u, 0u);
            t49 = g->edx;
            wr32(sp0 - 0x60u, 1u);
            wr32(sp0 - 0x64u, 1u);
            wr32(sp0 - 0x68u, 1u);
            t50 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t50);
            g->edx = t49;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t50, 1u, 1u, 1u);
            t51 = g->edx;
            wr32(sp0 - 0x60u, 1u);
            wr32(sp0 - 0x64u, 4u);
            wr32(sp0 - 0x68u, 1u);
            t52 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t52);
            g->edx = t51;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t52, 1u, 4u, 1u);
            t53 = g->edx;
            wr32(sp0 - 0x60u, 2u);
            wr32(sp0 - 0x64u, 0x10u);
            wr32(sp0 - 0x68u, 0u);
            t54 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t54);
            g->edx = t53;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t54, 0u, 0x10u, 2u);
            t55 = g->edx;
            wr32(sp0 - 0x60u, 2u);
            wr32(sp0 - 0x64u, 0x11u);
            wr32(sp0 - 0x68u, 0u);
            t56 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t56);
            g->edx = t55;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t56, 0u, 0x11u, 2u);
            t57 = g->edx;
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 0x12u);
            wr32(sp0 - 0x68u, 0u);
            t58 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t58);
            g->edx = t57;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t58, 0u, 0x12u, 0u);
            t59 = g->edx;
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 0xbu);
            wr32(sp0 - 0x68u, 0u);
            t60 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t60);
            g->edx = t59;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t60, 0u, 0xbu, 0u);
            t61 = g->edx;
            wr32(sp0 - 0x60u, 3u);
            wr32(sp0 - 0x64u, 0xdu);
            wr32(sp0 - 0x68u, 0u);
            t62 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t62);
            g->edx = t61;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t62, 0u, 0xdu, 3u);
            t63 = g->edx;
            wr32(sp0 - 0x60u, 3u);
            wr32(sp0 - 0x64u, 0xeu);
            wr32(sp0 - 0x68u, 0u);
            t64 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t64);
            g->edx = t63;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t64, 0u, 0xeu, 3u);
            t65 = g->edx;
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 0x18u);
            wr32(sp0 - 0x68u, 0u);
            t66 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t66);
            g->edx = t65;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t66, 0u, 0x18u, 0u);
            t67 = g->edx;
            wr32(sp0 - 0x60u, 1u);
            if (rd32(esi + 0x18u) == 0u)
            {
                eax = rd32(esi + 8u);
                ecx = rd32(rd32(esi + 8u));
                edx = t67;
                wr32(sp0 - 0x64u, 0xfu);
                wr32(sp0 - 0x68u, eax);
                g->edx = edx;
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 2, eax, 0xfu);
                t73 = g->edx;
                wr32(sp0 - 0x64u, 7u);
                wr32(sp0 - 0x68u, 0x19u);
                t74 = rd32(esi + 8u);
                wr32(sp0 - 0x6cu, t74);
                g->edx = t73;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t74, 0x19u, 7u);
                t75 = g->edx;
                wr32(sp0 - 0x64u, 0x7fu);
                wr32(sp0 - 0x68u, 0x18u);
                edx = t75;
                loc_64 = 0x7fu;
                loc_68 = 0x18u;
            }
            else
            {
                eax = rd32(esi + 8u);
                ecx = rd32(rd32(esi + 8u));
                edx = t67;
                wr32(sp0 - 0x64u, 0x1bu);
                wr32(sp0 - 0x68u, eax);
                g->edx = edx;
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 2, eax, 0x1bu);
                t68 = g->edx;
                wr32(sp0 - 0x64u, 5u);
                wr32(sp0 - 0x68u, 0x13u);
                t69 = rd32(esi + 8u);
                wr32(sp0 - 0x6cu, t69);
                g->edx = t68;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t69, 0x13u, 5u);
                t70 = g->edx;
                wr32(sp0 - 0x64u, 6u);
                wr32(sp0 - 0x68u, 0x14u);
                t71 = rd32(esi + 8u);
                wr32(sp0 - 0x6cu, t71);
                g->edx = t70;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t71, 0x14u, 6u);
                t72 = g->edx;
                wr32(sp0 - 0x64u, 1u);
                wr32(sp0 - 0x68u, 0xabu);
                edx = t72;
                loc_64 = 1u;
                loc_68 = 0xabu;
            }
            t76 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t76);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 1, t76);
            t77 = g->edx;
            if (rd32(sp0 + 4u) != 0u)
            {
                ecx = esi + 0x14u;
            }
            else
            {
                edx = t77;
                wr32(sp0 - 0x6cu, 0u);
                wr32(sp0 - 0x70u, 0u);
                t78 = rd32(esi + 8u);
                wr32(sp0 - 0x74u, t78);
                g->edx = edx;
                g->esp = sp0 - 0x68u;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xf4u), rd32(rd32(esi + 8u)), 3, t78, 0u, 0u);
                t79 = g->edx;
                wr32(sp0 - 0x6cu, 0u);
                wr32(sp0 - 0x70u, 0u);
                wr32(sp0 - 0x74u, 0u);
                t80 = rd32(esi + 8u);
                wr32(sp0 - 0x78u, t80);
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x14cu), rd32(rd32(esi + 8u)), 4, t80, 0u, 0u, 0u);
                ecx = esi + 0x10u;
            }
            wr32(sp0 - 0x6cu, ecx);
            t81 = rd32(esi + 8u);
            wr32(sp0 - 0x70u, t81);
            g->edx = rd32(rd32(esi + 8u));
            t82 = rd32(rd32(esi + 8u));
            g->esp = sp0 - 0x68u;
            cow_thiscall(g, rd32(t82 + 0xd4u), ecx, 2, t81, ecx);
            t83 = g->edx;
            wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
            if (rd32(sp0 + 4u) < 2u)
            {
                edx = t83;
                goto L_102e7b4a;
            }
            edx = t83;
        }
        t84 = rd32(esi + 0x10u);
        wr32(sp0 - 0x6cu, t84);
        t85 = rd32(esi + 8u);
        wr32(sp0 - 0x70u, t85);
        g->edx = edx;
        g->esp = sp0 - 0x68u;
        cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xdcu), rd32(rd32(esi + 8u)), 2, t85, t84);
        t86 = g->edx;
        t87 = rd32(esi + 0x14u);
        wr32(sp0 - 0x6cu, t87);
        t88 = rd32(esi + 8u);
        wr32(sp0 - 0x70u, t88);
        g->edx = t86;
        cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xd8u), rd32(rd32(esi + 8u)), 2, t88, t87);
        t89 = g->edx;
        if (rd32(esi + 0x1cu) != 0u)
        {
            edx = t89;
        }
        else
        {
            wr32(sp0 - 0x6cu, sp0 - 0x1cu);
            t90 = rd32(esi + 8u);
            wr32(sp0 - 0x70u, t90);
            g->esp = sp0 - 0x68u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xa4u), rd32(rd32(esi + 8u)), 2, t90, sp0 - 0x1cu);
            t91 = rd32(sp0 - 0x14u);
            t92 = rd32(sp0 - 0x14u);
            d93 = (double)rdf32(COW_IMG(0x1032961cu));
            wr32(sp0 + 4u, t91);
            if ((int32_t)t92 >= 0)
            {
                x1 = (double)(int32_t)rd32(sp0 + 4u);
                x0 = d93;
            }
            else
            {
                x1 = (double)(int32_t)rd32(sp0 + 4u);
                x0 = d93;
                x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
            }
            if ((int32_t)rd32(sp0 - 0x10u) >= 0)
            {
                x2 = (double)(int32_t)rd32(sp0 - 0x10u);
                x1 = fr(g, x0 / x1);
            }
            else
            {
                x2 = (double)(int32_t)rd32(sp0 - 0x10u);
                x1 = fr(g, x0 / x1);
                x2 = fr(g, x2 + (double)rdf32(COW_IMG(0x10345da4u)));
            }
            wr32(sp0 - 0x6cu, 0x10u);
            edi = sp0 - 0x5cu;
            eax = 0u;
            ecx = 0x10u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x6cu, sp0 - 0x5cu);
            wr32(sp0 - 0x70u, 0x100u);
            t94 = rd32(esi + 8u);
            wr32(sp0 - 0x74u, t94);
            wrf32(sp0 + 4u, (float)fr(g, x0 / x2));
            d95 = (double)(float)fr(g, x1 + x1);
            wrf32(sp0 - 0x5cu, (float)d95);
            d96 = (double)(float)fr(g, -x1 - x0);
            wrf32(sp0 - 0x2cu, (float)d96);
            d97 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032c084u)));
            wrf32(sp0 - 0x48u, (float)d97);
            d98 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) + x0);
            wrf32(sp0 - 0x28u, (float)d98);
            wrf32(sp0 - 0x20u, (float)(double)(float)1.0);
            g->edx = sp0 - 0x5cu;
            g->esp = sp0 - 0x68u;
            cow_thiscall(g, rd32(rd32(t94) + 0x94u), rd32(t94), 3, t94, 0x100u, sp0 - 0x5cu);
            t99 = g->edx;
            edx = t99;
        }
        wr32(esi + 0xcu, 1u);
        eax = 0u;
        ebx = rd32(sp0 - 0x68u);
    }
    else
    {
        eax = 0x80004005u;
        edx = in_edx;
        ebx = in_ebx;
    }
    g->ebx = ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e7b1e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e7b1e(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
