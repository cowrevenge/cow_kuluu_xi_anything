/* f_0x100c4e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100c4e80(Guest* g)
{
    double d18;
    double d24;
    double d25;
    double d30;
    double d31;
    double d33;
    double d35;
    double d37;
    double d38;
    double d39;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_d0;
    double loc_e0_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t32;
    uint32_t t34;
    uint32_t t36;
    uint32_t t40;
    uint32_t t41;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 252u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100c4ea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xe4u); loc_e0_f = rdf32(sp0 - 0xe0u); g->esi = rd32(sp0 - 0xe4u); goto E_100c4ea2;
    case 0x100c4eaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xe4u); loc_e0_f = rdf32(sp0 - 0xe0u); g->esi = rd32(sp0 - 0xe4u); goto E_100c4eae;
    case 0x100c5017u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); goto E_100c5017;
    case 0x100c5033u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100c5033;
    case 0x100c5046u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100c5046;
    case 0x100c5056u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100c5056;
    case 0x100c5086u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c5086;
    case 0x100c5095u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c5095;
    case 0x100c509cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c509c;
    case 0x100c50aau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c50aa;
    case 0x100c50aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c50ae;
    case 0x100c50b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); goto E_100c50b1;
    case 0x100c50b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c50b3;
    case 0x100c50c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c50c3;
    case 0x100c50cau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c50ca;
    case 0x100c50dau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c50da;
    case 0x100c50dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c50df;
    case 0x100c50e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); goto E_100c50e1;
    case 0x100c50e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c50e4;
    case 0x100c50f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c50f3;
    case 0x100c50fau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c50fa;
    case 0x100c5106u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c5106;
    case 0x100c510au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c510a;
    case 0x100c510du: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); goto E_100c510d;
    case 0x100c510fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c510f;
    case 0x100c511eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c511e;
    case 0x100c5125u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c5125;
    case 0x100c5133u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c5133;
    case 0x100c5138u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c5138;
    case 0x100c513au: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); goto E_100c513a;
    case 0x100c513du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c513d;
    case 0x100c514eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c514e;
    case 0x100c5153u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100c5153;
    case 0x100c5156u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); goto E_100c5156;
    case 0x100c5163u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100c5163;
    default: break;
    }
#endif

    COW_AT(100c4e80)
    wr32(sp0 - 0xe4u, in_esi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0xe4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x110u), self, 0);
    t3 = g->edx;
    d4 = cow_take_float(g);
    wrf32(sp0 - 0xe0u, (float)(double)(float)d4);
    if (!(d4 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t3;
        loc_e0_f = (double)(float)d4;
        goto L_100c4eae;
    }
    eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t3;
    COW_AT(100c4ea2)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100c4eae: ;
    COW_AT(100c4eae)
    d5 = fr(g, loc_e0_f * (double)rdf32(COW_IMG(0x10329a08u)));
    wr32(sp0 - 0xe8u, in_edi);
    wrf32(sp0 - 0xdcu, (float)(double)(float)d5);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t6 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t7 = g->edx;
    t8 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    g->edx = rd32(self);
    t9 = rd32(self);
    t10 = cow_thiscall(g, rd32(t9 + 0x1c0u), self, 0);
    t11 = g->edx;
    t12 = rd32(t10 + 4u);
    wr32(sp0 - 0xecu, t12);
    g->eax = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t12);
    g->edx = rd32(self);
    t14 = rd32(self);
    t15 = cow_thiscall(g, rd32(t14 + 0x1bcu), self, 0);
    t16 = g->edx;
    wr32(sp0 - 0xecu, t15);
    g->edx = t16;
    cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x40u, 1, t15);
    t17 = g->edx;
    wr32(sp0 - 0xecu, arg3);
    cow_thiscall(g, COW_IMG(0x10027d10u), sp0 - 0x40u, 1, arg3);
    d18 = -(double)rdf32(sp0 - 0xdcu);
    wrf32(sp0 - 0x48u, (float)(double)(float)d18);
    wrf32(sp0 - 0xd8u, (float)(double)(float)d18);
    t19 = rd32(sp0 - 0xe0u);
    wr32(sp0 - 0xd0u, t19);
    wrf32(sp0 - 0xb8u, (float)(double)(float)d18);
    t20 = rd32(sp0 - 0xdcu);
    wr32(sp0 - 0xc8u, t20);
    wrf32(sp0 - 0xb0u, (float)(double)(float)d18);
    wrf32(sp0 - 0xa0u, (float)(double)(float)d18);
    wrf32(sp0 - 0x98u, (float)(double)(float)d18);
    wr32(sp0 - 0xc0u, t19);
    wrf32(sp0 - 0x94u, (float)(double)(float)d18);
    wr32(sp0 - 0xa8u, t20);
    wrf32(sp0 - 0x84u, (float)(double)(float)d18);
    wr32(sp0 - 0x90u, t19);
    wrf32(sp0 - 0x78u, (float)(double)(float)d18);
    wr32(sp0 - 0x80u, t19);
    wrf32(sp0 - 0x74u, (float)(double)(float)d18);
    wrf32(sp0 - 0x64u, (float)(double)(float)d18);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0x88u, t20);
    wr32(sp0 - 0x70u, cow_f2bits((double)(float)d18));
    wr32(sp0 - 0x68u, t20);
    wr32(sp0 - 0x60u, cow_f2bits((double)(float)d18));
    wr32(sp0 - 0xccu, 0x3f800000u);
    wr32(sp0 - 0xbcu, 0x3f800000u);
    wr32(sp0 - 0xacu, 0x3f800000u);
    wr32(sp0 - 0x9cu, 0x3f800000u);
    wr32(sp0 - 0x8cu, 0x3f800000u);
    wr32(sp0 - 0x7cu, 0x3f800000u);
    wr32(sp0 - 0x6cu, 0x3f800000u);
    wr32(sp0 - 0x5cu, 0x3f800000u);
    eax = t20;
    esi = sp0 - 0xd4u;
    edi = 8u;
    loc_d0 = t19;
L_100c5017: ;
    COW_AT(100c5017)
    wr32(sp0 - 0xecu, esi - 4u);
    g->eax = eax;
    g->edx = esi - 4u;
    g->esp = sp0 - 0xe8u;
    t21 = cow_thiscall(g, COW_IMG(0x10028320u), sp0 - 0x40u, 1, esi - 4u);
    t22 = g->ecx;
    t23 = g->edx;
    d24 = (double)rdf32(esi);
    wrf32(esi, (float)-d24);
    if (edi != 1u)
    {
        eax = t21;
        esi = esi + 0x10u;
        edi = edi - 1u;
        loc_d0 = rd32(sp0 - 0xd0u);
        goto L_100c5017;
    }
    eax = t21;
    ecx = t22;
    edx = t23;
    COW_AT(100c5033)
    d25 = (double)rdf32(sp0 - 0xd0u);
    if ((cow_fsw(g, d25, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) == 0u)
    {
    COW_AT(100c5046)
        wr32(sp0 - 0xd8u, 0xc7c35000u);
        wr32(sp0 - 0xd4u, 0xc7c35000u);
    }
    COW_AT(100c5056)
    wr32(sp0 - 0xecu, sp0 - 0xd8u);
    wr32(sp0 - 0xf0u, arg1);
    g->eax = sp0 - 0xd8u;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t26 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, arg1, sp0 - 0xd8u);
    t27 = g->edx;
    wr32(sp0 - 0xf4u, sp0 - 0xd8u);
    wr32(sp0 - 0xf8u, arg2);
    g->esp = sp0 - 0xf0u;
    t28 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, arg2, sp0 - 0xd8u);
    eax = t28;
    ecx = sp0 - 0xc4u;
    edx = 7u;
L_100c5086: ;
    COW_AT(100c5086)
    if (!((double)rdf32(arg1) < (double)rdf32(COW_IMG(0x10330e9cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x10330e9cu)), 0u);
    COW_AT(100c509c)
        d30 = (double)rdf32(ecx - 4u);
        if ((cow_fsw(g, d30, (double)rdf32(arg1), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d30, (double)rdf32(arg1), 0u) & 0x4100u;
    COW_AT(100c50ae)
            x0 = (double)rdf32(ecx - 4u);
        }
        else
        {
            eax = cow_fsw(g, d30, (double)rdf32(arg1), 0u) & 0x4100u;
    COW_AT(100c50aa)
            x0 = (double)rdf32(arg1);
        }
    COW_AT(100c50b1)
        wrf32(arg1, (float)x0);
    }
    else
    {
    COW_AT(100c5095)
        t29 = rd32(ecx - 4u);
        wr32(arg1, t29);
        eax = t29;
    }
    COW_AT(100c50b3)
    d31 = (double)rdf32(arg1 + 4u);
    if (!(d31 < (double)rdf32(COW_IMG(0x10330e9cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, (double)rdf32(COW_IMG(0x10330e9cu)), 0u);
    COW_AT(100c50ca)
        d33 = (double)rdf32(arg1 + 4u);
        if ((cow_fsw(g, (double)rdf32(ecx), d33, 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(ecx), d33, 0u) & 0x4100u;
    COW_AT(100c50df)
            x0 = (double)rdf32(ecx);
        }
        else
        {
            eax = cow_fsw(g, (double)rdf32(ecx), d33, 0u) & 0x4100u;
    COW_AT(100c50da)
            x0 = (double)rdf32(arg1 + 4u);
        }
    COW_AT(100c50e1)
        wrf32(arg1 + 4u, (float)x0);
    }
    else
    {
    COW_AT(100c50c3)
        t32 = rd32(ecx);
        wr32(arg1 + 4u, t32);
        eax = t32;
    }
    COW_AT(100c50e4)
    if (!((double)rdf32(arg2) < (double)rdf32(COW_IMG(0x10330e9cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg2), (double)rdf32(COW_IMG(0x10330e9cu)), 0u);
    COW_AT(100c50fa)
        d35 = (double)rdf32(ecx - 4u);
        if (!(d35 < (double)rdf32(arg2)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(arg2), 0u);
    COW_AT(100c510a)
            x0 = (double)rdf32(ecx - 4u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(arg2), 0u);
    COW_AT(100c5106)
            x0 = (double)rdf32(arg2);
        }
    COW_AT(100c510d)
        wrf32(arg2, (float)x0);
    }
    else
    {
    COW_AT(100c50f3)
        t34 = rd32(ecx - 4u);
        wr32(arg2, t34);
        eax = t34;
    }
    COW_AT(100c510f)
    if (!((double)rdf32(arg2) < (double)rdf32(COW_IMG(0x10330e9cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg2), (double)rdf32(COW_IMG(0x10330e9cu)), 0u);
    COW_AT(100c5125)
        d37 = (double)rdf32(arg2 + 4u);
        if (!((double)rdf32(ecx) < d37))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d37, 0u);
    COW_AT(100c5138)
            x0 = (double)rdf32(ecx);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d37, 0u);
    COW_AT(100c5133)
            x0 = (double)rdf32(arg2 + 4u);
        }
    COW_AT(100c513a)
        wrf32(arg2 + 4u, (float)x0);
    }
    else
    {
    COW_AT(100c511e)
        t36 = rd32(ecx);
        wr32(arg2 + 4u, t36);
        eax = t36;
    }
    COW_AT(100c513d)
    d38 = (double)rdf32(ecx + 8u);
    d39 = (double)rdf32(arg1 + 0xcu);
    if ((cow_fsw(g, d38, d39, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d38, d39, 0u) & 0x4100u;
    COW_AT(100c5153)
        x0 = (double)rdf32(ecx + 8u);
    }
    else
    {
        eax = cow_fsw(g, d38, d39, 0u) & 0x4100u;
    COW_AT(100c514e)
        x0 = (double)rdf32(arg1 + 0xcu);
    }
    COW_AT(100c5156)
    wrf32(arg1 + 0xcu, (float)x0);
    if (edx != 1u)
    {
        ecx = ecx + 0x10u;
        edx = edx - 1u;
        goto L_100c5086;
    }
    edx = edx - 1u;
    COW_AT(100c5163)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t40 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t41 = g->edx;
    g->esi = rd32(sp0 - 0xe4u);
    g->edi = rd32(sp0 - 0xe8u);
    g->edx = t41;
    return (t40 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100c4e80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100c4ea2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_e0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xe4u);
        loc_e0_f = rdf32(sp0 - 0xe0u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100c4eaeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_e0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xe4u);
        loc_e0_f = rdf32(sp0 - 0xe0u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100c5017u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100c5033u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100c5046u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100c5056u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100c5086u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c5095u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c509cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c50aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c50aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c50b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c50b3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c50c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c50cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c50dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c50dfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c50e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c50e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c50f3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c50fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c5106u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c510au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c510du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c510fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c511eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c5125u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c5133u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c5138u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c513au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c513du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c514eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c5153u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c5156u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->esp = sp0 - 0xe8u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100c5163u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100c4e80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100c4e80(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
