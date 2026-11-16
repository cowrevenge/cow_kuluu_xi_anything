/* f_0x10016870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10016870(Guest* g)
{
    double d25;
    double d33;
    double d36;
    double d37;
    double d39;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_54;
    double loc_58_f;
    uint32_t loc_60;
    double loc_60_f;
    uint32_t loc_64;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t34;
    uint32_t t35;
    uint32_t t38;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 148u);

    wr32(sp0 - 0x6cu, in_ebx);
    wr32(sp0 - 0x70u, in_ebp);
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, in_edi);
    if (arg2 > 0x46u) goto L_10016ab7;
    if (arg2 == 0x46u) goto L_1001690b;
    if (arg2 - 2u > 0x12u) goto L_10016c9b;
    t1 = rd32(COW_IMG(0x10016d84u) + rd8(COW_IMG(0x10016d98u) + arg2 - 2u) * 4u);
    switch (t1 - RD)
    {
    case 0x100168a5u: ecx = rd8(COW_IMG(0x10016d98u) + arg2 - 2u); goto L_100168a5;
    case 0x100168ceu: ecx = rd8(COW_IMG(0x10016d98u) + arg2 - 2u); goto L_100168ce;
    case 0x100168f7u: ecx = rd8(COW_IMG(0x10016d98u) + arg2 - 2u); goto L_100168f7;
    case 0x10016c9bu: goto L_10016c9b;
    case 0x10016d73u: edx = in_edx; goto L_10016d73;
    default: rt_fatal(g, COW_IMG(0x1001689eu), "switch");
    }
    return 0;
L_100168a5: ;
    g->eax = arg2 - 2u;
    g->edx = in_edx;
    g->esp = sp0 - 0x78u;
    t6 = cow_thiscall(g, rd32(COW_IMG(0x103291a4u)), ecx, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        wr32(sp0 - 0x7cu, 0x20u);
        wr32(sp0 - 0x80u, eax);
        g->esp = sp0 - 0x78u;
        cow_thiscall(g, rd32(COW_IMG(0x103291a0u)), ecx, 2, eax, 0x20u);
    }
    if (rd32(COW_IMG(0x103d3c64u)) != 0u)
    {
        eax = rd32(COW_IMG(0x103d3c64u));
        wr8(eax + 0x1cu, 1u);
    }
L_10016d37: ;
    wr32(sp0 - 0x7cu, arg4);
    wr32(sp0 - 0x80u, arg3);
    wr32(sp0 - 0x84u, arg2);
    wr32(sp0 - 0x88u, arg1);
    g->eax = arg3;
    g->edx = arg4;
    g->esp = sp0 - 0x78u;
    t51 = cow_thiscall(g, rd32(COW_IMG(0x103293d4u)), arg1, 4, arg1, arg2, arg3, arg4);
    t52 = g->edx;
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    g->ebp = rd32(sp0 - 0x70u);
    g->edx = t52;
    return t51;
L_100168ce: ;
    g->eax = arg2 - 2u;
    g->edx = in_edx;
    g->esp = sp0 - 0x78u;
    t3 = cow_thiscall(g, rd32(COW_IMG(0x103291a4u)), ecx, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        wr32(sp0 - 0x7cu, 0x40u);
        wr32(sp0 - 0x80u, eax);
        g->esp = sp0 - 0x78u;
        cow_thiscall(g, rd32(COW_IMG(0x103291a0u)), ecx, 2, eax, 0x40u);
    }
    if (rd32(COW_IMG(0x103d3c64u)) != 0u)
    {
        eax = rd32(COW_IMG(0x103d3c64u));
        wr8(eax + 0x1cu, 0u);
    }
    goto L_10016d37;
L_100168f7: ;
    wr32(sp0 - 0x7cu, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, rd32(COW_IMG(0x10329318u)), ecx, 1, 0u);
    t2 = g->edx;
    g->edx = t2;
    return 0u;
L_1001690b: ;
    if (rd8(arg4 + 0x18u) & 1u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    else
    {
        if (rd32(COW_IMG(0x10456a7cu)) == 0u)
        {
            loc_6c = in_ebx;
            loc_70 = in_ebp;
            loc_74 = in_esi;
            loc_78 = in_edi;
        }
        else
        {
            eax = rd32(COW_IMG(0x10456a7cu));
            wr32(sp0 - 0x7cu, 0x20u);
            g->eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456a30u));
            g->edx = arg4;
            t9 = rd8(COW_IMG(0x10456a30u));
            t10 = rd32(COW_IMG(0x103293a0u));
            t11 = rd32(sp0 - 0x68u);
            g->esp = sp0 - 0x78u;
            t12 = cow_thiscall(g, t10, self, 1, 0x20u);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(sp0 - 0x7cu, 0x21u);
            g->edx = t14;
            t15 = cow_thiscall(g, t10, t13, 1, 0x21u);
            t16 = g->ecx;
            t17 = g->edx;
            wr32(sp0 - 0x7cu, 4u);
            wr32(sp0 - 0x60u, t15);
            g->edx = t17;
            t18 = cow_thiscall(g, t10, t16, 1, 4u);
            t19 = g->ecx;
            t20 = g->edx;
            wr32(sp0 - 0x64u, t18);
            if (rd32(COW_IMG(0x10456a7cu)) != 3u)
            {
                eax = rd32(COW_IMG(0x10456a7cu));
                ecx = t19;
                edx = t20;
                esi = t10;
                edi = t12;
                loc_64 = t18;
            }
            else
            {
                eax = rd32(COW_IMG(0x10456a7cu));
                ecx = t19;
                edx = t20;
                esi = t10;
                wr32(sp0 - 0x60u, 0u);
                wr32(sp0 - 0x64u, 0u);
                edi = 0u;
                loc_64 = 0u;
                loc_60 = 0u;
            }
            wr32(sp0 - 0x7cu, 0x1cu);
            wr32(sp0 - 0x50u, edi * 2u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x78u;
            t21 = cow_thiscall(g, esi, ecx, 1, 0x1cu);
            t22 = g->ecx;
            t23 = g->edx;
            t24 = t21 - edi * 2u;
            wr32(sp0 - 0x5cu, t24);
            g->edx = t23;
            d25 = fr(g, fr(g, (double)(int32_t)t24 / (double)(int32_t)rd32(COW_IMG(0x10456a58u))) * (double)(int32_t)rd32(COW_IMG(0x10456c08u)));
            fpush(g, d25);
            t26 = cow_call_regs(g, COW_IMG(0x10311c6cu), t24, g->ecx, g->edx, 1, 0);
            t27 = g->edx;
            if ((int32_t)rd32(arg4 + 0x14u) >= (int32_t)t26)
            {
                eax = t26;
                edx = t27;
                ebx = 0u;
                edi = edi * 2u;
            }
            else
            {
                eax = t26;
                edi = edi * 2u;
                t28 = rd32(sp0 - 0x60u);
                wr32(arg4 + 0x10u, edi);
                t29 = eax + t28 * 2u + rd32(sp0 - 0x64u);
                t30 = rd32(sp0 - 0x64u);
                wr32(arg4 + 0x14u, t29);
                eax = t30;
                edx = t29;
                ebx = 1u;
            }
            if (rd8(sp0 - 0x65u) != 0u) goto L_100169c4;
            if ((uint8_t)ebx != 1u) goto L_10016d37;
L_100169c4: ;
            wr32(sp0 - 0x7cu, sp0 - 0x4cu);
            wr32(sp0 - 0x80u, arg1);
            g->esp = sp0 - 0x78u;
            cow_thiscall(g, rd32(COW_IMG(0x103293e4u)), arg1, 2, arg1, sp0 - 0x4cu);
            t31 = rd32(sp0 - 0x44u);
            if ((int32_t)(t31 - rd32(arg4 + 0x10u) - rd32(sp0 - 0x4cu)) >= 0)
            {
                eax = t31 - rd32(arg4 + 0x10u) - rd32(sp0 - 0x4cu);
                edx = rd32(arg4 + 0x10u);
            }
            else
            {
                ecx = t31;
                edx = rd32(arg4 + 0x10u);
                esi = rd32(sp0 - 0x4cu);
                eax = edx + esi - ecx;
            }
            wr32(sp0 - 0x5cu, eax);
            t32 = rd32(sp0 - 0x40u);
            if ((int32_t)(t32 - rd32(arg4 + 0x14u) - rd32(sp0 - 0x48u)) >= 0)
            {
                ecx = t32 - rd32(arg4 + 0x14u) - rd32(sp0 - 0x48u);
                x0 = (double)(int32_t)eax;
                eax = rd32(arg4 + 0x14u);
            }
            else
            {
                ebp = rd32(sp0 - 0x48u);
                esi = t32;
                x0 = (double)(int32_t)eax;
                eax = rd32(arg4 + 0x14u);
                ecx = eax + ebp - esi;
            }
            wr32(sp0 - 0x5cu, ecx);
            d33 = (double)(float)(double)(int32_t)rd32(COW_IMG(0x10456c08u));
            wrf32(sp0 - 0x60u, (float)d33);
            t34 = rd32(sp0 - 0x60u) * 2u;
            wr32(sp0 - 0x54u, t34);
            t35 = eax - t34 - rd32(sp0 - 0x64u);
            wr32(sp0 - 0x58u, t35);
            d36 = (double)(float)fr(g, (double)(int32_t)t35 / d33);
            wrf32(sp0 - 0x58u, (float)d36);
            if (x0 < (double)(int32_t)ecx)
            {
                eax = (t35 & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)(int32_t)ecx, 0u);
                ecx = t34;
                loc_58_f = d36;
                goto L_10016a8e;
            }
            eax = (t35 & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)(int32_t)ecx, 0u);
            ecx = t34;
            loc_60_f = d33;
            loc_54 = t34;
            loc_58_f = d36;
            if ((uint8_t)ebx == 1u) goto L_10016a8e;
            wr32(sp0 - 0x58u, edx - edi);
            d37 = fr(g, fr(g, fr(g, fr(g, (double)(int32_t)(edx - edi) / (double)(int32_t)rd32(COW_IMG(0x10456a58u))) * loc_60_f) + (double)(int32_t)loc_54) + (double)(int32_t)rd32(sp0 - 0x64u));
            fpush(g, d37);
            g->esp = sp0 - 0x78u;
            t38 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            wr32(arg4 + 0x14u, t38);
        }
    }
    goto L_10016d37;
L_10016a8e: ;
    d39 = fr(g, fr(g, (double)(int32_t)rd32(COW_IMG(0x10456a58u)) * loc_58_f) + (double)(int32_t)rd32(sp0 - 0x50u));
    fpush(g, d39);
    g->esp = sp0 - 0x78u;
    t40 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    wr32(arg4 + 0x10u, t40);
    goto L_10016d37;
L_10016ab7: ;
    if (arg2 > 0x112u) goto L_10016c83;
    if (arg2 == 0x112u) goto L_10016b09;
    if (arg2 == 0x100u) goto L_10016aef;
    if (arg2 != 0x101u) goto L_10016c9b;
    if (arg3 != 0x10u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    else
    {
        wr8(COW_IMG(0x10456a30u), 0u);
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    goto L_10016d37;
L_10016aef: ;
    if (arg3 != 0x10u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    else
    {
        wr8(COW_IMG(0x10456a30u), 1u);
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    goto L_10016d37;
L_10016b09: ;
    if (arg3 > 0xf090u) goto L_10016c64;
    if (arg3 == 0xf090u)
    {
        edx = in_edx;
        goto L_10016d73;
    }
    if (arg3 > 0xf040u) goto L_10016c41;
    if (arg3 == 0xf040u)
    {
        edx = in_edx;
        goto L_10016d73;
    }
    if (arg3 == 1u) goto L_10016b8b;
    if (arg3 - 1u == 0xefffu)
    {
        edx = in_edx;
        goto L_10016d73;
    }
    if (arg3 - 0xf000u == 0x10u)
    {
        edx = in_edx;
        goto L_10016d73;
    }
L_10016b49: ;
    if (rd32(COW_IMG(0x10456a7cu)) != 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
    if (arg3 == 0xf020u)
    {
        edx = in_edx;
        goto L_10016d73;
    }
    if (arg3 - 0xf020u == 0x10u)
    {
        edx = in_edx;
        goto L_10016d73;
    }
    if (arg3 - 0xf030u != 0xf0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
    return 1u;
L_10016b8b: ;
    if (rd32(COW_IMG(0x10456a7cu)) == 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    else
    {
        eax = rd32(COW_IMG(0x10456a7cu));
        wr32(sp0 - 0x7cu, sp0 - 0x2cu);
        wr32(sp0 - 0x80u, arg1);
        wr32(sp0 - 0x2cu, 0x2cu);
        g->eax = eax;
        g->edx = sp0 - 0x2cu;
        g->esp = sp0 - 0x78u;
        t41 = cow_thiscall(g, rd32(COW_IMG(0x103293ccu)), self, 2, arg1, sp0 - 0x2cu);
        t42 = g->ecx;
        t43 = g->edx;
        if (t41 == 0u)
        {
            ecx = t42;
            edx = t43;
            goto L_10016bd2;
        }
        ecx = t42;
        edx = t43;
        if (rd32(sp0 - 0x24u) == 2u)
        {
            eax = rd32(sp0 - 0x24u);
            goto L_10016bc4;
        }
        eax = rd32(sp0 - 0x24u);
        if (eax != 3u) goto L_10016bd2;
L_10016bc4: ;
        wr32(sp0 - 0x7cu, 1u);
        wr32(sp0 - 0x80u, arg1);
        g->esp = sp0 - 0x78u;
        cow_thiscall(g, rd32(COW_IMG(0x10329368u)), ecx, 2, arg1, 1u);
    }
    goto L_10016d37;
L_10016bd2: ;
    wr32(sp0 - 0x7cu, sp0 - 0x3cu);
    wr32(sp0 - 0x80u, arg1);
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, rd32(COW_IMG(0x103293e4u)), ecx, 2, arg1, sp0 - 0x3cu);
    wr32(sp0 - 0x44u, rd32(COW_IMG(0x10456a58u)));
    wr32(sp0 - 0x40u, rd32(COW_IMG(0x10456c08u)));
    wr32(sp0 - 0x7cu, rd32(COW_IMG(0x103505a4u)));
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x84u, rd32(COW_IMG(0x103505a8u)));
    wr32(sp0 - 0x88u, sp0 - 0x4cu);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0u);
    t44 = rd32(COW_IMG(0x10456a58u));
    t45 = rd32(COW_IMG(0x10456c08u));
    cow_thiscall(g, rd32(COW_IMG(0x10329348u)), rd32(COW_IMG(0x103505a8u)), 4, sp0 - 0x4cu, rd32(COW_IMG(0x103505a8u)), 0u, rd32(COW_IMG(0x103505a4u)));
    wr32(sp0 - 0x7cu, 1u);
    t46 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x80u, t46);
    t47 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x84u, t47);
    t48 = rd32(sp0 - 0x38u);
    wr32(sp0 - 0x88u, t48);
    t49 = rd32(sp0 - 0x3cu);
    wr32(sp0 - 0x8cu, t49);
    wr32(sp0 - 0x90u, arg1);
    cow_thiscall(g, rd32(COW_IMG(0x103293d0u)), t47, 6, arg1, t49, t48, t47, t46, 1u);
    goto L_10016d37;
L_10016c41: ;
    if (arg3 == 0xf050u)
    {
        edx = in_edx;
        goto L_10016d73;
    }
    if (arg3 - 0xf050u != 0x10u) goto L_10016b49;
    return 1u;
L_10016c64: ;
    if (arg3 - 0xf100u > 0x80u) goto L_10016b49;
    t50 = rd32(COW_IMG(0x10016dacu) + rd8(COW_IMG(0x10016db4u) + arg3 - 0xf100u) * 4u);
    switch (t50 - RD)
    {
    case 0x10016b49u: goto L_10016b49;
    case 0x10016d73u: edx = in_edx; goto L_10016d73;
    default: rt_fatal(g, COW_IMG(0x10016c7cu), "switch");
    }
    return 0;
L_10016c83: ;
    if (arg2 == 0x401u) goto L_10016d5d;
    if (arg2 == 0x800bu) goto L_10016d26;
L_10016c9b: ;
    if (arg2 > 0x282u) goto L_10016d12;
    if (arg2 == 0x282u) goto L_10016cc1;
    if (arg2 == 0x10du) goto L_10016cb5;
    if (arg2 != 0x10eu)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
L_10016cb5: ;
    return 0u;
L_10016cc1: ;
    if (arg3 == 8u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
    if (arg3 != 0xeu) goto L_10016ceb;
    if (arg4 == 5u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
    if (arg4 == 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
L_10016ceb: ;
    if (rd8(COW_IMG(0x104569ecu)) != 1u) goto L_10016d06;
    if (arg3 == 5u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
    if (arg3 == 4u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
L_10016d06: ;
    return 0u;
L_10016d12: ;
    if (arg2 != 0x283u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
    return 0u;
L_10016d26: ;
    if (rd32(COW_IMG(0x103d3cb8u)) == 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    else
    {
        ecx = rd32(COW_IMG(0x103d3cb8u));
        wr32(sp0 - 0x7cu, 0u);
        g->esp = sp0 - 0x78u;
        cow_thiscall(g, COW_IMG(0x10002840u), ecx, 1, 0u);
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    goto L_10016d37;
L_10016d5d: ;
    if (rd32(COW_IMG(0x103d3c64u)) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x103d3c64u));
        if (rd8(ecx + 0x1du) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            g->edx = in_edx;
            g->esp = sp0 - 0x78u;
            cow_thiscall(g, COW_IMG(0x10001b50u), ecx, 0);
            t53 = g->edx;
            edx = t53;
        }
    }
L_10016d73: ;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10016870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10016870(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
