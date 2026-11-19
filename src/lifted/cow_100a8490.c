/* f_0x100a8490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100a8490(Guest* g)
{
    double d1;
    double d11;
    double d14;
    double d17;
    double d2;
    double d23;
    double d28;
    double d29;
    double d3;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d4;
    double d40;
    double d41;
    double d42;
    double d43;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t44;
    uint32_t t45;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a84a9u: eax = g->eax; ecx = g->ecx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x54u); goto E_100a84a9;
    case 0x100a84b7u: eax = g->eax; ecx = g->ecx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x54u); goto E_100a84b7;
    case 0x100a84c8u: eax = g->eax; ecx = g->ecx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x54u); goto E_100a84c8;
    case 0x100a84d6u: eax = g->eax; ecx = g->ecx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x54u); goto E_100a84d6;
    case 0x100a8537u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a8537;
    case 0x100a8540u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a8540;
    case 0x100a8596u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a8596;
    case 0x100a85a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a85a7;
    case 0x100a85beu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a85be;
    case 0x100a85d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a85d1;
    case 0x100a85e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a85e2;
    case 0x100a85f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a85f9;
    case 0x100a860cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a860c;
    case 0x100a861du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a861d;
    case 0x100a8634u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a8634;
    case 0x100a8647u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a8647;
    case 0x100a8658u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a8658;
    case 0x100a866fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a866f;
    case 0x100a8680u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a8680;
    case 0x100a8697u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a8697;
    case 0x100a86a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a86a8;
    case 0x100a86bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a86bb;
    case 0x100a86d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a86d2;
    case 0x100a86e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a86e3;
    case 0x100a86f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a86f6;
    case 0x100a870du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a870d;
    case 0x100a871eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a871e;
    case 0x100a8731u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a8731;
    case 0x100a8748u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a8748;
    case 0x100a8755u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100a8755;
    default: break;
    }
#endif

    COW_AT(100a8490)
    d1 = (double)rdf32(sp0 + 4u);
    wr32(sp0 - 0x54u, in_esi);
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100a84a9)
        d2 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 + 4u, (float)d2);
    }
    COW_AT(100a84b7)
    d3 = (double)rdf32(sp0 + 4u);
    if (d3 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
    COW_AT(100a84c8)
        d4 = fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 + 4u, (float)d4);
    }
    COW_AT(100a84d6)
    wr32(sp0 - 0x58u, in_edi);
    g->eax = rd32(self);
    t5 = rd32(self);
    g->esp = sp0 - 0x58u;
    t6 = cow_thiscall(g, rd32(t5 + 0x1bcu), self, 0);
    d7 = fr(g, (double)rdf32(arg2) - (double)rdf32(t6));
    wrf32(sp0 - 0x50u, (float)(double)(float)d7);
    g->edx = rd32(self);
    t8 = rd32(self);
    t9 = cow_thiscall(g, rd32(t8 + 0x1bcu), self, 0);
    t10 = g->edx;
    d11 = fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(t9 + 4u));
    wrf32(sp0 - 0x4cu, (float)(double)(float)d11);
    g->eax = rd32(self);
    t12 = rd32(self);
    t13 = cow_thiscall(g, rd32(t12 + 0x1bcu), self, 0);
    d14 = fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(t13 + 8u));
    wr32(sp0 - 0x5cu, sp0 - 0x50u);
    wr32(sp0 - 0x60u, sp0 - 0x50u);
    wrf32(sp0 - 0x48u, (float)(double)(float)d14);
    g->edx = sp0 - 0x50u;
    t15 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x50u, sp0 - 0x50u);
    t16 = g->edx;
    d17 = cow_take_float(g);
    if (!(fr(g, sqrt(d17)) < (double)rdf32(COW_IMG(0x1032a3e0u))))
    {
        eax = (t15 & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(d17)), (double)rdf32(COW_IMG(0x1032a3e0u)), 0u);
        edx = t16;
        goto L_100a8540;
    }
    COW_AT(100a8537)
    g->esi = rd32(sp0 - 0x54u);
    g->edi = in_edi;
    return 0u;
L_100a8540: ;
    COW_AT(100a8540)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t18 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0x58u, t21);
    d23 = (double)(float)-(double)rdf32(sp0 + 4u);
    wrf32(sp0 - 0x58u, (float)d23);
    g->edx = t22;
    cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, cow_f2bits(d23));
    t24 = g->edx;
    wr32(sp0 - 0x58u, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0x40u, 1, sp0 - 0x50u);
    t26 = g->ecx;
    t27 = g->edx;
    d28 = fr(g, fr(g, atan2((double)rdf32(sp0 - 0x48u), (double)rdf32(sp0 - 0x50u))) * (double)rdf32(COW_IMG(0x1032dfc4u)));
    wrf32(sp0 + 4u, (float)d28);
    if ((cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        ecx = t26;
        edx = t27;
        goto L_100a85be;
    }
    eax = cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    ecx = t26;
    edx = t27;
    COW_AT(100a8596)
    d29 = (double)rdf32(sp0 + 4u);
    if (!(d29 < (double)rdf32(COW_IMG(0x1032d6bcu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x1032d6bcu)), 0u);
        goto L_100a85be;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x1032d6bcu)), 0u);
    COW_AT(100a85a7)
    g->esp = sp0 - 0x54u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = in_edi;
    return 7u;
L_100a85be: ;
    COW_AT(100a85be)
    d30 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d30, (double)rdf32(COW_IMG(0x1032d6bcu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d30, (double)rdf32(COW_IMG(0x1032d6bcu)), 0u) & 0x100u;
        goto L_100a85f9;
    }
    eax = cow_fsw(g, d30, (double)rdf32(COW_IMG(0x1032d6bcu)), 0u) & 0x100u;
    COW_AT(100a85d1)
    d31 = (double)rdf32(sp0 + 4u);
    if (!(d31 < (double)rdf32(COW_IMG(0x1032dfc0u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, (double)rdf32(COW_IMG(0x1032dfc0u)), 0u);
        goto L_100a85f9;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, (double)rdf32(COW_IMG(0x1032dfc0u)), 0u);
    COW_AT(100a85e2)
    g->esp = sp0 - 0x54u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = in_edi;
    return 6u;
L_100a85f9: ;
    COW_AT(100a85f9)
    d32 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d32, (double)rdf32(COW_IMG(0x1032dfc0u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x1032dfc0u)), 0u) & 0x100u;
        goto L_100a8634;
    }
    eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x1032dfc0u)), 0u) & 0x100u;
    COW_AT(100a860c)
    d33 = (double)rdf32(sp0 + 4u);
    if (!(d33 < (double)rdf32(COW_IMG(0x1032dfbcu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, (double)rdf32(COW_IMG(0x1032dfbcu)), 0u);
        goto L_100a8634;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, (double)rdf32(COW_IMG(0x1032dfbcu)), 0u);
    COW_AT(100a861d)
    g->esp = sp0 - 0x54u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = in_edi;
    return 5u;
L_100a8634: ;
    COW_AT(100a8634)
    d34 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d34, (double)rdf32(COW_IMG(0x1032dfbcu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x1032dfbcu)), 0u) & 0x100u;
        goto L_100a866f;
    }
    eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x1032dfbcu)), 0u) & 0x100u;
    COW_AT(100a8647)
    d35 = (double)rdf32(sp0 + 4u);
    if (!(d35 < (double)rdf32(COW_IMG(0x1032dfb8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(COW_IMG(0x1032dfb8u)), 0u);
        goto L_100a866f;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(COW_IMG(0x1032dfb8u)), 0u);
    COW_AT(100a8658)
    g->esp = sp0 - 0x54u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = in_edi;
    return 4u;
L_100a866f: ;
    COW_AT(100a866f)
    d36 = (double)rdf32(sp0 + 4u);
    if (!(d36 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a8697;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a8680)
    d37 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d37, (double)rdf32(COW_IMG(0x1032dfb4u)), 0u) & 0x100u) == 0u)
    {
        eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x1032dfb4u)), 0u) & 0x100u;
        goto L_100a8755;
    }
    eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x1032dfb4u)), 0u) & 0x100u;
L_100a8697: ;
    COW_AT(100a8697)
    d38 = (double)rdf32(sp0 + 4u);
    if (!(d38 < (double)rdf32(COW_IMG(0x1032dfb4u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d38, (double)rdf32(COW_IMG(0x1032dfb4u)), 0u);
        goto L_100a86d2;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d38, (double)rdf32(COW_IMG(0x1032dfb4u)), 0u);
    COW_AT(100a86a8)
    d39 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d39, (double)rdf32(COW_IMG(0x1032dfb0u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d39, (double)rdf32(COW_IMG(0x1032dfb0u)), 0u) & 0x100u;
        goto L_100a86d2;
    }
    eax = cow_fsw(g, d39, (double)rdf32(COW_IMG(0x1032dfb0u)), 0u) & 0x100u;
    COW_AT(100a86bb)
    g->esp = sp0 - 0x54u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = in_edi;
    return 1u;
L_100a86d2: ;
    COW_AT(100a86d2)
    d40 = (double)rdf32(sp0 + 4u);
    if (!(d40 < (double)rdf32(COW_IMG(0x1032dfb0u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, (double)rdf32(COW_IMG(0x1032dfb0u)), 0u);
        goto L_100a870d;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, (double)rdf32(COW_IMG(0x1032dfb0u)), 0u);
    COW_AT(100a86e3)
    d41 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d41, (double)rdf32(COW_IMG(0x1032dfacu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d41, (double)rdf32(COW_IMG(0x1032dfacu)), 0u) & 0x100u;
        goto L_100a870d;
    }
    eax = cow_fsw(g, d41, (double)rdf32(COW_IMG(0x1032dfacu)), 0u) & 0x100u;
    COW_AT(100a86f6)
    g->esp = sp0 - 0x54u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = in_edi;
    return 2u;
L_100a870d: ;
    COW_AT(100a870d)
    d42 = (double)rdf32(sp0 + 4u);
    if (!(d42 < (double)rdf32(COW_IMG(0x1032dfacu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x1032dfacu)), 0u);
        goto L_100a8748;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x1032dfacu)), 0u);
    COW_AT(100a871e)
    d43 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d43, (double)rdf32(COW_IMG(0x1032dfa8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d43, (double)rdf32(COW_IMG(0x1032dfa8u)), 0u) & 0x100u;
        goto L_100a8748;
    }
    eax = cow_fsw(g, d43, (double)rdf32(COW_IMG(0x1032dfa8u)), 0u) & 0x100u;
    COW_AT(100a8731)
    g->esp = sp0 - 0x54u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = in_edi;
    return 3u;
L_100a8748: ;
    COW_AT(100a8748)
    wr32(sp0 - 0x58u, COW_IMG(0x1035bcfcu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t44 = cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    t45 = g->edx;
    eax = t44;
    edx = t45;
L_100a8755: ;
    COW_AT(100a8755)
    g->esp = sp0 - 0x54u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = in_edi;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a8490(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a84a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x100a84b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x100a84c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x100a84d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x100a8537u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a8540u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a8596u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a85a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a85beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a85d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a85e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a85f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a860cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a861du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a8634u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a8647u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a8658u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a866fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a8680u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a8697u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a86a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a86bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a86d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a86e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a86f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a870du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a871eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a8731u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a8748u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a8755u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a8490(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a8490(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
