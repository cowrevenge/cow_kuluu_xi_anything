/* f_0x102e0ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e0ad0(Guest* g)
{
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x103282a7u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102e0adau));
    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    if (rd32(rd32(self + 4u) + 0x1060u) != 1u)
    {
        edx = rd32(self + 4u);
        loc_10 = t1;
        goto L_102e0e5e;
    }
    edx = rd32(self + 4u);
    loc_10 = t1;
    if (rd32(rd32(self) + 0x1060u) != 1u) goto L_102e0e5e;
    esi = rd32(self);
    t2 = rd32(self + 8u);
    t3 = ~(t2 >> 0x10u) & 1u;
    wr32(sp0 - 0x58u, t3);
    t4 = rd32(edx + 0x1058u);
    wr32(sp0 - 0x5cu, t4);
    t5 = rd32(esi + 0x1058u);
    wr32(sp0 - 0x60u, t5);
    t6 = ~(t2 >> 0x11u) & 1u;
    g->ecx = t3;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t7 = cow_cdecl(g, COW_IMG(0x102dd629u), 3, t5, t4, t3);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x3cu, t7);
    if (t7 == 0u)
    {
        eax = t7;
        edx = t9;
        loc_3c = t7;
        loc_24 = 0u;
        goto L_102e0e25;
    }
    ecx = t8;
    edx = t9;
    esi = t7;
    edi = t6;
    loc_3c = t7;
    wr32(sp0 - 0x58u, edi);
    t10 = rd32(rd32(self + 4u) + 0x105cu);
    wr32(sp0 - 0x5cu, t10);
    t11 = rd32(rd32(self) + 0x105cu);
    wr32(sp0 - 0x60u, t11);
    g->ecx = ecx;
    g->edx = edx;
    t12 = rd32(self);
    g->esp = sp0 - 0x54u;
    t13 = cow_cdecl(g, COW_IMG(0x102dd629u), 3, t11, t10, edi);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x24u, t13);
    if (t13 == 0u)
    {
        eax = t13;
        edx = t15;
        loc_24 = t13;
        goto L_102e0e25;
    }
    ecx = t14;
    edx = t15;
    loc_24 = t13;
    t16 = esi + rd32(esi);
    wr32(sp0 - 0x30u, t16);
    t17 = rd32(rd32(self + 4u) + 0x105cu) * 0xcu + 4u;
    wr32(sp0 - 0x58u, t17);
    t18 = loc_24 + rd32(loc_24);
    wr32(sp0 - 0x48u, t18);
    g->edx = edx;
    t19 = rd32(rd32(self + 4u) + 0x105cu);
    g->esp = sp0 - 0x4cu;
    t20 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t17, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
    t21 = g->edx;
    wr32(sp0 - 0x44u, t20);
    wr32(sp0 - 8u, 0u);
    if (t20 == 0u)
    {
        ecx = rd32(sp0 - 0x58u);
        edx = t21;
        edi = t18;
        wr32(sp0 - 0x18u, 0u);
        eax = 0u;
        loc_18 = 0u;
    }
    else
    {
        eax = t20;
        ecx = rd32(sp0 - 0x58u);
        edx = t21;
        esi = t19;
        edi = t18;
        wr32(sp0 - 0x58u, COW_IMG(0x102dd620u));
        wr32(sp0 - 0x5cu, COW_IMG(0x102dd613u));
        wr32(sp0 - 0x60u, esi);
        wr32(eax, esi);
        wr32(sp0 - 0x64u, 0xcu);
        wr32(sp0 - 0x68u, eax + 4u);
        wr32(sp0 - 0x38u, eax + 4u);
        g->esp = sp0 - 0x54u;
        cow_fastcall(g, COW_IMG(0x10317843u), ecx, edx, 5, eax + 4u, 0xcu, esi, COW_IMG(0x102dd613u), COW_IMG(0x102dd620u));
        t22 = g->ecx;
        t23 = g->edx;
        t24 = rd32(sp0 - 0x38u);
        wr32(sp0 - 0x18u, t24);
        eax = t24;
        ecx = t22;
        edx = t23;
        loc_18 = t24;
    }
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0x38u, eax);
    if (eax == 0u)
    {
        loc_38 = eax;
        goto L_102e0e1e;
    }
    loc_38 = eax;
    t25 = rd32(rd32(self) + 0x1058u);
    wr32(sp0 - 0x58u, t25 << 4u);
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    t26 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t25 << 4u, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
    t27 = g->edx;
    wr32(sp0 - 0x40u, t26);
    wr32(sp0 - 8u, 1u);
    if (t26 == 0u)
    {
        edx = t27;
        wr32(sp0 - 0x28u, 0u);
        eax = 0u;
        loc_28 = 0u;
    }
    else
    {
        eax = t26;
        ecx = rd32(sp0 - 0x58u);
        edx = t27;
        esi = t25;
        loc_40 = t26;
        wr32(sp0 - 0x58u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0x5cu, esi);
        wr32(sp0 - 0x60u, 0x10u);
        wr32(sp0 - 0x64u, eax);
        g->esp = sp0 - 0x54u;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, esi, COW_IMG(0x102d2a17u));
        t28 = g->edx;
        t29 = rd32(sp0 - 0x40u);
        wr32(sp0 - 0x28u, t29);
        eax = t29;
        edx = t28;
        loc_28 = t29;
    }
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0x40u, eax);
    if (eax == 0u)
    {
        loc_40 = eax;
        goto L_102e0e1e;
    }
    loc_40 = eax;
    t30 = rd32(sp0 - 0x24u) + 4u;
    wr32(sp0 - 0x34u, t30);
    if (rd32(sp0 - 0x24u) + 4u >= edi)
    {
        loc_34 = t30;
        goto L_102e0c5a;
    }
    ecx = t30;
    loc_34 = t30;
L_102e0c36: ;
    edx = ecx + rd32(ecx);
    ecx = ecx + 4u;
L_102e0c50: ;
    if (ecx < edx) goto L_102e0c3f;
    if (edx < edi)
    {
        ecx = edx;
        goto L_102e0c36;
    }
L_102e0c5a: ;
    wr32(sp0 - 0x2cu, 0u);
    if (loc_34 >= edi)
    {
        eax = loc_34;
        goto L_102e0e1a;
    }
    eax = loc_34;
    loc_2c = 0u;
L_102e0c69: ;
    t31 = eax + rd32(eax);
    wr32(sp0 - 0x20u, t31);
    wr32(sp0 - 0x34u, eax + 4u);
    esi = t31;
    loc_34 = eax + 4u;
    eax = eax + 4u;
    loc_20 = t31;
L_102e0d0e: ;
    wr32(sp0 - 0x14u, eax);
    if (eax < esi)
    {
        loc_14 = eax;
        goto L_102e0c7b;
    }
    wr32(sp0 - 0x58u, loc_28);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, loc_2c);
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, rd32(rd32(rd32(self)) + 4u), rd32(self), 3, loc_2c, 0u, loc_28);
    t32 = g->edx;
    if (rd32(sp0 - 0x3cu) + 4u >= rd32(sp0 - 0x30u))
    {
        edx = t32;
    }
    else
    {
        eax = rd32(sp0 - 0x3cu) + 4u;
        edi = loc_28;
        edx = edi + 8u;
L_102e0d3b: ;
        t33 = rd32(sp0 - 0x34u);
        wr32(sp0 - 0x14u, t33);
        if (rd32(sp0 - 0x34u) >= esi)
        {
            edi = eax + rd32(eax);
        }
        else
        {
            ecx = t33;
            edi = eax + rd32(eax);
            loc_14 = t33;
            wr32(sp0 - 0x44u, eax + 4u);
            loc_44 = eax + 4u;
L_102e0d54: ;
            if (loc_44 >= edi) goto L_102e0dbc;
            eax = loc_44;
            ecx = rd32(rd32(ecx) * 0xcu + rd32(sp0 - 0x18u));
L_102e0d66: ;
            d34 = fr(g, (double)rdf32(eax + 4u) * (double)rdf32(loc_14 + 4u));
            d35 = fr(g, fr(g, d34 * (double)rdf32(edx - 8u)) + (double)rdf32(ecx + rd32(eax) * 0x10u));
            wrf32(ecx + rd32(eax) * 0x10u, (float)d35);
            d36 = fr(g, fr(g, d34 * (double)rdf32(edx - 4u)) + (double)rdf32(ecx + rd32(eax) * 0x10u + 4u));
            wrf32(ecx + rd32(eax) * 0x10u + 4u, (float)d36);
            d37 = fr(g, fr(g, d34 * (double)rdf32(edx)) + (double)rdf32(ecx + rd32(eax) * 0x10u + 8u));
            wrf32(ecx + rd32(eax) * 0x10u + 8u, (float)d37);
            d38 = fr(g, fr(g, d34 * (double)rdf32(edx + 4u)) + (double)rdf32(ecx + rd32(eax) * 0x10u + 0xcu));
            wrf32(ecx + rd32(eax) * 0x10u + 0xcu, (float)d38);
            if (eax + 8u < edi)
            {
                eax = eax + 8u;
                goto L_102e0d66;
            }
            esi = rd32(sp0 - 0x20u);
L_102e0dbc: ;
            wr32(sp0 - 0x14u, loc_14 + 8u);
            if (loc_14 + 8u < esi)
            {
                loc_14 = loc_14 + 8u;
                goto L_102e0d51;
            }
        }
        if (edi < rd32(sp0 - 0x30u))
        {
            eax = edi;
            edx = edx + 0x10u;
            goto L_102e0d3b;
        }
        edx = edx + 0x10u;
    }
    if (rd32(sp0 - 0x34u) >= esi) goto L_102e0e0c;
    edi = rd32(sp0 - 0x34u);
L_102e0dda: ;
    t39 = rd32(edi);
    t40 = rd32(sp0 - 0x18u);
    wr32(t39 * 0xcu + t40 + 8u, rd32(t39 * 0xcu + t40 + 8u) - 1u);
    if (rd32(rd32(edi) * 0xcu + rd32(sp0 - 0x18u) + 8u) == 1u)
    {
        esi = t39 * 0xcu + t40;
        wr32(sp0 - 0x58u, rd32(esi));
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x60u, rd32(edi));
        g->edx = edx;
        g->esp = sp0 - 0x54u;
        cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 8u), rd32(self + 4u), 3, rd32(edi), 0u, rd32(esi));
        t41 = g->edx;
        t42 = rd32(sp0 - 0x1cu);
        wr32(esi + 4u, t42);
        wr32(sp0 - 0x1cu, esi);
        edx = t41;
        loc_1c = esi;
    }
    if (edi + 8u < rd32(sp0 - 0x20u))
    {
        edi = edi + 8u;
        goto L_102e0dda;
    }
    esi = rd32(sp0 - 0x20u);
L_102e0e0c: ;
    t43 = rd32(sp0 - 0x2cu) + 1u;
    wr32(sp0 - 0x2cu, t43);
    if (esi < rd32(sp0 - 0x48u))
    {
        eax = esi;
        loc_2c = t43;
        goto L_102e0c69;
    }
    eax = esi;
L_102e0e1a: ;
    esi = 0u;
L_102e0e2a: ;
    if (loc_38 == 0u)
    {
        ecx = loc_38;
    }
    else
    {
        ecx = loc_38;
        wr32(sp0 - 0x58u, 3u);
        g->ebx = self;
        g->esp = sp0 - 0x54u;
        t51 = cow_fastcall(g, COW_IMG(0x102dd8e6u), ecx, edx, 1, 3u);
        t52 = g->ecx;
        t53 = g->edx;
        eax = t51;
        ecx = t52;
        edx = t53;
    }
    wr32(sp0 - 0x58u, loc_24);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t54 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, loc_24);
    t55 = g->ecx;
    t56 = g->edx;
    t57 = rd32(sp0 - 0x3cu);
    wr32(sp0 - 0x5cu, t57);
    g->ecx = t55;
    g->edx = t56;
    g->esp = sp0 - 0x58u;
    t58 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t57);
    t59 = g->ecx;
    t60 = g->edx;
    t61 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x60u, t61);
    g->ecx = t59;
    g->edx = t60;
    g->esp = sp0 - 0x5cu;
    t62 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t61);
    t63 = g->ecx;
    t64 = g->edx;
    wr32(sp0 - 0x64u, 0u);
    g->edx = t64;
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, 0u);
    t65 = g->edx;
    eax = esi;
    edx = t65;
L_102e0e63: ;
    wr32(g->fs_base, loc_10);
    g->ebx = loc_4c;
    g->esi = loc_50;
    g->edi = loc_54;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102e0c3f: ;
    wr32(rd32(ecx) * 0xcu + rd32(sp0 - 0x18u) + 8u, rd32(rd32(ecx) * 0xcu + rd32(sp0 - 0x18u) + 8u) + 1u);
    ecx = ecx + 8u;
    goto L_102e0c50;
L_102e0c7b: ;
    if (rd32(rd32(eax) * 0xcu + rd32(sp0 - 0x18u)) != 0u) goto L_102e0d08;
    ecx = rd32(sp0 - 0x18u);
    edi = rd32(eax) * 0xcu + rd32(sp0 - 0x18u);
    if (loc_1c == 0u) goto L_102e0ca1;
    eax = loc_1c;
    wr32(edi, rd32(eax));
    wr32(eax, 0u);
    t44 = rd32(eax + 4u);
    wr32(sp0 - 0x1cu, t44);
    loc_1c = t44;
L_102e0ce7: ;
    t49 = rd32(rd32(self + 4u) + 0x1058u) << 4u;
    t50 = rd32(edi);
    edi = t50;
    eax = 0u;
    ecx = t49 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t49 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    edx = t49;
    esi = loc_20;
L_102e0d08: ;
    eax = loc_14 + 8u;
    goto L_102e0d0e;
L_102e0ca1: ;
    t45 = rd32(rd32(self + 4u) + 0x1058u);
    wr32(sp0 - 0x58u, t45 << 4u);
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    t46 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t45 << 4u, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
    t47 = g->edx;
    wr32(sp0 - 0x44u, t46);
    wr32(sp0 - 8u, 2u);
    if (t46 == 0u)
    {
        edx = t47;
        eax = 0u;
    }
    else
    {
        eax = t46;
        ecx = rd32(sp0 - 0x58u);
        edx = t47;
        esi = t45;
        loc_44 = t46;
        wr32(sp0 - 0x58u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0x5cu, esi);
        wr32(sp0 - 0x60u, 0x10u);
        wr32(sp0 - 0x64u, eax);
        g->esp = sp0 - 0x54u;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, esi, COW_IMG(0x102d2a17u));
        t48 = g->edx;
        eax = rd32(sp0 - 0x44u);
        edx = t48;
    }
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(edi, eax);
    if (eax == 0u) goto L_102e0e1e;
    goto L_102e0ce7;
L_102e0d51: ;
    ecx = loc_14;
    goto L_102e0d54;
L_102e0e1e: ;
    esi = 0x8007000eu;
    goto L_102e0e2a;
L_102e0e25: ;
    esi = 0x80004005u;
    goto L_102e0e2a;
L_102e0e5e: ;
    eax = 0x80004005u;
    loc_4 = in_ebp;
    loc_4c = in_ebx;
    loc_50 = in_esi;
    loc_54 = in_edi;
    goto L_102e0e63;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e0ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e0ad0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
