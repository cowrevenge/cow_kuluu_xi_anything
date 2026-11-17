/* f_0x101c8fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101c8fd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t loc_9c;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 192u);

    wr32(sp0 - 0x84u, in_ebx);
    wr32(sp0 - 0x88u, in_ebp);
    wr32(sp0 - 0x8cu, in_esi);
    wr32(sp0 - 0x90u, in_edi);
    if (arg1 == 0u)
    {
        edx = in_edx;
        esi = 0u;
        goto L_101c9031;
    }
    wr32(sp0 - 0x94u, arg1);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x88u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8d10u), 3, arg1, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        esi = t1;
        goto L_101c9031;
    }
    edx = t2;
    esi = t1;
    t3 = rd32(esi + 8u);
    if ((int32_t)rd32(esi + 8u) < 12)
    {
        ecx = t3;
        ebx = t3;
    }
    else
    {
        ecx = t3;
        ebx = ecx - 0xcu;
    }
    if (ebx != 0u)
    {
        loc_84 = rd32(sp0 - 0x84u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
    }
    else
    {
        if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            edx = rd32(COW_IMG(0x10456a28u));
            goto L_101c901d;
        }
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = rd32(COW_IMG(0x10456a28u));
        if (eax == 2u) goto L_101c9021;
        if (eax == 3u) goto L_101c9021;
L_101c901d: ;
        if (eax == 0u) goto L_101c9028;
L_101c9021: ;
        ebx = 0xcu;
        loc_84 = rd32(sp0 - 0x84u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
    }
L_101c9033: ;
    t4 = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 1u & 3u;
    wr32(sp0 - 0x94u, t4);
    wr32(sp0 - 0x98u, COW_IMG(0x1037d31cu));
    g->ecx = t4;
    t5 = rd32(COW_IMG(0x10456a28u));
    g->esp = sp0 - 0x8cu;
    t6 = cow_call_regs(g, COW_IMG(0x101c9270u), t5, g->ecx, g->edx, 1, 3, COW_IMG(0x1037d31cu), t4, loc_90);
    t7 = g->ecx;
    t8 = rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 1u;
    wr32(sp0 - 0x9cu, t8);
    wr32(sp0 - 0xa0u, COW_IMG(0x1037d34cu));
    g->edi = t6;
    g->ecx = t7;
    g->edx = rd32(COW_IMG(0x10456a28u));
    t9 = rd32(COW_IMG(0x10456a28u));
    g->esp = sp0 - 0x94u;
    t10 = cow_call_regs(g, COW_IMG(0x101c9270u), t8, g->ecx, g->edx, 1, 3, COW_IMG(0x1037d34cu), t8, COW_IMG(0x1037d31cu));
    t11 = g->ecx;
    t12 = g->edx;
    if (t6 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_101c91cc;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    ebp = t10;
    edi = t6;
    if (ebp == 0u) goto L_101c91cc;
    if (esi == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        if (!(eax & 1u))
        {
            wr32(sp0 - 0x94u, 0x4cu);
            wr32(sp0 - 0x98u, 0xau);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x90u;
            t39 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x4cu);
            t40 = g->edx;
            wr32(sp0 - 0x9cu, t39);
            wr32(sp0 - 0xa0u, sp0 - 0x40u);
            eax = t39;
            ecx = sp0 - 0x40u;
            edx = t40;
            loc_9c = t39;
            loc_94 = 0x4cu;
        }
        else
        {
            t35 = (uint32_t)(int16_t)rd16(edi + 6u);
            wr32(sp0 - 0x94u, t35);
            wr32(sp0 - 0x98u, 0xau);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = t35;
            g->esp = sp0 - 0x90u;
            t36 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, t35);
            t37 = g->ecx;
            t38 = g->edx;
            wr32(sp0 - 0x9cu, t36);
            wr32(sp0 - 0xa0u, sp0 - 0x40u);
            eax = sp0 - 0x40u;
            ecx = t37;
            edx = t38;
            loc_9c = t36;
            loc_94 = rd32(sp0 - 0x94u);
        }
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x8cu;
        t41 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, loc_9c, 0xau, loc_94, rd32(sp0 - 0x90u));
        t42 = g->ecx;
        t43 = (uint32_t)(int16_t)rd16(ebp + 6u);
        wr32(sp0 - 0x94u, t43);
        wr32(sp0 - 0x98u, 0xau);
        g->ecx = t42;
        g->edx = t43;
        g->esp = sp0 - 0x90u;
        t44 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, t43);
        t45 = g->ecx;
        t46 = g->edx;
        wr32(sp0 - 0x9cu, t44);
        wr32(sp0 - 0xa0u, sp0 - 0x60u);
        g->ebx = ebx;
        g->eax = sp0 - 0x60u;
        g->ecx = t45;
        g->edx = t46;
        g->esp = sp0 - 0x8cu;
        t47 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x60u, t44, 0xau, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u));
        t48 = g->ecx;
        t49 = g->edx;
        eax = t47;
        ecx = t48;
        edx = t49;
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        if (!(eax & 1u))
        {
            t18 = rd32(esi + 0x10u) + 1u;
            wr32(sp0 - 0x94u, t18);
            wr32(sp0 - 0x98u, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x9cu, sp0 - 0x80u);
            g->ebx = ebx;
            g->esp = sp0 - 0x88u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10352ff0u), t18, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu));
            t19 = rd32(esi + 0xcu);
            wr32(sp0 - 0xa0u, t19);
            t20 = cow_divs(g, rd32(esi + 0x14u) + 0x76cu, 0x64u);
            t21 = cow_mods(g, rd32(esi + 0x14u) + 0x76cu, 0x64u);
            wr32(sp0 - 0xa4u, t21);
            wr32(sp0 - 0xa8u, sp0 - 0x80u);
            wr32(sp0 - 0xacu, 1u);
            t22 = (uint32_t)(int16_t)rd16(edi + 4u);
            wr32(sp0 - 0xb0u, t22);
            wr32(sp0 - 0xb4u, 0xau);
            wr32(sp0 - 0xb8u, 0x40u);
            wr32(sp0 - 0xbcu, sp0 - 0x40u);
            g->esp = sp0 - 0xa4u;
            cow_cdecl(g, COW_IMG(0x10153180u), 6, sp0 - 0x40u, 0x40u, 0xau, t22, 1u, sp0 - 0x80u);
        }
        else
        {
            if ((eax & 4u) == 0u)
            {
                t14 = rd32(esi + 0x10u) + 1u;
                wr32(sp0 - 0x94u, t14);
                wr32(sp0 - 0x98u, 0x60u);
                wr32(sp0 - 0x9cu, 0xau);
                wr32(sp0 - 0xa0u, 0x20u);
                wr32(sp0 - 0xa4u, sp0 - 0x80u);
                eax = t14;
                ecx = sp0 - 0x80u;
                loc_98 = 0x60u;
                loc_94 = t14;
            }
            else
            {
                t13 = rd32(esi + 0x10u) + 1u;
                wr32(sp0 - 0x94u, t13);
                wr32(sp0 - 0x98u, 0x61u);
                wr32(sp0 - 0x9cu, 0xau);
                wr32(sp0 - 0xa0u, 0x20u);
                wr32(sp0 - 0xa4u, sp0 - 0x80u);
                ecx = t13;
                edx = sp0 - 0x80u;
                loc_98 = 0x61u;
                loc_94 = t13;
            }
            g->esp = sp0 - 0x90u;
            cow_cdecl(g, COW_IMG(0x10153150u), 5, sp0 - 0x80u, 0x20u, 0xau, loc_98, loc_94);
            t15 = rd32(esi + 0xcu);
            wr32(sp0 - 0x94u, t15);
            t16 = rd32(esi + 0x14u) + 0x76cu;
            wr32(sp0 - 0x98u, t16);
            wr32(sp0 - 0x9cu, sp0 - 0x80u);
            wr32(sp0 - 0xa0u, 1u);
            t17 = (uint32_t)(int16_t)rd16(edi + 2u);
            wr32(sp0 - 0xa4u, t17);
            wr32(sp0 - 0xa8u, 0xau);
            wr32(sp0 - 0xacu, 0x40u);
            wr32(sp0 - 0xb0u, sp0 - 0x40u);
            g->esp = sp0 - 0x98u;
            cow_cdecl(g, COW_IMG(0x10153180u), 6, sp0 - 0x40u, 0x40u, 0xau, t17, 1u, sp0 - 0x80u);
        }
        if ((arg2 & 8u) == 0u)
        {
            wr32(sp0 - 0x94u, rd32(esi));
            t29 = rd32(esi + 4u);
            wr32(sp0 - 0x98u, t29);
            wr32(sp0 - 0x9cu, ebx);
            t30 = rd32(esi + 8u);
            wr32(sp0 - 0xa0u, t30);
            t31 = (uint32_t)(int16_t)rd16(ebp + 2u);
            wr32(sp0 - 0xa4u, t31);
            wr32(sp0 - 0xa8u, 0xau);
            wr32(sp0 - 0xacu, 0x20u);
            wr32(sp0 - 0xb0u, sp0 - 0x60u);
            g->eax = t31;
            g->ecx = sp0 - 0x60u;
            g->edx = t30;
            g->esp = sp0 - 0x9cu;
            t32 = cow_cdecl(g, COW_IMG(0x10153150u), 5, sp0 - 0x60u, 0x20u, 0xau, t31, t30);
            t33 = g->ecx;
            t34 = g->edx;
            eax = t32;
            ecx = t33;
            edx = t34;
        }
        else
        {
            t23 = rd32(esi + 4u);
            wr32(sp0 - 0x94u, t23);
            wr32(sp0 - 0x98u, ebx);
            t24 = rd32(esi + 8u);
            wr32(sp0 - 0x9cu, t24);
            t25 = (uint32_t)(int16_t)rd16(ebp + 0xau);
            wr32(sp0 - 0xa0u, t25);
            wr32(sp0 - 0xa4u, 0xau);
            wr32(sp0 - 0xa8u, 0x20u);
            wr32(sp0 - 0xacu, sp0 - 0x60u);
            g->eax = t24;
            g->ecx = t25;
            g->edx = sp0 - 0x60u;
            g->esp = sp0 - 0x98u;
            t26 = cow_cdecl(g, COW_IMG(0x10153150u), 5, sp0 - 0x60u, 0x20u, 0xau, t25, t24);
            t27 = g->ecx;
            t28 = g->edx;
            eax = t26;
            ecx = t27;
            edx = t28;
        }
    }
L_101c9206: ;
    if ((arg2 & 2u) == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        ebx = rd32(sp0 - 0x84u);
        ebp = rd32(sp0 - 0x88u);
        esi = rd32(sp0 - 0x8cu);
        edi = rd32(sp0 - 0x90u);
        goto L_101c921c;
    }
    ebx = rd32(sp0 - 0x84u);
    ebp = rd32(sp0 - 0x88u);
    esi = rd32(sp0 - 0x8cu);
    edi = rd32(sp0 - 0x90u);
    wr32(sp0 - 0x84u, sp0 - 0x40u);
    eax = sp0 - 0x40u;
    loc_84 = sp0 - 0x40u;
L_101c9225: ;
    wr32(sp0 - 0x88u, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x8cu, COW_IMG(0x10662e98u));
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x10662e98u), COW_IMG(0x1034f7e0u), loc_84, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu));
    t56 = g->edx;
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = t56;
    return COW_IMG(0x10662e98u);
L_101c9028: ;
    if (ecx != 0xcu)
    {
        loc_84 = rd32(sp0 - 0x84u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
    }
    else
    {
        ebx = ecx;
        loc_84 = rd32(sp0 - 0x84u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
    }
    goto L_101c9033;
L_101c9031: ;
    ebx = 0u;
    loc_84 = in_ebx;
    loc_88 = in_ebp;
    loc_8c = in_esi;
    loc_90 = in_edi;
    goto L_101c9033;
L_101c91cc: ;
    if (!(arg2 & 1u))
    {
        wr32(sp0 - 0x94u, COW_IMG(0x1037d4c8u));
        wr32(sp0 - 0x98u, sp0 - 0x40u);
        edx = sp0 - 0x40u;
        loc_94 = COW_IMG(0x1037d4c8u);
    }
    else
    {
        wr32(sp0 - 0x94u, COW_IMG(0x1037d4d4u));
        wr32(sp0 - 0x98u, sp0 - 0x40u);
        ecx = sp0 - 0x40u;
        loc_94 = COW_IMG(0x1037d4d4u);
    }
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t50 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, loc_94, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
    t51 = g->ecx;
    t52 = g->edx;
    wr32(sp0 - 0x94u, COW_IMG(0x1037d4bcu));
    wr32(sp0 - 0x98u, COW_IMG(0x10662e98u));
    g->ebx = ebx;
    g->ecx = t51;
    g->edx = t52;
    t53 = cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x10662e98u), COW_IMG(0x1037d4bcu), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
    t54 = g->ecx;
    t55 = g->edx;
    eax = t53;
    ecx = t54;
    edx = t55;
    goto L_101c9206;
L_101c921c: ;
    if ((eax & 0x18u) == 0u) goto L_101c9243;
    wr32(sp0 - 0x84u, sp0 - 0x60u);
    ecx = sp0 - 0x60u;
    loc_84 = sp0 - 0x60u;
    goto L_101c9225;
L_101c9243: ;
    wr32(sp0 - 0x84u, sp0 - 0x60u);
    wr32(sp0 - 0x88u, sp0 - 0x40u);
    wr32(sp0 - 0x8cu, COW_IMG(0x10358098u));
    wr32(sp0 - 0x90u, COW_IMG(0x10662e98u));
    g->ebx = ebx;
    g->edx = sp0 - 0x60u;
    g->esp = sp0 - 0x7cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x10662e98u), COW_IMG(0x10358098u), sp0 - 0x40u, sp0 - 0x60u, rd32(sp0 - 0x80u));
    t57 = g->edx;
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = t57;
    return COW_IMG(0x10662e98u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c8fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c8fd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
