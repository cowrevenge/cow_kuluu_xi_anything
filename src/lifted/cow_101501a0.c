/* f_0x101501a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101501a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    if (rd8(self + 0x65u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x65u);
        loc_4 = (rd32(sp0 - 4u) & 0xffffff00u) | 1u;
        goto L_10150216;
    }
    t1 = (self & 0xffffff00u) | rd8(self + 0x66u);
    t2 = (in_edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x4eu) + 0x1du);
    t3 = (self + 0x64u & 0xffff0000u) | (uint16_t)(rd16(self + 0x4cu) + 0x1cu);
    g->eax = t3;
    g->edx = t2;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x101cb090u), 4, t3, t2, t1, self + 0x64u);
    t5 = g->edx;
    if (rd8(self + 0x14u) == 0u)
    {
        eax = (t4 & 0xffffff00u) | rd8(self + 0x14u);
        edx = t5;
        goto L_10150596;
    }
    eax = (t4 & 0xffffff00u) | rd8(self + 0x14u);
    t6 = rd32(self + 0x68u);
    t7 = (self + 0x14u & 0xffff0000u) | (uint16_t)(rd16(self + 0x4eu) + 6u);
    t8 = ((eax & 0xffff0000u) | rd16(self + 0x4cu)) + 5u;
    t9 = ((t7 & 0xffff0000u) | (uint16_t)(rd16(self + 0x50u) - rd16(self + 0x4cu))) - 0xdu;
    g->eax = (eax & 0xffff0000u) | rd16(self + 0x4cu);
    g->edx = t8;
    t10 = rd16(self + 0x4cu);
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x101c9fa0u), 7, t9, t8, t7, self + 0x14u, t6, 1u, 0u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_10150216: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x101598b0u), rd32(COW_IMG(0x1057876cu)), 0);
    t14 = g->edx;
    if (t13 == 0u)
    {
        eax = t13;
        edx = t14;
    }
    else
    {
        eax = t13;
        edi = t13;
        if ((rd32(edi + 0x128u) >> 3u & 1u) == 1u)
        {
            edx = (rd32(edi + 0x128u) >> 3u & 0xffffff00u) | (rd32(edi + 0x128u) >> 3u & 1u);
            loc_8 = rd32(sp0 - 8u);
        }
        else
        {
            edx = (rd32(edi + 0x128u) >> 3u & 0xffffff00u) | (rd32(edi + 0x128u) >> 3u & 1u);
            if (rd32(edi + 0x130u) >> 0x14u & 1u)
            {
                eax = rd32(edi + 0x130u) >> 0x14u;
                loc_8 = rd32(sp0 - 8u);
            }
            else
            {
                eax = rd32(edi + 0x130u) >> 0x14u;
                if (rd32(self + 0x60u) == rd32(edi + 0x78u))
                {
                    edx = rd32(edi + 0x78u);
                    loc_8 = (rd32(sp0 - 8u) & 0xffffff00u) | rd8(edi + 0xecu);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(edi + 0xecu);
                    loc_8 = (rd32(sp0 - 8u) & 0xffffff00u) | rd8(edi + 0xecu);
                    wr8(self + 0x64u, (uint8_t)eax);
                    t15 = rd32(edi + 0x78u);
                    wr32(self + 0x60u, t15);
                    edx = t15;
                }
                t16 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x4eu) + 0x1du);
                t17 = (self + 0x64u & 0xffff0000u) | (uint16_t)(rd16(self + 0x4cu) + 0x1cu);
                g->eax = t17;
                g->edx = t16;
                g->esp = sp0 - 0x10u;
                t18 = cow_cdecl(g, COW_IMG(0x101cb090u), 4, t17, t16, loc_8, self + 0x64u);
                t19 = g->edx;
                eax = t18;
                edx = t19;
                loc_4 = loc_4 & 0xffffff00u;
            }
        }
        g->esp = sp0 - 0x10u;
        t20 = cow_call_regs(g, COW_IMG(0x100977a0u), eax, edi, edx, 1, 0);
        t21 = g->ecx;
        t22 = g->edx;
        if ((uint8_t)t20 == 0u)
        {
            eax = t20;
            edx = t22;
            goto L_101502a0;
        }
        eax = t20;
        ecx = t21;
        edx = t22;
        loc_8 = (loc_8 & 0xffffff00u) | 0xa9u;
L_101502b3: ;
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t26 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0u);
        t27 = (uint32_t)(int16_t)rd16(self + 0x4eu) - 8u;
        t28 = (uint32_t)(int16_t)rd16(self + 0x50u) - 0x18u;
        g->edx = rd32(t26);
        t29 = rd32(t26);
        t30 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(t29 + (uint8_t)loc_8 * 4u - 0x80u), 5, t28, t27, 0x80808080u, 0u, 0u);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
L_101502eb: ;
    if (rd32(COW_IMG(0x1057876cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        goto L_101503e3;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    loc_8 = ecx;
L_101502fd: ;
    edi = 0x80808080u;
L_10150302: ;
    if (rd32(self + 0x48u) != 0u)
    {
        ecx = rd32(self + 0x48u);
        g->esi = self;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t34 = cow_thiscall(g, COW_IMG(0x1008e180u), ecx, 0);
        t35 = g->edx;
        if (t34 != 0u)
        {
            ebp = t34;
            goto L_1015033c;
        }
        edx = t35;
        if (!(rd32(rd32(self + 0x48u) + 0x12cu) >> 0x16u & 1u))
        {
            ecx = rd32(self + 0x48u);
            goto L_101503fc;
        }
        eax = rd32(rd32(self + 0x48u) + 0x12cu) >> 0x16u;
        ecx = rd32(self + 0x48u);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t36 = cow_thiscall(g, COW_IMG(0x1008e220u), ecx, 0);
        t37 = g->ecx;
        if (t36 == 0u)
        {
            ecx = t37;
            goto L_101503fc;
        }
        ebp = t36;
L_1015033c: ;
        if (rd16(rd32(self + 0x48u) + 0x210u) != 0u)
        {
            eax = rd32(self + 0x48u);
            ecx = rd32(self + 0x48u) + 0x214u;
        }
        else
        {
            eax = rd32(self + 0x48u);
            ecx = eax + 0x7cu;
        }
        t39 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x4eu) + 6u);
        t40 = ((eax & 0xffff0000u) | rd16(self + 0x4cu)) + 5u;
        t41 = ((t39 & 0xffff0000u) | (uint16_t)(rd16(self + 0x50u) - rd16(self + 0x4cu))) - 0xdu;
        g->eax = (eax & 0xffff0000u) | rd16(self + 0x4cu);
        g->ecx = t41;
        g->edx = t40;
        t42 = rd16(self + 0x4cu);
        g->esp = sp0 - 0x14u;
        t43 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, t41, t40, t39, ecx, edi);
        t44 = g->ecx;
        t45 = g->edx;
        t46 = (t45 & 0xffff0000u) | (uint16_t)(rd16(self + 0x4eu) + 0x12u);
        t47 = (t43 & 0xffff0000u) | (uint16_t)(rd16(self + 0x4cu) + 9u);
        g->eax = t47;
        g->edx = t46;
        t48 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t47, t46, COW_IMG(0x10353e14u), edi, t41, t40, t39, ecx, edi);
        t49 = g->edx;
        if (rd16(ebp + 0x210u) != 0u)
        {
            eax = t48;
            ecx = ebp + 0x214u;
            edx = t49;
        }
        else
        {
            eax = t48;
            edx = t49;
            ecx = ebp + 0x7cu;
        }
        t50 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x4eu) + 0x12u);
        t51 = ((edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x50u) - rd16(self + 0x4cu))) - 0x15u;
        g->eax = eax;
        g->ecx = t50;
        g->edx = t51;
        g->esp = sp0 - 0x14u;
        t52 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, t51, eax, t50, ecx, edi);
        t53 = g->ecx;
        t54 = g->edx;
        t55 = (t53 & 0xffff0000u) | (uint16_t)(rd16(self + 0x4eu) + 0x12u);
        t56 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t52, t55, COW_IMG(0x10353e10u), edi, t51, eax, t50, ecx, edi);
        wr8(self + 0x14u, 0u);
        eax = t56;
    }
L_10150422: ;
    if (rd8(self + 0x14u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x14u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x14u);
        t57 = (self + 0x14u & 0xffff0000u) | (uint16_t)(rd16(self + 0x4eu) + 6u);
        t58 = ((eax & 0xffff0000u) | rd16(self + 0x4cu)) + 5u;
        t59 = ((t57 & 0xffff0000u) | (uint16_t)(rd16(self + 0x50u) - rd16(self + 0x4cu))) - 0xdu;
        g->eax = (eax & 0xffff0000u) | rd16(self + 0x4cu);
        t60 = rd16(self + 0x4cu);
        g->esp = sp0 - 0x10u;
        t61 = cow_cdecl(g, COW_IMG(0x101c9fa0u), 7, t59, t58, t57, self + 0x14u, edi, 1u, loc_4);
        eax = t61;
    }
    if ((rd8(rd32(COW_IMG(0x1057876cu)) + 0x5cu) & 3u) == 0u)
    {
        edx = rd32(COW_IMG(0x1057876cu));
    }
    else
    {
        edx = rd32(COW_IMG(0x1057876cu));
        t62 = (uint32_t)(int16_t)rd16(self + 0x4eu);
        t63 = (uint32_t)(int16_t)rd16(self + 0x4cu);
        g->eax = t62;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t64 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x5cu), 5, t63, t62, 0x80808080u, 0u, 0u);
        t65 = g->edx;
        eax = t64;
        edx = t65;
    }
    if (rd8(self + 0x6cu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x6cu);
    }
    else
    {
        if (rd32(self + 0x70u) != 0u)
        {
            eax = rd32(self + 0x70u);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, eax, 2u);
            t66 = g->edx;
            edx = t66;
        }
        if (rd32(self + 0x74u) == 0u)
        {
            eax = rd32(self + 0x74u);
        }
        else
        {
            eax = rd32(self + 0x74u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t67 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, eax, 2u);
            t68 = g->edx;
            eax = t67;
            edx = t68;
        }
        wr8(self + 0x6cu, 1u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t69 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t70 = g->ecx;
    t71 = g->edx;
    if (rd8(self + 0xb8u) == 0u)
    {
        eax = t69;
        edx = t71;
        edi = 0xe04040d0u;
    }
    else
    {
        eax = t69;
        g->eax = eax;
        g->edx = loc_8;
        g->esp = sp0 - 0x10u;
        t72 = cow_thiscall(g, COW_IMG(0x101505a0u), self, 5, eax, loc_8, 0xe04040d0u, 0xe0d04040u, 0xe0d0d040u);
        t73 = g->ecx;
        t74 = g->edx;
        g->edx = t74;
        t75 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 7u);
        t76 = g->edx;
        if ((uint8_t)t75 != 0u)
        {
            eax = t75;
            edx = t76;
            edi = t72;
        }
        else
        {
            eax = t75;
            edx = t76;
            edi = t72;
            if (edi != 0xe0d04040u)
            {
                if (loc_8 == 0u)
                {
                    eax = loc_8;
                }
                else
                {
                    eax = loc_8;
                    t77 = ((rd32(eax + 0x88u) & 0xffff00ffu) | (rd32(eax + 0x88u) >> 8u & 0xf9u) << 8u) ^ 0x600u;
                    wr32(eax + 0x88u, t77);
                }
            }
        }
    }
    if (rd16(self + 0xbcu) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0xbcu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0xbcu);
        t78 = (uint32_t)(int16_t)rd16(self + 0xbeu);
        g->eax = (uint32_t)(int16_t)eax;
        g->edx = t78;
        g->esp = sp0 - 0x10u;
        t79 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + rd8(self + 0xbau) * 4u + 0x78u), 8, (uint32_t)(int16_t)eax, t78, 0x3f800000u, 0x3f800000u, 0xe0808080u, 0u, 0u, 0u);
        t80 = g->edx;
        eax = t79;
        edx = t80;
    }
    if (rd8(self + 0xb8u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xb8u);
    }
    else
    {
        t81 = (uint32_t)(int16_t)rd16(self + 0xc2u);
        t82 = (uint32_t)(int16_t)rd16(self + 0xc0u);
        g->eax = t82;
        g->edx = t81;
        g->esp = sp0 - 0x10u;
        t83 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + rd8(self + 0xbau) * 4u + 0x78u), 8, t82, t81, 0x3f800000u, 0x3f800000u, edi, 0u, 0u, 0u);
        t84 = g->edx;
        eax = t83;
        edx = t84;
    }
L_10150596: ;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101502a0: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t23 = cow_fastcall(g, COW_IMG(0x10097500u), edi, edx, 2, 0u, 0u);
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint8_t)t23 == 0u)
    {
        eax = t23;
        edx = t25;
        goto L_101502eb;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    loc_8 = (loc_8 & 0xffffff00u) | (uint8_t)t23;
    goto L_101502b3;
L_101503e3: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t32 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, ecx, g->edx, 1, 0);
    t33 = g->edx;
    if (t32 == 0u)
    {
        eax = t32;
        edx = t33;
        loc_8 = t32;
        goto L_101502fd;
    }
    eax = t32;
    edx = t33;
    loc_8 = t32;
    edi = rd32(eax + 0x78u);
    goto L_10150302;
L_101503fc: ;
    if (rd16(rd32(self + 0x48u) + 0x210u) == 0u)
    {
        eax = rd32(self + 0x48u);
        eax = eax + 0x7cu;
    }
    else
    {
        eax = rd32(self + 0x48u);
        eax = eax + 0x214u;
    }
    g->esp = sp0 - 0x14u;
    t38 = cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, self + 0x14u, eax, 0x31u);
    eax = t38;
    goto L_10150422;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101501a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101501a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
