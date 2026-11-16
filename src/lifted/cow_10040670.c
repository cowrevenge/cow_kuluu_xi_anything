/* f_0x10040670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10040670(Guest* g)
{
    double d46;
    double d47;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    int64_t q77;
    int64_t q79;
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
    uint32_t t78;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x1003fcf0u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    if (rd32(t1 + 4u) == 0u) goto L_100407cc;
    edx = t2;
    if (rd8(self + 0x32u) & 1u)
    {
        t3 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        t4 = rd32(t3);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t4 + 0xc8u), t4, 3, t3, 0xfu, 1u);
        t5 = g->ecx;
        t6 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->edx = rd32(t6);
        t7 = rd32(t6);
        cow_thiscall(g, rd32(t7 + 0xc8u), t5, 3, t6, 0x19u, 5u);
        t8 = g->edx;
        t9 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        cow_thiscall(g, rd32(rd32(t9) + 0xc8u), rd32(t9), 3, t9, 0x18u, 0x60u);
    }
    if (rd8(rd32(sp0 + 0xcu) + 0x16cu) != 0x44u)
    {
        edx = rd32(sp0 + 8u);
        ebx = rd32(sp0 + 0xcu);
        edx = rd32(edx);
    }
    else
    {
        edx = rd32(sp0 + 8u);
        ebx = rd32(sp0 + 0xcu);
        if (rd32(edx) >> 0x18u < 0x7fu)
        {
            loc_8 = rd32(edx);
        }
        else
        {
            loc_8 = rd32(edx);
            loc_8 = (loc_8 & 0xffffffu) | 0xff000000u;
        }
        edx = loc_8;
    }
    t10 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t10;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, rd32(rd32(t10) + 0xc8u), rd32(t10), 3, t10, 0x3cu, edx);
    t12 = g->edx;
    if (rd8(self + 0x34u) != 0u)
    {
        eax = (t11 & 0xffffff00u) | rd8(self + 0x34u);
        edx = t12;
        goto L_100407d4;
    }
    eax = (t11 & 0xffffff00u) | rd8(self + 0x34u);
    edx = t12;
    if (rd8(sp0 + 0x10u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 0x10u);
        goto L_100407d4;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 + 0x10u);
    if (rd8(COW_IMG(0x1047ba28u)) & 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba28u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba28u));
        wr8(COW_IMG(0x1047ba28u), (uint8_t)(eax | 1u));
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba74u), 0);
        t13 = g->ecx;
        t14 = g->edx;
        g->edx = t14;
        t15 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10040b90u));
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t17 = cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047ba74u), edx, 1, COW_IMG(0x103526b8u));
    t18 = g->ecx;
    t19 = g->edx;
    if (rd8(ebx + 0x16cu) != 0x44u)
    {
        edx = t19;
    }
    else
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        if ((rd8(COW_IMG(0x1047ba28u)) & 2u) != 0u)
        {
            eax = (eax & 0xffffff00u) | 2u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | 2u;
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047ba28u));
            wr8(COW_IMG(0x1047ba28u), (uint8_t)(ecx | eax));
            g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba8cu), 0);
            t20 = g->ecx;
            t21 = g->edx;
            g->edx = t21;
            t22 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10040b80u));
            t23 = g->edx;
            eax = t22;
            edx = t23;
        }
        g->esp = sp0 - 0x10u;
        cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047ba8cu), edx, 1, COW_IMG(0x10352724u));
        t24 = g->edx;
        edx = t24;
    }
    t25 = rd16(self + 0x36u);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t26 = cow_call_regs(g, COW_IMG(0x1003fcf0u), t25, self, g->edx, 1, 0);
    t27 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10043f40u), rd32(t26 + 4u), 5, 0u, t25, 4u, 0u, 0xffffffffu);
L_100407cc: ;
    g->ebx = in_ebx;
    return;
L_100407d4: ;
    if ((rd8(COW_IMG(0x1047ba28u)) & 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba28u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba28u));
        wr8(COW_IMG(0x1047ba28u), (uint8_t)(eax | 4u));
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 4u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba80u), 0);
        t28 = g->ecx;
        t29 = g->edx;
        g->edx = t29;
        t30 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10040b70u));
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t32 = cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047ba80u), edx, 1, COW_IMG(0x10352740u));
    t33 = g->ecx;
    t34 = g->edx;
    if (rd8(ebx + 0x16cu) != 0x44u)
    {
        eax = t32;
        ecx = t33;
        edx = t34;
    }
    else
    {
        eax = t32;
        ecx = t33;
        edx = t34;
        if ((rd8(COW_IMG(0x1047ba28u)) & 8u) != 0u)
        {
            eax = (eax & 0xffffff00u) | 8u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | 8u;
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047ba28u));
            wr8(COW_IMG(0x1047ba28u), (uint8_t)(ecx | eax));
            g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba0cu), 0);
            t35 = g->ecx;
            t36 = g->edx;
            g->edx = t36;
            t37 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10040b60u));
            t38 = g->edx;
            eax = t37;
            edx = t38;
        }
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t39 = cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047ba0cu), edx, 1, COW_IMG(0x10352848u));
        t40 = g->ecx;
        t41 = g->edx;
        eax = t39;
        ecx = t40;
        edx = t41;
    }
    if ((rd8(ebx + 0x17bu) & 3u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + 0x17bu);
    }
    else
    {
        t42 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t43 = rd32(COW_IMG(0x1047cf7cu));
        t44 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(t43 + 0xa90u, t42);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x100746a0u), t44, 0);
        t45 = g->edx;
        d46 = (double)rdf32(ebx + 0x120u);
        wrf32(t44 + 0x20u, (float)d46);
        d47 = (double)rdf32(ebx + 0x124u);
        wrf32(t44 + 0x24u, (float)d47);
        t48 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        t49 = rd32(t48);
        cow_thiscall(g, rd32(t49 + 0xfcu), t49, 4, t48, 1u, 0xbu, 0u);
        t50 = g->ecx;
        t51 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->edx = rd32(t51);
        t52 = rd32(t51);
        cow_thiscall(g, rd32(t52 + 0xfcu), t50, 4, t51, 1u, 0x18u, 2u);
        t53 = g->edx;
        g->edx = t53;
        cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 2, 0x11u, t44);
        t54 = g->edx;
        t55 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t56 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t56 + 0xa90u, t55);
        wr32(t55 * 4u + t56 + 0xa10u, t44);
        eax = t56;
        ecx = t55;
        edx = t54;
    }
    if (rd8(self + 0x34u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x34u);
        esi = 0u;
        edi = 0u;
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t57 = cow_thiscall(g, COW_IMG(0x1003fce0u), self, 0);
        t58 = g->edx;
        eax = t57;
        edx = t58;
        ebx = t57;
        esi = 0u;
        edi = 0u;
L_10040909: ;
        if (rd8(sp0 + 0x10u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 + 0x10u);
        }
        else
        {
            t59 = rd32(rd32(sp0 + 0xcu) + 0x148u);
            t60 = rd32(rd32(sp0 + 0xcu) + 0x144u);
            t61 = rd32(rd32(sp0 + 0xcu) + 0x140u);
            g->edx = t60;
            g->esp = sp0 - 0x28u;
            t62 = cow_call_regs(g, COW_IMG(0x1003fcf0u), t61, self, g->edx, 1, 0);
            t63 = g->edx;
            g->ebx = ebx;
            g->edx = t63;
            g->esp = sp0 - 0x18u;
            t64 = cow_call_regs(g, COW_IMG(0x10075700u), t62, t62, g->edx, 0, 4, 1u, t61, t60, t59);
            t65 = g->edx;
            eax = t64;
            edx = t65;
        }
        t66 = rd16(ebx + edi * 2u);
        t67 = rd32(COW_IMG(0x1047bbb0u));
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x10043f40u), t67, 5, esi, t66, 4u, 0u, 0xffffffffu);
        t68 = g->ecx;
        if ((int32_t)(edi + 1u) < (int32_t)rd8(self + 0x34u))
        {
            eax = rd8(self + 0x34u);
            edx = esi + rd16(ebx + edi * 2u);
            esi = esi + rd16(ebx + edi * 2u) * 3u;
            edi = edi + 1u;
            goto L_10040909;
        }
        eax = rd8(self + 0x34u);
        ecx = t68;
        edx = esi + rd16(ebx + edi * 2u);
        esi = esi + rd16(ebx + edi * 2u) * 3u;
        edi = edi + 1u;
        ebx = rd32(sp0 + 0xcu);
    }
    if (rd8(self + 0x35u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x35u);
        if (rd8(sp0 + 0x10u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 + 0x10u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 + 0x10u);
            if ((rd8(COW_IMG(0x1047ba28u)) & 0x10u) != 0u)
            {
                eax = (eax & 0xffffff00u) | 0x10u;
            }
            else
            {
                eax = (eax & 0xffffff00u) | 0x10u;
                ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047ba28u));
                wr8(COW_IMG(0x1047ba28u), (uint8_t)(ecx | eax));
                g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba98u), 0);
                t69 = g->ecx;
                t70 = g->edx;
                g->edx = t70;
                t71 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10040b50u));
                t72 = g->edx;
                eax = t71;
                edx = t72;
            }
            g->eax = eax;
            g->esp = sp0 - 0x18u;
            t73 = cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047ba98u), edx, 1, COW_IMG(0x10352860u));
            t74 = g->edx;
            eax = (t73 & 0xffffff00u) | rd8(sp0 + 0x10u);
            edx = t74;
        }
        if (rd32(sp0 + 4u) == 0u)
        {
            if ((uint8_t)eax != 0u) goto L_10040b1c;
            g->esp = sp0 - 0x18u;
            t82 = cow_call_regs(g, COW_IMG(0x1003fcb0u), eax, self, edx, 1, 0);
            t83 = g->edx;
            if ((uint8_t)t82 == 0u)
            {
                edx = t83;
                goto L_10040b18;
            }
            edx = t83;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t84 = cow_thiscall(g, COW_IMG(0x1003fce0u), self, 0);
            t85 = g->edx;
            t86 = rd16(edi * 2u + t84);
            if ((int32_t)(t86 - 1u) <= 0)
            {
                edx = t85;
            }
            else
            {
                eax = t86 - 1u;
                edx = t85;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t87 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax, self, g->edx, 1, 0);
                t88 = g->edx;
                g->edx = t88;
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x10043f40u), rd32(t87 + 4u), 5, esi + 3u, eax, 4u, 0u, 0xffffffffu);
                t89 = g->edx;
                edx = t89;
            }
            ebx = rd32(sp0 + 0xcu);
        }
        else
        {
            if ((uint8_t)eax != 0u) goto L_10040a0e;
            g->esp = sp0 - 0x18u;
            t75 = cow_call_regs(g, COW_IMG(0x1003fcb0u), eax, self, edx, 1, 0);
            t76 = g->edx;
            if ((uint8_t)t75 == 0u)
            {
                edx = t76;
                goto L_10040a0e;
            }
            edx = t76;
            q77 = (int64_t)cow_muls(0x55555556u, esi);
            if ((int32_t)(rd16(self + 0x36u) - (cow_qhi(q77) + (cow_qhi(q77) >> 0x1fu)) - 1u) <= 0)
            {
                edx = cow_qhi(q77) + (cow_qhi(q77) >> 0x1fu);
            }
            else
            {
                eax = cow_qhi(q77) >> 0x1fu;
                ecx = rd16(self + 0x36u) - (cow_qhi(q77) + (cow_qhi(q77) >> 0x1fu)) - 1u;
                edx = cow_qhi(q77) + (cow_qhi(q77) >> 0x1fu);
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x10043f40u), rd32(COW_IMG(0x1047bbb0u)), 5, esi + 3u, ecx, 4u, 0u, 0xffffffffu);
                t78 = g->edx;
                edx = t78;
            }
        }
    }
L_10040a82: ;
    t96 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    t97 = rd32(t96);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(t97 + 0xfcu), t97, 4, t96, 1u, 0x1cu, 1u);
    t98 = g->ecx;
    t99 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t99;
    g->edx = rd32(t99);
    t100 = rd32(t99);
    t101 = cow_thiscall(g, rd32(t100 + 0xfcu), t98, 4, t99, 1u, 1u, 1u);
    t102 = g->edx;
    if ((rd8(ebx + 0x17bu) & 3u) == 0u) goto L_100407cc;
    edx = t102;
    t103 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
    t104 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1000bd50u), t104, 2, 0x11u, t103);
    t105 = g->ecx;
    t106 = rd32(COW_IMG(0x1047bfa8u));
    wr32(sp0 + 0x10u, 0u);
    t107 = rd32(t106 + 0xebcu);
    wr32(sp0 + 0xcu, 0x18u);
    wr32(sp0 + 8u, 1u);
    t108 = rd32(t107);
    wr32(sp0 + 4u, t107);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = t108;
    cow_tailcall(g, rd32(t108 + 0xfcu), t107, t105, t108);
    return;
L_10040a0e: ;
    q79 = (int64_t)cow_muls(0x55555556u, esi);
    t80 = rd16(self + 0x36u) - (cow_qhi(q79) + (cow_qhi(q79) >> 0x1fu));
    g->edx = cow_qhi(q79) + (cow_qhi(q79) >> 0x1fu);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10043f40u), rd32(COW_IMG(0x1047bbb0u)), 5, esi, t80, 4u, 0u, 0xffffffffu);
    t81 = g->edx;
    edx = t81;
    goto L_10040a82;
L_10040b18: ;
    ebx = rd32(sp0 + 0xcu);
L_10040b1c: ;
    g->esp = sp0 - 0x24u;
    t90 = cow_thiscall(g, COW_IMG(0x1003fce0u), self, 0);
    t91 = g->ecx;
    t92 = rd16(edi * 2u + t90);
    g->edx = t92;
    g->esp = sp0 - 0x2cu;
    t93 = cow_call_regs(g, COW_IMG(0x1003fcf0u), t90, t91, g->edx, 1, 0);
    t94 = g->edx;
    g->edx = t94;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10043f40u), rd32(t93 + 4u), 5, esi, t92, 4u, 0u, 0xffffffffu);
    t95 = g->edx;
    edx = t95;
    goto L_10040a82;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10040670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10040670(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
