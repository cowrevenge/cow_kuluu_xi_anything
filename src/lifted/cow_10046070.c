/* f_0x10046070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10046070(Guest* g)
{
    double d1;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d33;
    double d34;
    double d36;
    double d37;
    double d38;
    double d6;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_44_f;
    double loc_48_f;
    double loc_4c_f;
    uint32_t loc_54;
    uint32_t loc_5c;
    uint32_t loc_60;
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
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t35;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 120u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100460abu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x54u); goto E_100460ab;
    case 0x100460c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x54u); goto E_100460c5;
    case 0x100460cau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x54u); goto E_100460ca;
    case 0x100460ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x54u); goto E_100460dd;
    case 0x100460e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x54u); goto E_100460e5;
    case 0x100460eau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x54u); goto E_100460ea;
    case 0x1004613bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); goto E_1004613b;
    case 0x10046149u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_10046149;
    case 0x10046194u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); goto E_10046194;
    case 0x100461fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); x0 = ST(0); goto E_100461fb;
    case 0x1004620fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); x0 = ST(0); goto E_1004620f;
    case 0x10046211u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); goto E_10046211;
    case 0x1004623du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_1004623d;
    case 0x1004624au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_1004624a;
    case 0x1004625bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_1004625b;
    case 0x10046263u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_10046263;
    case 0x1004626bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_1004626b;
    case 0x100462b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_48_f = rdf32(sp0 - 0x48u); x0 = ST(0); goto E_100462b1;
    case 0x100462b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_48_f = rdf32(sp0 - 0x48u); x0 = ST(0); goto E_100462b9;
    case 0x100462ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); x0 = ST(0); goto E_100462ff;
    case 0x1004631du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); goto E_1004631d;
    case 0x1004631fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); goto E_1004631f;
    case 0x10046331u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10046331;
    case 0x1004634cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); goto E_1004634c;
    case 0x10046358u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); goto E_10046358;
    case 0x10046372u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_54 = rd32(sp0 - 0x54u); goto E_10046372;
    default: break;
    }
#endif

    COW_AT(10046070)
    wr32(sp0 - 0x54u, in_ebp);
    wr32(sp0 - 0x58u, self);
    d1 = fr(g, (double)rdf32(self + 0x138u) * (double)rdf32(self + 0x134u));
    wrf32(sp0 - 0x58u, (float)(double)(float)d1);
    wr32(sp0 - 0x5cu, sp0 - 0x44u);
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    t2 = cow_call_regs(g, COW_IMG(0x1003e330u), sp0 - 0x44u, self + 0xf8u, g->edx, 0, 2, sp0 - 0x44u, cow_f2bits((double)(float)d1));
    t3 = g->edx;
    t4 = rd32(t2);
    wr32(COW_IMG(0x1047bc0cu), t4);
    if (rd8(self + 0x17au) != 0u)
    {
        eax = (t4 & 0xffffff00u) | rd8(self + 0x17au);
        edx = t3;
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
        loc_54 = in_ebp;
    }
    else
    {
        eax = (t4 & 0xffffff00u) | rd8(self + 0x17au);
    COW_AT(100460ab)
        t5 = rd32(self + 0x10cu);
        wr8(sp0 - 0x4du, 0u);
        wr8(sp0 - 0x4eu, 1u);
        if (!(t5 >> 0x1bu & 1u))
        {
            ecx = t5;
            edx = t5 >> 0x1bu;
        }
        else
        {
            ecx = t5;
            edx = t5 >> 0x1bu;
    COW_AT(100460c5)
            wr8(sp0 - 0x4eu, 0u);
        }
    COW_AT(100460ca)
        d6 = (double)rdf32(self + 0x128u);
        if (d6 == (double)rdf32(COW_IMG(0x103295d8u))) goto L_100460e5;
    COW_AT(100460dd)
        if (!(ecx >> 0x16u & 1u)) goto L_100460ea;
L_100460e5: ;
    COW_AT(100460e5)
        wr8(sp0 - 0x4eu, 0u);
L_100460ea: ;
    COW_AT(100460ea)
        wr32(sp0 - 0x58u, in_ebx);
        wr32(sp0 - 0x5cu, 1u);
        wr32(sp0 - 0x60u, 0xabu);
        t7 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0x64u, t7);
        g->eax = t7;
        g->esp = sp0 - 0x5cu;
        t8 = cow_thiscall(g, rd32(rd32(t7) + 0xc8u), rd32(t7), 2, t7, 0xabu);
        g->edx = rd32(self);
        t9 = rd32(self);
        g->esp = sp0 - 0x58u;
        cow_thiscall(g, rd32(t9 + 0x4cu), self, 1, 1u);
        t10 = g->edx;
        wr32(sp0 - 0x5cu, 0xffffu);
        t11 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t12 = rd32(COW_IMG(0x1047cf7cu));
        t13 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(t12 + 0xa90u, t11);
        g->edx = t10;
        t14 = cow_call_regs(g, COW_IMG(0x100467e0u), t12, self, g->edx, 0, 1, 0xffffu);
        t15 = g->edx;
        if ((uint8_t)t14 != 0u)
        {
            edx = t15;
            ebx = t13;
            esi = in_esi;
            edi = in_edi;
        }
        else
        {
            eax = t14;
            edx = t15;
            ebx = t13;
    COW_AT(1004613b)
            wr32(sp0 - 0x5cu, in_esi);
            wr32(sp0 - 0x60u, in_edi);
            if (rd8(sp0 - 0x4eu) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 - 0x4eu);
                goto L_1004623d;
            }
    COW_AT(10046149)
            wr32(sp0 - 0x64u, sp0 - 0x40u);
            wr32(sp0 - 0x68u, 3u);
            g->eax = sp0 - 0x40u;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t16 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 2, 3u, sp0 - 0x40u);
            t17 = g->edx;
            wr8(sp0 - 0x4du, 1u);
            g->edx = t17;
            g->esp = sp0 - 0x38u;
            t18 = cow_thiscall_cdecl(g, COW_IMG(0x10045d40u), self, 10, in_edi, in_esi, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
            t19 = g->edx;
            esi = self + 0xa0u;
            edi = ebx;
            ecx = 0x10u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            d20 = fabs((double)rdf32(ebx + 0x38u));
            if ((cow_fsw(g, d20, (double)rdf32(COW_IMG(0x1032b08cu)), 1u) & 0x4100u) == 0u)
            {
                eax = cow_fsw(g, d20, (double)rdf32(COW_IMG(0x1032b08cu)), 1u) & 0x4100u;
                x0 = d20;
                goto L_1004631d;
            }
            edx = t19;
            x0 = d20;
    COW_AT(10046194)
            d21 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 * (double)rdf32(COW_IMG(0x1032b088u))));
            d22 = fr(g, (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2dcu) - fr(g, fr(g, fr(g, d21 * fr(g, d21 * d21)) * (double)rdf32(COW_IMG(0x10353444u))) * (double)rdf32(self + 0x128u)));
            d23 = fr(g, fr(g, fr(g, d21 * fr(g, d21 * d21)) * (double)rdf32(COW_IMG(0x10353444u))) * (double)rdf32(self + 0x128u));
            wrf32(sp0 - 0x48u, (float)(double)(float)d22);
            d24 = fr(g, (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2e0u) - d23);
            wrf32(sp0 - 0x4cu, (float)(double)(float)d24);
            d25 = fr(g, atan2(rdf64(COW_IMG(0x10329d40u)), (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2f4u)));
            d26 = (double)(float)fr(g, d25 + d25);
            wrf32(sp0 - 0x44u, (float)d26);
            if (rd8(rd32(COW_IMG(0x10631f24u)) + 0x39598u) == 0u)
            {
                eax = rd32(COW_IMG(0x104568fcu));
                loc_48_f = (double)(float)d22;
                loc_4c_f = (double)(float)d24;
                loc_44_f = d26;
                x0 = (double)rdf32(rd32(COW_IMG(0x10631f24u)) + 0x39594u);
    COW_AT(1004620f)
            }
            else
            {
                eax = rd32(COW_IMG(0x104568fcu));
                loc_48_f = (double)(float)d22;
                loc_4c_f = (double)(float)d24;
                loc_44_f = d26;
                x0 = (double)rdf32(rd32(COW_IMG(0x10631f24u)) + 0x39594u);
    COW_AT(100461fb)
                d27 = (double)(float)fr(g, loc_48_f + x0);
                wrf32(sp0 - 0x48u, (float)d27);
                d28 = (double)(float)fr(g, x0 + loc_4c_f);
                wrf32(sp0 - 0x4cu, (float)d28);
                loc_48_f = d27;
                loc_4c_f = d28;
            }
    COW_AT(10046211)
            d29 = fr(g, (double)rdf32(eax + 0x2f0u) * (double)rdf32(eax + 0x2e8u));
            wr32(sp0 - 0x64u, cow_f2bits(loc_4c_f));
            wr32(sp0 - 0x68u, cow_f2bits(loc_48_f));
            wr32(sp0 - 0x6cu, cow_f2bits(loc_4c_f));
            eax = cow_f2bits(loc_44_f);
            ecx = cow_f2bits(loc_4c_f);
            edx = cow_f2bits(loc_48_f);
            esi = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            x0 = d29;
L_100462ff: ;
    COW_AT(100462ff)
            d38 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
            wrf32(sp0 - 0x6cu, (float)(double)(float)d38);
            wr32(sp0 - 0x70u, eax);
            wr32(sp0 - 0x74u, ebx);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            t39 = rd32(esi);
            g->esp = sp0 - 0x60u;
            t40 = cow_stdcall(g, COW_IMG(0x102d83e6u), 5, ebx, eax, cow_f2bits((double)(float)d38), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u));
            t41 = g->ecx;
            t42 = g->edx;
            wr32(sp0 - 0x64u, t40);
            wr32(sp0 - 0x68u, 3u);
            wr32(sp0 - 0x6cu, esi);
            t43 = cow_thiscall(g, rd32(t39 + 0x94u), t41, 3, esi, 3u, t40);
            eax = t43;
            loc_5c = rd32(sp0 - 0x5cu);
            loc_60 = rd32(sp0 - 0x60u);
L_1004631f: ;
    COW_AT(1004631f)
            g->eax = eax;
            g->edx = rd32(self);
            t44 = rd32(self);
            g->esp = sp0 - 0x60u;
            t45 = cow_thiscall(g, rd32(t44 + 0x48u), self, 0);
            t46 = g->edx;
            if (rd8(sp0 - 0x4du) == 0u)
            {
                eax = (t45 & 0xffffff00u) | rd8(sp0 - 0x4du);
                edx = t46;
                esi = rd32(sp0 - 0x5cu);
                edi = rd32(sp0 - 0x60u);
            }
            else
            {
                esi = rd32(sp0 - 0x5cu);
                edi = rd32(sp0 - 0x60u);
    COW_AT(10046331)
                wr32(sp0 - 0x5cu, sp0 - 0x40u);
                wr32(sp0 - 0x60u, 3u);
                t47 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x64u, t47);
                g->eax = t47;
                g->edx = sp0 - 0x40u;
                g->esp = sp0 - 0x58u;
                t48 = cow_thiscall(g, rd32(rd32(t47) + 0x94u), rd32(t47), 3, t47, 3u, sp0 - 0x40u);
                t49 = g->edx;
                eax = t48;
                edx = t49;
            }
    COW_AT(1004634c)
            wr32(sp0 - 0x5cu, 0xffffu);
            g->esi = esi;
            g->edx = edx;
            g->esp = sp0 - 0x58u;
            cow_thiscall(g, COW_IMG(0x100472f0u), self, 1, 0xffffu);
            t50 = g->edx;
            edx = t50;
        }
    COW_AT(10046358)
        t51 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t52 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t52 + 0xa90u, t51);
        wr32(t51 * 4u + t52 + 0xa10u, ebx);
        eax = t52;
        ebx = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
    }
    COW_AT(10046372)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_54;
    g->edx = edx;
    return eax;
L_1004623d: ;
    COW_AT(1004623d)
    if (!(rd8(self + 0x10cu) & 1u))
    {
        loc_5c = in_esi;
        loc_60 = in_edi;
        goto L_1004631f;
    }
    COW_AT(1004624a)
    if ((rd32(self + 0x10cu) & 0x1c0u) != 0u)
    {
        eax = rd32(self + 0x10cu);
        loc_5c = in_esi;
        loc_60 = in_edi;
        goto L_1004631f;
    }
    eax = rd32(self + 0x10cu);
    COW_AT(1004625b)
    if ((eax & 4u) == 0u)
    {
        loc_5c = in_esi;
        loc_60 = in_edi;
        goto L_1004631f;
    }
    COW_AT(10046263)
    if ((eax & 8u) == 0u)
    {
        loc_5c = in_esi;
        loc_60 = in_edi;
        goto L_1004631f;
    }
    COW_AT(1004626b)
    wr32(sp0 - 0x64u, sp0 - 0x40u);
    wr32(sp0 - 0x68u, 3u);
    t30 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, COW_IMG(0x1000bdb0u), t30, 2, 3u, sp0 - 0x40u);
    t31 = g->ecx;
    t32 = rd32(COW_IMG(0x10631f24u));
    d33 = fr(g, atan2(rdf64(COW_IMG(0x10329d40u)), rdf64(COW_IMG(0x1032b080u))));
    wr8(sp0 - 0x4du, 1u);
    d34 = (double)(float)fr(g, d33 + d33);
    wrf32(sp0 - 0x48u, (float)d34);
    if (rd8(t32 + 0x39598u) == 0u)
    {
        loc_48_f = d34;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = t32;
        loc_48_f = d34;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    COW_AT(100462b1)
        x0 = (double)rdf32(eax + 0x39594u);
    }
    COW_AT(100462b9)
    t35 = rd32(rd32(COW_IMG(0x104568fcu)) + 0x2dcu);
    d36 = fr(g, (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2e0u) + x0);
    wr32(sp0 - 0x44u, t35);
    wrf32(sp0 - 0x64u, (float)(double)(float)d36);
    d37 = (double)(float)fr(g, cow_bits2f(t35) + x0);
    wrf32(sp0 - 0x68u, (float)d37);
    eax = cow_f2bits(loc_48_f);
    ecx = t35;
    edx = rd32(COW_IMG(0x1047bfa8u));
    esi = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    x0 = fr(g, (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2f0u) * (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2e8u));
    goto L_100462ff;
L_1004631d: ;
    COW_AT(1004631d)
    loc_5c = rd32(sp0 - 0x5cu);
    loc_60 = rd32(sp0 - 0x60u);
    goto L_1004631f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10046070(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100460abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x100460c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x100460cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x100460ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x100460e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x100460eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x1004613bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x10046149u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10046194u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x64u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100461fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        x0 = ST(0);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x64u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1004620fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        x0 = ST(0);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x64u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10046211u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x64u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1004623du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1004624au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1004625bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10046263u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1004626bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100462b1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_48_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48_f = rdf32(sp0 - 0x48u);
        x0 = ST(0);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x64u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100462b9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_48_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48_f = rdf32(sp0 - 0x48u);
        x0 = ST(0);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x64u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100462ffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_48_f;
        double loc_4c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        x0 = ST(0);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1004631du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x64u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1004631fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10046331u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x1004634cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x10046358u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x10046372u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10046070(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10046070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
