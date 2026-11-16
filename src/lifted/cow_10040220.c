/* f_0x10040220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10040220(Guest* g)
{
    double d41;
    double d42;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_8;
    int64_t q80;
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
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x1003fcf0u), in_eax, self, g->edx, 1, 0);
    if (rd32(t1 + 4u) == 0u) goto L_10040605;
    if (rd8(arg2 + 0x16cu) != 0x44u)
    {
        edi = rd32(sp0 + 4u);
        edx = rd32(edi);
    }
    else
    {
        edi = rd32(sp0 + 4u);
        if (rd32(edi) >> 0x18u < 0x7fu)
        {
            loc_8 = rd32(edi);
        }
        else
        {
            loc_8 = rd32(edi);
            loc_8 = (loc_8 & 0xffffffu) | 0xff000000u;
        }
        edx = loc_8;
    }
    t2 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t2;
    g->edx = edx;
    t3 = rd32(t2);
    g->esp = sp0 - 0x14u;
    t4 = cow_thiscall(g, rd32(t3 + 0xc8u), t3, 3, t2, 0x3cu, edx);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd8(self + 0x34u) != 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_10040346;
    }
    edx = t6;
    t7 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t7;
    g->edx = edx;
    t8 = rd32(t7);
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall(g, rd32(t8 + 0xf4u), t8, 3, t7, 0u, 0u);
    t10 = g->ecx;
    t11 = g->edx;
    if (rd8(COW_IMG(0x1047ba29u)) & 1u)
    {
        eax = (t9 & 0xffffff00u) | 1u;
        edx = t11;
    }
    else
    {
        eax = (t9 & 0xffffff00u) | 1u;
        ecx = (t10 & 0xffffff00u) | rd8(COW_IMG(0x1047ba29u));
        edx = t11;
        wr8(COW_IMG(0x1047ba29u), (uint8_t)(ecx | eax));
        g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047baa8u), 0);
        t12 = g->ecx;
        t13 = g->edx;
        g->edx = t13;
        t14 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10040660u));
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t16 = cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047baa8u), edx, 1, COW_IMG(0x10352348u));
    t17 = g->ecx;
    t18 = g->edx;
    if (rd8(arg2 + 0x16cu) != 0x44u)
    {
        eax = t16;
    }
    else
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        if ((rd8(COW_IMG(0x1047ba29u)) & 2u) != 0u)
        {
            eax = (eax & 0xffffff00u) | 2u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | 2u;
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047ba29u));
            wr8(COW_IMG(0x1047ba29u), (uint8_t)(ecx | eax));
            g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba00u), 0);
            t19 = g->ecx;
            t20 = g->edx;
            g->edx = t20;
            t21 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10040650u));
            t22 = g->edx;
            eax = t21;
            edx = t22;
        }
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t23 = cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047ba00u), edx, 1, COW_IMG(0x103523b4u));
        eax = t23;
    }
    t24 = rd16(self + 0x36u);
    g->edx = t24;
    g->esp = sp0 - 0x28u;
    t25 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax, self, g->edx, 1, 0);
    t26 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10043f40u), rd32(t25 + 4u), 5, 0u, t24, 4u, 0u, 0xffffffffu);
    return;
L_10040346: ;
    if (!(rd32(arg2 + 0x10cu) >> 0x1cu & 1u))
    {
        eax = rd32(arg2 + 0x10cu) >> 0x1cu;
        if ((rd8(COW_IMG(0x1047ba29u)) & 8u) != 0u)
        {
            eax = (eax & 0xffffff00u) | 8u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | 8u;
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047ba29u));
            wr8(COW_IMG(0x1047ba29u), (uint8_t)(ecx | eax));
            g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba68u), 0);
            t31 = g->ecx;
            t32 = g->edx;
            g->edx = t32;
            t33 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10040630u));
            t34 = g->edx;
            eax = t33;
            edx = t34;
        }
        ecx = COW_IMG(0x1047ba68u);
        loc_18 = COW_IMG(0x103524a8u);
    }
    else
    {
        eax = rd32(arg2 + 0x10cu) >> 0x1cu;
        if ((rd8(COW_IMG(0x1047ba29u)) & 4u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba29u));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba29u));
            wr8(COW_IMG(0x1047ba29u), (uint8_t)(eax | 4u));
            g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 4u);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba5cu), 0);
            t27 = g->ecx;
            t28 = g->edx;
            g->edx = t28;
            t29 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10040640u));
            t30 = g->edx;
            eax = t29;
            edx = t30;
        }
        ecx = COW_IMG(0x1047ba5cu);
        loc_18 = COW_IMG(0x103523d0u);
    }
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t35 = cow_fastcall(g, COW_IMG(0x1006af90u), ecx, edx, 1, loc_18);
    t36 = g->edx;
    if ((rd8(arg2 + 0x17bu) & 3u) == 0u)
    {
        edx = t36;
    }
    else
    {
        edx = t36;
        t37 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t38 = rd32(COW_IMG(0x1047cf7cu));
        t39 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(t38 + 0xa90u, t37);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x100746a0u), t39, 0);
        t40 = g->edx;
        d41 = (double)rdf32(arg2 + 0x120u);
        wrf32(t39 + 0x20u, (float)d41);
        d42 = (double)rdf32(arg2 + 0x124u);
        wrf32(t39 + 0x24u, (float)d42);
        t43 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->eax = t43;
        t44 = cow_thiscall(g, rd32(rd32(t43) + 0xfcu), rd32(t43), 4, t43, 0u, 0x18u, 2u);
        g->edx = rd32(COW_IMG(0x1047bfa8u));
        t45 = rd32(COW_IMG(0x1047bfa8u));
        cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(t45 + 0xdc8u), 2, 0x10u, t39);
        t46 = g->edx;
        t47 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t48 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t48 + 0xa90u, t47);
        wr32(t47 * 4u + t48 + 0xa10u, t39);
        edx = t46;
    }
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t49 = cow_thiscall(g, COW_IMG(0x1003fce0u), self, 0);
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 + 4u, t49);
    g->edx = t51;
    t52 = cow_call_regs(g, COW_IMG(0x1003fcf0u), t49, t50, g->edx, 1, 0);
    t53 = g->ecx;
    t54 = g->edx;
    if (rd8(arg2 + 0x16cu) != 0x49u)
    {
        eax = (t52 & 0xffffff00u) | rd8(arg2 + 0x16cu);
        ecx = t53;
        edx = t54;
        loc_8 = t52;
    }
    else
    {
        eax = (t52 & 0xffffff00u) | rd8(arg2 + 0x16cu);
        edx = t54;
        loc_8 = t52;
        if ((rd8(COW_IMG(0x1047ba29u)) & 0x10u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba29u));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba29u));
            wr8(COW_IMG(0x1047ba29u), (uint8_t)(eax | 0x10u));
            g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 0x10u);
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba50u), 0);
            t55 = g->ecx;
            t56 = g->edx;
            g->edx = t56;
            t57 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10040620u));
            t58 = g->edx;
            eax = t57;
            edx = t58;
        }
        g->esp = sp0 - 0x18u;
        cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047ba50u), edx, 1, COW_IMG(0x10352590u));
        t59 = rd32(edi) | 0xffffffu;
        t60 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->edx = t59;
        cow_thiscall(g, rd32(rd32(t60) + 0xc8u), rd32(t60), 3, t60, 0x3cu, t59);
        t61 = g->edx;
        t62 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        t63 = rd32(t62);
        cow_thiscall(g, rd32(t63 + 0xc8u), t63, 3, t62, 0x13u, 9u);
        t64 = g->ecx;
        t65 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->eax = t65;
        g->edx = rd32(t65);
        t66 = rd32(t65);
        t67 = cow_thiscall(g, rd32(t66 + 0xc8u), t64, 3, t65, 0x14u, 5u);
        t68 = g->ecx;
        t69 = g->edx;
        eax = t67;
        ecx = t68;
        edx = t69;
    }
    if (rd8(self + 0x34u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x34u);
        edi = 0u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x34u);
        ebp = loc_8;
        esi = 0u;
        edi = 0u;
L_10040504: ;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x10075960u), ebp, 1, 0u);
        t70 = g->edx;
        t71 = rd16(esi * 2u + rd32(sp0 + 4u));
        g->edx = t70;
        g->esp = sp0 - 0x2cu;
        t72 = cow_call_regs(g, COW_IMG(0x1003fcf0u), t71, self, g->edx, 1, 0);
        t73 = g->edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x10043f40u), rd32(t72 + 4u), 5, edi, t71, 4u, 0u, 0xffffffffu);
        if ((int32_t)(esi + 1u) < (int32_t)rd8(self + 0x34u))
        {
            eax = rd16(esi * 2u + rd32(sp0 + 4u));
            edx = rd8(self + 0x34u);
            ebp = ebp + 0x10u;
            edi = edi + rd16(esi * 2u + rd32(sp0 + 4u)) * 3u;
            esi = esi + 1u;
            goto L_10040504;
        }
        eax = rd16(esi * 2u + rd32(sp0 + 4u));
        ecx = edi + rd16(esi * 2u + rd32(sp0 + 4u));
        edx = rd8(self + 0x34u);
        edi = edi + rd16(esi * 2u + rd32(sp0 + 4u)) * 3u;
    }
    if (rd8(self + 0x35u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x35u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x35u);
        if ((rd8(COW_IMG(0x1047ba29u)) & 0x20u) != 0u)
        {
            eax = (eax & 0xffffff00u) | 0x20u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | 0x20u;
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047ba29u));
            wr8(COW_IMG(0x1047ba29u), (uint8_t)(ecx | eax));
            g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047b9f4u), 0);
            t74 = g->ecx;
            t75 = g->edx;
            g->edx = t75;
            t76 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10040610u));
            t77 = g->edx;
            eax = t76;
            edx = t77;
        }
        g->esp = sp0 - 0x14u;
        cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047b9f4u), edx, 1, COW_IMG(0x10352648u));
        t78 = g->edx;
        t79 = rd16(self + 0x36u);
        q80 = (int64_t)cow_muls(0x55555556u, edi);
        t81 = t79 - (cow_qhi(q80) + (cow_qhi(q80) >> 0x1fu));
        g->edx = cow_qhi(q80) + (cow_qhi(q80) >> 0x1fu);
        g->esp = sp0 - 0x28u;
        t82 = cow_call_regs(g, COW_IMG(0x1003fcf0u), cow_qhi(q80) >> 0x1fu, self, g->edx, 1, 0);
        t83 = g->edx;
        g->esp = sp0 - 0x14u;
        t84 = cow_thiscall(g, COW_IMG(0x10043f40u), rd32(t82 + 4u), 5, edi, t81, 4u, 0u, 0xffffffffu);
        eax = t84;
    }
    if ((rd8(arg2 + 0x17bu) & 3u) != 0u)
    {
        t85 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
        g->edx = rd32(COW_IMG(0x1047bfa8u));
        t86 = rd32(COW_IMG(0x1047bfa8u));
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(t86 + 0xdc8u), 2, 0x10u, t85);
        t87 = g->edx;
        t88 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        cow_thiscall(g, rd32(rd32(t88) + 0xfcu), rd32(t88), 4, t88, 0u, 0x18u, 0u);
    }
L_10040605: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10040220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10040220(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
