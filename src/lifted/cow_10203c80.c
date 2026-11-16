/* f_0x10203c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10203c80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        loc_4 = self;
        goto L_10203fcc;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if (rd8(self + 0x40u) == 0u) goto L_10203caa;
    eax = (eax & 0xffffff00u) | rd8(self + 0x40u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1011a8f0u), rd32(self + 8u), 1, COW_IMG(0x10385460u));
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_10203caa: ;
    g->ecx = self;
    t3 = rd8(COW_IMG(0x106643a3u));
    t4 = rd32(COW_IMG(0x10664394u));
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10201fb0u), g->eax, g->ecx, in_edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), t5, 1, 5u);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        ecx = t8;
        edx = t9;
        ebp = (uint32_t)(int8_t)t3;
        loc_4 = t4;
        goto L_10203d41;
    }
    eax = t7;
    ebp = (uint32_t)(int8_t)t3;
    loc_4 = t4;
L_10203cd1: ;
    if (rd32(eax + 0x14u) != rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u)) goto L_10203ce7;
    edx = rd32(COW_IMG(0x104dfd98u));
    loc_14 = eax;
    loc_18 = 0u;
L_10203d31: ;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10202b80u), eax, g->ecx, g->edx, 0, 2, loc_18, loc_14);
    t10 = g->ecx;
    t11 = g->edx;
    ecx = t10;
    edx = t11;
L_10203d38: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        eax = t12;
        goto L_10203cd1;
    }
    ecx = t13;
    edx = t14;
L_10203d41: ;
    if (rd8(rd32(COW_IMG(0x10662d40u)) + 0xf100u) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t28 = cow_thiscall(g, COW_IMG(0x1015ed10u), COW_IMG(0x10621838u), 3, 0x81u, 0u, 0u);
        t29 = g->ecx;
        t30 = g->edx;
        if ((uint8_t)t28 != 0u)
        {
            ecx = t29;
            edx = t30;
            goto L_10203e4c;
        }
        edx = t30;
        g->edx = edx;
        t31 = rd32(COW_IMG(0x105781a8u));
        g->esp = sp0 - 0x10u;
        t32 = cow_thiscall(g, COW_IMG(0x1011ba40u), t31, 0);
        t33 = g->ecx;
        t34 = g->edx;
        if ((uint8_t)t32 != 0u)
        {
            ecx = t33;
            edx = t34;
            goto L_10203e4c;
        }
        edx = t34;
        g->edx = edx;
        t35 = rd32(COW_IMG(0x106627a0u));
        g->esp = sp0 - 0x10u;
        t36 = cow_thiscall(g, COW_IMG(0x1011ba40u), t35, 0);
        t37 = g->ecx;
        t38 = g->edx;
        if ((uint8_t)t36 != 0u)
        {
            ecx = t37;
            edx = t38;
            goto L_10203e4c;
        }
        edx = t38;
        g->edx = edx;
        t39 = rd32(COW_IMG(0x106627a4u));
        g->esp = sp0 - 0x10u;
        t40 = cow_thiscall(g, COW_IMG(0x1011ba40u), t39, 0);
        t41 = g->ecx;
        t42 = g->edx;
        if ((uint8_t)t40 != 0u)
        {
            ecx = t41;
            edx = t42;
            goto L_10203e4c;
        }
        eax = t40;
        ecx = t41;
        edx = t42;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t43 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 1u);
        t44 = g->ecx;
        t45 = g->edx;
        if ((uint8_t)t43 != 0u)
        {
            ecx = t44;
            edx = t45;
            goto L_10203e4c;
        }
        eax = t43;
        edx = t45;
        if (rd8(rd32(COW_IMG(0x10662d40u)) + 0xf100u) == 0u) goto L_10203ea8;
        ecx = rd32(COW_IMG(0x10662d40u));
L_10203e4c: ;
        if (rd32(COW_IMG(0x106643e8u)) != 0u) goto L_10203ea8;
        if (rd32(COW_IMG(0x106643acu)) == 0u) goto L_10203e6a;
        eax = rd32(COW_IMG(0x106643acu));
        if (rd32(eax + 8u) != 0u)
        {
            edx = rd32(eax + 8u);
            eax = (eax & 0xffffff00u) | rd32(eax + 8u) != 0u;
            goto L_10203e83;
        }
        edx = rd32(eax + 8u);
L_10203e6a: ;
        if (rd32(COW_IMG(0x106643b0u)) == 0u) goto L_10203efe;
        eax = rd32(COW_IMG(0x106643b0u));
        if (rd32(eax + 8u) == 0u)
        {
            edx = rd32(eax + 8u);
            goto L_10203efe;
        }
        edx = rd32(eax + 8u);
        eax = (eax & 0xffffff00u) | rd32(eax + 8u) != 0u;
L_10203e83: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t46 = cow_stdcall(g, COW_IMG(0x10202d10u), 0);
        t47 = g->edx;
        g->edx = t47;
        t48 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385438u));
        t49 = g->edx;
        g->edx = t49;
        cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385424u));
        t50 = g->edx;
        edx = t50;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10662d40u)) + 0xf100u);
        if (rd32(COW_IMG(0x106643acu)) == 0u) goto L_10203d69;
        eax = rd32(COW_IMG(0x106643acu));
        if (rd32(eax + 8u) != 0u)
        {
            edx = rd32(eax + 8u);
            eax = (eax & 0xffffff00u) | rd32(eax + 8u) != 0u;
            goto L_10203d86;
        }
        edx = rd32(eax + 8u);
L_10203d69: ;
        if (rd32(COW_IMG(0x106643b0u)) == 0u) goto L_10203efe;
        eax = rd32(COW_IMG(0x106643b0u));
        if (rd32(eax + 8u) == 0u)
        {
            edx = rd32(eax + 8u);
            goto L_10203efe;
        }
        edx = rd32(eax + 8u);
        eax = (eax & 0xffffff00u) | rd32(eax + 8u) != 0u;
L_10203d86: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t15 = cow_stdcall(g, COW_IMG(0x10202d10u), 0);
        t16 = g->edx;
        g->edx = t16;
        t17 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103853b0u));
        t18 = g->edx;
        g->edx = t18;
        t19 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103853d8u));
        t20 = g->edx;
        g->edx = t20;
        t21 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103853c4u));
        t22 = g->edx;
        g->edx = t22;
        t23 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038544cu));
        t24 = g->edx;
        g->edx = t24;
        t25 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385438u));
        t26 = g->edx;
        g->edx = t26;
        cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385424u));
        t27 = g->edx;
        edx = t27;
    }
L_10203efe: ;
    g->ecx = self;
    g->edx = edx;
    t57 = rd32(COW_IMG(0x106643dcu));
    g->esp = sp0 - 0x10u;
    t58 = cow_stdcall(g, COW_IMG(0x102034a0u), 1, t57);
    t59 = g->ecx;
    t60 = g->edx;
    if (t58 != 0u)
    {
        ecx = t59;
        edx = t60;
        goto L_10203f31;
    }
    ecx = t59;
    edx = t60;
    esi = t57;
L_10203f10: ;
    wr32(COW_IMG(0x106643dcu), esi - 1u);
    if ((int32_t)(esi - 1u) < 0) goto L_10203f27;
    esi = esi - 1u;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t61 = cow_stdcall(g, COW_IMG(0x102034a0u), 1, esi);
    t62 = g->ecx;
    t63 = g->edx;
    if (t61 == 0u)
    {
        ecx = t62;
        edx = t63;
        goto L_10203f10;
    }
    ecx = t62;
    edx = t63;
L_10203f31: ;
    if ((int32_t)rd32(COW_IMG(0x106643e0u)) >= 0)
    {
        eax = rd32(COW_IMG(0x106643e0u));
        goto L_10203f47;
    }
    eax = rd32(COW_IMG(0x106643e0u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t64 = cow_stdcall(g, COW_IMG(0x101cc550u), 0);
    t65 = g->edx;
    if (t64 != 0u)
    {
        edx = t65;
        goto L_10203f7f;
    }
    edx = t65;
L_10203f79: ;
    wr32(COW_IMG(0x106643e0u), 0u);
L_10203f7f: ;
    if (ebp != (uint32_t)(int8_t)rd8(COW_IMG(0x106643a3u)))
    {
        eax = (uint32_t)(int8_t)rd8(COW_IMG(0x106643a3u));
        ecx = rd32(COW_IMG(0x10664394u));
        goto L_10203f96;
    }
    eax = (uint32_t)(int8_t)rd8(COW_IMG(0x106643a3u));
    ecx = rd32(COW_IMG(0x10664394u));
    if (loc_4 == ecx) goto L_10203fb3;
L_10203f96: ;
    if (ecx == 0u)
    {
        ecx = rd32(self + 8u);
        loc_14 = COW_IMG(0x10385460u);
    }
    else
    {
        ecx = rd32(self + 8u);
        t66 = COW_IMG(0x10385298u) + eax * 0x20u;
        eax = t66;
        loc_14 = t66;
    }
    g->ebp = ebp;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1011a8f0u), ecx, 1, loc_14);
    t67 = g->ecx;
    t68 = g->edx;
    ecx = t67;
    edx = t68;
L_10203fb3: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t69 = cow_thiscall(g, COW_IMG(0x10201ed0u), ecx, 0);
    t70 = g->edx;
    if ((uint8_t)t69 == 0u)
    {
        eax = t69;
        edx = t70;
    }
    else
    {
        eax = t69;
        edx = t70;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t71 = cow_stdcall(g, COW_IMG(0x102031e0u), 0);
        t72 = g->edx;
        eax = t71;
        edx = t72;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t73 = cow_thiscall(g, COW_IMG(0x10203fe0u), self, 0);
    t74 = g->edx;
    eax = t73;
    edx = t74;
L_10203fcc: ;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_10203ce7: ;
    if ((rd32(eax + 0x34u) & 3u) != (uint8_t)rd32(COW_IMG(0x106643a0u)))
    {
        ecx = rd32(COW_IMG(0x106643a0u));
        edx = (uint8_t)rd32(COW_IMG(0x106643a0u));
        esi = rd32(eax + 0x34u) & 3u;
        goto L_10203d04;
    }
    edx = (uint8_t)rd32(COW_IMG(0x106643a0u));
    loc_14 = eax;
    loc_18 = 0u;
    goto L_10203d31;
L_10203d04: ;
    if ((uint8_t)(ecx >> 8u) != 0xfu) goto L_10203d0e;
    loc_14 = eax;
    loc_18 = 1u;
    goto L_10203d31;
L_10203d0e: ;
    if (esi != (uint8_t)(ecx >> 8u))
    {
        edx = (uint8_t)(ecx >> 8u);
        goto L_10203d1b;
    }
    edx = (uint8_t)(ecx >> 8u);
    loc_14 = eax;
    loc_18 = 1u;
    goto L_10203d31;
L_10203d1b: ;
    if (rd8(COW_IMG(0x106643a2u)) == 0xfu) goto L_10203d2e;
    ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x106643a2u));
    if (esi != (uint8_t)ecx)
    {
        edx = (uint8_t)ecx;
        goto L_10203d38;
    }
    edx = (uint8_t)ecx;
L_10203d2e: ;
    loc_14 = eax;
    loc_18 = 2u;
    goto L_10203d31;
L_10203ea8: ;
    if (rd8(COW_IMG(0x106643a1u)) != 0xfu)
    {
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t51 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x106643acu)), 0);
        t52 = g->edx;
        if ((uint8_t)t51 != 0u)
        {
            edx = t52;
        }
        else
        {
            edx = t52;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385438u), 1u, 0u);
            t53 = g->edx;
            edx = t53;
        }
    }
    if (rd8(COW_IMG(0x106643a2u)) != 0xfu)
    {
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t54 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x106643b0u)), 0);
        t55 = g->edx;
        if ((uint8_t)t54 != 0u)
        {
            edx = t55;
        }
        else
        {
            edx = t55;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385424u), 1u, 0u);
            t56 = g->edx;
            edx = t56;
        }
    }
    goto L_10203efe;
L_10203f27: ;
    wr32(COW_IMG(0x106643dcu), 0u);
    goto L_10203f31;
L_10203f47: ;
    if (rd8(COW_IMG(0x10663b52u) + eax * 0x7cu) != 0u)
    {
        edx = ((eax << 5u) - eax & 0xffffff00u) | rd8(COW_IMG(0x10663b52u) + eax * 0x7cu);
        goto L_10203f7f;
    }
    ecx = COW_IMG(0x10663b52u) + eax * 0x7cu;
    edx = ((eax << 5u) - eax & 0xffffff00u) | rd8(COW_IMG(0x10663b52u) + eax * 0x7cu);
L_10203f60: ;
    if ((int32_t)(eax - 1u) < 0)
    {
        eax = eax - 1u;
        goto L_10203f74;
    }
    eax = eax - 1u;
    ecx = ecx - 0x7cu;
    if (rd8(ecx) == 0u) goto L_10203f60;
    wr32(COW_IMG(0x106643e0u), eax);
    goto L_10203f7f;
L_10203f74: ;
    wr32(COW_IMG(0x106643e0u), eax);
    goto L_10203f79;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10203c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10203c80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
