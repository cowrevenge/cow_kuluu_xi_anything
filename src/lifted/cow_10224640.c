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
    int64_t q12;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    cow_thiscall(g, COW_IMG(0x1021eb10u), rd32(COW_IMG(0x10667154u)), 0);
    t1 = g->edx;
    g->edx = t1;
    t2 = rd32(COW_IMG(0x10667150u));
    t3 = cow_thiscall(g, COW_IMG(0x10223c90u), t2, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        ecx = t4;
        edx = t5;
    }
    else
    {
        eax = t3;
        edx = t5;
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
        t6 = g->ecx;
        t7 = g->edx;
        wr8(sp0 + 4u, 0u);
        ecx = t6;
        edx = t7;
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
    t8 = rd32(COW_IMG(0x102249c8u) + eax * 4u);
    switch (t8 - RD)
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
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t44 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t45 = g->edx;
    if (t44 == 0u)
    {
        edx = t45;
    }
    else
    {
        eax = t44;
        edx = t45;
        t46 = rd32(eax + 0x28u);
        wr32(rd32(COW_IMG(0x10578474u)) + 0x20u, t46);
    }
    wr32(sp0 - 0x18u, 0xffffffffu);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t47 = cow_thiscall(g, COW_IMG(0x10224160u), self, 1, 0xffffffffu);
    t48 = g->ecx;
    t49 = g->edx;
    if (t47 == 0u)
    {
        ecx = t48;
        edx = t49;
        ebp = in_ebp;
    }
    else
    {
        eax = t47;
        ecx = t48;
        t50 = rd16(eax + 0xcu);
        wr32(rd32(COW_IMG(0x10578474u)) + 0x2cu, t50);
        edx = t50;
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
    t51 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    t52 = g->ecx;
    t53 = g->edx;
    if (t51 != 0u)
    {
        eax = t51;
        ecx = t52;
        edx = t53;
        goto L_102248e8;
    }
    eax = t51;
    wr32(sp0 - 0x18u, 1u);
    t54 = rd32(self + 8u);
    wr32(sp0 - 0x1cu, t54);
    g->edx = t54;
    g->esp = sp0 - 0x14u;
    t55 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t54, 1u);
    t56 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = ebp;
    g->edx = t56;
    return t55;
L_102246fb: ;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    t38 = rd32(self + 0x30u);
    wr32(sp0 - 0x20u, t38);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t39 = cow_thiscall(g, COW_IMG(0x10224120u), self, 1, t38);
    t40 = g->edx;
    wr32(sp0 - 0x20u, t39);
    g->edx = t40;
    g->esp = sp0 - 0x14u;
    t41 = cow_thiscall(g, COW_IMG(0x10225120u), COW_IMG(0x10666ec0u), 3, t39, 0u, 0u);
    t42 = g->edx;
    t43 = rd32(COW_IMG(0x10578474u));
    wr32(t43 + 0x24u, t41);
    ecx = t43;
    edx = t42;
    ebp = in_ebp;
    goto L_102248b8;
L_10224723: ;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    t28 = rd32(self + 0x30u);
    wr32(sp0 - 0x20u, t28);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t29 = cow_thiscall(g, COW_IMG(0x10224120u), self, 1, t28);
    t30 = g->edx;
    wr32(sp0 - 0x20u, t29);
    g->esp = sp0 - 0x14u;
    t31 = cow_thiscall(g, COW_IMG(0x10225120u), COW_IMG(0x10666ec0u), 3, t29, 0u, 0u);
    wr32(sp0 - 0x18u, 0xffffffffu);
    t32 = rd32(COW_IMG(0x10578474u));
    wr32(t32 + 0x24u, t31);
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x10224160u), self, 1, 0xffffffffu);
    t34 = g->ecx;
    t35 = g->edx;
    if (t33 == 0u)
    {
        ecx = t34;
        edx = t35;
        ebp = in_ebp;
    }
    else
    {
        eax = t33;
        t36 = rd16(eax + 0xcu);
        t37 = rd32(COW_IMG(0x10578474u));
        wr32(t37 + 0x20u, t36);
        ecx = t36;
        edx = t37;
        ebp = in_ebp;
    }
    goto L_102248b8;
L_1022476b: ;
    wr32(sp0 - 0x18u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t24 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t25 = g->ecx;
    t26 = g->edx;
    if (t24 == 0u)
    {
        ecx = t25;
        edx = t26;
        ebp = in_ebp;
        goto L_102248b8;
    }
    eax = t24;
    edx = t26;
    eax = rd32(eax + 0x28u);
    ebp = in_ebp;
L_102248af: ;
    t27 = rd32(COW_IMG(0x10578474u));
    wr32(t27 + 0x20u, eax);
    ecx = t27;
    goto L_102248b8;
L_10224785: ;
    wr32(sp0 - 0x18u, 0xffffffffu);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, COW_IMG(0x10224160u), self, 1, 0xffffffffu);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x10485a30u));
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x63u);
    t21 = (t20 & 0xffff0000u) | rd16(t18 + 6u);
    wr32(sp0 - 0x24u, t21);
    g->edx = t21;
    t22 = cow_thiscall_cdecl(g, COW_IMG(0x10101d00u), t19, 4, t21, 0x63u, 0u, COW_IMG(0x10485a30u));
    t23 = g->edx;
    eax = (uint16_t)t22;
    edx = t23;
    ebp = in_ebp;
    goto L_102248af;
L_102247ae: ;
    wr32(sp0 - 0x18u, in_ebp);
    t9 = rd32(self + 0x30u);
    wr32(sp0 - 0x1cu, t9);
    g->edx = t9;
    g->esp = sp0 - 0x18u;
    t10 = cow_thiscall(g, COW_IMG(0x10224120u), self, 1, t9);
    t11 = g->edx;
    wr32(sp0 - 8u, t10);
    if (ebx == 9u)
    {
        ecx = t10;
        edx = t11;
        loc_8 = t10;
        if (rd8(COW_IMG(0x10485640u)) != 0x11u)
        {
            edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
            goto L_10224869;
        }
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
        ebx = (ebx & 0xffffff00u) | rd8(COW_IMG(0x10485641u));
L_10224877: ;
        ebp = 0x78u;
        edi = (-((uint8_t)ebx < 0x28u) & 0xfffffffeu) + 2u;
    }
    else
    {
        ecx = t10;
        edx = t11;
        loc_8 = t10;
        if (ebx == 0xfu)
        {
            if (rd8(COW_IMG(0x10485640u)) != 0x14u)
            {
                edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
                goto L_10224843;
            }
            edx = rd8(COW_IMG(0x10485641u));
L_10224826: ;
            q12 = (int64_t)cow_muls(0x66666667u, edx - 0xau);
            t13 = (uint32_t)((int32_t)cow_qhi(q12) >> 3u);
            edx = t13;
            ebp = 0xf0u;
            edi = t13 + (t13 >> 0x1fu) + 1u;
        }
        else
        {
            if (ebx != 0x12u)
            {
                ebp = 0u;
                edi = 0u;
            }
            else
            {
                if (rd8(COW_IMG(0x10485640u)) != 9u) goto L_10224802;
                ebx = (ebx & 0xffffff00u) | rd8(COW_IMG(0x10485641u));
L_102247ed: ;
                ebp = 0x5au;
                edi = (-((uint8_t)ebx < 0x19u) & 0xfffffffdu) + 3u;
            }
        }
    }
L_10224887: ;
    wr32(sp0 - 0x1cu, ebp);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, ecx);
    g->esp = sp0 - 0x18u;
    t14 = cow_thiscall(g, COW_IMG(0x10225120u), COW_IMG(0x10666ec0u), 3, ecx, edi, ebp);
    wr32(sp0 - 0x1cu, ebp);
    wr32(sp0 - 0x20u, edi);
    t15 = rd32(sp0 - 8u);
    wr32(rd32(COW_IMG(0x10578474u)) + 0x24u, t14);
    wr32(sp0 - 0x24u, t15);
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x10225220u), COW_IMG(0x10666ec0u), 3, t15, edi, ebp);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    ebp = rd32(sp0 - 0x18u);
    goto L_102248af;
L_10224802: ;
    if (rd8(COW_IMG(0x10485642u)) != 9u)
    {
        ebp = 0u;
        edi = 0u;
        goto L_10224887;
    }
    ebx = (ebx & 0xffffff00u) | rd8(COW_IMG(0x10485643u));
    goto L_102247ed;
L_10224843: ;
    if (rd8(COW_IMG(0x10485642u)) != 0x14u)
    {
        ebp = 0u;
        edi = 0u;
        goto L_10224887;
    }
    edx = rd8(COW_IMG(0x10485643u));
    goto L_10224826;
L_10224869: ;
    if (rd8(COW_IMG(0x10485642u)) != 0x11u)
    {
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
                t61 = rd32(self + 0x30u);
                wr32(sp0 - 0x18u, t61);
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t62 = cow_thiscall(g, COW_IMG(0x10224120u), self, 1, t61);
                t63 = g->ecx;
                t64 = g->edx;
                if ((int32_t)t62 < 0)
                {
                    eax = t62;
                    edx = t64;
                }
                else
                {
                    eax = t62;
                    ecx = t63;
                    edx = t64;
                    wr32(sp0 - 0x18u, eax);
                    g->esp = sp0 - 0x18u;
                    t65 = cow_call_regs(g, COW_IMG(0x10223930u), eax, ecx, edx, 1, 0);
                    t66 = g->edx;
                    g->edx = t66;
                    g->esp = sp0 - 0x14u;
                    t67 = cow_thiscall(g, COW_IMG(0x10223b80u), t65, 1, rd32(sp0 - 0x18u));
                    t68 = g->edx;
                    wr32(sp0 - 0x18u, 2u);
                    wr32(sp0 - 0x1cu, t67);
                    g->edx = t68;
                    t69 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t67, 2u);
                    t70 = g->edx;
                    eax = t69;
                    edx = t70;
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
                t57 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, loc_1c);
                t58 = g->edx;
                wr32(sp0 - 0x1cu, t57);
                g->edx = t58;
                g->esp = sp0 - 0x14u;
                t59 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t57, 2u);
                t60 = g->edx;
                wr8(self + 0xd0u, (uint8_t)ebx);
                eax = t59;
                edx = t60;
            }
        }
L_10224960: ;
        if (rd32(rd32(COW_IMG(0x10667144u)) + 8u) != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t71 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
            t72 = g->edx;
            if ((uint8_t)t71 == 0u)
            {
                eax = t71;
                edx = t72;
            }
            else
            {
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
                    t73 = rd32(eax + 4u);
                    wr32(sp0 - 8u, t73);
                    t74 = rd32(eax + 8u);
                    wr32(sp0 - 4u, t74);
                }
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->edx = rd32(COW_IMG(0x10667144u));
                t75 = rd32(COW_IMG(0x10667144u));
                g->esp = sp0 - 0x14u;
                t76 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(t75 + 8u), 1, sp0 - 8u);
                t77 = g->edx;
                if ((uint8_t)t76 == 0u)
                {
                    eax = t76;
                    edx = t77;
                }
                else
                {
                    edx = t77;
                    wr32(sp0 - 0x18u, 0u);
                    wr32(sp0 - 0x1cu, 8u);
                    g->eax = rd32(self);
                    g->edx = edx;
                    t78 = rd32(self);
                    g->esp = sp0 - 0x14u;
                    t79 = cow_thiscall(g, rd32(t78 + 0x18u), self, 2, 8u, 0u);
                    t80 = g->edx;
                    eax = t79;
                    edx = t80;
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
