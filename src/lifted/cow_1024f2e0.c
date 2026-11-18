/* f_0x1024f2e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1024f2e0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d15;
    double d16;
    double d17;
    double d18;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
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
    double d40;
    double d41;
    double d42;
    double d43;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_a8_f;
    double loc_ac_f;
    uint32_t loc_b0;
    double loc_c0_f;
    uint32_t loc_c8;
    uint32_t loc_f0;
    uint32_t t1;
    uint32_t t13;
    uint32_t t14;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    double x1;
    double x2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 280u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1024f307u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xe4u); in_esi = rd32(sp0 - 0xe0u); in_ebp = rd32(sp0 - 0xdcu); in_ebx = rd32(sp0 - 0xd8u); g->ebp = rd32(sp0 - 0xdcu); g->ebx = rd32(sp0 - 0xd8u); g->edi = rd32(sp0 - 0xe4u); g->esi = rd32(sp0 - 0xe0u); goto E_1024f307;
    case 0x1024f312u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xe4u); in_esi = rd32(sp0 - 0xe0u); in_ebp = rd32(sp0 - 0xdcu); in_ebx = rd32(sp0 - 0xd8u); g->ebp = rd32(sp0 - 0xdcu); g->ebx = rd32(sp0 - 0xd8u); g->edi = rd32(sp0 - 0xe4u); g->esi = rd32(sp0 - 0xe0u); goto E_1024f312;
    case 0x1024f31du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_f0 = rd32(sp0 - 0xf0u); in_edi = rd32(sp0 - 0xe4u); in_esi = rd32(sp0 - 0xe0u); in_ebp = rd32(sp0 - 0xdcu); in_ebx = rd32(sp0 - 0xd8u); g->ebp = rd32(sp0 - 0xdcu); g->ebx = rd32(sp0 - 0xd8u); g->edi = rd32(sp0 - 0xe4u); g->esi = rd32(sp0 - 0xe0u); goto E_1024f31d;
    case 0x1024f3d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_f0 = rd32(sp0 - 0xf0u); loc_c8 = rd32(sp0 - 0xc8u); loc_c0_f = rdf32(sp0 - 0xc0u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); goto E_1024f3d8;
    case 0x1024f3e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_f0 = rd32(sp0 - 0xf0u); loc_c8 = rd32(sp0 - 0xc8u); loc_c0_f = rdf32(sp0 - 0xc0u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); goto E_1024f3e2;
    case 0x1024f4d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024f4d3;
    case 0x1024f4e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024f4e2;
    case 0x1024f4f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024f4f3;
    case 0x1024f502u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024f502;
    case 0x1024f515u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024f515;
    case 0x1024f526u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024f526;
    case 0x1024f535u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024f535;
    case 0x1024f53au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024f53a;
    case 0x1024f53du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024f53d;
    case 0x1024f540u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024f540;
    case 0x1024f580u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_c0_f = rdf32(sp0 - 0xc0u); loc_ac_f = rdf32(sp0 - 0xacu); x2 = ST(0); x1 = ST(1); x0 = ST(2); goto E_1024f580;
    case 0x1024f58bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_c0_f = rdf32(sp0 - 0xc0u); loc_ac_f = rdf32(sp0 - 0xacu); x2 = ST(0); x1 = ST(1); x0 = ST(2); goto E_1024f58b;
    case 0x1024f596u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_c0_f = rdf32(sp0 - 0xc0u); loc_ac_f = rdf32(sp0 - 0xacu); x2 = ST(0); x1 = ST(1); x0 = ST(2); goto E_1024f596;
    case 0x1024f5bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_c0_f = rdf32(sp0 - 0xc0u); loc_ac_f = rdf32(sp0 - 0xacu); x2 = ST(0); x1 = ST(1); x0 = ST(2); goto E_1024f5bc;
    case 0x1024f5c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_c0_f = rdf32(sp0 - 0xc0u); loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024f5c2;
    case 0x1024f5c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_c0_f = rdf32(sp0 - 0xc0u); loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024f5c8;
    case 0x1024f5d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_c0_f = rdf32(sp0 - 0xc0u); loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024f5d6;
    case 0x1024f5e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_f0 = rd32(sp0 - 0xf0u); loc_c8 = rd32(sp0 - 0xc8u); loc_c0_f = rdf32(sp0 - 0xc0u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); goto E_1024f5e0;
    case 0x1024f5edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_f0 = rd32(sp0 - 0xf0u); loc_c8 = rd32(sp0 - 0xc8u); loc_c0_f = rdf32(sp0 - 0xc0u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); goto E_1024f5ed;
    default: break;
    }
#endif

    COW_AT(1024f2e0)
    wr32(sp0 - 0xd8u, in_ebx);
    wr32(sp0 - 0xdcu, in_ebp);
    wr32(sp0 - 0xe0u, in_esi);
    wr32(sp0 - 0xe4u, in_edi);
    wr32(sp0 - 0xe8u, sp0 - 0x98u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xe4u;
    cow_cdecl(g, COW_IMG(0x10271eb0u), 1, sp0 - 0x98u);
    t1 = g->ecx;
    t2 = g->edx;
    if (!(rd32(sp0 - 0x98u) >> 8u & 1u))
    {
        ecx = t1;
    COW_AT(1024f312)
        wr32(sp0 - 0xe8u, sp0 - 0x94u);
        wr32(sp0 - 0xecu, 0u);
        t3 = rd32(arg1 + 0x1cu);
        wr32(sp0 - 0xf0u, t3);
        eax = t3;
        edx = sp0 - 0x94u;
        loc_f0 = t3;
    }
    else
    {
        eax = rd32(sp0 - 0x98u);
        edx = t2;
    COW_AT(1024f307)
        wr32(sp0 - 0xe8u, sp0 - 0x94u);
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, 6u);
        ecx = sp0 - 0x94u;
        loc_f0 = 6u;
    }
    COW_AT(1024f31d)
    g->eax = eax;
    g->esp = sp0 - 0xe4u;
    t4 = cow_cdecl(g, COW_IMG(0x10273390u), 3, loc_f0, 0u, sp0 - 0x94u);
    t5 = rd32(COW_IMG(0x1099d200u)) + 0x208u;
    wr32(sp0 - 0xe8u, t5);
    wr32(sp0 - 0xecu, sp0 - 0x80u);
    g->edx = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x80u, t5);
    t6 = g->edx;
    t7 = rd32(COW_IMG(0x1099d200u)) + 0x2ecu;
    wr32(sp0 - 0xf0u, t7);
    wr32(sp0 - 0xf4u, sp0 - 0x40u);
    g->esp = sp0 - 0xecu;
    cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x40u, t7);
    wr32(sp0 - 0xf8u, arg1 + 0x88u);
    wr32(sp0 - 0xfcu, sp0 - 0x80u);
    wr32(sp0 - 0x100u, sp0 - 0x90u);
    t8 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x750u);
    wr32(sp0 - 0xc4u, t8);
    g->esp = sp0 - 0xf4u;
    cow_cdecl(g, COW_IMG(0x1027f000u), 3, sp0 - 0x90u, sp0 - 0x80u, arg1 + 0x88u);
    wr32(sp0 - 0x104u, sp0 - 0x90u);
    wr32(sp0 - 0x108u, sp0 - 0x40u);
    wr32(sp0 - 0x10cu, sp0 - 0xa8u);
    g->esp = sp0 - 0x100u;
    cow_cdecl(g, COW_IMG(0x1027f000u), 3, sp0 - 0xa8u, sp0 - 0x40u, sp0 - 0x90u);
    d9 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x9cu));
    wr32(sp0 - 0x9cu, 0x3f800000u);
    wr32(arg1 + 0x20u, 0xffffffffu);
    wr32(sp0 - 0xb0u, 0x47c35000u);
    d10 = fr(g, (double)rdf32(sp0 - 0xa8u) * d9);
    wrf32(sp0 - 0xa8u, (float)(double)(float)d10);
    d11 = fr(g, (double)rdf32(sp0 - 0xa4u) * d9);
    wrf32(sp0 - 0xa4u, (float)(double)(float)d11);
    d12 = fr(g, d9 * (double)rdf32(sp0 - 0xa0u));
    wrf32(sp0 - 0xa0u, (float)(double)(float)d12);
    ebp = 0u;
    esi = COW_IMG(0x103890fcu);
    loc_b0 = 0x47c35000u;
    loc_a8_f = (double)(float)d10;
    loc_c8 = rd32(sp0 - 0xc8u);
L_1024f3d8: ;
    COW_AT(1024f3d8)
    if (rd8(esi - 0x14u) & 1u)
    {
    COW_AT(1024f3e2)
        t13 = rd32(esi - 8u);
        wr32(sp0 - 0xc0u, t13);
        t14 = rd32(esi - 4u);
        wr32(sp0 - 0xb8u, t14);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xbcu, 0x40000000u);
        wr32(sp0 - 0xb4u, 0x3f800000u);
        g->esp = sp0 - 0xe4u;
        cow_cdecl(g, COW_IMG(0x1027f000u), 3, sp0 - 0x90u, sp0 - 0x80u, sp0 - 0xc0u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        g->esp = sp0 - 0xf0u;
        cow_cdecl(g, COW_IMG(0x1027f000u), 3, sp0 - 0xd4u, sp0 - 0x40u, sp0 - 0x90u);
        d15 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0xc8u));
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        wr32(sp0 - 0xbcu, 0x420c0000u);
        d16 = fr(g, (double)rdf32(sp0 - 0xd4u) * d15);
        wrf32(sp0 - 0xd4u, (float)(double)(float)d16);
        d17 = fr(g, (double)rdf32(sp0 - 0xd0u) * d15);
        wrf32(sp0 - 0xd0u, (float)(double)(float)d17);
        d18 = fr(g, d15 * (double)rdf32(sp0 - 0xccu));
        wrf32(sp0 - 0xccu, (float)(double)(float)d18);
        g->ecx = sp0 - 0x90u;
        g->esp = sp0 - 0xfcu;
        cow_cdecl(g, COW_IMG(0x1027f000u), 3, sp0 - 0x90u, sp0 - 0x80u, sp0 - 0xc0u);
        t19 = g->ecx;
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x114u, esi);
        g->eax = sp0 - 0x40u;
        g->esp = sp0 - 0x108u;
        t20 = cow_cdecl(g, COW_IMG(0x1027f000u), 3, esi, sp0 - 0x40u, sp0 - 0x90u);
        t21 = rd32(esi - 0x14u);
        d22 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(esi + 0xcu));
        wr32(esi + 0xcu, 0x3f800000u);
        wr32(esi - 0x14u, t21 & 0xfffffff9u);
        d23 = fr(g, d22 * (double)rdf32(esi));
        wrf32(esi, (float)d23);
        d24 = fr(g, d22 * (double)rdf32(esi + 4u));
        wrf32(esi + 4u, (float)d24);
        d25 = fr(g, d22 * (double)rdf32(esi + 8u));
        wrf32(esi + 8u, (float)d25);
        d26 = (double)(float)-(double)rdf32(sp0 - 0xc4u);
        wrf32(sp0 - 0xacu, (float)d26);
        d27 = (double)rdf32(sp0 - 0xd4u);
        if ((cow_fsw(g, d27, d26, 0u) & 0x100u) == 0u)
        {
            eax = cow_fsw(g, d27, d26, 0u) & 0x100u;
            ecx = t21 & 0xfffffff9u;
            loc_ac_f = d26;
    COW_AT(1024f4d3)
            d28 = (double)rdf32(sp0 - 0xd4u);
            d29 = (double)rdf32(sp0 - 0xc4u);
            if (d28 <= d29)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, d29, 0u);
    COW_AT(1024f4e2)
                d30 = (double)rdf32(sp0 - 0xd0u);
                if ((cow_fsw(g, d30, loc_ac_f, 0u) & 0x100u) == 0u)
                {
                    eax = cow_fsw(g, d30, loc_ac_f, 0u) & 0x100u;
    COW_AT(1024f4f3)
                    d31 = (double)rdf32(sp0 - 0xd0u);
                    d32 = (double)rdf32(sp0 - 0xc4u);
                    if (d31 <= d32)
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, d32, 0u);
    COW_AT(1024f502)
                        d33 = (double)rdf32(sp0 - 0xccu);
                        if ((cow_fsw(g, d33, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) == 0u)
                        {
                            eax = cow_fsw(g, d33, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(1024f515)
                            d34 = (double)rdf32(sp0 - 0xccu);
                            if (d34 <= (double)rdf32(COW_IMG(0x1032961cu)))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(1024f526)
                                d35 = (double)rdf32(sp0 - 0xd4u);
                                d36 = (double)rdf32(sp0 - 0xa8u);
                                if (!(d35 < d36))
                                {
    COW_AT(1024f53a)
                                    ecx = ecx | 4u;
                                }
                                else
                                {
    COW_AT(1024f535)
                                    ecx = ecx | 2u;
                                }
    COW_AT(1024f53d)
                                wr32(esi - 0x14u, ecx);
                            }
                        }
                    }
                }
            }
        }
    COW_AT(1024f540)
        d37 = fr(g, (double)rdf32(arg1 + 0x88u) - (double)rdf32(esi - 8u));
        wr32(sp0 - 0xbcu, 0x40000000u);
        wr32(sp0 - 0xb4u, 0x3f800000u);
        wrf32(sp0 - 0xc0u, (float)(double)(float)d37);
        d38 = fr(g, (double)rdf32(arg1 + 0x90u) - (double)rdf32(esi - 4u));
        wrf32(esi - 0xcu, (float)fr(g, sqrt(fr(g, fr(g, d38 * d38) + fr(g, (double)(float)d37 * (double)(float)d37)))));
        if (rd32(arg1 + 8u) != 7u)
        {
            eax = rd32(arg1 + 8u);
            loc_c0_f = (double)(float)d37;
            x2 = (double)rdf32(esi - 0x10u);
            x1 = fr(g, sqrt(fr(g, fr(g, d38 * d38) + fr(g, (double)(float)d37 * (double)(float)d37))));
            x0 = d38;
        }
        else
        {
            eax = rd32(arg1 + 8u);
            loc_c0_f = (double)(float)d37;
            x2 = (double)rdf32(esi - 0x10u);
            x1 = fr(g, sqrt(fr(g, fr(g, d38 * d38) + fr(g, (double)(float)d37 * (double)(float)d37))));
            x0 = d38;
    COW_AT(1024f580)
            x2 = fr(g, (double)rdf32(esi - 0x10u) * (double)rdf32(COW_IMG(0x1032a3acu)));
        }
    COW_AT(1024f58b)
        if (!(x1 < x2))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, x2, 3u);
    COW_AT(1024f5bc)
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, x2, 3u);
    COW_AT(1024f596)
            d39 = (double)(float)fr(g, fr(g, x2 / x1) * x0);
            wrf32(sp0 - 0xb8u, (float)d39);
            d40 = fr(g, fr(g, loc_c0_f * fr(g, x2 / x1)) + (double)rdf32(esi - 8u));
            wrf32(arg1 + 0x88u, (float)d40);
            d41 = fr(g, d39 + (double)rdf32(esi - 4u));
            wrf32(arg1 + 0x90u, (float)d41);
        }
    COW_AT(1024f5c2)
        if ((rd8(esi - 0x14u) & 6u) == 0u)
        {
            loc_b0 = rd32(sp0 - 0xb0u);
            loc_a8_f = (double)rdf32(sp0 - 0xa8u);
            loc_c8 = 0x3f800000u;
        }
        else
        {
    COW_AT(1024f5c8)
            d42 = (double)rdf32(esi - 0xcu);
            d43 = (double)rdf32(sp0 - 0xb0u);
            if (!(d42 < d43))
            {
                loc_b0 = rd32(sp0 - 0xb0u);
                loc_a8_f = (double)rdf32(sp0 - 0xa8u);
                loc_c8 = 0x3f800000u;
            }
            else
            {
    COW_AT(1024f5d6)
                wr32(arg1 + 0x20u, ebp);
                t44 = rd32(esi - 0xcu);
                wr32(sp0 - 0xb0u, t44);
                loc_b0 = t44;
                loc_a8_f = (double)rdf32(sp0 - 0xa8u);
                loc_c8 = 0x3f800000u;
            }
        }
    }
    COW_AT(1024f5e0)
    if ((int32_t)(ebp + 1u) < 15)
    {
        ebp = ebp + 1u;
        esi = esi + 0x24u;
        goto L_1024f3d8;
    }
    COW_AT(1024f5ed)
    g->ebx = rd32(sp0 - 0xd8u);
    g->esi = rd32(sp0 - 0xe0u);
    g->edi = rd32(sp0 - 0xe4u);
    g->ebp = rd32(sp0 - 0xdcu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1024f2e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1024f307u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xe4u);
        in_esi = rd32(sp0 - 0xe0u);
        in_ebp = rd32(sp0 - 0xdcu);
        in_ebx = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0xe4u;
        g->edi = arg1;
        wr32(sp0 - 0xe8u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x1024f312u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xe4u);
        in_esi = rd32(sp0 - 0xe0u);
        in_ebp = rd32(sp0 - 0xdcu);
        in_ebx = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0xe4u;
        g->edi = arg1;
        wr32(sp0 - 0xe8u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x1024f31du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_f0 = rd32(sp0 - 0xf0u);
        in_edi = rd32(sp0 - 0xe4u);
        in_esi = rd32(sp0 - 0xe0u);
        in_ebp = rd32(sp0 - 0xdcu);
        in_ebx = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0xf0u;
        g->edi = arg1;
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xe8u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x1024f3d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        double loc_c0_f;
        uint32_t loc_c8;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1024f3e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        double loc_c0_f;
        uint32_t loc_c8;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1024f4d3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f4e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f4f3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f502u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f515u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f526u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f535u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f53au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f53du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f540u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f580u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        double loc_c0_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f58bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        double loc_c0_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f596u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        double loc_c0_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f5bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        double loc_c0_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f5c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        double loc_c0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f5c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        double loc_c0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f5d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_ac_f;
        double loc_c0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0x40u);
        wr32(sp0 - 0x10cu, sp0 - 0x90u);
        wr32(sp0 - 0x108u, sp0 - 0x90u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xfcu, sp0 - 0xd4u);
        wr32(sp0 - 0xf8u, sp0 - 0x40u);
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xf0u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1024f5e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        double loc_c0_f;
        uint32_t loc_c8;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1 + 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1024f5edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        double loc_c0_f;
        uint32_t loc_c8;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xecu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1024f2e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1024f2e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
