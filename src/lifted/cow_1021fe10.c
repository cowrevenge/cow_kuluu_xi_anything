/* f_0x1021fe10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1021fe10(Guest* g)
{
    double d11;
    double d27;
    double d53;
    double d58;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_84;
    uint32_t loc_8c;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t59;
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
    cow_frame(g, sp0, 240u);

    wr32(sp0 - 4u, in_esi);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_1021fe61;
    eax = rd32(COW_IMG(0x104dfd98u));
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x100876b0u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((t1 & 2u) == 0u) goto L_1021fe61;
    eax = t1;
    ecx = t2;
    edx = t3;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10087690u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0xffffu)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_1021fe39;
    }
    eax = t4;
    edx = t6;
    esi = rd32(sp0 - 4u);
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 0x2cu, in_edi);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t7 = cow_call_regs(g, COW_IMG(0x10087760u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    if (t7 == 0u)
    {
        ebp = in_ebp;
    }
    else
    {
        edx = t8;
        esi = t7;
        wr32(sp0 - 0x30u, in_ebp);
        wr32(sp0 - 0x34u, sp0 - 0x1cu);
        wr16(sp0 - 0x1cu, 0u);
        wr16(sp0 - 0x1au, 0u);
        wr16(sp0 - 0x18u, 0u);
        wr16(sp0 - 0x16u, 0u);
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        cow_stdcall(g, COW_IMG(0x1021f360u), 1, sp0 - 0x1cu);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(sp0 - 0x20u, 6u);
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x16u) + 4u;
        ecx = t9;
        edx = t10;
        ebp = (uint32_t)(int16_t)rd16(sp0 - 0x1cu);
        esi = esi + 4u;
        edi = (uint32_t)(int16_t)rd16(sp0 - 0x16u) + 0xcu;
        loc_20 = 6u;
L_1021fec5: ;
        if (rd8(esi) != 0u)
        {
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, ecx);
            d11 = (double)(float)fr(g, (double)(int32_t)rd32(esi - 4u) * (double)rdf32(COW_IMG(0x10329a18u)));
            wrf32(sp0 - 0x38u, (float)d11);
            wr32(sp0 - 0x3cu, edi);
            wr32(sp0 - 0x40u, ebp + 0x18u);
            g->edi = edi;
            g->esp = sp0 - 0x30u;
            cow_cdecl(g, COW_IMG(0x101cb040u), 4, ebp + 0x18u, edi, cow_f2bits(d11), 0u);
            wr32(sp0 - 0x44u, 0x80808080u);
            wr8(sp0 - 4u, 0u);
            wr32(sp0 - 0x14u, rd32(esi));
            t12 = rd32(esi + 4u);
            wr32(sp0 - 0x10u, t12);
            t13 = rd32(esi + 8u);
            wr32(sp0 - 0xcu, t13);
            t14 = rd32(esi + 0xcu);
            wr32(sp0 - 8u, t14);
            wr32(sp0 - 0x48u, sp0 - 0x14u);
            wr32(sp0 - 0x4cu, edi - 8u);
            wr32(sp0 - 0x50u, ebp + 0x10u);
            g->ecx = ebp + 0x10u;
            g->edx = sp0 - 0x14u;
            g->esp = sp0 - 0x2cu;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, ebp + 0x10u, edi - 8u, sp0 - 0x14u, 0x80808080u, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), 0u, rd32(sp0 - 0x30u));
            t15 = g->ecx;
            t16 = g->edx;
            ecx = t15;
            edx = t16;
        }
        wr32(sp0 - 0x20u, loc_20 - 1u);
        if (loc_20 != 1u)
        {
            eax = loc_20 - 1u;
            esi = esi + 0x14u;
            edi = edi + 0x10u;
            loc_20 = loc_20 - 1u;
            goto L_1021fec5;
        }
        ebp = rd32(sp0 - 0x30u);
    }
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = ebp;
    return;
L_1021fe39: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_call_regs(g, COW_IMG(0x10087690u), eax, g->ecx, g->edx, 1, 0);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 != 0xfffeu)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_1021fe4d;
    }
    eax = t17;
    edx = t19;
    esi = rd32(sp0 - 4u);
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, esi);
    wr32(sp0 - 0x30u, in_edi);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t20 = cow_call_regs(g, COW_IMG(0x10087760u), eax, g->ecx, g->edx, 1, 0);
    t21 = g->edx;
    if (t20 == 0u)
    {
        ebp = in_ebp;
    }
    else
    {
        edx = t21;
        edi = t20;
        wr32(sp0 - 0x34u, in_ebp);
        wr32(sp0 - 0x38u, sp0 - 0x1cu);
        wr16(sp0 - 0x1cu, 0u);
        wr16(sp0 - 0x1au, 0u);
        wr16(sp0 - 0x18u, 0u);
        wr16(sp0 - 0x16u, 0u);
        g->esp = sp0 - 0x34u;
        cow_stdcall(g, COW_IMG(0x1021f360u), 1, sp0 - 0x1cu);
        wr32(sp0 - 0x24u, 6u);
        ebp = (uint32_t)(int16_t)rd16(sp0 - 0x1cu);
        esi = (uint32_t)(int16_t)rd16(sp0 - 0x16u) + 0xcu;
        loc_24 = 6u;
L_1021ff92: ;
        if (rd8(edi + 4u) != 0u)
        {
            t22 = rd32(edi + 4u);
            wr32(sp0 - 0x14u, t22);
            t23 = rd32(edi + 8u);
            wr32(sp0 - 0x10u, t23);
            t24 = rd32(edi + 0xcu);
            wr32(sp0 - 0xcu, t24);
            t25 = rd32(edi + 0x10u);
            wr32(sp0 - 8u, t25);
            wr32(sp0 - 0x38u, 0x80808080u);
            wr32(sp0 - 0x3cu, sp0 - 0x14u);
            wr32(sp0 - 0x40u, esi - 8u);
            wr32(sp0 - 0x44u, ebp + 0x10u);
            wr8(sp0 - 4u, 0u);
            g->ecx = ebp + 0x10u;
            g->esp = sp0 - 0x20u;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, ebp + 0x10u, esi - 8u, sp0 - 0x14u, 0x80808080u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), loc_24);
            t26 = g->ecx;
            wr32(sp0 - 0x20u, rd32(edi));
            if ((int32_t)rd32(edi) >= 0)
            {
                eax = rd32(edi);
                ecx = t26;
                loc_20 = rd32(edi);
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, ecx);
                d27 = (double)(float)fr(g, (double)(int32_t)loc_20 * (double)rdf32(COW_IMG(0x10329a18u)));
                wrf32(sp0 - 0x3cu, (float)d27);
                wr32(sp0 - 0x40u, esi);
                wr32(sp0 - 0x44u, ebp + 0x18u);
                g->edi = edi;
                g->esp = sp0 - 0x34u;
                cow_cdecl(g, COW_IMG(0x101cb040u), 4, ebp + 0x18u, esi, cow_f2bits(d27), 0u);
            }
        }
        wr32(sp0 - 0x24u, loc_24 - 1u);
        if (loc_24 != 1u)
        {
            esi = esi + 0x10u;
            edi = edi + 0x14u;
            loc_24 = loc_24 - 1u;
            goto L_1021ff92;
        }
        ebp = rd32(sp0 - 0x34u);
    }
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = ebp;
    return;
L_1021fe4d: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t28 = cow_call_regs(g, COW_IMG(0x10087690u), eax, g->ecx, g->edx, 1, 0);
    t29 = g->edx;
    if (t28 != 0x1000u) goto L_1021fe61;
    eax = t28;
    edx = t29;
    esi = rd32(sp0 - 4u);
    wr32(sp0 - 0x9cu, in_ebx);
    wr32(sp0 - 0xa0u, esi);
    wr32(sp0 - 0xa4u, in_edi);
    wr32(sp0 - 0x88u, self);
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t30 = cow_call_regs(g, COW_IMG(0x10087760u), eax, g->ecx, g->edx, 1, 0);
    t31 = g->ecx;
    t32 = g->edx;
    if (t30 == 0u)
    {
        ebp = in_ebp;
    }
    else
    {
        eax = t30;
        ecx = t31;
        edx = t32;
        edi = t30;
        wr32(sp0 - 0xa8u, 2u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xa4u;
        t33 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
        t34 = g->edx;
        if (t33 == 0u)
        {
            ebp = in_ebp;
        }
        else
        {
            eax = t33;
            edx = t34;
            wr32(sp0 - 0xa8u, in_ebp);
            wr32(sp0 - 0xacu, sp0 - 0x94u);
            t35 = rd32(rd32(eax) + 0x870u);
            wr32(sp0 - 0x8cu, t35);
            t36 = rd32(rd32(eax) + 0x874u);
            wr32(sp0 - 0x98u, t36);
            wr16(sp0 - 0x94u, 0u);
            wr16(sp0 - 0x92u, 0u);
            wr16(sp0 - 0x90u, 0u);
            wr16(sp0 - 0x8eu, 0u);
            g->eax = t36;
            g->edx = edx;
            g->esp = sp0 - 0xa8u;
            t37 = cow_stdcall(g, COW_IMG(0x1021f360u), 1, sp0 - 0x94u);
            t38 = g->edx;
            wr32(sp0 - 0xacu, 0u);
            wr32(sp0 - 0xb0u, 0u);
            wr32(sp0 - 0xb4u, 0x80808080u);
            t39 = (uint32_t)(int16_t)rd16(sp0 - 0x8eu) + 4u;
            wr32(sp0 - 0xb8u, t39);
            t40 = (uint32_t)(int16_t)rd16(sp0 - 0x94u);
            wr32(sp0 - 0xbcu, t40);
            cow_thiscall(g, COW_IMG(0x1011fb60u), t35, 5, t40, t39, 0x80808080u, 0u, 0u);
            t41 = g->ecx;
            wr32(sp0 - 0xacu, rd32(edi));
            wr32(sp0 - 0xb0u, COW_IMG(0x10385f54u));
            wr32(sp0 - 0xb4u, sp0 - 0x80u);
            g->ebx = t40;
            g->eax = sp0 - 0x80u;
            g->edx = rd32(edi);
            t42 = rd32(edi);
            g->esp = sp0 - 0xa0u;
            t43 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10385f54u), t42, in_ebp, rd32(sp0 - 0xa4u));
            t44 = g->edx;
            wr32(sp0 - 0xb8u, 0x3f800000u);
            wr32(sp0 - 0xbcu, 0x3f800000u);
            wr32(sp0 - 0xc0u, 1u);
            wr32(sp0 - 0xc4u, 0x80808080u);
            wr32(sp0 - 0xc8u, sp0 - 0x80u);
            wr32(sp0 - 0xccu, t39);
            wr32(sp0 - 0xd0u, t40 + 0x28u);
            g->esp = sp0 - 0xb4u;
            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x80u, 7, t40 + 0x28u, t39, sp0 - 0x80u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t45 = g->ecx;
            t46 = rd32(edi + 4u);
            wr32(sp0 - 0xd4u, t46);
            wr32(sp0 - 0xd8u, COW_IMG(0x1036f9fcu));
            wr32(sp0 - 0xdcu, sp0 - 0x80u);
            g->ebx = t40;
            g->eax = sp0 - 0x80u;
            g->edx = t46;
            g->esp = sp0 - 0xc8u;
            t47 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x1036f9fcu), t46, rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu));
            t48 = g->edx;
            wr32(sp0 - 0xe0u, 0x80808080u);
            wr32(sp0 - 0xe4u, sp0 - 0x80u);
            wr32(sp0 - 0xe8u, t39);
            wr32(sp0 - 0xecu, t40 + 0x28u);
            g->edx = t48;
            t49 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t40 + 0x28u, t39, sp0 - 0x80u, 0x80808080u, sp0 - 0x80u, COW_IMG(0x1036f9fcu), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu));
            t50 = g->edx;
            t51 = rd32(sp0 - 0x98u);
            wr32(sp0 - 0xacu, 0u);
            wr32(sp0 - 0xb0u, 0u);
            wr32(sp0 - 0xb4u, 0x80808080u);
            wr32(sp0 - 0xb8u, t39);
            wr32(sp0 - 0xbcu, t40 + 0x38u);
            g->esp = sp0 - 0xa8u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), t51, 5, t40 + 0x38u, t39, 0x80808080u, 0u, 0u);
            wr32(sp0 - 0x98u, 0u);
            t52 = rd32(edi + 0xcu);
            wr32(sp0 - 0x84u, t52);
            if (rd32(edi + 0xcu) == 0u)
            {
                ebx = (uint32_t)(int16_t)rd16(sp0 - 0x94u);
                ebp = t51;
                esi = t39 + 0x10u;
            }
            else
            {
                ebx = (uint32_t)(int16_t)rd16(sp0 - 0x94u);
                ebp = t51;
                esi = t39 + 0x10u;
                loc_84 = t52;
                d53 = (double)(float)fr(g, (double)(int32_t)rd32(edi + 8u) / (double)(int32_t)loc_84);
                wrf32(sp0 - 0x98u, (float)d53);
            }
            wr32(sp0 - 0xacu, COW_IMG(0x10385f48u));
            t54 = rd32(sp0 - 0x98u);
            wr32(sp0 - 0xb0u, t54);
            t55 = rd32(sp0 - 0x8cu);
            wr32(sp0 - 0xb4u, t55);
            wr32(sp0 - 0xb8u, esi);
            wr32(sp0 - 0xbcu, ebx);
            g->edx = t54;
            g->esp = sp0 - 0xa8u;
            cow_stdcall(g, COW_IMG(0x102201a0u), 5, ebx, esi, t55, t54, COW_IMG(0x10385f48u));
            t56 = g->edx;
            wr32(sp0 - 0x98u, 0u);
            t57 = rd32(edi + 0x14u);
            wr32(sp0 - 0x8cu, t57);
            if (rd32(edi + 0x14u) == 0u)
            {
                edx = t56;
            }
            else
            {
                edx = t56;
                loc_8c = t57;
                d58 = (double)(float)fr(g, (double)(int32_t)rd32(edi + 0x10u) / (double)(int32_t)loc_8c);
                wrf32(sp0 - 0x98u, (float)d58);
            }
            if (rd32(edi + 0x1cu) == 0u)
            {
                eax = COW_IMG(0x10385f3cu);
            }
            else
            {
                eax = COW_IMG(0x10385f24u);
            }
            wr32(sp0 - 0xacu, eax);
            t59 = rd32(sp0 - 0x98u);
            wr32(sp0 - 0xb0u, t59);
            wr32(sp0 - 0xb4u, ebp);
            wr32(sp0 - 0xb8u, esi + 0x10u);
            wr32(sp0 - 0xbcu, ebx);
            g->esp = sp0 - 0xa8u;
            cow_stdcall(g, COW_IMG(0x102201a0u), 5, ebx, esi + 0x10u, ebp, t59, eax);
            ebp = rd32(sp0 - 0xa8u);
        }
    }
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa0u);
    g->edi = rd32(sp0 - 0xa4u);
    g->ebp = ebp;
    return;
L_1021fe61: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021fe10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021fe10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
