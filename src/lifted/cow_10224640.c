/* f_0x10224640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10224640(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_8;
    int64_t q13;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x1021eb10u), rd32(COW_IMG(0x10667154u)), 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = rd32(COW_IMG(0x10667150u));
    t4 = cow_thiscall(g, COW_IMG(0x10223c90u), t3, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        ecx = t5;
        edx = t6;
    }
    else
    {
        eax = t4;
        edx = t6;
        if (rd8(COW_IMG(0x10386159u) + rd32(self + 0x64u) * 3u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10386159u) + rd32(self + 0x64u) * 3u);
            ecx = rd32(self + 0x64u);
            wr32(sp0 - 0x18u, ecx);
            loc_18 = ecx;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10386159u) + rd32(self + 0x64u) * 3u);
            wr32(sp0 - 0x18u, (uint8_t)eax);
            loc_18 = (uint8_t)eax;
            eax = (uint8_t)eax;
        }
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x102245f0u), self, 1, loc_18);
        t7 = g->ecx;
        t8 = g->edx;
        wr8(sp0 + 4u, 0u);
        ecx = t7;
        edx = t8;
    }
    if (rd32(self + 0x40u) == 0u)
    {
        eax = rd32(self + 0x40u);
        ebp = in_ebp;
        goto L_102249bc;
    }
    eax = rd32(self + 0x40u);
    if (rd8(self + 0xd2u) == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        goto L_102248b8;
    }
    if (rd8(COW_IMG(0x1038615au) + rd32(self + 0x64u) * 3u) - 2u > 7u)
    {
        ebx = rd32(self + 0x64u);
        ebp = in_ebp;
        goto L_102248b8;
    }
    eax = rd8(COW_IMG(0x1038615au) + rd32(self + 0x64u) * 3u) - 2u;
    ebx = rd32(self + 0x64u);
    t9 = rd32(COW_IMG(0x102249c8u) + eax * 4u);
    switch (t9 - RD)
    {
    case 0x102246bdu: goto L_102246bd;
    case 0x102246fbu: goto L_102246fb;
    case 0x10224723u: goto L_10224723;
    case 0x1022476bu: goto L_1022476b;
    case 0x10224785u: goto L_10224785;
    case 0x102247aeu: goto L_102247ae;
    case 0x102248b8u: ebp = in_ebp; goto L_102248b8;
    default: rt_fatal(g, COW_IMG(0x102246b6u), "switch");
    }
    return 0;
L_102246bd: ;
    wr32(sp0 - 0x18u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t45 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t46 = g->edx;
    if (t45 == 0u)
    {
        eax = t45;
        edx = t46;
    }
    else
    {
        eax = t45;
        edx = t46;
        t47 = rd32(eax + 0x28u);
        wr32(rd32(COW_IMG(0x10578474u)) + 0x20u, t47);
        eax = t47;
    }
    wr32(sp0 - 0x18u, 0xffffffffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t48 = cow_thiscall(g, COW_IMG(0x10224160u), self, 1, 0xffffffffu);
    t49 = g->ecx;
    t50 = g->edx;
    if (t48 == 0u)
    {
        ecx = t49;
        edx = t50;
        ebp = in_ebp;
    }
    else
    {
        eax = t48;
        ecx = t49;
        t51 = rd16(eax + 0xcu);
        wr32(rd32(COW_IMG(0x10578474u)) + 0x2cu, t51);
        edx = t51;
        ebp = in_ebp;
    }
L_102248b8: ;
    if (rd8(COW_IMG(0x10386158u) + rd32(self + 0x64u) * 3u) == 0u)
    {
        eax = rd32(self + 0x64u);
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10386158u) + rd32(self + 0x64u) * 3u);
        goto L_102248e8;
    }
    eax = rd32(self + 0x64u);
    ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10386158u) + rd32(self + 0x64u) * 3u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t52 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    t53 = g->ecx;
    t54 = g->edx;
    if (t52 != 0u)
    {
        eax = t52;
        ecx = t53;
        edx = t54;
        goto L_102248e8;
    }
    eax = t52;
    wr32(sp0 - 0x18u, 1u);
    t55 = rd32(self + 8u);
    wr32(sp0 - 0x1cu, t55);
    g->edx = t55;
    g->esp = sp0 - 0x14u;
    t56 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t55, 1u);
    t57 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = ebp;
    g->edx = t57;
    return t56;
L_102246fb: ;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    t39 = rd32(self + 0x30u);
    wr32(sp0 - 0x20u, t39);
    g->eax = t39;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t40 = cow_thiscall(g, COW_IMG(0x10224120u), self, 1, t39);
    t41 = g->edx;
    wr32(sp0 - 0x20u, t40);
    g->edx = t41;
    g->esp = sp0 - 0x14u;
    t42 = cow_thiscall(g, COW_IMG(0x10225120u), COW_IMG(0x10666ec0u), 3, t40, 0u, 0u);
    t43 = g->edx;
    t44 = rd32(COW_IMG(0x10578474u));
    wr32(t44 + 0x24u, t42);
    ecx = t44;
    edx = t43;
    ebp = in_ebp;
    goto L_102248b8;
L_10224723: ;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    t29 = rd32(self + 0x30u);
    wr32(sp0 - 0x20u, t29);
    g->eax = t29;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t30 = cow_thiscall(g, COW_IMG(0x10224120u), self, 1, t29);
    t31 = g->edx;
    wr32(sp0 - 0x20u, t30);
    g->esp = sp0 - 0x14u;
    t32 = cow_thiscall(g, COW_IMG(0x10225120u), COW_IMG(0x10666ec0u), 3, t30, 0u, 0u);
    wr32(sp0 - 0x18u, 0xffffffffu);
    t33 = rd32(COW_IMG(0x10578474u));
    wr32(t33 + 0x24u, t32);
    g->edx = t33;
    t34 = cow_thiscall(g, COW_IMG(0x10224160u), self, 1, 0xffffffffu);
    t35 = g->ecx;
    t36 = g->edx;
    if (t34 == 0u)
    {
        ecx = t35;
        edx = t36;
        ebp = in_ebp;
    }
    else
    {
        eax = t34;
        t37 = rd16(eax + 0xcu);
        t38 = rd32(COW_IMG(0x10578474u));
        wr32(t38 + 0x20u, t37);
        ecx = t37;
        edx = t38;
        ebp = in_ebp;
    }
    goto L_102248b8;
L_1022476b: ;
    wr32(sp0 - 0x18u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t25 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 == 0u)
    {
        ecx = t26;
        edx = t27;
        ebp = in_ebp;
        goto L_102248b8;
    }
    eax = t25;
    edx = t27;
    eax = rd32(eax + 0x28u);
    ebp = in_ebp;
L_102248af: ;
    t28 = rd32(COW_IMG(0x10578474u));
    wr32(t28 + 0x20u, eax);
    ecx = t28;
    goto L_102248b8;
L_10224785: ;
    wr32(sp0 - 0x18u, 0xffffffffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t19 = cow_thiscall(g, COW_IMG(0x10224160u), self, 1, 0xffffffffu);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x10485a30u));
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x63u);
    t22 = (t21 & 0xffff0000u) | rd16(t19 + 6u);
    wr32(sp0 - 0x24u, t22);
    g->edx = t22;
    t23 = cow_thiscall_cdecl(g, COW_IMG(0x10101d00u), t20, 4, t22, 0x63u, 0u, COW_IMG(0x10485a30u));
    t24 = g->edx;
    eax = (uint16_t)t23;
    edx = t24;
    ebp = in_ebp;
    goto L_102248af;
L_102247ae: ;
    wr32(sp0 - 0x18u, in_ebp);
    t10 = rd32(self + 0x30u);
    wr32(sp0 - 0x1cu, t10);
    g->eax = eax;
    g->edx = t10;
    g->esp = sp0 - 0x18u;
    t11 = cow_thiscall(g, COW_IMG(0x10224120u), self, 1, t10);
    t12 = g->edx;
    wr32(sp0 - 8u, t11);
    if (ebx == 9u)
    {
        ecx = t11;
        edx = t12;
        loc_8 = t11;
        if (rd8(COW_IMG(0x10485640u)) != 0x11u)
        {
            edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
            goto L_10224869;
        }
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
        ebx = (ebx & 0xffffff00u) | rd8(COW_IMG(0x10485641u));
L_10224877: ;
        eax = 0x11u;
        ebp = 0x78u;
        edi = (-((uint8_t)ebx < 0x28u) & 0xfffffffeu) + 2u;
    }
    else
    {
        ecx = t11;
        edx = t12;
        loc_8 = t11;
        if (ebx == 0xfu)
        {
            if (rd8(COW_IMG(0x10485640u)) != 0x14u)
            {
                edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
                goto L_10224843;
            }
            edx = rd8(COW_IMG(0x10485641u));
L_10224826: ;
            q13 = (int64_t)cow_muls(0x66666667u, edx - 0xau);
            t14 = (uint32_t)((int32_t)cow_qhi(q13) >> 3u);
            eax = t14 >> 0x1fu;
            edx = t14;
            ebp = 0xf0u;
            edi = t14 + (t14 >> 0x1fu) + 1u;
        }
        else
        {
            if (ebx != 0x12u)
            {
                eax = 9u;
                ebp = 0u;
                edi = 0u;
            }
            else
            {
                if (rd8(COW_IMG(0x10485640u)) != 9u) goto L_10224802;
                ebx = (ebx & 0xffffff00u) | rd8(COW_IMG(0x10485641u));
L_102247ed: ;
                eax = 9u;
                ebp = 0x5au;
                edi = (-((uint8_t)ebx < 0x19u) & 0xfffffffdu) + 3u;
            }
        }
    }
L_10224887: ;
    wr32(sp0 - 0x1cu, ebp);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, ecx);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t15 = cow_thiscall(g, COW_IMG(0x10225120u), COW_IMG(0x10666ec0u), 3, ecx, edi, ebp);
    wr32(sp0 - 0x1cu, ebp);
    wr32(sp0 - 0x20u, edi);
    t16 = rd32(sp0 - 8u);
    wr32(rd32(COW_IMG(0x10578474u)) + 0x24u, t15);
    wr32(sp0 - 0x24u, t16);
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x10225220u), COW_IMG(0x10666ec0u), 3, t16, edi, ebp);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    ebp = rd32(sp0 - 0x18u);
    goto L_102248af;
L_10224802: ;
    if (rd8(COW_IMG(0x10485642u)) != 9u)
    {
        eax = 9u;
        ebp = 0u;
        edi = 0u;
        goto L_10224887;
    }
    ebx = (ebx & 0xffffff00u) | rd8(COW_IMG(0x10485643u));
    goto L_102247ed;
L_10224843: ;
    if (rd8(COW_IMG(0x10485642u)) != 0x14u)
    {
        eax = 0x14u;
        ebp = 0u;
        edi = 0u;
        goto L_10224887;
    }
    edx = rd8(COW_IMG(0x10485643u));
    goto L_10224826;
L_10224869: ;
    if (rd8(COW_IMG(0x10485642u)) != 0x11u)
    {
        eax = 0x11u;
        ebp = 0u;
        edi = 0u;
        goto L_10224887;
    }
    ebx = (ebx & 0xffffff00u) | rd8(COW_IMG(0x10485643u));
    goto L_10224877;
L_102248e8: ;
    if (rd8(sp0 + 4u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
        ebx = (ebx & 0xffffff00u) | 1u;
        if (rd8(self + 0xd0u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xd0u);
        }
        else
        {
            if (rd32(self + 0x68u) == 0u)
            {
                t62 = rd32(self + 0x30u);
                wr32(sp0 - 0x18u, t62);
                g->eax = t62;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t63 = cow_thiscall(g, COW_IMG(0x10224120u), self, 1, t62);
                t64 = g->ecx;
                t65 = g->edx;
                if ((int32_t)t63 < 0)
                {
                    eax = t63;
                    edx = t65;
                }
                else
                {
                    eax = t63;
                    ecx = t64;
                    edx = t65;
                    wr32(sp0 - 0x18u, eax);
                    g->esp = sp0 - 0x14u;
                    t66 = cow_call_regs(g, COW_IMG(0x10223930u), eax, ecx, edx, 1, 1, eax);
                    t67 = g->edx;
                    g->edx = t67;
                    t68 = cow_thiscall(g, COW_IMG(0x10223b80u), t66, 1, rd32(sp0 - 0x18u));
                    t69 = g->edx;
                    wr32(sp0 - 0x18u, 2u);
                    wr32(sp0 - 0x1cu, t68);
                    g->edx = t69;
                    t70 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t68, 2u);
                    t71 = g->edx;
                    eax = t70;
                    edx = t71;
                }
            }
            else
            {
                eax = rd32(self + 0x68u);
                if (eax == 1u)
                {
                    eax = eax - 1u;
                    goto L_10224930;
                }
                eax = eax - 1u;
                if (eax != 1u)
                {
                    eax = eax - 1u;
                    goto L_10224960;
                }
                eax = eax - 1u;
                wr32(sp0 - 0x18u, 2u);
                wr32(sp0 - 0x1cu, 0xbu);
                loc_1c = 0xbu;
L_10224912: ;
                wr32(sp0 - 0x20u, 0xeu);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t58 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, loc_1c);
                t59 = g->edx;
                wr32(sp0 - 0x1cu, t58);
                g->edx = t59;
                g->esp = sp0 - 0x14u;
                t60 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t58, 2u);
                t61 = g->edx;
                wr8(self + 0xd0u, (uint8_t)ebx);
                eax = t60;
                edx = t61;
            }
        }
L_10224960: ;
        if (rd32(rd32(COW_IMG(0x10667144u)) + 8u) != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t72 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
            t73 = g->edx;
            if ((uint8_t)t72 == 0u)
            {
                eax = t72;
                edx = t73;
            }
            else
            {
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
                }
                else
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
                    t74 = rd32(eax + 4u);
                    wr32(sp0 - 8u, t74);
                    t75 = rd32(eax + 8u);
                    wr32(sp0 - 4u, t75);
                    eax = t75;
                }
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->eax = eax;
                g->edx = rd32(COW_IMG(0x10667144u));
                t76 = rd32(COW_IMG(0x10667144u));
                g->esp = sp0 - 0x14u;
                t77 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(t76 + 8u), 1, sp0 - 8u);
                t78 = g->edx;
                if ((uint8_t)t77 == 0u)
                {
                    eax = t77;
                    edx = t78;
                }
                else
                {
                    edx = t78;
                    wr32(sp0 - 0x18u, 0u);
                    wr32(sp0 - 0x1cu, 8u);
                    g->eax = rd32(self);
                    g->edx = edx;
                    t79 = rd32(self);
                    g->esp = sp0 - 0x14u;
                    t80 = cow_thiscall(g, rd32(t79 + 0x18u), self, 2, 8u, 0u);
                    t81 = g->edx;
                    eax = t80;
                    edx = t81;
                }
            }
        }
    }
L_102249bc: ;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_10224930: ;
    wr32(sp0 - 0x18u, 2u);
    wr32(sp0 - 0x1cu, 0xau);
    loc_1c = 0xau;
    goto L_10224912;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10224640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10224640(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
