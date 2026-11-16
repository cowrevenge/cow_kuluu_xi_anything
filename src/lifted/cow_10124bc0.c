/* f_0x10124bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10124bc0(Guest* g)
{
    double d19;
    double d25;
    double d35;
    double d39;
    double d42;
    double d43;
    double d49;
    double d50;
    double d51;
    double d55;
    double d57;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
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
    uint32_t t33;
    uint32_t t34;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t56;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x24u, in_esi);
    t1 = rd8(self + 0x4eu);
    wr32(self + 0x94u, 0u);
    wr32(self + 0x98u, 0u);
    wr32(self + 0x8cu, 0u);
    wr32(self + 0x90u, 0u);
    if ((uint8_t)t1 == 0u) goto L_10124ea2;
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_edi);
    t2 = rd32(self + 4u);
    wr32(sp0 - 0x18u, t2);
    t3 = rd32(self + 8u);
    wr32(sp0 - 0x14u, t3);
    if (rd32(COW_IMG(0x10456a7cu)) == 0u)
    {
        eax = 0u;
        ecx = rd32(COW_IMG(0x10456a7cu));
        edx = in_edx;
        ebp = t3;
        edi = t2;
    }
    else
    {
        loc_18 = t2;
        loc_14 = t3;
        wr32(sp0 - 0x30u, in_ebx);
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        t4 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x38u, t4);
        g->eax = sp0 - 0x10u;
        g->ecx = rd32(COW_IMG(0x103d3c64u));
        g->edx = t4;
        t5 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0x30u;
        t6 = cow_stdcall(g, rd32(COW_IMG(0x103293e4u)), 2, t4, sp0 - 0x10u);   /* user32.dll!GetWindowRect */
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0x34u, 0x20u);
        g->ecx = t7;
        g->edx = t8;
        t9 = rd32(COW_IMG(0x103293a0u));
        t10 = cow_stdcall(g, t9, 1, 0x20u);   /* user32.dll!GetSystemMetrics */
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 - 0x34u, 0x21u);
        g->edx = t12;
        t13 = cow_thiscall(g, t9, t11, 1, 0x21u);
        t14 = g->ecx;
        t15 = g->edx;
        wr32(sp0 - 0x34u, 4u);
        cow_thiscall(g, t9, t14, 1, 4u);
        if (rd32(COW_IMG(0x10456a7cu)) != 3u)
        {
            ebp = t13;
            edi = t10;
        }
        else
        {
            ebp = 0u;
            edi = 0u;
        }
        t16 = rd32(sp0 - 8u);
        t17 = t16 - rd32(sp0 - 0x10u);
        wr32(sp0 - 0x1cu, t17);
        t18 = t16 - edi * 2u - rd32(sp0 - 0x10u);
        wr32(sp0 - 0x1cu, t18);
        d19 = fr(g, fr(g, (double)(int32_t)t17 / (double)(int32_t)t18) * (double)(int32_t)rd32(sp0 - 0x18u));
        fpush(g, d19);
        g->esp = sp0 - 0x2cu;
        t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), t18, g->ecx, g->edx, 1, 0);
        t21 = rd32(sp0 - 4u);
        t22 = t21 - rd32(sp0 - 0xcu);
        wr32(sp0 - 0x1cu, t22);
        t23 = t21 - ebp * 2u - rd32(sp0 - 0xcu);
        wr32(sp0 - 0x1cu, t23);
        g->ecx = rd32(sp0 - 0xcu);
        g->edx = ebp * 2u;
        t24 = rd32(sp0 - 0xcu);
        d25 = fr(g, fr(g, (double)(int32_t)t22 / (double)(int32_t)t23) * (double)(int32_t)rd32(sp0 - 0x14u));
        fpush(g, d25);
        t26 = cow_call_regs(g, COW_IMG(0x10311c6cu), t23, g->ecx, g->edx, 1, 0);
        t27 = g->ecx;
        t28 = g->edx;
        eax = t26;
        ecx = t27;
        edx = t28;
        ebp = t26;
        edi = t20;
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    if (rd8(self + 0x4cu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x4cu);
        goto L_10124cc0;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x4cu);
    if ((uint8_t)eax != 2u)
    {
        loc_1c = 0u;
        loc_20 = 0u;
        goto L_10124dc1;
    }
L_10124cc0: ;
    wr32(sp0 - 0x30u, 0x8fu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t29 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x8fu);
    t30 = g->ecx;
    t31 = g->edx;
    if (t29 != 0u)
    {
        edx = t31;
        loc_1c = 0u;
        loc_20 = 0u;
    }
    else
    {
        eax = t29;
        ecx = t30;
        edx = t31;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t32 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
        t33 = g->ecx;
        t34 = g->edx;
        if ((uint8_t)t32 != 0u)
        {
            eax = t32;
            ecx = t33;
            edx = t34;
        }
        else
        {
            ecx = t33;
            if ((int32_t)edi > (int32_t)((uint32_t)(int16_t)rd16(COW_IMG(0x106218b4u)) + 1u))
            {
                eax = (uint32_t)(int16_t)rd16(COW_IMG(0x106218b4u)) + 1u;
                if ((int32_t)edi < (int32_t)((uint32_t)(int16_t)rd16(COW_IMG(0x106218b8u)) - 1u))
                {
                    ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x106218b8u)) - 1u;
                }
                else
                {
                    ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x106218b8u)) - 1u;
                    wr32(sp0 - 0x20u, 0x3f800000u);
                    loc_20 = 0x3f800000u;
                }
            }
            else
            {
                eax = (uint32_t)(int16_t)rd16(COW_IMG(0x106218b4u)) + 1u;
                wr32(sp0 - 0x20u, 0xbf800000u);
                loc_20 = 0xbf800000u;
            }
            if ((int32_t)ebp > (int32_t)((uint32_t)(int16_t)rd16(COW_IMG(0x106218b6u)) + 1u))
            {
                edx = (uint32_t)(int16_t)rd16(COW_IMG(0x106218b6u)) + 1u;
                if ((int32_t)ebp < (int32_t)((uint32_t)(int16_t)rd16(COW_IMG(0x106218bau)) - 1u))
                {
                    eax = (uint32_t)(int16_t)rd16(COW_IMG(0x106218bau)) - 1u;
                }
                else
                {
                    eax = (uint32_t)(int16_t)rd16(COW_IMG(0x106218bau)) - 1u;
                    wr32(sp0 - 0x1cu, 0x3f800000u);
                    loc_1c = 0x3f800000u;
                }
            }
            else
            {
                edx = (uint32_t)(int16_t)rd16(COW_IMG(0x106218b6u)) + 1u;
                wr32(sp0 - 0x1cu, 0xbf800000u);
                loc_1c = 0xbf800000u;
            }
        }
        d35 = (double)rdf32(self + 0x9cu);
        if ((cow_fsw(g, d35, (double)rdf32(COW_IMG(0x103332a4u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d35, (double)rdf32(COW_IMG(0x103332a4u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d35, (double)rdf32(COW_IMG(0x103332a4u)), 0u) & 0x4100u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t36 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t37 = g->ecx;
            t38 = g->edx;
            d39 = cow_take_float(g);
            g->edx = t38;
            fpush(g, d39);
            t40 = cow_call_regs(g, COW_IMG(0x10311c6cu), t36, g->ecx, g->edx, 1, 0);
            t41 = g->edx;
            wr32(sp0 - 0x18u, (uint32_t)(int16_t)t40);
            d42 = fr(g, (double)rdf32(self + 0x9cu) - (double)(int32_t)(uint32_t)(int16_t)t40);
            wrf32(self + 0x9cu, (float)d42);
            eax = t40;
            edx = t41;
        }
        d43 = (double)rdf32(self + 0x9cu);
        if (!(d43 < (double)rdf32(COW_IMG(0x103332a4u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, (double)rdf32(COW_IMG(0x103332a4u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, (double)rdf32(COW_IMG(0x103332a4u)), 0u);
            wr32(self + 0x9cu, 0xc0c00000u);
        }
        if (cow_bits2f(loc_1c) != (double)rdf32(COW_IMG(0x103295d8u))) goto L_10124db0;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_1c), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        if (cow_bits2f(loc_20) != (double)rdf32(COW_IMG(0x103295d8u))) goto L_10124db0;
        wr8(self + 0xa0u, 0u);
    }
L_10124dc1: ;
    if (rd32(COW_IMG(0x10663888u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663888u));
        goto L_10124df1;
    }
    eax = rd32(COW_IMG(0x10663888u));
    if (rd32(eax + 8u) == 0u)
    {
        edx = rd32(eax + 8u);
        eax = (eax & 0xffffff00u) | rd32(eax + 8u) != 0u;
        goto L_10124df1;
    }
    wr32(self + 0x94u, loc_20);
    wr32(self + 0x98u, loc_1c);
    return;
L_10124db0: ;
    wr32(self + 0x9cu, 0x43200000u);
    wr8(self + 0xa0u, 1u);
    goto L_10124dc1;
L_10124df1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t44 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t45 = g->ecx;
    t46 = g->edx;
    if (t44 == 0u)
    {
        eax = t44;
        ecx = t45;
        edx = t46;
        goto L_10124e3a;
    }
    eax = t44;
    ecx = t45;
    edx = t46;
    if (rd8(COW_IMG(0x10487f80u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
        goto L_10124e3a;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
    wr32(sp0 - 0x28u, 0x8du);
    t47 = rd32(sp0 - 0x20u);
    wr32(self + 0x94u, t47);
    g->esp = sp0 - 0x24u;
    t48 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x8du);
    if (t48 == 0u) goto L_10124ea2;
    d49 = fr(g, (double)rdf32(self + 0x8cu) * (double)rdf32(COW_IMG(0x1032a3f0u)));
    wrf32(self + 0x8cu, (float)d49);
    g->esi = rd32(sp0 - 0x24u);
    return;
L_10124e3a: ;
    d50 = (double)rdf32(sp0 - 0x1cu);
    wrf32(self + 0x90u, (float)-d50);
    d51 = (double)rdf32(sp0 - 0x20u);
    wrf32(self + 0x8cu, (float)-d51);
    wr32(sp0 - 0x28u, 0x8bu);
    wr32(self + 0x9cu, 0xc0c00000u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t52 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x8bu);
    t53 = g->ecx;
    t54 = g->edx;
    if (t52 == 0u)
    {
        eax = t52;
        ecx = t53;
        edx = t54;
    }
    else
    {
        eax = t52;
        ecx = t53;
        edx = t54;
        d55 = fr(g, (double)rdf32(self + 0x8cu) * (double)rdf32(COW_IMG(0x1032a3f0u)));
        wrf32(self + 0x8cu, (float)d55);
    }
    wr32(sp0 - 0x28u, 0x8cu);
    g->esp = sp0 - 0x24u;
    t56 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x8cu);
    if (t56 != 0u)
    {
        d57 = fr(g, (double)rdf32(self + 0x90u) * (double)rdf32(COW_IMG(0x1032a3f0u)));
        wrf32(self + 0x90u, (float)d57);
    }
L_10124ea2: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10124bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10124bc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
