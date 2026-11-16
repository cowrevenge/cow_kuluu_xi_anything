/* f_0x10144830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10144830(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 124u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, 1u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    g->edx = t2;
    g->esp = sp0 - 0x30u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), t1, 1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t5;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        ebx = t3;
        if (!(rd8(COW_IMG(0x10485824u)) & 1u))
        {
            ebp = in_ebp;
            edi = in_edi;
        }
        else
        {
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t6 = cow_call_regs(g, COW_IMG(0x10087b20u), eax, g->ecx, g->edx, 1, 0);
            t7 = g->edx;
            if ((uint8_t)t6 == 0u)
            {
                eax = t6;
                edx = t7;
                ebp = in_ebp;
                edi = in_edi;
            }
            else
            {
                edx = t7;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t8 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
                t9 = g->ecx;
                t10 = g->edx;
                if (t8 == 0u)
                {
                    eax = t8;
                    ecx = t9;
                    edx = t10;
                }
                else
                {
                    eax = t8;
                    edx = t10;
                    if (rd32(eax + 0x70u) == 0u)
                    {
                        ecx = rd32(eax + 0x70u);
                    }
                    else
                    {
                        ecx = rd32(eax + 0x70u);
                        wr32(sp0 - 0x30u, 0x80808080u);
                        wr32(sp0 - 0x34u, ecx + 0x235u);
                        t11 = (ecx + 0x235u & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 7u);
                        wr32(sp0 - 0x38u, t11);
                        t12 = ((eax & 0xffff0000u) | rd16(self + 0x18u)) + 4u;
                        wr32(sp0 - 0x3cu, t12);
                        t13 = ((t11 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1cu) - rd16(self + 0x18u))) - 6u;
                        wr32(sp0 - 0x40u, t13);
                        g->ecx = t13;
                        g->edx = t12;
                        t14 = rd16(self + 0x18u);
                        g->esp = sp0 - 0x2cu;
                        t15 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, t13, t12, t11, ecx + 0x235u, 0x80808080u);
                        t16 = g->ecx;
                        t17 = g->edx;
                        eax = t15;
                        ecx = t16;
                        edx = t17;
                    }
                }
                wr32(sp0 - 0x30u, in_ebp);
                wr32(sp0 - 0x34u, in_edi);
                if (rd8(COW_IMG(0x10485640u)) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
                    g->ecx = ecx;
                    g->esp = sp0 - 0x34u;
                    t18 = cow_call_regs(g, COW_IMG(0x100991d0u), eax, g->ecx, g->edx, 1, 0);
                    t19 = g->ecx;
                    if (t18 == 0u)
                    {
                        eax = t18;
                        ecx = t19;
                        goto L_101448d0;
                    }
                    eax = t18;
                    ecx = t19;
                    if ((rd8(eax + 3u) & 0x40u) != 0u)
                    {
                        edi = 0x802060a0u;
                        goto L_101448d5;
                    }
L_101448d0: ;
                    edi = 0x80808080u;
L_101448d5: ;
                    wr32(sp0 - 0x38u, rd8(COW_IMG(0x10485641u)));
                    wr32(sp0 - 0x3cu, 0x59u);
                    wr32(sp0 - 0x40u, 0xau);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = rd8(COW_IMG(0x10485641u));
                    t20 = rd8(COW_IMG(0x10485641u));
                    g->esp = sp0 - 0x38u;
                    t21 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x59u);
                    t22 = g->ecx;
                    t23 = g->edx;
                    wr32(sp0 - 0x3cu, t21);
                    wr32(sp0 - 0x40u, sp0 - 0x20u);
                    g->edx = t23;
                    g->esp = sp0 - 0x2cu;
                    t24 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, t21, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                    t25 = g->edx;
                    wr32(sp0 - 0x44u, edi);
                    wr32(sp0 - 0x48u, sp0 - 0x20u);
                    t26 = (t25 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x18u);
                    wr32(sp0 - 0x4cu, t26);
                    t27 = (t24 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 4u);
                    wr32(sp0 - 0x50u, t27);
                    g->edx = t26;
                    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t27, t26, sp0 - 0x20u, edi, sp0 - 0x20u, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                    t28 = g->edx;
                    edx = t28;
                }
                wr32(sp0 - 0x38u, 0x17u);
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                t29 = cow_stdcall(g, COW_IMG(0x10144800u), 1, 0x17u);
                t30 = g->edx;
                if (t29 == 0x80808080u)
                {
                    edx = t30;
                    edi = t29;
                }
                else
                {
                    eax = t29;
                    edi = t29;
                    wr32(sp0 - 0x38u, 0u);
                    wr32(sp0 - 0x3cu, 0u);
                    wr32(sp0 - 0x40u, 0x80808080u);
                    t31 = (uint32_t)(int16_t)rd16(self + 0x1au) + 0x4cu;
                    wr32(sp0 - 0x44u, t31);
                    t32 = (uint32_t)(int16_t)rd16(self + 0x18u) + 0x17u;
                    wr32(sp0 - 0x48u, t32);
                    g->edx = t32;
                    g->esp = sp0 - 0x34u;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t32, t31, 0x80808080u, 0u, 0u);
                    t33 = g->edx;
                    edx = t33;
                }
                t34 = rd32(ebx + 0x20u);
                wr32(sp0 - 0x38u, t34);
                wr32(sp0 - 0x3cu, COW_IMG(0x103715c8u));
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->ecx = sp0 - 0x20u;
                g->esp = sp0 - 0x2cu;
                t35 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103715c8u), t34, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t36 = g->ecx;
                wr32(sp0 - 0x44u, 0x3f800000u);
                wr32(sp0 - 0x48u, 0x3f800000u);
                wr32(sp0 - 0x4cu, 1u);
                wr32(sp0 - 0x50u, 0x80808080u);
                wr32(sp0 - 0x54u, sp0 - 0x20u);
                t37 = (t35 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x4bu);
                wr32(sp0 - 0x58u, t37);
                t38 = (t36 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x46u);
                wr32(sp0 - 0x5cu, t38);
                g->esp = sp0 - 0x40u;
                cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t38, 7, t38, t37, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                t39 = g->ecx;
                wr32(sp0 - 0x60u, rd32(COW_IMG(0x10485638u)));
                wr32(sp0 - 0x64u, COW_IMG(0x10352ff0u));
                wr32(sp0 - 0x68u, sp0 - 0x20u);
                g->edx = rd32(COW_IMG(0x10485638u));
                t40 = rd32(COW_IMG(0x10485638u));
                g->esp = sp0 - 0x54u;
                t41 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t40, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
                t42 = g->edx;
                wr32(sp0 - 0x6cu, edi);
                wr32(sp0 - 0x70u, sp0 - 0x20u);
                t43 = (t42 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x4bu);
                wr32(sp0 - 0x74u, t43);
                t44 = (t41 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x48u);
                wr32(sp0 - 0x78u, t44);
                g->edx = t43;
                cow_cdecl(g, COW_IMG(0x101c9780u), 9, t44, t43, sp0 - 0x20u, edi, sp0 - 0x20u, COW_IMG(0x10352ff0u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
                t45 = g->edx;
                wr32(sp0 - 0x38u, 0x18u);
                g->edx = t45;
                g->esp = sp0 - 0x34u;
                t46 = cow_stdcall(g, COW_IMG(0x10144800u), 1, 0x18u);
                t47 = g->edx;
                if (t46 == 0x80808080u)
                {
                    edx = t47;
                    edi = t46;
                }
                else
                {
                    eax = t46;
                    edi = t46;
                    wr32(sp0 - 0x38u, 0u);
                    wr32(sp0 - 0x3cu, 0u);
                    wr32(sp0 - 0x40u, 0x80808080u);
                    t48 = (uint32_t)(int16_t)rd16(self + 0x1au) + 0x58u;
                    wr32(sp0 - 0x44u, t48);
                    t49 = (uint32_t)(int16_t)rd16(self + 0x18u) + 0x17u;
                    wr32(sp0 - 0x48u, t49);
                    g->edx = t49;
                    g->esp = sp0 - 0x34u;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t49, t48, 0x80808080u, 0u, 0u);
                    t50 = g->edx;
                    edx = t50;
                }
                t51 = rd32(ebx + 0x24u);
                wr32(sp0 - 0x38u, t51);
                wr32(sp0 - 0x3cu, COW_IMG(0x103715c8u));
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->ecx = sp0 - 0x20u;
                g->esp = sp0 - 0x2cu;
                t52 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103715c8u), t51, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t53 = g->ecx;
                wr32(sp0 - 0x44u, 0x3f800000u);
                wr32(sp0 - 0x48u, 0x3f800000u);
                wr32(sp0 - 0x4cu, 1u);
                wr32(sp0 - 0x50u, 0x80808080u);
                wr32(sp0 - 0x54u, sp0 - 0x20u);
                t54 = (t52 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x57u);
                wr32(sp0 - 0x58u, t54);
                t55 = (t53 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x46u);
                wr32(sp0 - 0x5cu, t55);
                g->esp = sp0 - 0x40u;
                cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t55, 7, t55, t54, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                t56 = g->ecx;
                wr32(sp0 - 0x60u, rd32(COW_IMG(0x1048563cu)));
                wr32(sp0 - 0x64u, COW_IMG(0x10352ff0u));
                wr32(sp0 - 0x68u, sp0 - 0x20u);
                g->edx = rd32(COW_IMG(0x1048563cu));
                t57 = rd32(COW_IMG(0x1048563cu));
                g->esp = sp0 - 0x54u;
                t58 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t57, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
                t59 = g->edx;
                wr32(sp0 - 0x6cu, edi);
                wr32(sp0 - 0x70u, sp0 - 0x20u);
                t60 = (t59 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x57u);
                wr32(sp0 - 0x74u, t60);
                t61 = (t58 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x48u);
                wr32(sp0 - 0x78u, t61);
                cow_cdecl(g, COW_IMG(0x101c9780u), 9, t61, t60, sp0 - 0x20u, edi, sp0 - 0x20u, COW_IMG(0x10352ff0u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
                t62 = rd32(ebx + 0x28u);
                wr32(sp0 - 0x38u, t62);
                wr32(sp0 - 0x3cu, COW_IMG(0x1036f9d0u));
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->ecx = t62;
                g->edx = sp0 - 0x20u;
                g->esp = sp0 - 0x2cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036f9d0u), t62, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t63 = g->ecx;
                t64 = g->edx;
                wr32(sp0 - 0x44u, 0x3f800000u);
                wr32(sp0 - 0x48u, 0x3f800000u);
                wr32(sp0 - 0x4cu, 1u);
                wr32(sp0 - 0x50u, 0x80808080u);
                wr32(sp0 - 0x54u, sp0 - 0x20u);
                t65 = (t63 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x63u);
                wr32(sp0 - 0x58u, t65);
                t66 = (t64 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x4bu);
                wr32(sp0 - 0x5cu, t66);
                g->edx = t66;
                g->esp = sp0 - 0x40u;
                cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t65, 7, t66, t65, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                t67 = g->edx;
                edx = t67;
                ebp = 0u;
                edi = (edi & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x74u);
L_10144ab6: ;
                wr32(sp0 - 0x38u, ebp + 0x10u);
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                t68 = cow_stdcall(g, COW_IMG(0x10144800u), 1, ebp + 0x10u);
                t69 = g->edx;
                wr32(sp0 - 0x24u, t68);
                if (t68 == 0x80808080u)
                {
                    edx = t69;
                    loc_24 = t68;
                }
                else
                {
                    eax = t68;
                    loc_24 = t68;
                    wr32(sp0 - 0x38u, 0u);
                    wr32(sp0 - 0x3cu, 0u);
                    wr32(sp0 - 0x40u, 0x80808080u);
                    t70 = (uint32_t)(int16_t)edi + 1u;
                    wr32(sp0 - 0x44u, t70);
                    t71 = (uint32_t)(int16_t)rd16(self + 0x18u) + 0x1fu;
                    wr32(sp0 - 0x48u, t71);
                    g->edx = t71;
                    g->esp = sp0 - 0x34u;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t71, t70, 0x80808080u, 0u, 0u);
                    t72 = g->edx;
                    edx = t72;
                }
                t73 = rd16(COW_IMG(0x10485648u) + ebp * 2u);
                wr32(sp0 - 0x38u, t73);
                wr32(sp0 - 0x3cu, COW_IMG(0x1036f9d0u));
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->ecx = sp0 - 0x20u;
                t74 = rd16(self + 0x18u);
                g->esp = sp0 - 0x2cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036f9d0u), t73, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t75 = g->ecx;
                t76 = rd32(sp0 - 0x24u);
                wr32(sp0 - 0x44u, t76);
                wr32(sp0 - 0x48u, sp0 - 0x20u);
                wr32(sp0 - 0x4cu, edi);
                t77 = (ebx & 0xffff0000u) | (uint16_t)(t74 + 0x32u);
                wr32(sp0 - 0x50u, t77);
                g->eax = sp0 - 0x20u;
                g->ecx = t75;
                g->edx = t76;
                t78 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t77, edi, sp0 - 0x20u, t76, sp0 - 0x20u, COW_IMG(0x1036f9d0u), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t79 = g->ecx;
                t80 = g->edx;
                if ((int16_t)rd16(COW_IMG(0x10485656u) + ebp * 2u) <= 0)
                {
                    eax = (t78 & 0xffff0000u) | rd16(COW_IMG(0x10485656u) + ebp * 2u);
                    ecx = t79;
                    edx = t80;
                    ebx = t78;
                    sf = (int16_t)rd16(COW_IMG(0x10485656u) + ebp * 2u) < 0;
                    goto L_10144b49;
                }
                eax = (t78 & 0xffff0000u) | rd16(COW_IMG(0x10485656u) + ebp * 2u);
                ebx = t78;
                wr32(sp0 - 0x38u, (uint32_t)(int16_t)eax);
                wr32(sp0 - 0x3cu, COW_IMG(0x103715c0u));
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->ecx = (uint32_t)(int16_t)eax;
                g->edx = sp0 - 0x20u;
                g->esp = sp0 - 0x2cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103715c0u), (uint32_t)(int16_t)eax, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t81 = g->ecx;
                t82 = g->edx;
                wr32(sp0 - 0x44u, 0x80408040u);
                ecx = t81;
                edx = t82;
                loc_3c = COW_IMG(0x103715c0u);
                loc_44 = 0x80408040u;
L_10144b63: ;
                wr32(sp0 - 0x48u, sp0 - 0x20u);
                wr32(sp0 - 0x4cu, edi);
                wr32(sp0 - 0x50u, ebx);
                g->eax = sp0 - 0x20u;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t85 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, ebx, edi, sp0 - 0x20u, loc_44, sp0 - 0x20u, loc_3c, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t86 = g->ecx;
                t87 = g->edx;
                eax = t85;
                ecx = t86;
                edx = t87;
L_10144b72: ;
                if ((int32_t)(ebp + 1u) < 7)
                {
                    ebp = ebp + 1u;
                    edi = edi + 0xdu;
                    goto L_10144ab6;
                }
                if ((int32_t)(rd8(COW_IMG(0x10482f9cu)) & 3u) < 0)
                {
                    ebp = rd32(sp0 - 0x30u);
                    edi = rd32(sp0 - 0x34u);
                    loc_24 = (rd32(sp0 - 0x24u) & 0xffff0000u) | rd16(COW_IMG(0x10482fa2u));
                }
                else
                {
                    eax = rd8(COW_IMG(0x10482f9cu)) & 3u;
                    ecx = (ecx & 0xffff0000u) | rd16(COW_IMG(0x10482fa2u));
                    ebp = rd32(sp0 - 0x30u);
                    edi = rd32(sp0 - 0x34u);
                    loc_24 = (rd32(sp0 - 0x24u) & 0xffff0000u) | rd16(COW_IMG(0x10482fa2u));
                    if ((int32_t)eax <= 2)
                    {
                        t88 = rd32(COW_IMG(0x10371594u) + eax * 4u);
                        wr32(sp0 - 0x30u, t88);
                        wr32(sp0 - 0x34u, COW_IMG(0x1034f7e0u));
                        wr32(sp0 - 0x38u, sp0 - 0x20u);
                        g->edx = t88;
                        g->esp = sp0 - 0x24u;
                        t89 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1034f7e0u), t88, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
                        t90 = g->edx;
                        wr32(sp0 - 0x3cu, 0x3f800000u);
                        wr32(sp0 - 0x40u, 0x3f800000u);
                        wr32(sp0 - 0x44u, 1u);
                        wr32(sp0 - 0x48u, 0x80808080u);
                        wr32(sp0 - 0x4cu, sp0 - 0x20u);
                        t91 = (t90 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x2au);
                        wr32(sp0 - 0x50u, t91);
                        t92 = (t89 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x67u);
                        wr32(sp0 - 0x54u, t92);
                        g->esp = sp0 - 0x38u;
                        cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x20u, 7, t92, t91, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                    }
                }
                wr32(sp0 - 0x30u, (uint16_t)loc_24);
                wr32(sp0 - 0x34u, COW_IMG(0x10352ff0u));
                wr32(sp0 - 0x38u, sp0 - 0x20u);
                g->ecx = (uint16_t)loc_24;
                g->edx = sp0 - 0x20u;
                g->esp = sp0 - 0x24u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), (uint16_t)loc_24, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
                t93 = g->ecx;
                t94 = g->edx;
                wr32(sp0 - 0x3cu, 0x3f800000u);
                wr32(sp0 - 0x40u, 0x3f800000u);
                wr32(sp0 - 0x44u, 1u);
                wr32(sp0 - 0x48u, 0x80808080u);
                wr32(sp0 - 0x4cu, sp0 - 0x20u);
                t95 = (t93 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x3au);
                wr32(sp0 - 0x50u, t95);
                t96 = (t94 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x67u);
                wr32(sp0 - 0x54u, t96);
                g->edx = t96;
                g->esp = sp0 - 0x38u;
                t97 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t95, 7, t96, t95, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                t98 = g->edx;
                eax = t97;
                edx = t98;
            }
        }
    }
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_10144b49: ;
    if (!sf) goto L_10144b72;
    wr32(sp0 - 0x38u, (uint32_t)(int16_t)eax);
    wr32(sp0 - 0x3cu, COW_IMG(0x1036c00cu));
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->ecx = (uint32_t)(int16_t)eax;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036c00cu), (uint32_t)(int16_t)eax, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t83 = g->ecx;
    t84 = g->edx;
    wr32(sp0 - 0x44u, 0x80804040u);
    ecx = t83;
    edx = t84;
    loc_3c = COW_IMG(0x1036c00cu);
    loc_44 = 0x80804040u;
    goto L_10144b63;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10144830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10144830(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
