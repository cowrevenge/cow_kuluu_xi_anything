/* f_0x101cd3b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101cd3b0(Guest* g)
{
    double d58;
    double d60;
    double d61;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_30;
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
    uint32_t t59;
    uint32_t t6;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 124u);

    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr8(self + 5u, rd8(sp0 + 8u));
    wr32(self + 0x10u, arg3);
    wr32(self, COW_IMG(0x10337e08u));
    wr8(self + 4u, 0u);
    wr16(self + 8u, (uint16_t)t1);
    wr16(self + 0x54u, 0u);
    wr16(self + 0x56u, 0u);
    wr16(self + 0x58u, 0u);
    wr16(self + 0x5au, 0u);
    wr32(self + 0x50u, 0u);
    wr16(self + 0x24u, 0x80u);
    wr16(self + 0x26u, 0xffffu);
    wr8(self + 0x2cu, 0u);
    wr8(self + 0x2du, 0u);
    wr8(self + 0x2eu, 0u);
    wr8(self + 0x2fu, 0u);
    wr8(self + 0x30u, 0u);
    wr32(self + 0x34u, 0u);
    wr32(self + 0x64u, 0u);
    wr32(self + 0x68u, 0u);
    wr32(self + 0x5cu, 0u);
    wr32(self + 0x60u, 0u);
    wr16(self + 0x2au, 0u);
    edi = self + 0x38u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x64u, (uint16_t)t1);
    g->eax = eax;
    g->edx = t1;
    t2 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x60u;
    t3 = cow_thiscall(g, COW_IMG(0x1015bc40u), t2, 1, (uint16_t)t1);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = rd8(t3 + 0x1b3u);
    wr8(t3 + 0x1b3u, (uint8_t)(t6 + 1u));
    wr16(self + 0xcu, rd16(t3 + 0x2au));
    t7 = rd16(t3 + 4u);
    t8 = rd32(sp0 + 8u);
    wr16(self + 0xau, (uint16_t)t7);
    wr32(sp0 - 0x64u, t8);
    t9 = rd8(t3 + 0x1b3u);
    wr8(t3 + 0x1b3u, (uint8_t)(t9 - 1u));
    t10 = rd32(self + 0x10u);
    wr32(sp0 - 0x68u, t10);
    g->eax = t10;
    g->edx = t8;
    t11 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t10, t8);
    t12 = g->edx;
    wr32(sp0 - 0x64u, (uint16_t)t1);
    t13 = rd32(COW_IMG(0x106631d4u));
    wr32(sp0 + 8u, t11 + 0x10u);
    g->edx = t12;
    t14 = cow_thiscall(g, COW_IMG(0x101d31e0u), t13, 1, (uint16_t)t1);
    t15 = g->ecx;
    t16 = g->edx;
    t17 = rd16(self + 0xau);
    wr32(self + 0xf0u, t14);
    wr8(self + 6u, 0u);
    wr32(self + 0x20u, 0u);
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x14u, 0u);
    if ((uint16_t)t17 != 0xeu)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        esi = t11 + 0x10u;
        edi = (uint16_t)t1;
        if (rd16(eax + 2u) >= 0x12cu) goto L_101cd6b3;
        ecx = (ecx & 0xffff0000u) | rd16(eax + 2u);
        if ((uint16_t)ecx <= 0x107u) goto L_101cd6b3;
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x64u, sp0 - 0x40u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x68u, COW_IMG(0x103d3c84u));
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x30u, 0u);
        wr16(sp0 - 0x40u, (uint16_t)ecx);
        wr16(sp0 - 0x2cu, 0u);
        g->edi = edi;
        g->esp = sp0 - 0x60u;
        cow_thiscall(g, COW_IMG(0x100abc20u), sp0 - 0x28u, 2, COW_IMG(0x103d3c84u), sp0 - 0x40u);
        wr32(sp0 - 0x64u, 2u);
        wr32(sp0 - 0x68u, sp0 - 0x28u);
        wr32(sp0 - 0x6cu, sp0 - 0x50u);
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x44u, 0u);
        g->eax = sp0 - 0x50u;
        g->edx = sp0 - 0x28u;
        t38 = cow_cdecl(g, COW_IMG(0x100ab2f0u), 4, sp0 - 0x50u, sp0 - 0x50u, sp0 - 0x28u, 2u);
        t39 = g->edx;
        wr16(self + 0x56u, (uint16_t)t38);
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t38 * 4u) == 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t38 * 4u);
            edx = t39;
        }
        else
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t38 * 4u);
            edx = t39;
            t40 = (rd32(eax + 0x12cu) & 0xffff00ffu) | (uint8_t)(rd32(eax + 0x12cu) >> 8u | 4u) << 8u;
            wr32(eax + 0x12cu, t40);
        }
        t41 = rd16(self + 0x56u);
        wr16(self + 0x58u, (uint16_t)t41);
        edx = (edx & 0xffff0000u) | t41;
    }
    else
    {
        edx = t16;
        esi = t11 + 0x10u;
        edi = (uint16_t)t1;
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x30u, 0u);
        t18 = rd32(sp0 + 0x10u);
        wr16(sp0 - 0x2cu, 0u);
        if (t18 == 0u)
        {
            ecx = 0u;
            loc_30 = 0u;
        }
        else
        {
            eax = t18;
            t19 = rd32(eax + 0xau);
            wr32(sp0 - 0x3cu, t19);
            t20 = rd32(eax + 6u);
            wr32(sp0 - 0x40u, t20);
            t21 = rd32(eax + 0x12u);
            wr32(sp0 - 0x34u, t21);
            t22 = rd32(eax + 0xeu);
            wr32(sp0 - 0x38u, t22);
            t23 = rd16(eax + 0x16u);
            esi = eax;
            edi = self + 0x38u;
            ecx = 6u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t24 = rd32(sp0 + 8u);
            wr16(sp0 - 0x30u, (uint16_t)t23);
            edx = (t22 & 0xffff0000u) | t23;
            esi = t24;
            loc_30 = rd32(sp0 - 0x30u);
        }
        wr32(sp0 - 0x64u, esi);
        wr32(sp0 - 0x68u, 0xeu);
        t25 = rd32(sp0 + 4u);
        wr32(sp0 - 0x6cu, t25);
        g->eax = t25;
        g->ecx = ecx;
        g->esp = sp0 - 0x60u;
        t26 = cow_cdecl(g, COW_IMG(0x100fe990u), 3, t25, 0xeu, esi);
        t27 = g->ecx;
        wr16(sp0 - 0x2eu, (uint8_t)t26);
        wr32(sp0 - 0x64u, sp0 - 0x40u);
        wr32(sp0 - 0x68u, COW_IMG(0x103d3c84u));
        g->edi = edi;
        cow_thiscall(g, COW_IMG(0x100abc20u), sp0 - 0x28u, 2, COW_IMG(0x103d3c84u), sp0 - 0x40u);
        if (rd32(sp0 + 0x10u) == 0u)
        {
            eax = 0u;
            ecx = 0x3f30716du;
        }
        else
        {
            edx = rd32(sp0 + 0x10u);
            wr32(sp0 - 0x64u, esi);
            wr32(sp0 - 0x68u, 0xeu);
            t28 = rd32(sp0 + 4u);
            wr32(sp0 - 0x6cu, t28);
            g->eax = t28;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t29 = cow_cdecl(g, COW_IMG(0x100fe9c0u), 3, t28, 0xeu, esi);
            t30 = g->edx;
            if ((uint8_t)t29 != 8u)
            {
                ecx = (uint8_t)t29;
                eax = (uint32_t)((int32_t)(ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 7u)) >> 3u);
            }
            else
            {
                edx = t30;
                t31 = rd32(sp0 + 0x10u);
                wr8(sp0 + 4u, 6u);
                if (rd32(COW_IMG(0x10621808u)) != 0u)
                {
                    eax = rd16(t31 + 4u);
                    ecx = rd32(COW_IMG(0x10621808u));
                    wr32(sp0 - 0x64u, eax);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x60u;
                    t32 = cow_thiscall(g, COW_IMG(0x1015bc40u), ecx, 1, eax);
                    t33 = g->ecx;
                    t34 = g->edx;
                    if (t32 != 0u)
                    {
                        eax = t32;
                        ecx = t33;
                        edx = t34;
                        t35 = rd8(eax + 0x1b3u);
                        wr8(sp0 + 4u, rd8(eax + 0x2cu));
                        wr8(eax + 0x1b3u, (uint8_t)t35);
                    }
                }
                eax = 1u;
                ecx = (uint8_t)rd32(sp0 + 4u);
            }
            ecx = rd32(COW_IMG(0x1037e028u) + (ecx & 7u) * 4u);
        }
        wr32(sp0 - 0x64u, eax);
        wr32(sp0 - 0x68u, ecx);
        wr32(sp0 - 0x6cu, 0x1eu);
        wr32(sp0 - 0x70u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x50u);
        wr32(sp0 - 0x78u, sp0 - 0x50u);
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x44u, 0u);
        g->eax = sp0 - 0x50u;
        g->edx = sp0 - 0x28u;
        g->esp = sp0 - 0x5cu;
        t36 = cow_cdecl(g, COW_IMG(0x100ab510u), 7, sp0 - 0x50u, sp0 - 0x50u, sp0 - 0x28u, 0x1eu, ecx, eax, rd32(sp0 - 0x60u));
        t37 = g->edx;
        wr16(self + 0x5au, (uint16_t)t36);
        wr16(self + 0x58u, (uint16_t)t36);
        eax = t36;
        edx = t37;
    }
L_101cd765: ;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t66 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, self, g->edx, 1, 0);
    t67 = g->edx;
    wr8(t66 + 0xc0u, 2u);
    t68 = rd32(COW_IMG(0x106631d4u));
    wr32(sp0 + 4u, t66);
    g->edx = t67;
    t69 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
    t70 = g->edx;
    if ((uint8_t)t69 == 0u)
    {
        edx = t70;
    }
    else
    {
        eax = t69;
        edx = t70;
        wr32(sp0 - 0x64u, 1u);
        g->esp = sp0 - 0x60u;
        cow_call_regs(g, COW_IMG(0x100859d0u), eax, rd32(sp0 + 4u), edx, 0, 1, 1u);
        t71 = g->edx;
        wr8(self + 0x30u, 1u);
        edx = t71;
    }
    wr32(self + 0x6cu, 0u);
    edi = self + 0x70u;
    eax = 0u;
    ecx = 0x20u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((rd8(esi + 1u) & 0x40u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        goto L_101cd8b0;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t72 = cow_stdcall(g, COW_IMG(0x100f1080u), 0);
    t73 = g->edx;
    wr8(self + 6u, (uint8_t)t72);
    g->edx = t73;
    t74 = cow_thiscall(g, COW_IMG(0x101cebe0u), self, 0);
    t75 = g->edx;
    wr32(self + 0x18u, 0u);
    if ((uint8_t)t74 == 0u)
    {
        eax = t74;
        edx = t75;
        goto L_101cd801;
    }
    eax = t74;
    edx = t75;
    t76 = (uint32_t)(int8_t)rd8(self + 6u);
    wr32(sp0 - 0x64u, t76);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x1cu, 0u);
    g->eax = eax;
    g->ecx = t76;
    g->esp = sp0 - 0x60u;
    t77 = cow_cdecl(g, COW_IMG(0x101cce80u), 1, t76);
    t78 = g->ecx;
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x70u, t78);
    t79 = rd8(t77);
    wr32(self + 0x20u, t79);
    g->edx = t79;
    cow_thiscall(g, COW_IMG(0x101cdd90u), self, 4, t78, 0u, 0u, 0u);
    t80 = g->edx;
    t81 = rd32(self + 0x20u);
    wr32(sp0 - 0x64u, t81);
    cow_thiscall(g, COW_IMG(0x101cdf50u), self, 1, t81);
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edi = rd32(sp0 - 0x60u);
    g->ebp = rd32(sp0 - 0x58u);
    return self;
L_101cd6b3: ;
    t42 = rd16(eax + 2u);
    wr32(sp0 - 0x64u, t42);
    g->eax = eax;
    g->esp = sp0 - 0x60u;
    t43 = cow_cdecl(g, COW_IMG(0x101cce00u), 1, t42);
    wr32(sp0 - 0x64u, t43);
    wr32(sp0 - 0x68u, sp0 + 4u);
    g->edx = sp0 + 4u;
    t44 = rd32(COW_IMG(0x1047d128u));
    t45 = cow_thiscall(g, COW_IMG(0x100731b0u), t44, 2, sp0 + 4u, t43);
    t46 = g->ecx;
    t47 = g->edx;
    wr32(sp0 - 0x64u, rd32(t45));
    t48 = rd32(t45);
    wr32(self + 0x50u, t48);
    g->eax = t48;
    g->edx = t47;
    t49 = cow_cdecl(g, COW_IMG(0x100c3e40u), 1, t48);
    t50 = g->edx;
    wr16(self + 0x54u, (uint16_t)t49);
    wr16(self + 0x58u, (uint16_t)t49);
    g->edx = t50;
    t51 = cow_call_regs(g, COW_IMG(0x101cd9d0u), t49, self, g->edx, 1, 0);
    t52 = g->edx;
    if (t51 == 0u)
    {
        eax = t51;
        edx = t52;
    }
    else
    {
        t53 = rd8(rd32(self + 0xf0u) + 5u);
        t54 = rd32(self + 0xf0u);
        t55 = rd16(rd32(self + 0xf0u) + 6u);
        wr32(sp0 + 4u, t53);
        t56 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t55);
        t57 = rd8(t54 + 4u);
        d58 = fr(g, (double)(int32_t)t56 * (double)rdf32(COW_IMG(0x10329a30u)));
        wrf32(sp0 + 8u, (float)d58);
        t59 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t57);
        d60 = fr(g, (double)(int32_t)t59 * (double)rdf32(COW_IMG(0x10329a18u)));
        wrf32(sp0 + 0x10u, (float)d60);
        d61 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a30u)));
        wrf32(sp0 + 4u, (float)d61);
        g->esp = sp0 - 0x60u;
        t62 = cow_call_regs(g, COW_IMG(0x101cd9d0u), t54, self, g->edx, 1, 0);
        t63 = rd32(sp0 + 4u);
        t64 = rd32(sp0 + 0x10u);
        wr32(t62 + 0x764u, t63);
        t65 = rd32(sp0 + 8u);
        wr32(t62 + 0x768u, t64);
        wr32(t62 + 0x76cu, t65);
        eax = t62;
        edx = t65;
    }
    goto L_101cd765;
L_101cd801: ;
    wr32(self + 0x14u, 9u);
    wr32(self + 0x1cu, 0xcu);
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t82 = cow_call_regs(g, COW_IMG(0x101d30f0u), eax, rd32(COW_IMG(0x106631d4u)), g->edx, 1, 0);
    t83 = g->edx;
    if (t82 != 0u)
    {
        eax = t82;
        edx = t83;
        wr32(sp0 - 0x64u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t84 = cow_thiscall(g, COW_IMG(0x101d3ef0u), rd32(COW_IMG(0x106631d4u)), 1, eax);
        t85 = g->edx;
        if (t84 != 0u)
        {
            eax = t84;
            edx = t85;
            esi = t84;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t86 = cow_thiscall(g, COW_IMG(0x101cebe0u), esi, 0);
            t87 = g->edx;
            if ((uint8_t)t86 == 0u)
            {
                eax = t86;
                edx = t87;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x60u;
                t88 = cow_thiscall(g, COW_IMG(0x101ceac0u), esi, 0);
                t89 = g->edx;
                wr32(self + 0x14u, t88);
                g->edx = t89;
                t90 = cow_thiscall(g, COW_IMG(0x101ceae0u), esi, 0);
                t91 = g->edx;
                wr32(self + 0x1cu, t90);
                t92 = cow_thiscall(g, COW_IMG(0x101cead0u), esi, 0);
                wr32(self + 0x18u, t92);
            }
        }
    }
    t93 = rd32(self + 0x1cu);
    wr32(sp0 - 0x64u, t93);
    t94 = rd32(self + 0x18u);
    wr32(sp0 - 0x68u, t94);
    t95 = rd32(self + 0x14u);
    wr32(sp0 - 0x6cu, t95);
    t96 = (uint32_t)(int8_t)rd8(self + 6u);
    wr32(sp0 - 0x70u, t96);
    wr32(self + 0x20u, 0u);
    g->eax = t95;
    g->esp = sp0 - 0x60u;
    t97 = cow_thiscall(g, COW_IMG(0x101cdd90u), self, 4, t96, t95, t94, t93);
    t98 = rd32(self + 0x20u);
    wr32(sp0 - 0x64u, t98);
    g->edx = t98;
    t99 = cow_thiscall(g, COW_IMG(0x101cdf50u), self, 1, t98);
    t100 = g->edx;
    t101 = cow_thiscall(g, COW_IMG(0x101ceb40u), self, 0);
    t102 = -(uint32_t)((int32_t)(t101 - (uint32_t)((int32_t)t101 >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x64u, t102);
    g->eax = t102;
    t103 = cow_thiscall_cdecl(g, COW_IMG(0x101ceaf0u), self, 1, t102);
    t104 = -(uint32_t)((int32_t)(t103 - (uint32_t)((int32_t)t103 >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x68u, t104);
    cow_thiscall(g, COW_IMG(0x101cd150u), self, 2, t104, rd32(sp0 - 0x64u));
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edi = rd32(sp0 - 0x60u);
    g->ebp = rd32(sp0 - 0x58u);
    return self;
L_101cd8b0: ;
    wr8(self + 6u, eax & 3u);
    t105 = (uint32_t)(int8_t)rd8(esi + 6u);
    wr32(self + 0x14u, t105);
    t106 = (uint32_t)(int8_t)rd8(esi + 7u);
    wr32(self + 0x18u, t106);
    t107 = (uint32_t)(int8_t)rd8(esi + 8u);
    wr32(self + 0x1cu, t107);
    wr32(sp0 - 0x64u, t107);
    t108 = (uint32_t)(int8_t)rd8(esi + 9u);
    t109 = rd8(self + 6u);
    t110 = rd32(self + 0x18u);
    wr32(self + 0x20u, t108);
    wr32(sp0 - 0x68u, t110);
    t111 = rd32(self + 0x14u);
    wr32(sp0 - 0x6cu, t111);
    wr32(sp0 - 0x70u, (uint32_t)(int8_t)t109);
    g->eax = t111;
    g->esp = sp0 - 0x60u;
    t112 = cow_thiscall(g, COW_IMG(0x101cdd90u), self, 4, (uint32_t)(int8_t)t109, t111, t110, t107);
    t113 = rd32(self + 0x20u);
    wr32(sp0 - 0x64u, t113);
    cow_thiscall(g, COW_IMG(0x101cdf50u), self, 1, t113);
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edi = rd32(sp0 - 0x60u);
    g->ebp = rd32(sp0 - 0x58u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cd3b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cd3b0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
