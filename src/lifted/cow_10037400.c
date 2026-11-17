/* f_0x10037400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10037400(Guest* g)
{
    double d10;
    double d2;
    double d20;
    double d24;
    double d25;
    double d29;
    double d30;
    double d36;
    double d45;
    double d54;
    double d58;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd32(self + 0x38u) > 8u)
    {
        eax = rd32(self + 0x38u);
        edx = in_edx;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_100374e0;
    }
    eax = rd32(self + 0x38u);
    t1 = rd32(COW_IMG(0x10037708u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10037418u: goto L_10037418;
    case 0x10037468u: goto L_10037468;
    case 0x1003747du: goto L_1003747d;
    case 0x1003748bu: goto L_1003748b;
    case 0x100374fau: goto L_100374fa;
    case 0x10037599u: goto L_10037599;
    case 0x100375f4u: goto L_100375f4;
    case 0x1003764bu: goto L_1003764b;
    case 0x10037692u: goto L_10037692;
    default: rt_fatal(g, COW_IMG(0x10037411u), "switch");
    }
    return 0;
L_10037418: ;
    if (rd8(self + 0x34u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x34u);
        ecx = rd32(COW_IMG(0x1046393cu));
        edx = in_edx;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x34u);
        ecx = rd32(COW_IMG(0x1046393cu));
        if (ecx == 0u)
        {
            edx = in_edx;
        }
        else
        {
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t63 = cow_stdcall(g, COW_IMG(0x102467f0u), 0);
            t64 = g->edx;
            eax = t63;
            ecx = rd32(COW_IMG(0x1046393cu));
            edx = t64;
        }
    }
    if (rd8(COW_IMG(0x104638f5u)) == 0u) goto L_1003767e;
    if (ecx == 0u) goto L_1003767e;
    t65 = rd32(self + 0x4cu);
    wr32(sp0 - 0x10u, t65);
    wr32(sp0 - 0x14u, 0xffffffffu);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x102467c0u), 2, 0xffffffffu, t65);
    t66 = g->edx;
    wr8(COW_IMG(0x10463909u), 1u);
    t67 = rd32(self + 0x38u) + 1u;
    wr32(self + 0x38u, t67);
    g->edx = t66;
    return t67 & 0xffffff00u;
L_10037468: ;
    d54 = (double)(float)(double)(int32_t)rd32(self + 0x4cu);
    wrf32(sp0 - 4u, (float)d54);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t55 = cow_call_regs(g, COW_IMG(0x10014d20u), eax, g->ecx, g->edx, 1, 0);
    t56 = g->ecx;
    t57 = g->edx;
    d58 = cow_take_float(g);
    eax = t55;
    ecx = t56;
    edx = t57;
    x0 = fr(g, (double)rdf32(sp0 - 4u) - d58);
L_10037604: ;
    g->edx = edx;
    fpush(g, x0);
    g->esp = sp0 - 0xcu;
    t59 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t60 = g->edx;
    wr32(self + 0x4cu, t59);
    if ((int32_t)t59 >= 0)
    {
        eax = t59;
        edx = t60;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_100374e0;
    }
    eax = t59;
    edx = t60;
    if (rd8(COW_IMG(0x104638f5u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
        if (rd32(COW_IMG(0x1046393cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1046393cu));
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0x14u, 0xffffffffu);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_stdcall(g, COW_IMG(0x102467c0u), 2, 0xffffffffu, 0u);
            t61 = g->edx;
            edx = t61;
        }
    }
    wr8(COW_IMG(0x10463909u), 1u);
    t62 = rd32(self + 0x38u);
    wr32(self + 0x4cu, 4u);
    wr32(self + 0x38u, t62 + 1u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return t62 + 1u & 0xffffff00u;
L_1003747d: ;
    t51 = rd32(self + 0x4cu) - 1u;
    t52 = rd32(self + 0x4cu);
    wr32(self + 0x4cu, t51);
    if ((int32_t)(t52 - 1u) >= 0)
    {
        eax = t51;
        edx = in_edx;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_100374e0;
    }
    eax = t51;
L_1003766d: ;
    if (rd32(COW_IMG(0x1046393cu)) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1046393cu));
        wr32(sp0 - 0x10u, 0xffffffffu);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        cow_stdcall(g, COW_IMG(0x102463e0u), 1, 0xffffffffu);
        t53 = g->edx;
        edx = t53;
    }
L_1003767e: ;
    wr8(COW_IMG(0x10463909u), 1u);
    t68 = rd32(self + 0x38u) + 1u;
    wr32(self + 0x38u, t68);
    g->edx = edx;
    return t68 & 0xffffff00u;
L_1003748b: ;
    t44 = rd32(self + 0x3cu);
    wr32(COW_IMG(0x10463940u), t44);
    if (rd8(self + 0x35u) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x35u);
        ecx = t44;
        if (rd8(COW_IMG(0x104638f5u)) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
            g->ecx = ecx;
            d45 = fr(g, fr(g, (double)(int32_t)rd32(self + 0x40u) * (double)rdf32(COW_IMG(0x103517f8u))) * (double)rdf32(COW_IMG(0x103517f4u)));
            fpush(g, d45);
            g->esp = sp0 - 0xcu;
            t46 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t47 = g->ecx;
            wr32(sp0 - 0x10u, t46);
            t48 = rd32(self + 0x3cu);
            wr32(sp0 - 0x14u, t48);
            g->edx = t48;
            cow_cdecl(g, COW_IMG(0x100382a0u), 2, t48, t46);
            t49 = g->edx;
            edx = t49;
        }
        wr8(COW_IMG(0x10463909u), 1u);
    }
    if (rd32(self + 0x40u) != rd32(self + 0x44u)) goto L_100374e6;
    eax = rd32(self + 0x40u);
    wr32(self + 0x58u, 0u);
    loc_4 = self;
    loc_8 = in_esi;
    loc_c = in_edi;
L_100374dd: ;
    wr32(self + 0x38u, rd32(self + 0x38u) + 1u);
L_100374e0: ;
    g->esi = loc_8;
    g->edi = loc_c;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100374e6: ;
    t50 = rd32(self + 0x38u);
    wr32(self + 0x58u, 0xau);
    wr32(self + 0x38u, t50 + 1u);
    g->edx = edx;
    return t50 + 1u & 0xffffff00u;
L_100374fa: ;
    if (rd32(self + 0x58u) == 0u)
    {
        eax = rd32(self + 0x58u);
        goto L_1003750b;
    }
    eax = rd32(self + 0x58u);
    wr32(self + 0x58u, eax - 1u);
    return (eax - 1u & 0xffffff00u) | 1u;
L_1003750b: ;
    if (rd8(self + 0x35u) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 0x48u) == 0u)
        {
            eax = rd32(self + 0x48u);
            goto L_10037530;
        }
        eax = rd32(self + 0x48u);
        if (rd8(COW_IMG(0x104638f5u)) == 0u)
        {
            edx = in_edx;
            goto L_10037563;
        }
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
        if (rd32(COW_IMG(0x1046393cu)) == 0u)
        {
            edx = in_edx;
            goto L_10037563;
        }
        edi = rd32(COW_IMG(0x1046393cu));
        wr32(sp0 - 0x10u, eax);
        loc_10 = eax;
L_10037545: ;
        g->edx = in_edx;
        d36 = fr(g, fr(g, (double)(int32_t)rd32(self + 0x44u) * (double)rdf32(COW_IMG(0x103517f8u))) * (double)rdf32(COW_IMG(0x103517f4u)));
        fpush(g, d36);
        g->esp = sp0 - 0x10u;
        t37 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t38 = g->edx;
        wr32(sp0 - 0x14u, t37);
        wr32(sp0 - 0x18u, 0xffffffffu);
        g->edx = t38;
        g->esp = sp0 - 0xcu;
        cow_stdcall(g, COW_IMG(0x10246790u), 3, 0xffffffffu, t37, rd32(sp0 - 0x10u));
        t39 = g->edx;
        edx = t39;
    }
L_10037563: ;
    if (rd32(COW_IMG(0x1035171cu) + rd32(self + 0x50u) * 0xcu) == 0u)
    {
        eax = rd32(COW_IMG(0x1035171cu) + rd32(self + 0x50u) * 0xcu);
        goto L_1003758a;
    }
    eax = rd32(COW_IMG(0x1035171cu) + rd32(self + 0x50u) * 0xcu);
    if (rd8(self + 0x54u) == 1u) goto L_1003758a;
    wr32(self + 0x4cu, eax);
    t40 = rd32(self + 0x38u) + 1u;
    wr32(self + 0x38u, t40);
    g->edx = edx;
    return t40 & 0xffffff00u;
L_10037530: ;
    if (rd8(COW_IMG(0x104638f5u)) == 0u)
    {
        edx = in_edx;
        goto L_10037563;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
    if (rd32(COW_IMG(0x1046393cu)) == 0u)
    {
        edx = in_edx;
        goto L_10037563;
    }
    edi = rd32(COW_IMG(0x1046393cu));
    wr32(sp0 - 0x10u, 0u);
    ecx = self;
    loc_10 = 0u;
    goto L_10037545;
L_1003758a: ;
    wr32(sp0 - 0x10u, 1u);
    g->eax = eax;
    g->edx = rd32(self);
    t41 = rd32(self);
    g->esp = sp0 - 0xcu;
    t42 = cow_thiscall(g, rd32(t41 + 0x18u), self, 1, 1u);
    t43 = g->edx;
    g->edx = t43;
    return (t42 & 0xffffff00u) | 1u;
L_10037599: ;
    d25 = (double)(float)(double)(int32_t)rd32(self + 0x4cu);
    wrf32(sp0 - 4u, (float)d25);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t26 = cow_call_regs(g, COW_IMG(0x10014d20u), eax, g->ecx, g->edx, 1, 0);
    t27 = g->ecx;
    t28 = g->edx;
    d29 = cow_take_float(g);
    g->edx = t28;
    d30 = fr(g, (double)rdf32(sp0 - 4u) - d29);
    fpush(g, d30);
    t31 = cow_call_regs(g, COW_IMG(0x10311c6cu), t26, g->ecx, g->edx, 1, 0);
    t32 = g->edx;
    wr32(self + 0x4cu, t31);
    if ((int32_t)t31 >= 0)
    {
        eax = t31;
        edx = t32;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_100374e0;
    }
    eax = t31;
    edx = t32;
    wr32(self + 0x4cu, 0x168u);
    if (rd8(COW_IMG(0x104638f5u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_100374dd;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
    if (rd32(COW_IMG(0x1046393cu)) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_100374dd;
    }
    ecx = rd32(COW_IMG(0x1046393cu));
    wr32(sp0 - 0x10u, 0x168u);
    wr32(sp0 - 0x14u, 0xffffffffu);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x102467c0u), 2, 0xffffffffu, 0x168u);
    t33 = g->edx;
    t34 = rd32(self + 0x38u) + 1u;
    t35 = rd32(sp0 - 0xcu);
    wr32(self + 0x38u, t34);
    g->esi = rd32(sp0 - 8u);
    g->edi = t35;
    g->edx = t33;
    return t34 & 0xffffff00u;
L_100375f4: ;
    d20 = (double)(float)(double)(int32_t)rd32(self + 0x4cu);
    wrf32(sp0 - 4u, (float)d20);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t21 = cow_call_regs(g, COW_IMG(0x10014d20u), eax, g->ecx, g->edx, 1, 0);
    t22 = g->ecx;
    t23 = g->edx;
    d24 = cow_take_float(g);
    eax = t21;
    ecx = t22;
    edx = t23;
    x0 = fr(g, (double)rdf32(sp0 - 4u) - d24);
    goto L_10037604;
L_1003764b: ;
    t17 = rd32(self + 0x4cu) - 1u;
    t18 = rd32(self + 0x4cu);
    wr32(self + 0x4cu, t17);
    if ((int32_t)(t18 - 1u) >= 0)
    {
        eax = t17;
        edx = in_edx;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_100374e0;
    }
    t19 = rd32(COW_IMG(0x10351720u) + rd32(self + 0x50u) * 0xcu);
    wr32(self + 0x3cu, t19);
    wr32(COW_IMG(0x10463944u), t19);
    eax = t19;
    goto L_1003766d;
L_10037692: ;
    if (rd8(COW_IMG(0x104638f5u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
        ecx = self;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
        g->edx = in_edx;
        d2 = fr(g, fr(g, (double)(int32_t)rd32(self + 0x44u) * (double)rdf32(COW_IMG(0x103517f8u))) * (double)rdf32(COW_IMG(0x103517f4u)));
        fpush(g, d2);
        g->esp = sp0 - 0xcu;
        t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t4 = g->edx;
        wr32(sp0 - 0x10u, t3);
        t5 = rd32(self + 0x3cu);
        wr32(sp0 - 0x14u, t5);
        g->ecx = t5;
        t6 = cow_cdecl(g, COW_IMG(0x100382a0u), 2, t5, t3);
        t7 = g->ecx;
        eax = t6;
        ecx = t7;
    }
    t8 = rd32(COW_IMG(0x1046393cu));
    wr8(COW_IMG(0x10463909u), 1u);
    t9 = rd32(self + 0x3cu);
    wr32(COW_IMG(0x10463940u), t9);
    if (t8 == 0u)
    {
        edx = t9;
    }
    else
    {
        edx = t9;
        edi = t8;
        wr32(sp0 - 0x10u, 0u);
        g->edx = edx;
        d10 = fr(g, fr(g, (double)(int32_t)rd32(self + 0x44u) * (double)rdf32(COW_IMG(0x103517f8u))) * (double)rdf32(COW_IMG(0x103517f4u)));
        fpush(g, d10);
        g->esp = sp0 - 0x10u;
        t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t12 = g->edx;
        wr32(sp0 - 0x14u, t11);
        wr32(sp0 - 0x18u, 0xffffffffu);
        g->edx = t12;
        g->esp = sp0 - 0xcu;
        cow_stdcall(g, COW_IMG(0x10246790u), 3, 0xffffffffu, t11, 0u);
        t13 = g->edx;
        edx = t13;
    }
    wr32(sp0 - 0x10u, 1u);
    g->eax = rd32(self);
    g->edx = edx;
    t14 = rd32(self);
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall(g, rd32(t14 + 0x18u), self, 1, 1u);
    t16 = g->edx;
    g->edx = t16;
    return (t15 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10037400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10037400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
