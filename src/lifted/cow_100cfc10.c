/* f_0x100cfc10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100cfc10(Guest* g)
{
    double d19;
    double d20;
    double d21;
    double d25;
    double d26;
    double d31;
    double d32;
    double d34;
    double d36;
    double d38;
    double d39;
    double d40;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_8_f;
    double loc_d0_f;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t33;
    uint32_t t35;
    uint32_t t37;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    double x3;
    double x4;
    double x5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 244u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100cfc86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xdcu); g->esi = rd32(sp0 - 0xdcu); goto E_100cfc86;
    case 0x100cfc9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xdcu); g->esi = rd32(sp0 - 0xdcu); goto E_100cfc9e;
    case 0x100cfcc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xdcu); loc_8_f = rdf32(sp0 - 8u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->esi = rd32(sp0 - 0xdcu); goto E_100cfcc7;
    case 0x100cfcdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xdcu); loc_8_f = rdf32(sp0 - 8u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->esi = rd32(sp0 - 0xdcu); goto E_100cfcdb;
    case 0x100cfcecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xdcu); loc_8_f = rdf32(sp0 - 8u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->esi = rd32(sp0 - 0xdcu); goto E_100cfcec;
    case 0x100cfd00u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xdcu); loc_8_f = rdf32(sp0 - 8u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->esi = rd32(sp0 - 0xdcu); goto E_100cfd00;
    case 0x100cfdd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xe0u); in_esi = rd32(sp0 - 0xdcu); loc_d0_f = rdf32(sp0 - 0xd0u); loc_8_f = rdf32(sp0 - 8u); g->edi = rd32(sp0 - 0xe0u); g->esi = rd32(sp0 - 0xdcu); goto E_100cfdd9;
    case 0x100cfdf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100cfdf5;
    case 0x100cfe08u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100cfe08;
    case 0x100cfe18u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100cfe18;
    case 0x100cfe48u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfe48;
    case 0x100cfe57u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfe57;
    case 0x100cfe5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfe5e;
    case 0x100cfe6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfe6c;
    case 0x100cfe70u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfe70;
    case 0x100cfe73u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); goto E_100cfe73;
    case 0x100cfe75u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfe75;
    case 0x100cfe85u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfe85;
    case 0x100cfe8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfe8c;
    case 0x100cfe9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfe9c;
    case 0x100cfea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfea1;
    case 0x100cfea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); goto E_100cfea3;
    case 0x100cfea6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfea6;
    case 0x100cfeb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfeb5;
    case 0x100cfebcu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfebc;
    case 0x100cfec8u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfec8;
    case 0x100cfeccu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfecc;
    case 0x100cfecfu: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); goto E_100cfecf;
    case 0x100cfed1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfed1;
    case 0x100cfee0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfee0;
    case 0x100cfee7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfee7;
    case 0x100cfef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfef5;
    case 0x100cfefau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfefa;
    case 0x100cfefcu: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); goto E_100cfefc;
    case 0x100cfeffu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cfeff;
    case 0x100cff10u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cff10;
    case 0x100cff15u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100cff15;
    case 0x100cff18u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); goto E_100cff18;
    case 0x100cff25u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100cff25;
    default: break;
    }
#endif

    COW_AT(100cfc10)
    wr32(sp0 - 0xdcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xdcu;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x58u, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x58u, 0);
    t3 = g->edx;
    g->eax = rd32(self);
    g->edx = t3;
    t4 = rd32(self);
    t5 = cow_thiscall(g, rd32(t4 + 0x1c0u), self, 0);
    t6 = g->edx;
    t7 = rd32(t5 + 4u);
    wr32(sp0 - 0xe0u, t7);
    t8 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x58u, 1, t7);
    g->edx = rd32(self);
    t9 = rd32(self);
    t10 = cow_thiscall(g, rd32(t9 + 0x1bcu), self, 0);
    t11 = g->edx;
    wr32(sp0 - 0xe0u, t10);
    g->edx = t11;
    cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x58u, 1, t10);
    t12 = g->edx;
    wr32(sp0 - 0xe0u, arg3);
    g->eax = arg3;
    t13 = cow_thiscall(g, COW_IMG(0x10027d10u), sp0 - 0x58u, 1, arg3);
    wr32(sp0 - 0xe0u, 0u);
    g->edx = rd32(self);
    t14 = rd32(self);
    t15 = cow_thiscall(g, rd32(t14 + 0x3c8u), self, 1, 0u);
    t16 = g->edx;
    if (t15 != 0u)
    {
        eax = t15;
        edx = t16;
        goto L_100cfc9e;
    }
    eax = t15;
    edx = t16;
    COW_AT(100cfc86)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xdcu;
    t17 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t18 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t18;
    return t17 & 0xffffff00u;
L_100cfc9e: ;
    COW_AT(100cfc9e)
    d19 = (double)(float)(double)rdf32(eax + 0x10u);
    wrf32(sp0 - 8u, (float)d19);
    d20 = fr(g, (double)rdf32(eax) - (double)rdf32(eax + 4u));
    if (d20 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        loc_8_f = d19;
        x5 = (double)rdf32(eax + 0x14u);
        x4 = (double)rdf32(eax + 0x10u);
        x3 = (double)rdf32(eax + 0xcu);
        x2 = (double)rdf32(eax + 8u);
        x1 = (double)rdf32(eax + 4u);
        x0 = (double)rdf32(eax);
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, (double)rdf32(COW_IMG(0x103295d8u)), 6u);
    }
    else
    {
        loc_8_f = d19;
        x5 = (double)rdf32(eax + 0x14u);
        x4 = (double)rdf32(eax + 0x10u);
        x3 = (double)rdf32(eax + 0xcu);
        x2 = (double)rdf32(eax + 8u);
        x1 = (double)rdf32(eax + 4u);
        x0 = (double)rdf32(eax);
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, (double)rdf32(COW_IMG(0x103295d8u)), 6u);
    COW_AT(100cfcc7)
        x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x1032961cu)));
        x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x1032961cu)));
    }
    COW_AT(100cfcdb)
    d21 = fr(g, x2 - x0);
    if (d21 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
    COW_AT(100cfcec)
        x3 = fr(g, x3 + (double)rdf32(COW_IMG(0x1032961cu)));
        x2 = fr(g, x2 - (double)rdf32(COW_IMG(0x1032961cu)));
    }
    COW_AT(100cfd00)
    wr32(sp0 - 0xe0u, in_edi);
    wrf32(sp0 - 0xd8u, (float)(double)(float)x2);
    wr32(sp0 - 0x60u, cow_f2bits(loc_8_f));
    wr32(sp0 - 0xccu, 0x3f800000u);
    wrf32(sp0 - 0xd4u, (float)(double)(float)x1);
    wr32(sp0 - 0xbcu, 0x3f800000u);
    wr32(sp0 - 0xacu, 0x3f800000u);
    wrf32(sp0 - 0xd0u, (float)(double)(float)x5);
    wr32(sp0 - 0x9cu, 0x3f800000u);
    wr32(sp0 - 0x8cu, 0x3f800000u);
    wrf32(sp0 - 0xc8u, (float)(double)(float)x3);
    wr32(sp0 - 0x7cu, 0x3f800000u);
    wr32(sp0 - 0x6cu, 0x3f800000u);
    wrf32(sp0 - 0xc4u, (float)(double)(float)x1);
    wr32(sp0 - 0x5cu, 0x3f800000u);
    wrf32(sp0 - 0xc0u, (float)(double)(float)x5);
    wrf32(sp0 - 0xb8u, (float)(double)(float)x2);
    wrf32(sp0 - 0xb4u, (float)(double)(float)x1);
    wrf32(sp0 - 0xb0u, (float)(double)(float)x4);
    wrf32(sp0 - 0xa8u, (float)(double)(float)x3);
    wrf32(sp0 - 0xa4u, (float)(double)(float)x1);
    wrf32(sp0 - 0xa0u, (float)(double)(float)x4);
    wrf32(sp0 - 0x98u, (float)(double)(float)x2);
    wrf32(sp0 - 0x94u, (float)(double)(float)x0);
    wrf32(sp0 - 0x90u, (float)(double)(float)x5);
    wrf32(sp0 - 0x88u, (float)(double)(float)x3);
    wrf32(sp0 - 0x84u, (float)(double)(float)x0);
    wrf32(sp0 - 0x80u, (float)(double)(float)x5);
    wrf32(sp0 - 0x78u, (float)(double)(float)x2);
    wrf32(sp0 - 0x74u, (float)(double)(float)x0);
    wrf32(sp0 - 0x70u, (float)(double)(float)x4);
    wrf32(sp0 - 0x68u, (float)(double)(float)x3);
    wrf32(sp0 - 0x64u, (float)(double)(float)x0);
    eax = cow_f2bits(loc_8_f);
    esi = sp0 - 0xd4u;
    edi = 8u;
    loc_d0_f = (double)(float)x5;
L_100cfdd9: ;
    COW_AT(100cfdd9)
    wr32(sp0 - 0xe4u, esi - 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe0u;
    t22 = cow_thiscall(g, COW_IMG(0x10028320u), sp0 - 0x58u, 1, esi - 4u);
    t23 = g->ecx;
    t24 = g->edx;
    d25 = (double)rdf32(esi);
    wrf32(esi, (float)-d25);
    if (edi != 1u)
    {
        eax = t22;
        edx = t24;
        esi = esi + 0x10u;
        edi = edi - 1u;
        loc_d0_f = (double)rdf32(sp0 - 0xd0u);
        goto L_100cfdd9;
    }
    eax = t22;
    ecx = t23;
    COW_AT(100cfdf5)
    d26 = (double)rdf32(sp0 - 0xd0u);
    if ((cow_fsw(g, d26, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d26, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d26, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
    COW_AT(100cfe08)
        wr32(sp0 - 0xd8u, 0xc7c35000u);
        wr32(sp0 - 0xd4u, 0xc7c35000u);
    }
    COW_AT(100cfe18)
    wr32(sp0 - 0xe4u, sp0 - 0xd8u);
    wr32(sp0 - 0xe8u, arg1);
    g->ecx = ecx;
    g->edx = sp0 - 0xd8u;
    g->esp = sp0 - 0xe0u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, arg1, sp0 - 0xd8u);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0xecu, sp0 - 0xd8u);
    wr32(sp0 - 0xf0u, arg2);
    g->eax = sp0 - 0xd8u;
    g->esp = sp0 - 0xe8u;
    t29 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, arg2, sp0 - 0xd8u);
    eax = t29;
    ecx = sp0 - 0xc4u;
    edx = 7u;
L_100cfe48: ;
    COW_AT(100cfe48)
    if (!((double)rdf32(arg1) < (double)rdf32(COW_IMG(0x10330e9cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x10330e9cu)), 0u);
    COW_AT(100cfe5e)
        d31 = (double)rdf32(ecx - 4u);
        if ((cow_fsw(g, d31, (double)rdf32(arg1), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d31, (double)rdf32(arg1), 0u) & 0x4100u;
    COW_AT(100cfe70)
            x0 = (double)rdf32(ecx - 4u);
        }
        else
        {
            eax = cow_fsw(g, d31, (double)rdf32(arg1), 0u) & 0x4100u;
    COW_AT(100cfe6c)
            x0 = (double)rdf32(arg1);
        }
    COW_AT(100cfe73)
        wrf32(arg1, (float)x0);
    }
    else
    {
    COW_AT(100cfe57)
        t30 = rd32(ecx - 4u);
        wr32(arg1, t30);
        eax = t30;
    }
    COW_AT(100cfe75)
    d32 = (double)rdf32(arg1 + 4u);
    if (!(d32 < (double)rdf32(COW_IMG(0x10330e9cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10330e9cu)), 0u);
    COW_AT(100cfe8c)
        d34 = (double)rdf32(arg1 + 4u);
        if ((cow_fsw(g, (double)rdf32(ecx), d34, 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(ecx), d34, 0u) & 0x4100u;
    COW_AT(100cfea1)
            x0 = (double)rdf32(ecx);
        }
        else
        {
            eax = cow_fsw(g, (double)rdf32(ecx), d34, 0u) & 0x4100u;
    COW_AT(100cfe9c)
            x0 = (double)rdf32(arg1 + 4u);
        }
    COW_AT(100cfea3)
        wrf32(arg1 + 4u, (float)x0);
    }
    else
    {
    COW_AT(100cfe85)
        t33 = rd32(ecx);
        wr32(arg1 + 4u, t33);
        eax = t33;
    }
    COW_AT(100cfea6)
    if (!((double)rdf32(arg2) < (double)rdf32(COW_IMG(0x10330e9cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg2), (double)rdf32(COW_IMG(0x10330e9cu)), 0u);
    COW_AT(100cfebc)
        d36 = (double)rdf32(ecx - 4u);
        if (!(d36 < (double)rdf32(arg2)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(arg2), 0u);
    COW_AT(100cfecc)
            x0 = (double)rdf32(ecx - 4u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(arg2), 0u);
    COW_AT(100cfec8)
            x0 = (double)rdf32(arg2);
        }
    COW_AT(100cfecf)
        wrf32(arg2, (float)x0);
    }
    else
    {
    COW_AT(100cfeb5)
        t35 = rd32(ecx - 4u);
        wr32(arg2, t35);
        eax = t35;
    }
    COW_AT(100cfed1)
    if (!((double)rdf32(arg2) < (double)rdf32(COW_IMG(0x10330e9cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg2), (double)rdf32(COW_IMG(0x10330e9cu)), 0u);
    COW_AT(100cfee7)
        d38 = (double)rdf32(arg2 + 4u);
        if (!((double)rdf32(ecx) < d38))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d38, 0u);
    COW_AT(100cfefa)
            x0 = (double)rdf32(ecx);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d38, 0u);
    COW_AT(100cfef5)
            x0 = (double)rdf32(arg2 + 4u);
        }
    COW_AT(100cfefc)
        wrf32(arg2 + 4u, (float)x0);
    }
    else
    {
    COW_AT(100cfee0)
        t37 = rd32(ecx);
        wr32(arg2 + 4u, t37);
        eax = t37;
    }
    COW_AT(100cfeff)
    d39 = (double)rdf32(ecx + 8u);
    d40 = (double)rdf32(arg1 + 0xcu);
    if ((cow_fsw(g, d39, d40, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d39, d40, 0u) & 0x4100u;
    COW_AT(100cff15)
        x0 = (double)rdf32(ecx + 8u);
    }
    else
    {
        eax = cow_fsw(g, d39, d40, 0u) & 0x4100u;
    COW_AT(100cff10)
        x0 = (double)rdf32(arg1 + 0xcu);
    }
    COW_AT(100cff18)
    wrf32(arg1 + 0xcu, (float)x0);
    if (edx != 1u)
    {
        ecx = ecx + 0x10u;
        edx = edx - 1u;
        goto L_100cfe48;
    }
    edx = edx - 1u;
    COW_AT(100cff25)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe0u;
    t41 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t42 = g->edx;
    g->esi = rd32(sp0 - 0xdcu);
    g->edi = rd32(sp0 - 0xe0u);
    g->edx = t42;
    return (t41 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100cfc10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100cfc86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x100cfc9eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x100cfcc7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_8_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xdcu);
        loc_8_f = rdf32(sp0 - 8u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x100cfcdbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_8_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xdcu);
        loc_8_f = rdf32(sp0 - 8u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x100cfcecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_8_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xdcu);
        loc_8_f = rdf32(sp0 - 8u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x100cfd00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_8_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xdcu);
        loc_8_f = rdf32(sp0 - 8u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x100cfdd9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_8_f;
        double loc_d0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xe0u);
        in_esi = rd32(sp0 - 0xdcu);
        loc_d0_f = rdf32(sp0 - 0xd0u);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x100cfdf5u:
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
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x100cfe08u:
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
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x100cfe18u:
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
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x100cfe48u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfe57u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfe5eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfe6cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfe70u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfe73u:
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
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfe75u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfe85u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfe8cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfe9cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfea1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfea3u:
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
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfea6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfeb5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfebcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfec8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfeccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfecfu:
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
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfed1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfee0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfee7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfef5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfefau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfefcu:
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
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cfeffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cff10u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cff15u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cff18u:
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
        g->esp = sp0 - 0xe0u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x100cff25u:
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
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        wr32(sp0 - 0xe4u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100cfc10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100cfc10(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
