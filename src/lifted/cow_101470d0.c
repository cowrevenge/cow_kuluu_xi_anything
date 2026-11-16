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
    cow_frame(g, sp0, 124u);

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
    }
    else
    {
        eax = t4;
        edx = t5;
        ebx = t4;
        ebp = t1;
        wr32(sp0 - 0x34u, 0x80808080u);
        wr32(sp0 - 0x38u, ebx + 2u);
        t6 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 7u);
        wr32(sp0 - 0x3cu, t6);
        t7 = ((eax & 0xffff0000u) | rd16(self + 0x14u)) + 4u;
        wr32(sp0 - 0x40u, t7);
        t8 = ((t6 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - rd16(self + 0x14u))) - 6u;
        wr32(sp0 - 0x44u, t8);
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
        }
        else
        {
            eax = (t10 & 0xffffff00u) | rd8(COW_IMG(0x10485824u));
            ecx = t11;
            edx = t12;
            wr32(sp0 - 0x34u, in_edi);
            if (rd8(COW_IMG(0x10485640u)) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
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
                if ((rd8(eax + 3u) & 0x40u) != 0u)
                {
                    edi = 0x802060a0u;
                    goto L_10147156;
                }
L_10147151: ;
                edi = 0x80808080u;
L_10147156: ;
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
            }
            if (rd8(COW_IMG(0x10485642u)) != 0u)
            {
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
                g->ecx = sp0 - 0x20u;
                g->esp = sp0 - 0x2cu;
                t34 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, t32, rd32(sp0 - 0x38u), in_edi, rd32(sp0 - 0x30u));
                t35 = g->ecx;
                wr32(sp0 - 0x44u, 0x80808080u);
                wr32(sp0 - 0x48u, sp0 - 0x20u);
                t36 = (t34 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x1fu);
                wr32(sp0 - 0x4cu, t36);
                t37 = (t35 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 4u);
                wr32(sp0 - 0x50u, t37);
                g->eax = t36;
                t38 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t37, t36, sp0 - 0x20u, 0x80808080u, sp0 - 0x20u, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), in_edi, rd32(sp0 - 0x30u));
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, 0x80808080u);
                t39 = (uint32_t)(int16_t)rd16(self + 0x16u) + 0x1fu;
                wr32(sp0 - 0x44u, t39);
                t40 = (uint32_t)(int16_t)(t38 + 2u);
                wr32(sp0 - 0x48u, t40);
                g->edx = rd32(ebp);
                t41 = rd32(rd32(ebp) + rd8(COW_IMG(0x10485642u)) * 4u + 0x350u);
                t42 = rd32(ebp);
                g->esp = sp0 - 0x34u;
                cow_thiscall(g, COW_IMG(0x1011fb60u), t41, 5, t40, t39, 0x80808080u, 0u, 0u);
                t43 = g->ecx;
                t44 = g->edx;
                ecx = t43;
                edx = t44;
            }
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t45 = cow_stdcall(g, COW_IMG(0x101cc5f0u), 0);
            t46 = g->ecx;
            t47 = g->edx;
            g->ecx = t46;
            g->edx = t47;
            t48 = cow_stdcall(g, COW_IMG(0x101cc600u), 0);
            t49 = g->ecx;
            t50 = g->edx;
            wr32(sp0 - 0x38u, 0x80808080u);
            wr32(sp0 - 0x3cu, COW_IMG(0x103718b4u));
            t51 = (t48 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x2bu);
            wr32(sp0 - 0x40u, t51);
            t52 = (t49 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 4u);
            wr32(sp0 - 0x44u, t52);
            g->ecx = t52;
            g->edx = t50;
            g->esp = sp0 - 0x20u;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, t52, t51, COW_IMG(0x103718b4u), 0x80808080u, in_edi, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
            t53 = g->ecx;
            t54 = g->edx;
            if (t45 != 0u)
            {
                ecx = t53;
                edx = t54;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                t57 = cow_stdcall(g, COW_IMG(0x101cc5f0u), 0);
                t58 = g->ecx;
                t59 = g->edx;
                wr32(sp0 - 0x38u, t57);
                wr32(sp0 - 0x3cu, COW_IMG(0x103718a4u));
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->edx = t59;
                g->esp = sp0 - 0x2cu;
                t60 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103718a4u), t57, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t61 = g->edx;
                eax = t60;
                edx = t61;
            }
            else
            {
                ecx = t53;
                wr32(sp0 - 0x38u, COW_IMG(0x103718acu));
                wr32(sp0 - 0x3cu, sp0 - 0x20u);
                g->edx = sp0 - 0x20u;
                g->esp = sp0 - 0x28u;
                t55 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103718acu), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
                t56 = g->edx;
                eax = t55;
                edx = t56;
            }
            wr32(sp0 - 0x38u, 0x3f800000u);
            wr32(sp0 - 0x3cu, 0x3f800000u);
            wr32(sp0 - 0x40u, 1u);
            wr32(sp0 - 0x44u, 0x80808080u);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            t62 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x2bu);
            wr32(sp0 - 0x4cu, t62);
            t63 = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x46u);
            wr32(sp0 - 0x50u, t63);
            g->edx = t62;
            g->esp = sp0 - 0x34u;
            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x20u, 7, t63, t62, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t64 = g->ecx;
            t65 = g->edx;
            g->edx = t65;
            g->esp = sp0 - 0x50u;
            t66 = cow_stdcall(g, COW_IMG(0x101cc600u), 0);
            t67 = g->edx;
            wr32(sp0 - 0x54u, t66);
            wr32(sp0 - 0x58u, COW_IMG(0x1037189cu));
            wr32(sp0 - 0x5cu, sp0 - 0x20u);
            g->ecx = sp0 - 0x20u;
            g->esp = sp0 - 0x48u;
            t68 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1037189cu), t66, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
            t69 = g->ecx;
            wr32(sp0 - 0x60u, 0x80808080u);
            wr32(sp0 - 0x64u, sp0 - 0x20u);
            t70 = (t68 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x2bu);
            wr32(sp0 - 0x68u, t70);
            t71 = (t69 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x4au);
            wr32(sp0 - 0x6cu, t71);
            g->edx = sp0 - 0x20u;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, t71, t70, sp0 - 0x20u, 0x80808080u, sp0 - 0x20u, COW_IMG(0x1037189cu), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
            t72 = g->edx;
            wr32(sp0 - 0x38u, 0x17u);
            g->esp = sp0 - 0x34u;
            t73 = cow_stdcall(g, COW_IMG(0x101470a0u), 1, 0x17u);
            if (t73 == 0x80808080u)
            {
                edi = t73;
            }
            else
            {
                edi = t73;
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, 0x80808080u);
                t74 = (uint32_t)(int16_t)rd16(self + 0x16u) + 0x3bu;
                wr32(sp0 - 0x44u, t74);
                t75 = (uint32_t)(int16_t)rd16(self + 0x14u) + 0x17u;
                wr32(sp0 - 0x48u, t75);
                g->esp = sp0 - 0x34u;
                cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t75, t74, 0x80808080u, 0u, 0u);
            }
            t76 = rd32(ebx + 0x20u);
            wr32(sp0 - 0x38u, t76);
            wr32(sp0 - 0x3cu, COW_IMG(0x103715c8u));
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->ecx = t76;
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x2cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103715c8u), t76, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t77 = g->ecx;
            t78 = g->edx;
            wr32(sp0 - 0x44u, 0x3f800000u);
            wr32(sp0 - 0x48u, 0x3f800000u);
            wr32(sp0 - 0x4cu, 1u);
            wr32(sp0 - 0x50u, 0x80808080u);
            wr32(sp0 - 0x54u, sp0 - 0x20u);
            t79 = (t77 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x3au);
            wr32(sp0 - 0x58u, t79);
            t80 = (t78 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x46u);
            wr32(sp0 - 0x5cu, t80);
            g->edx = t80;
            g->esp = sp0 - 0x40u;
            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t79, 7, t80, t79, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t81 = g->edx;
            wr32(sp0 - 0x60u, rd32(COW_IMG(0x10485638u)));
            wr32(sp0 - 0x64u, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x68u, sp0 - 0x20u);
            g->ecx = sp0 - 0x20u;
            t82 = rd32(COW_IMG(0x10485638u));
            g->esp = sp0 - 0x54u;
            t83 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t82, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
            t84 = g->ecx;
            wr32(sp0 - 0x6cu, edi);
            wr32(sp0 - 0x70u, sp0 - 0x20u);
            t85 = (t83 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x3au);
            wr32(sp0 - 0x74u, t85);
            t86 = (t84 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x48u);
            wr32(sp0 - 0x78u, t86);
            g->edx = sp0 - 0x20u;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, t86, t85, sp0 - 0x20u, edi, sp0 - 0x20u, COW_IMG(0x10352ff0u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
            t87 = g->edx;
            wr32(sp0 - 0x38u, 0x18u);
            g->esp = sp0 - 0x34u;
            t88 = cow_stdcall(g, COW_IMG(0x101470a0u), 1, 0x18u);
            if (t88 == 0x80808080u)
            {
                edi = t88;
            }
            else
            {
                edi = t88;
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, 0x80808080u);
                t89 = (uint32_t)(int16_t)rd16(self + 0x16u) + 0x47u;
                wr32(sp0 - 0x44u, t89);
                t90 = (uint32_t)(int16_t)rd16(self + 0x14u) + 0x17u;
                wr32(sp0 - 0x48u, t90);
                g->esp = sp0 - 0x34u;
                cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t90, t89, 0x80808080u, 0u, 0u);
            }
            t91 = rd32(ebx + 0x24u);
            wr32(sp0 - 0x38u, t91);
            wr32(sp0 - 0x3cu, COW_IMG(0x103715c8u));
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->ecx = t91;
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x2cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103715c8u), t91, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t92 = g->ecx;
            t93 = g->edx;
            wr32(sp0 - 0x44u, 0x3f800000u);
            wr32(sp0 - 0x48u, 0x3f800000u);
            wr32(sp0 - 0x4cu, 1u);
            wr32(sp0 - 0x50u, 0x80808080u);
            wr32(sp0 - 0x54u, sp0 - 0x20u);
            t94 = (t92 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x46u);
            wr32(sp0 - 0x58u, t94);
            t95 = (t93 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x46u);
            wr32(sp0 - 0x5cu, t95);
            g->edx = t95;
            g->esp = sp0 - 0x40u;
            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t94, 7, t95, t94, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t96 = g->edx;
            wr32(sp0 - 0x60u, rd32(COW_IMG(0x1048563cu)));
            wr32(sp0 - 0x64u, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x68u, sp0 - 0x20u);
            g->ecx = sp0 - 0x20u;
            t97 = rd32(COW_IMG(0x1048563cu));
            g->esp = sp0 - 0x54u;
            t98 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t97, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
            t99 = g->ecx;
            wr32(sp0 - 0x6cu, edi);
            wr32(sp0 - 0x70u, sp0 - 0x20u);
            t100 = (t98 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x46u);
            wr32(sp0 - 0x74u, t100);
            t101 = (t99 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x48u);
            wr32(sp0 - 0x78u, t101);
            g->ecx = t101;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, t101, t100, sp0 - 0x20u, edi, sp0 - 0x20u, COW_IMG(0x10352ff0u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
            t102 = g->ecx;
            t103 = rd32(ebx + 0x28u);
            wr32(sp0 - 0x38u, t103);
            wr32(sp0 - 0x3cu, COW_IMG(0x1036f9d0u));
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->edx = t103;
            g->esp = sp0 - 0x2cu;
            t104 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036f9d0u), t103, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t105 = g->edx;
            wr32(sp0 - 0x44u, 0x3f800000u);
            wr32(sp0 - 0x48u, 0x3f800000u);
            wr32(sp0 - 0x4cu, 1u);
            wr32(sp0 - 0x50u, 0x80808080u);
            wr32(sp0 - 0x54u, sp0 - 0x20u);
            t106 = (t105 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x52u);
            wr32(sp0 - 0x58u, t106);
            t107 = (t104 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x4bu);
            wr32(sp0 - 0x5cu, t107);
            g->edx = t106;
            g->esp = sp0 - 0x40u;
            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x20u, 7, t107, t106, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t108 = g->edx;
            edx = t108;
            ebp = 0u;
            edi = (edi & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x60u);
L_101474a4: ;
            wr32(sp0 - 0x38u, ebp + 0x10u);
            g->esp = sp0 - 0x34u;
            t109 = cow_stdcall(g, COW_IMG(0x101470a0u), 1, ebp + 0x10u);
            wr32(sp0 - 0x24u, t109);
            if (t109 == 0x80808080u)
            {
                loc_24 = t109;
            }
            else
            {
                loc_24 = t109;
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, 0x80808080u);
                t110 = (uint32_t)(int16_t)edi + 1u;
                wr32(sp0 - 0x44u, t110);
                t111 = (uint32_t)(int16_t)rd16(self + 0x14u) + 0x1fu;
                wr32(sp0 - 0x48u, t111);
                g->esp = sp0 - 0x34u;
                cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t111, t110, 0x80808080u, 0u, 0u);
            }
            t112 = rd16(COW_IMG(0x10485648u) + ebp * 2u);
            wr32(sp0 - 0x38u, t112);
            wr32(sp0 - 0x3cu, COW_IMG(0x1036f9d0u));
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->edx = sp0 - 0x20u;
            t113 = rd16(self + 0x14u);
            g->esp = sp0 - 0x2cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036f9d0u), t112, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t114 = g->edx;
            t115 = rd32(sp0 - 0x24u);
            wr32(sp0 - 0x44u, t115);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            wr32(sp0 - 0x4cu, edi);
            t116 = (ebx & 0xffff0000u) | (uint16_t)(t113 + 0x32u);
            wr32(sp0 - 0x50u, t116);
            g->eax = t115;
            g->ecx = sp0 - 0x20u;
            g->edx = t114;
            t117 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t116, edi, sp0 - 0x20u, t115, sp0 - 0x20u, COW_IMG(0x1036f9d0u), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t118 = g->ecx;
            t119 = g->edx;
            if ((int16_t)rd16(COW_IMG(0x10485656u) + ebp * 2u) <= 0)
            {
                eax = (t117 & 0xffff0000u) | rd16(COW_IMG(0x10485656u) + ebp * 2u);
                ecx = t118;
                edx = t119;
                ebx = t117;
                sf = (int16_t)rd16(COW_IMG(0x10485656u) + ebp * 2u) < 0;
                goto L_10147537;
            }
            eax = (t117 & 0xffff0000u) | rd16(COW_IMG(0x10485656u) + ebp * 2u);
            ecx = t118;
            ebx = t117;
            wr32(sp0 - 0x38u, (uint32_t)(int16_t)eax);
            wr32(sp0 - 0x3cu, COW_IMG(0x103715c0u));
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->edx = (uint32_t)(int16_t)eax;
            g->esp = sp0 - 0x2cu;
            t120 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103715c0u), (uint32_t)(int16_t)eax, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t121 = g->edx;
            wr32(sp0 - 0x44u, 0x80408040u);
            eax = t120;
            edx = t121;
            loc_3c = COW_IMG(0x103715c0u);
            loc_44 = 0x80408040u;
L_10147551: ;
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            wr32(sp0 - 0x4cu, edi);
            wr32(sp0 - 0x50u, ebx);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t124 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, ebx, edi, sp0 - 0x20u, loc_44, sp0 - 0x20u, loc_3c, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t125 = g->edx;
            eax = t124;
            edx = t125;
L_10147560: ;
            if ((int32_t)(ebp + 1u) < 7)
            {
                ebp = ebp + 1u;
                edi = edi + 0xdu;
                goto L_101474a4;
            }
            edi = rd32(sp0 - 0x34u);
        }
    }
    g->edi = edi;
    g->edx = edx;
    return eax;
L_10147537: ;
    if (!sf) goto L_10147560;
    wr32(sp0 - 0x38u, (uint32_t)(int16_t)eax);
    wr32(sp0 - 0x3cu, COW_IMG(0x1036c00cu));
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->edx = (uint32_t)(int16_t)eax;
    g->esp = sp0 - 0x2cu;
    t122 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036c00cu), (uint32_t)(int16_t)eax, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t123 = g->edx;
    wr32(sp0 - 0x44u, 0x80804040u);
    eax = t122;
    edx = t123;
    loc_3c = COW_IMG(0x1036c00cu);
    loc_44 = 0x80804040u;
    goto L_10147551;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101470d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101470d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
