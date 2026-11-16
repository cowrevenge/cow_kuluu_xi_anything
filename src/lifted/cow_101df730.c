/* f_0x101df730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101df730(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_2c;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (rd8(sp0 + 4u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_18 = in_ebx;
        loc_1c = in_esi;
        loc_20 = in_edi;
    }
    else
    {
        g->esp = sp0 - 0x20u;
        t1 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
        if (rd32(self + 0x38u) == 0u)
        {
            edx = rd32(self + 0x38u);
            goto L_101df772;
        }
        eax = t1;
        edx = rd32(self + 0x38u);
        if ((int32_t)eax >= (int16_t)rd16(self + 0x20u)) goto L_101df772;
        if (eax * 0x54u + edx == 0u) goto L_101df772;
        eax = eax * 0x54u + edx;
        eax = rd32(eax + 0x48u);
L_101df774: ;
        if ((int32_t)(eax - 1u) <= 0) goto L_101df7dd;
        edi = eax - 1u;
        wr32(sp0 - 0x24u, edi);
        g->eax = eax;
        t2 = rd32(COW_IMG(0x106631e8u));
        g->esp = sp0 - 0x20u;
        t3 = cow_fastcall(g, COW_IMG(0x101c8020u), t2, edx, 1, edi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            goto L_101df7e8;
        }
        eax = t3;
        edx = t5;
        t6 = rd8(eax + 2u) - 1u;
        wr32(sp0 - 0x24u, t6);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t7 = cow_thiscall(g, COW_IMG(0x101df180u), self, 1, t6);
        t8 = g->edx;
        if (t7 == 0u)
        {
            eax = t7;
            edx = t8;
            goto L_101df7dd;
        }
        eax = t7;
        wr32(sp0 - 0x24u, eax);
        wr16(rd32(COW_IMG(0x106636a0u)) + 0x2au, 0xcu);
        t9 = rd32(COW_IMG(0x106636a0u));
        wr32(t9 + 0x30u, COW_IMG(0x101dfc80u));
        wr32(t9 + 0x38u, edi + 0x200u);
        t10 = rd32(COW_IMG(0x106636a0u));
        wr32(t10 + 0x34u, COW_IMG(0x101dfd60u));
        wr32(t10 + 0x3cu, edi + 0x200u);
        g->edx = edi + 0x200u;
        t11 = rd32(COW_IMG(0x106636a0u));
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x101ec330u), eax, t11, g->edx, 0, 1, eax);
        t12 = g->ecx;
        t13 = g->edx;
        ecx = t12;
        edx = t13;
L_101df7e8: ;
        if (rd32(rd32(COW_IMG(0x1066369cu)) + 8u) != 0u)
        {
            eax = rd32(COW_IMG(0x1066369cu));
            g->edx = edx;
            t17 = rd32(COW_IMG(0x104e1d4cu));
            g->esp = sp0 - 0x20u;
            t18 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, t17, g->edx, 1, 0);
            t19 = g->ecx;
            t20 = g->edx;
            if ((uint8_t)t18 == 0u)
            {
                ecx = t19;
                edx = t20;
            }
            else
            {
                edx = t20;
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
                    t21 = rd32(eax + 4u);
                    wr32(sp0 - 8u, t21);
                    t22 = rd32(eax + 8u);
                    wr32(sp0 - 4u, t22);
                    edx = t22;
                }
                wr32(sp0 - 0x24u, sp0 - 8u);
                g->edx = edx;
                t23 = rd32(rd32(COW_IMG(0x1066369cu)) + 8u);
                g->esp = sp0 - 0x20u;
                t24 = cow_thiscall(g, COW_IMG(0x10118c10u), t23, 1, sp0 - 8u);
                t25 = g->ecx;
                t26 = g->edx;
                if ((uint8_t)t24 == 0u)
                {
                    ecx = t25;
                    edx = t26;
                }
                else
                {
                    eax = t24;
                    wr32(sp0 - 0x24u, 0u);
                    wr32(sp0 - 0x28u, 8u);
                    g->edx = rd32(self);
                    t27 = rd32(self);
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, rd32(t27 + 0x18u), self, 2, 8u, 0u);
                    t28 = g->ecx;
                    t29 = g->edx;
                    ecx = t28;
                    edx = t29;
                }
            }
        }
    }
    wr32(sp0 - 0x24u, 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t30 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t31 = g->ecx;
    t32 = g->edx;
    wr32(sp0 - 8u, t30);
    t33 = rd8(self + 0x5fu);
    wr32(sp0 + 4u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr8(self + 0x5du, 0u);
    if ((uint8_t)t33 == 0u)
    {
        eax = (t30 & 0xffffff00u) | t33;
        edx = t32;
        ebp = in_ebp;
    }
    else
    {
        eax = (t30 & 0xffffff00u) | t33;
        ecx = t31;
        loc_8 = t30;
        wr32(sp0 - 0x24u, in_ebp);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 0x640u);
        ebx = 0u;
        loc_10 = 0u;
        loc_14 = 0x640u;
L_101df877: ;
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, 0x1000u);
        t34 = (eax & 0xffffff00u) | rd8(self + 0x5cu);
        wr32(sp0 - 0x30u, t34);
        g->edi = loc_10 + rd32(self + 0x58u);
        g->edx = loc_10;
        t35 = rd32(self + 0x58u);
        g->esp = sp0 - 0x24u;
        t36 = cow_cdecl(g, COW_IMG(0x100fcbc0u), 3, t34, 0x1000u, ebx);
        t37 = g->edx;
        if ((uint8_t)t36 == 0u)
        {
            eax = (uint8_t)t36;
            edx = t37;
            ebp = (uint8_t)t36;
            edi = loc_10 + t35;
            wr32(sp0 - 0x28u, 0x80808080u);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, 1u);
            wr32(sp0 - 0x34u, 2u);
            g->eax = eax;
            g->esp = sp0 - 0x24u;
            t49 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 2u, 1u, 0u, 0x80808080u);
            t50 = g->edx;
            wr32(sp0 - 0x28u, 0x80808080u);
            wr32(sp0 - 0x2cu, 0u);
            eax = t49;
            edx = t50;
            loc_2c = 0u;
        }
        else
        {
            eax = (uint8_t)t36;
            edx = t37;
            ebp = (uint8_t)t36;
            edi = loc_10 + t35;
            wr32(sp0 - 0x28u, ebp);
            g->eax = eax;
            t38 = rd32(COW_IMG(0x106631e8u));
            g->esp = sp0 - 0x24u;
            t39 = cow_fastcall(g, COW_IMG(0x101c8020u), t38, edx, 1, ebp);
            t40 = g->ecx;
            t41 = g->edx;
            t42 = rd8(self + 0x5du);
            t43 = rd8(t39 + 1u);
            wr8(self + 0x5du, (uint8_t)(t42 + t43));
            if ((uint8_t)(t42 + t43) <= rd8(self + rd32(sp0 + 4u) + 0x60u))
            {
                eax = rd32(sp0 + 4u);
                goto L_101df8cf;
            }
            eax = rd32(sp0 + 4u);
            ecx = ((t40 | t43) & 0xffffff00u) | (uint8_t)(t42 + t43);
            edx = t41;
L_101df8c2: ;
            if ((uint8_t)ecx > rd8(eax + self + 0x61u))
            {
                edx = (edx & 0xffffff00u) | rd8(eax + self + 0x61u);
                eax = eax + 1u;
                goto L_101df8c2;
            }
            eax = eax + 1u;
            wr32(sp0 + 4u, eax);
L_101df8cf: ;
            t44 = rd32(sp0 - 0xcu) + 1u;
            wr32(sp0 - 0xcu, t44);
            if ((int32_t)(rd32(sp0 - 0xcu) + 1u) <= (int32_t)rd8(eax + self + 0x69u))
            {
                edx = rd8(eax + self + 0x69u);
                loc_c = t44;
            }
            else
            {
                edx = rd8(eax + self + 0x69u);
                loc_c = t44;
                wr32(sp0 + 4u, eax + 1u);
            }
            t45 = (-(ebx != rd32(self + 0x50u)) & 0x4060u) - 0x7f7fbfe0u;
            wr32(sp0 - 0x28u, t45);
            wr32(sp0 - 0x2cu, ebp + 0x201u);
            wr32(sp0 - 0x30u, 0x1cu);
            wr32(sp0 - 0x34u, 2u);
            g->eax = t45;
            g->esp = sp0 - 0x24u;
            t46 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 2u, 0x1cu, ebp + 0x201u, t45);
            t47 = g->edx;
            if (rd8(self + 0x9cu) == 0u)
            {
                wr32(sp0 - 0x28u, 0x80808080u);
                t48 = rd16(ebp * 0x64u + rd32(COW_IMG(0x10667a74u)) + 0xc840u) + 1u;
                wr32(sp0 - 0x2cu, t48);
                eax = t48;
                edx = ebp * 0x19u;
                loc_2c = t48;
            }
            else
            {
                edx = t47;
                wr32(sp0 - 0x28u, 0x80808080u);
                wr32(sp0 - 0x2cu, 0u);
                eax = 0u;
                loc_2c = 0u;
            }
        }
        wr32(sp0 - 0x30u, 0x1du);
        wr32(sp0 - 0x34u, 1u);
        g->esp = sp0 - 0x24u;
        cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 1u, 0x1du, loc_2c, 0x80808080u);
        t51 = rd32(self + rd32(sp0 + 4u) * 4u + 0x74u);
        wr32(sp0 - 0x28u, t51);
        t52 = rd32(rd32(sp0 - 0x14u) + rd32(rd32(sp0 - 8u)));
        wr32(sp0 - 0x2cu, t52);
        wr32(sp0 - 0x30u, 0xeu);
        wr32(sp0 - 0x34u, 0u);
        g->eax = rd32(sp0 - 0x14u);
        t53 = rd32(sp0 - 0x14u);
        t54 = rd32(rd32(sp0 - 8u));
        t55 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, t54, 4, 0u, 0xeu, t52, t51);
        t56 = g->ecx;
        t57 = g->edx;
        wr32(sp0 - 0x28u, 0x28bu);
        wr32(sp0 - 0x2cu, 0xeu);
        t58 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x28bu);
        t59 = rd32(sp0 - 0x14u) + 4u;
        wr32(sp0 - 0x14u, t59);
        t60 = rd32(sp0 - 0x10u);
        wr32(edi + 0x4cu, t58);
        wr32(edi + 0x48u, ebp + 1u);
        wr32(sp0 - 0x10u, t60 + 0x54u);
        if ((int32_t)(ebx + 1u) < (int32_t)rd8(self + 0x5fu))
        {
            eax = t58;
            ecx = t60 + 0x54u;
            ebx = ebx + 1u;
            loc_10 = t60 + 0x54u;
            loc_14 = t59;
            goto L_101df877;
        }
        eax = t58;
        edx = rd8(self + 0x5fu);
        ebp = rd32(sp0 - 0x24u);
    }
    wr32(sp0 - 0x24u, 1u);
    t61 = (eax & 0xffff0000u) | rd8(self + 0x5fu);
    wr32(sp0 - 0x28u, t61);
    t62 = rd32(self + 0x58u);
    wr32(sp0 - 0x2cu, t62);
    g->esi = self;
    g->eax = t61;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t63 = cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t62, t61, 1u);
    t64 = g->ecx;
    t65 = g->edx;
    if (rd32(self + 0x54u) != 0u)
    {
        eax = t63;
        ecx = t64;
        edx = t65;
        if (rd8(self + 0x5fu) == 0u) goto L_101dfa1a;
        edi = 0u;
L_101df9e7: ;
        wr32(sp0 - 0x24u, edi);
        wr32(sp0 - 0x28u, 0x1000u);
        t66 = (edx & 0xffffff00u) | rd8(self + 0x5cu);
        wr32(sp0 - 0x2cu, t66);
        g->edi = edi;
        g->edx = t66;
        g->esp = sp0 - 0x20u;
        t67 = cow_cdecl(g, COW_IMG(0x100fcbc0u), 3, t66, 0x1000u, edi);
        t68 = g->edx;
        if (rd32(self + 0x54u) == (uint8_t)t67)
        {
            eax = (uint8_t)t67;
            edx = t68;
            goto L_101dfa11;
        }
        ecx = rd32(self + 0x54u);
        edx = t68;
        if ((int32_t)(edi + 1u) < (int32_t)rd8(self + 0x5fu))
        {
            edi = edi + 1u;
            goto L_101df9e7;
        }
L_101dfa1a: ;
        wr32(self + 0x54u, 0u);
    }
    t69 = rd8(self + 0x5du);
    t70 = rd32(COW_IMG(0x106634a0u));
    t71 = rd8(self + 0x5eu);
    t72 = rd32(sp0 - 0x1cu);
    t73 = rd32(sp0 - 0x20u);
    wr32(t70 + 0x14u, t69);
    wr32(t70 + 0x18u, t71);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = t72;
    g->edi = t73;
    g->ebp = ebp;
    g->edx = t69;
    return t70;
L_101df772: ;
    eax = 0u;
    goto L_101df774;
L_101df7dd: ;
    g->edx = edx;
    t14 = rd32(COW_IMG(0x106636a0u));
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x101ec3c0u), eax, t14, g->edx, 1, 0);
    t15 = g->ecx;
    t16 = g->edx;
    ecx = t15;
    edx = t16;
    goto L_101df7e8;
L_101dfa11: ;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, edi);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x101f7080u), eax, self, g->edx, 0, 2, edi, 0u);
    goto L_101dfa1a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101df730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101df730(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
