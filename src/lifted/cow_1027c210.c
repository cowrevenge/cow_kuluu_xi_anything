/* f_0x1027c210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1027c210(Guest* g)
{
    uint32_t al_m80;
    uint32_t al_m94;
    uint32_t al_m9c;
    uint32_t al_ma0;
    double d29;
    double d30;
    double d31;
    double d33;
    double d34;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t32;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 320u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027c226u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0xb0u); in_esi = rd32(sp1 - 0xacu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0xb0u); g->esi = rd32(sp1 - 0xacu); goto E_1027c226;
    case 0x1027c24eu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp1 - 0xb0u); in_esi = rd32(sp1 - 0xacu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0xb0u); g->esi = rd32(sp1 - 0xacu); goto E_1027c24e;
    case 0x1027c2c8u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1027c2c8;
    case 0x1027c2d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; al_ma0 = rd32(sp1 - 0xa0u); al_m9c = rd32(sp1 - 0x9cu); goto E_1027c2d0;
    case 0x1027c2e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; al_ma0 = rd32(sp1 - 0xa0u); al_m9c = rd32(sp1 - 0x9cu); goto E_1027c2e3;
    case 0x1027c2ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; al_ma0 = rd32(sp1 - 0xa0u); al_m9c = rd32(sp1 - 0x9cu); goto E_1027c2ec;
    case 0x1027c2f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; al_ma0 = rd32(sp1 - 0xa0u); al_m9c = rd32(sp1 - 0x9cu); al_m94 = rd32(sp1 - 0x94u); goto E_1027c2f4;
    case 0x1027c310u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; al_m80 = rd32(sp1 - 0x80u); goto E_1027c310;
    case 0x1027c31cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; al_m80 = rd32(sp1 - 0x80u); goto E_1027c31c;
    case 0x1027c365u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; goto E_1027c365;
    case 0x1027c37eu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; goto E_1027c37e;
    case 0x1027c386u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; goto E_1027c386;
    case 0x1027c38cu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; goto E_1027c38c;
    case 0x1027c38eu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; goto E_1027c38e;
    case 0x1027c3a1u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; goto E_1027c3a1;
    case 0x1027c3a5u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; goto E_1027c3a5;
    case 0x1027c3abu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; goto E_1027c3ab;
    case 0x1027c3adu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; goto E_1027c3ad;
    case 0x1027c3c0u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; goto E_1027c3c0;
    case 0x1027c3c4u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; goto E_1027c3c4;
    case 0x1027c3cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1027c3ca;
    case 0x1027c4a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; al_ma0 = rd32(sp1 - 0xa0u); al_m9c = rd32(sp1 - 0x9cu); goto E_1027c4a5;
    case 0x1027c4acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; al_m80 = rd32(sp1 - 0x80u); goto E_1027c4ac;
    case 0x1027c4ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1027c4ce;
    default: break;
    }
#endif

    COW_AT(1027c210)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0xa8u, in_ebx);
    wr32(sp1 - 0xacu, in_esi);
    wr32(sp1 - 0xb0u, in_edi);
    if (arg2 != 0u) goto L_1027c24e;
    COW_AT(1027c226)
    wr32(sp1 - 0xb4u, 0x218u);
    wr32(sp1 - 0xb8u, COW_IMG(0x103b40ecu));
    wr32(sp1 - 0xbcu, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp1 - 0xb4u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp1 - 0xc0u, COW_IMG(0x103b43e4u));
    g->esp = sp1 - 0xb8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b43e4u), COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_1027c24e: ;
    COW_AT(1027c24e)
    wr32(sp1 - 0xb4u, arg2);
    wr32(sp1 - 0xb8u, 1u);
    wr32(sp1 - 0xbcu, 4u);
    wr32(sp1 - 0xc0u, sp1 - 0x98u);
    wr32(sp1 - 0x98u, 4u);
    g->esp = sp1 - 0xb0u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp1 - 0x98u, 4u, 1u, arg2);
    edi = sp1 - 0x50u;
    eax = 0u;
    ecx = 0x14u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(sp1 - 1u, 0xau);
    t4 = rd32(arg1 + 0x28u);
    wr32(sp1 - 0xc4u, t4);
    wr32(sp1 - 0xc8u, 4u);
    wr32(sp1 - 0xccu, COW_IMG(0x103b43bcu));
    wr32(sp1 - 0xd0u, sp1 - 0x50u);
    g->eax = sp1 - 0x50u;
    g->edx = 4u;
    g->esp = sp1 - 0xbcu;
    t5 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x50u, COW_IMG(0x103b43bcu), 4u, t4, rd32(sp1 - 0xc0u));
    t6 = g->edx;
    wr32(sp1 - 0xd4u, arg2);
    wr32(sp1 - 0xd8u, 0x50u);
    wr32(sp1 - 0xdcu, 1u);
    wr32(sp1 - 0xe0u, sp1 - 0x50u);
    g->ecx = sp1 - 0x50u;
    g->esp = sp1 - 0xd0u;
    t7 = cow_cdecl(g, COW_IMG(0x10292200u), 4, sp1 - 0x50u, 1u, 0x50u, arg2);
    t8 = g->ecx;
    t9 = rd32(arg1 + 0x28u);
    wr32(sp1 - 0xe4u, t9);
    wr32(sp1 - 0xe8u, COW_IMG(0x103b41ccu));
    wr32(sp1 - 0xecu, arg2);
    g->esp = sp1 - 0xd8u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t9, 1, 5, arg2, COW_IMG(0x103b41ccu), t9, rd32(sp1 - 0xe0u), 1u);
    if ((int32_t)rd32(arg1 + 0x28u) <= 0) goto L_1027c4ce;
    COW_AT(1027c2c8)
    wr32(sp1 - 0x9cu, 0u);
    wr32(sp1 - 0xa0u, 0u);
    ebx = 0u;
    al_m9c = 0u;
    al_ma0 = 0u;
L_1027c2d0: ;
    COW_AT(1027c2d0)
    if (rd32(COW_IMG(0x1099d20cu)) == 0u)
    {
        eax = al_ma0 + rd32(arg1 + 0x20u);
        ecx = rd32(COW_IMG(0x1099d20cu));
    COW_AT(1027c2ec)
        wr32(sp1 - 0x94u, COW_IMG(0x103b448cu));
        al_m94 = COW_IMG(0x103b448cu);
    }
    else
    {
        eax = al_ma0 + rd32(arg1 + 0x20u);
        ecx = rd32(COW_IMG(0x1099d20cu));
    COW_AT(1027c2e3)
        t10 = rd32(ebx * 4u + ecx);
        wr32(sp1 - 0x94u, t10);
        ecx = t10;
        al_m94 = t10;
    }
    COW_AT(1027c2f4)
    wr32(sp1 - 0xb4u, eax);
    wr32(sp1 - 0xb8u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = al_m9c;
    t11 = rd32(arg1 + 0x24u);
    g->esp = sp1 - 0xb0u;
    t12 = cow_cdecl(g, COW_IMG(0x1027c970u), 2, arg1, eax);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp1 - 0x80u, t12);
    if (t12 != 0xffffffffu)
    {
        eax = t12;
        ecx = t13;
        esi = al_m9c + t11;
        al_m80 = t12;
        goto L_1027c31c;
    }
    ecx = t13;
    edx = t14;
    esi = al_m9c + t11;
    al_m80 = t12;
    COW_AT(1027c310)
    if (rd32(sp1 - 0xa0u) != 0u)
    {
        eax = rd32(sp1 - 0xa0u);
        goto L_1027c4ac;
    }
    eax = rd32(sp1 - 0xa0u);
L_1027c31c: ;
    COW_AT(1027c31c)
    wr32(sp1 - 0xb4u, sp1 - 0x8cu);
    wr32(sp1 - 0xb8u, esi);
    g->ecx = ecx;
    g->edx = sp1 - 0x8cu;
    g->esp = sp1 - 0xb0u;
    cow_cdecl(g, COW_IMG(0x10291620u), 2, esi, sp1 - 0x8cu);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp1 - 0xbcu, sp1 - 0x6cu);
    wr32(sp1 - 0xc0u, esi);
    g->eax = sp1 - 0x6cu;
    g->edx = t19;
    g->esp = sp1 - 0xb8u;
    t20 = cow_cdecl(g, COW_IMG(0x102916b0u), 2, esi, sp1 - 0x6cu);
    t21 = g->edx;
    wr32(sp1 - 0xc4u, sp1 - 0x78u);
    wr32(sp1 - 0xc8u, esi);
    g->ecx = sp1 - 0x78u;
    g->esp = sp1 - 0xc0u;
    t22 = cow_cdecl(g, COW_IMG(0x102916d0u), 2, esi, sp1 - 0x78u);
    t23 = g->ecx;
    wr32(sp1 - 0xccu, sp1 - 0x5cu);
    wr32(sp1 - 0xd0u, esi);
    g->ecx = t23;
    g->edx = sp1 - 0x5cu;
    g->esp = sp1 - 0xc8u;
    cow_cdecl(g, COW_IMG(0x10291730u), 2, esi, sp1 - 0x5cu);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp1 - 0xd4u, sp1 - 0x7cu);
    wr32(sp1 - 0xd8u, esi);
    g->eax = sp1 - 0x7cu;
    g->edx = t25;
    g->esp = sp1 - 0xd0u;
    t26 = cow_cdecl(g, COW_IMG(0x102917c0u), 2, esi, sp1 - 0x7cu);
    t27 = g->edx;
    wr32(sp1 - 0xdcu, sp1 - 0x90u);
    wr32(sp1 - 0xe0u, esi);
    g->esp = sp1 - 0xd8u;
    t28 = cow_cdecl(g, COW_IMG(0x102917e0u), 2, esi, sp1 - 0x90u);
    eax = t28;
    ecx = 0u;
L_1027c365: ;
    COW_AT(1027c365)
    d29 = fabs(fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(ecx * 4u + sp1 - 0x78u)));
    if (!(d29 < rdf64(COW_IMG(0x10340b18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, rdf64(COW_IMG(0x10340b18u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, rdf64(COW_IMG(0x10340b18u)), 0u);
    COW_AT(1027c37e)
        wr32(ecx * 4u + sp1 - 0x78u, 0x3f800000u);
    }
    COW_AT(1027c386)
    if ((int32_t)(ecx + 1u) < 3)
    {
        ecx = ecx + 1u;
        goto L_1027c365;
    }
    COW_AT(1027c38c)
    ecx = 0u;
L_1027c38e: ;
    COW_AT(1027c38e)
    d30 = fabs((double)rdf32(ecx * 4u + sp1 - 0x8cu));
    if (!(d30 < rdf64(COW_IMG(0x10340b18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, rdf64(COW_IMG(0x10340b18u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, rdf64(COW_IMG(0x10340b18u)), 0u);
    COW_AT(1027c3a1)
        wr32(ecx * 4u + sp1 - 0x8cu, 0u);
    }
    COW_AT(1027c3a5)
    if ((int32_t)(ecx + 1u) < 3)
    {
        ecx = ecx + 1u;
        goto L_1027c38e;
    }
    COW_AT(1027c3ab)
    ecx = 0u;
L_1027c3ad: ;
    COW_AT(1027c3ad)
    d31 = fabs((double)rdf32(ecx * 4u + sp1 - 0x6cu));
    if (!(d31 < rdf64(COW_IMG(0x10340b18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, rdf64(COW_IMG(0x10340b18u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, rdf64(COW_IMG(0x10340b18u)), 0u);
    COW_AT(1027c3c0)
        wr32(ecx * 4u + sp1 - 0x6cu, 0u);
    }
    COW_AT(1027c3c4)
    if ((int32_t)(ecx + 1u) < 4)
    {
        ecx = ecx + 1u;
        goto L_1027c3ad;
    }
    COW_AT(1027c3ca)
    t32 = rd32(sp1 - 0x80u);
    wr32(sp1 - 0xb4u, t32);
    d33 = (double)rdf32(sp1 - 0x90u);
    wrf64(sp1 - 0xbcu, d33);
    d34 = (double)rdf32(sp1 - 0x7cu);
    wrf64(sp1 - 0xc4u, d34);
    t35 = rd32(sp1 - 0x54u);
    wr32(sp1 - 0xc8u, t35);
    t36 = rd32(sp1 - 0x58u);
    wr32(sp1 - 0xccu, t36);
    t37 = rd32(sp1 - 0x5cu);
    wr32(sp1 - 0xd0u, t37);
    d38 = (double)rdf32(sp1 - 0x70u);
    wrf64(sp1 - 0xd8u, d38);
    d39 = (double)rdf32(sp1 - 0x74u);
    wrf64(sp1 - 0xe0u, d39);
    d40 = (double)rdf32(sp1 - 0x78u);
    wrf64(sp1 - 0xe8u, d40);
    d41 = (double)rdf32(sp1 - 0x60u);
    wrf64(sp1 - 0xf0u, d41);
    d42 = (double)rdf32(sp1 - 0x64u);
    wrf64(sp1 - 0xf8u, d42);
    d43 = (double)rdf32(sp1 - 0x68u);
    wrf64(sp1 - 0x100u, d43);
    d44 = (double)rdf32(sp1 - 0x6cu);
    wrf64(sp1 - 0x108u, d44);
    d45 = (double)rdf32(sp1 - 0x84u);
    wrf64(sp1 - 0x110u, d45);
    d46 = (double)rdf32(sp1 - 0x88u);
    wrf64(sp1 - 0x118u, d46);
    d47 = (double)rdf32(sp1 - 0x8cu);
    wrf64(sp1 - 0x120u, d47);
    t48 = rd32(sp1 - 0x94u);
    wr32(sp1 - 0x124u, t48);
    wr32(sp1 - 0x128u, ebx);
    wr32(sp1 - 0x12cu, COW_IMG(0x103b4438u));
    wr32(sp1 - 0x130u, arg2);
    g->ebx = ebx;
    g->esp = sp1 - 0x11cu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t37, 1, 5, arg2, COW_IMG(0x103b4438u), ebx, t48, cow_dlo(d47));
    t49 = rd32(sp1 - 0xa0u) + 0xf8u;
    wr32(sp1 - 0xa0u, t49);
    t50 = rd32(sp1 - 0x9cu) + 0x9cu;
    wr32(sp1 - 0x9cu, t50);
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x28u))
    {
        ebx = ebx + 1u;
        al_m9c = t50;
        al_ma0 = t49;
        goto L_1027c2d0;
    }
    COW_AT(1027c4a5)
    g->ebx = rd32(sp1 - 0xa8u);
    g->esi = rd32(sp1 - 0xacu);
    g->edi = rd32(sp1 - 0xb0u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_1027c4ac: ;
    COW_AT(1027c4ac)
    wr32(sp1 - 0xb4u, 0x235u);
    wr32(sp1 - 0xb8u, COW_IMG(0x103b40ecu));
    wr32(sp1 - 0xbcu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0xb4u;
    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp1 - 0xc0u, ebx);
    wr32(sp1 - 0xc4u, COW_IMG(0x103b4404u));
    g->ebx = ebx;
    g->esp = sp1 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4404u), ebx);
L_1027c4ce: ;
    COW_AT(1027c4ce)
    g->ebx = rd32(sp1 - 0xa8u);
    g->esi = rd32(sp1 - 0xacu);
    g->edi = rd32(sp1 - 0xb0u);
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1027c210(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x1027c226u:
    {
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0xb0u);
        in_esi = rd32(sp1 - 0xacu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0xa8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1027c24eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp1 - 0xb0u);
        in_esi = rd32(sp1 - 0xacu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        wr32(sp1 - 0xa8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1027c2c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0xb0u;
        g->eax = 0u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c2d0u:
    {
        uint32_t al_m9c;
        uint32_t al_ma0;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        al_ma0 = rd32(sp1 - 0xa0u);
        al_m9c = rd32(sp1 - 0x9cu);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c2e3u:
    {
        uint32_t al_m9c;
        uint32_t al_ma0;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        al_ma0 = rd32(sp1 - 0xa0u);
        al_m9c = rd32(sp1 - 0x9cu);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c2ecu:
    {
        uint32_t al_m9c;
        uint32_t al_ma0;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        al_ma0 = rd32(sp1 - 0xa0u);
        al_m9c = rd32(sp1 - 0x9cu);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c2f4u:
    {
        uint32_t al_m94;
        uint32_t al_m9c;
        uint32_t al_ma0;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        al_ma0 = rd32(sp1 - 0xa0u);
        al_m9c = rd32(sp1 - 0x9cu);
        al_m94 = rd32(sp1 - 0x94u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c310u:
    {
        uint32_t al_m80;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        al_m80 = rd32(sp1 - 0x80u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c31cu:
    {
        uint32_t al_m80;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        al_m80 = rd32(sp1 - 0x80u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c365u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0xb0u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c37eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0xb0u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c386u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0xb0u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c38cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0xb0u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c38eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0xb0u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c3a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0xb0u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c3a5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0xb0u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c3abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0xb0u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c3adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0xb0u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c3c0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0xb0u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c3c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0xb0u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c3cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027c4a5u:
    {
        uint32_t al_m9c;
        uint32_t al_ma0;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_ma0 = rd32(sp1 - 0xa0u);
        al_m9c = rd32(sp1 - 0x9cu);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1027c4acu:
    {
        uint32_t al_m80;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m80 = rd32(sp1 - 0x80u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1027c4ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1027c210(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1027c210(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
