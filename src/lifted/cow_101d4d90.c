/* f_0x101d4d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d4d90(Guest* g)
{
    double d115;
    double d118;
    double d27;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
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
    uint32_t t116;
    uint32_t t117;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        ebp = in_ebp;
        goto L_101d5118;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if (rd16(self + 0x1cu) == rd16(self + 0x1eu))
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x1cu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x1cu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_stdcall(g, COW_IMG(0x100f1080u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        if (rd16(self + 0x1cu) != 2u)
        {
            eax = (t4 & 0xffff0000u) | rd16(self + 0x1cu);
            ecx = t5;
            edx = t6;
            esi = COW_IMG(0x1037eba8u) + t4 * 0x10u;
            goto L_101d4dd6;
        }
        eax = (t4 & 0xffff0000u) | rd16(self + 0x1cu);
        ecx = t5;
        edx = t6;
        esi = COW_IMG(0x1037eba8u) + t4 * 0x10u;
        if (rd16(self + 0x1eu) == 0u) goto L_101d4ebd;
L_101d4dd6: ;
        if ((uint16_t)eax != 0u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t21 = cow_stdcall(g, COW_IMG(0x100842d0u), 0);
            t22 = g->edx;
            t23 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
            wr8(t23 + 0xb2u, rd8(t23 + 0xb2u) | 0x10u);
            if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) != 0u)
            {
                eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
                wr32(eax + 4u, rd32(esi));
                t24 = rd32(esi + 4u);
                wr32(eax + 8u, t24);
                t25 = rd32(esi + 8u);
                wr32(eax + 0xcu, t25);
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, COW_IMG(0x10092c20u), rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u), 0);
            }
            t26 = rd16(self + 0x1cu);
            d27 = (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2f4u);
            wrf32(self + 0x7f4u, (float)d27);
            t28 = rd32(COW_IMG(0x1037eb94u) + (uint32_t)(int16_t)t26 * 4u);
            wr32(sp0 - 0x14u, t28);
            g->eax = t28;
            g->edx = (uint32_t)(int16_t)t26;
            g->esp = sp0 - 0x10u;
            t29 = cow_thiscall(g, COW_IMG(0x100152b0u), rd32(COW_IMG(0x104568fcu)), 1, t28);
            t30 = g->edx;
            eax = t29;
            edx = t30;
        }
        else
        {
            if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u)
            {
                eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            }
            else
            {
                eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
                wr32(eax + 4u, rd32(esi));
                t7 = rd32(esi + 4u);
                wr32(eax + 8u, t7);
                t8 = rd32(esi + 8u);
                wr32(eax + 0xcu, t8);
                g->eax = eax;
                g->edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
                t9 = rd16(COW_IMG(0x10485f7au));
                g->esp = sp0 - 0x10u;
                t10 = cow_thiscall(g, COW_IMG(0x10092c20u), rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)t9 * 4u), 0);
                t11 = g->edx;
                eax = t10;
                edx = t11;
            }
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t12 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
            t13 = g->ecx;
            t14 = g->edx;
            wr8(t12 + 0xb2u, rd8(t12 + 0xb2u) & 0xefu);
            g->edx = t14;
            cow_stdcall(g, COW_IMG(0x10084210u), 0);
            t15 = g->edx;
            t16 = rd32(self + 0x7f4u);
            wr32(sp0 - 0x14u, t16);
            g->eax = t16;
            g->edx = t15;
            t17 = cow_thiscall(g, COW_IMG(0x100152b0u), rd32(COW_IMG(0x104568fcu)), 1, t16);
            t18 = g->edx;
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x1cu, 0u);
            g->edx = t18;
            t19 = cow_thiscall(g, COW_IMG(0x101d4080u), self, 3, 0u, 0u, 0u);
            t20 = g->edx;
            eax = t19;
            edx = t20;
        }
L_101d4ebd: ;
        t31 = rd16(self + 0x1cu);
        wr16(self + 0x1eu, (uint16_t)t31);
        eax = (eax & 0xffff0000u) | t31;
    }
    if ((uint32_t)(int16_t)eax == 1u)
    {
        eax = (uint32_t)(int16_t)eax - 1u;
        goto L_101d4f2b;
    }
    eax = (uint32_t)(int16_t)eax - 1u;
    if (eax == 2u) goto L_101d4f09;
    eax = eax - 2u;
    if (eax != 1u)
    {
        ebp = in_ebp;
        goto L_101d5118;
    }
    t32 = rd32(rd32(COW_IMG(0x105781b8u)) + 0x150u);
    t33 = rd32(COW_IMG(0x105781b8u));
    t34 = rd8(rd32(COW_IMG(0x105781b8u)) + 0x14fu);
    wr8(sp0 - 4u, (uint8_t)t34);
    wr32(sp0 - 0x14u, t32);
    t35 = rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, t35);
    wr32(sp0 - 0x1cu, t32);
    g->eax = t32;
    g->edx = t35;
    g->esp = sp0 - 0x14u;
    t36 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t32, t35);
    t37 = g->edx;
    wr32(sp0 - 0x18u, t36);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101d4760u), self, 2, t36, rd32(sp0 - 0x14u));
    return;
L_101d4f09: ;
    g->eax = rd32(rd32(COW_IMG(0x10664420u)));
    t38 = rd32(rd32(COW_IMG(0x10664420u)));
    g->esp = sp0 - 0x10u;
    t39 = cow_thiscall(g, rd32(t38 + 0x54u), rd32(COW_IMG(0x10664420u)), 0);
    wr32(sp0 - 0x14u, t39);
    t40 = rd32(rd32(COW_IMG(0x10664420u)) + 0xcu);
    wr32(sp0 - 0x18u, t40);
    cow_thiscall(g, COW_IMG(0x101d4500u), self, 2, t40, t39);
    return;
L_101d4f2b: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t41 = cow_thiscall(g, COW_IMG(0x101d3eb0u), self, 0);
    t42 = g->edx;
    if ((uint8_t)t41 != 0u)
    {
        eax = t41;
        edx = t42;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t97 = cow_call_regs(g, COW_IMG(0x101d30f0u), eax, self, g->edx, 1, 0);
        t98 = g->ecx;
        t99 = g->edx;
        wr32(sp0 - 0x14u, t97);
        g->edx = t99;
        t100 = cow_thiscall(g, COW_IMG(0x101d3ef0u), t98, 1, t97);
        t101 = g->edx;
        wr32(sp0 - 0x14u, t100);
        g->edx = t101;
        t102 = cow_thiscall(g, COW_IMG(0x101d5dd0u), self, 1, t100);
        t103 = g->ecx;
        t104 = g->edx;
        eax = t102;
        ecx = t103;
        edx = t104;
        ebx = in_ebx;
        ebp = in_ebp;
    }
    else
    {
        eax = t41;
        edx = t42;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t43 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
        t44 = g->ecx;
        t45 = g->edx;
        if ((uint8_t)t43 != 0u)
        {
            eax = t43;
            ecx = t44;
            edx = t45;
            ebx = in_ebx;
            ebp = in_ebp;
        }
        else
        {
            eax = t43;
            ecx = t44;
            edx = t45;
            wr32(sp0 - 0x14u, 0xffffffffu);
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x1cu, 0x34u);
            wr32(sp0 - 0x20u, 0x42u);
            t46 = rd16(self + 0x7e6u);
            wr16(sp0 - 4u, (uint16_t)t46);
            g->ebx = 0u;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t47 = cow_call_regs(g, COW_IMG(0x10123a70u), (eax & 0xffff0000u) | t46, ecx, g->edx, 1, 7, 0x42u, 0x34u, 0u, 0xffffffffu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
            t48 = g->ecx;
            t49 = g->edx;
            if ((uint8_t)t47 == 0u)
            {
                eax = t47;
                ecx = t48;
                edx = t49;
                ebx = 0u;
            }
            else
            {
                eax = t47;
                ecx = t48;
                edx = t49;
                ebx = 0xffffffffu;
            }
            wr32(sp0 - 0x14u, 0xffffffffu);
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x1cu, 0x33u);
            wr32(sp0 - 0x20u, 0x42u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t50 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x42u, 0x33u, 0u, 0xffffffffu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
            t51 = g->ecx;
            t52 = g->edx;
            if ((uint8_t)t50 == 0u)
            {
                eax = t50;
                ecx = t51;
                edx = t52;
            }
            else
            {
                eax = t50;
                ecx = t51;
                edx = t52;
                ebx = 1u;
            }
            wr32(sp0 - 0x14u, 0xffffffffu);
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x1cu, 0x31u);
            wr32(sp0 - 0x20u, 0x42u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t53 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x42u, 0x31u, 0u, 0xffffffffu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
            t54 = g->ecx;
            t55 = g->edx;
            if ((uint8_t)t53 == 0u)
            {
                eax = t53;
                ecx = t54;
                edx = t55;
                esi = 0u;
            }
            else
            {
                eax = t53;
                ecx = t54;
                edx = t55;
                esi = 1u;
            }
            wr32(sp0 - 0x14u, 0xffffffffu);
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x1cu, 0x32u);
            wr32(sp0 - 0x20u, 0x42u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t56 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x42u, 0x32u, 0u, 0xffffffffu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
            t57 = g->ecx;
            t58 = g->edx;
            if ((uint8_t)t56 == 0u)
            {
                eax = t56;
                ecx = t57;
                edx = t58;
            }
            else
            {
                eax = t56;
                ecx = t57;
                edx = t58;
                esi = 0xffffffffu;
            }
            if (ebx != 0u) goto L_101d4fc3;
            if (esi == 0u) goto L_101d4fc8;
L_101d4fc3: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t59 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
            t60 = g->ecx;
            t61 = g->edx;
            eax = t59;
            ecx = t60;
            edx = t61;
L_101d4fc8: ;
            wr32(sp0 - 0x14u, esi);
            wr32(sp0 - 0x18u, ebx);
            t62 = (ecx & 0xffff0000u) | rd16(self + 0x7e6u);
            wr32(sp0 - 0x1cu, t62);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t63 = cow_thiscall(g, COW_IMG(0x101d5710u), self, 3, t62, ebx, esi);
            t64 = g->ecx;
            t65 = g->edx;
            t66 = rd16(sp0 - 4u);
            wr16(self + 0x7e6u, (uint16_t)t63);
            if ((uint16_t)t66 == (uint16_t)t63)
            {
                eax = t63;
                ecx = t64;
                edx = t65;
                ebp = in_ebp;
            }
            else
            {
                eax = t63;
                edx = t65;
                wr32(sp0 - 0x14u, in_ebp);
                wr32(sp0 - 0x18u, 0x80808080u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t67 = cow_thiscall(g, COW_IMG(0x101d39a0u), self, 1, 0x80808080u);
                t68 = g->edx;
                eax = t67;
                edx = t68;
                ebp = 2u;
                esi = self + 0x4cu;
L_101d4ffc: ;
                ebx = 0x51u;
L_101d5001: ;
                if (rd32(esi) == 0u)
                {
                    ecx = rd32(esi);
                }
                else
                {
                    ecx = rd32(esi);
                    wr32(sp0 - 0x18u, 0xffffffffu);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t69 = cow_thiscall(g, COW_IMG(0x101ce9e0u), ecx, 1, 0xffffffffu);
                    t70 = g->edx;
                    wr32(sp0 - 0x18u, 5u);
                    wr32(sp0 - 0x1cu, 1u);
                    g->edx = t70;
                    t71 = rd32(esi);
                    t72 = cow_call_regs(g, COW_IMG(0x101ce1e0u), t69, t71, g->edx, 0, 2, 1u, 5u);
                    t73 = g->ecx;
                    t74 = g->edx;
                    eax = t72;
                    ecx = t73;
                    edx = t74;
                }
                if (ebx != 1u)
                {
                    ebx = ebx - 1u;
                    esi = esi + 4u;
                    goto L_101d5001;
                }
                ebx = ebx - 1u;
                esi = esi + 4u;
                if (ebp != 1u)
                {
                    ebp = ebp - 1u;
                    goto L_101d4ffc;
                }
                ebp = rd32(sp0 - 0x14u);
            }
            wr32(sp0 - 0x14u, 0xffffffffu);
            wr32(sp0 - 0x18u, 1u);
            wr32(sp0 - 0x1cu, 0x8fu);
            wr32(sp0 - 0x20u, 0x42u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t75 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x42u, 0x8fu, 1u, 0xffffffffu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
            t76 = g->ecx;
            t77 = g->edx;
            if ((uint8_t)t75 != 0u)
            {
                eax = t75;
                ecx = t76;
                edx = t77;
                goto L_101d5051;
            }
            eax = t75;
            ecx = t76;
            edx = t77;
            wr32(sp0 - 0x14u, 0xffffffffu);
            wr32(sp0 - 0x18u, 1u);
            wr32(sp0 - 0x1cu, 0x8bu);
            wr32(sp0 - 0x20u, 0x42u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t78 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x42u, 0x8bu, 1u, 0xffffffffu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
            t79 = g->ecx;
            t80 = g->edx;
            if ((uint8_t)t78 == 0u)
            {
                eax = t78;
                ecx = t79;
                edx = t80;
                goto L_101d5063;
            }
            eax = t78;
            ecx = t79;
            edx = t80;
L_101d5051: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t81 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
            t82 = g->edx;
            g->edx = t82;
            t83 = cow_call_regs(g, COW_IMG(0x101d30f0u), t81, self, g->edx, 1, 0);
            t84 = g->ecx;
            t85 = g->edx;
            wr32(sp0 - 0x14u, t83);
            g->edx = t85;
            t86 = cow_thiscall(g, COW_IMG(0x101d5ef0u), t84, 1, t83);
            t87 = g->ecx;
            t88 = g->edx;
            eax = t86;
            ecx = t87;
            edx = t88;
L_101d5063: ;
            wr32(sp0 - 0x14u, 0xffffffffu);
            wr32(sp0 - 0x18u, 1u);
            wr32(sp0 - 0x1cu, 0xfu);
            wr32(sp0 - 0x20u, 0x42u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t89 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x42u, 0xfu, 1u, 0xffffffffu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
            t90 = g->ecx;
            t91 = g->edx;
            if ((uint8_t)t89 == 0u)
            {
                eax = t89;
                ecx = t90;
                edx = t91;
            }
            else
            {
                eax = t89;
                ecx = t90;
                edx = t91;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t92 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
                t93 = g->edx;
                wr32(sp0 - 0x14u, 1u);
                wr32(sp0 - 0x18u, 0xffffffffu);
                wr32(sp0 - 0x1cu, 0u);
                g->edx = t93;
                t94 = cow_thiscall(g, COW_IMG(0x101d3380u), self, 3, 0u, 0xffffffffu, 1u);
                t95 = g->ecx;
                t96 = g->edx;
                eax = t94;
                ecx = t95;
                edx = t96;
            }
        }
    }
    if (rd16(self + 0x7e6u) != 0u)
    {
        wr32(sp0 - 0x14u, 0xffffffffu);
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 0xa7u);
        wr32(sp0 - 0x20u, 0x42u);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t105 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x42u, 0xa7u, 1u, 0xffffffffu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t106 = g->ecx;
        t107 = g->edx;
        if ((uint8_t)t105 == 0u)
        {
            eax = t105;
            ecx = t106;
            edx = t107;
        }
        else
        {
            eax = t105;
            ecx = t106;
            edx = t107;
            t108 = rd8(self + 0x24u);
            wr8(self + 0x24u, (uint8_t)(t108 + 1u));
            if ((int8_t)(t108 + 1u) < 3)
            {
                eax = (eax & 0xffffff00u) | (uint8_t)(t108 + 1u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | (uint8_t)(t108 + 1u);
                wr8(self + 0x24u, 0u);
            }
            if (rd8(self + 0x24u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
                ecx = rd32(COW_IMG(0x10631f24u));
                wr32(sp0 - 0x14u, 2u);
                loc_14 = 2u;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
                ecx = rd32(COW_IMG(0x10631f24u));
                wr32(sp0 - 0x14u, 0u);
                loc_14 = 0u;
            }
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t109 = cow_fastcall(g, COW_IMG(0x1017a590u), ecx, edx, 1, loc_14);
            t110 = g->ecx;
            t111 = g->edx;
            eax = t109;
            ecx = t110;
            edx = t111;
        }
    }
    wr32(sp0 - 0x14u, 7u);
    wr32(sp0 - 0x18u, 0x42u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t112 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x42u, 7u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t113 = g->ecx;
    t114 = g->edx;
    d115 = cow_take_float(g);
    wrf32(sp0 - 0x14u, (float)(double)(float)d115);
    wr32(sp0 - 0x18u, 6u);
    wr32(sp0 - 0x1cu, 0x42u);
    g->edx = t114;
    g->esp = sp0 - 0xcu;
    t116 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t113, 4, 0x42u, 6u, cow_f2bits((double)(float)d115), rd32(sp0 - 0x10u));
    t117 = g->edx;
    d118 = cow_take_float(g);
    wrf32(sp0 - 0x18u, (float)(double)(float)d118);
    g->edx = t117;
    g->esp = sp0 - 0x14u;
    t119 = cow_call_regs(g, COW_IMG(0x101d30f0u), t116, self, g->edx, 1, 1, cow_f2bits((double)(float)d118));
    t120 = g->ecx;
    t121 = g->edx;
    wr32(sp0 - 0x1cu, t119);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101d4080u), t120, 3, t119, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
L_101d5118: ;
    g->ebx = in_ebx;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d4d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d4d90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
