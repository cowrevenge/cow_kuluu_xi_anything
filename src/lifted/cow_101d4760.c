/* f_0x101d4760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101d4760(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d17;
    double d20;
    double d21;
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
    double d44;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_18_f;
    double loc_20_f;
    double loc_2c_f;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t t1;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101d4775u: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_101d4775;
    case 0x101d479au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_101d479a;
    case 0x101d479fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d479f;
    case 0x101d47b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d47b2;
    case 0x101d47bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d47ba;
    case 0x101d47c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d47c4;
    case 0x101d47d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d47d4;
    case 0x101d47e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d47e5;
    case 0x101d47fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d47fd;
    case 0x101d4801u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d4801;
    case 0x101d4825u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d4825;
    case 0x101d4880u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101d4880;
    case 0x101d49dau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d49da;
    case 0x101d49e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d49e6;
    case 0x101d49fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d49fd;
    case 0x101d4a07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101d4a07;
    case 0x101d4a0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); goto E_101d4a0b;
    default: break;
    }
#endif

    COW_AT(101d4760)
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    if (arg1 == 0u)
    {
        loc_34 = in_ebx;
        loc_38 = in_ebp;
        loc_3c = in_esi;
        loc_40 = in_edi;
        goto L_101d4a0b;
    }
    COW_AT(101d4775)
    if (rd32(self + rd8(arg1 + 2u) * 4u + (rd32(sp0 + 8u) == 9u) * 0x144u + 0x4cu) == 0u)
    {
        loc_34 = in_ebx;
        loc_38 = in_ebp;
        loc_3c = in_esi;
        loc_40 = in_edi;
        goto L_101d4a0b;
    }
    eax = rd8(arg1 + 2u) + (rd32(sp0 + 8u) == 9u) * 0x51u;
    ecx = rd32(self + rd8(arg1 + 2u) * 4u + (rd32(sp0 + 8u) == 9u) * 0x144u + 0x4cu);
    edx = rd32(sp0 + 8u);
    edi = (rd32(sp0 + 8u) == 9u) * 0x51u;
    COW_AT(101d479a)
    g->esp = sp0 - 0x40u;
    t1 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
    eax = t1;
    COW_AT(101d479f)
    if (eax == 0u) goto L_101d49e6;
    ebp = rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u);
    esi = eax;
    COW_AT(101d47b2)
    if (ebp == 0u) goto L_101d49e6;
    COW_AT(101d47ba)
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t2 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    eax = t2;
    COW_AT(101d47c4)
    wr32(sp0 - 0x30u, rd32(eax));
    g->eax = rd32(eax);
    t3 = rd32(eax);
    g->esp = sp0 - 0x40u;
    t4 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    eax = t4;
    COW_AT(101d47d4)
    t5 = rd32(eax + 4u);
    wr32(sp0 - 0x2cu, t5);
    g->eax = t5;
    g->esp = sp0 - 0x40u;
    t6 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    eax = t6;
    COW_AT(101d47e5)
    t7 = rd32(eax + 8u);
    wr32(sp0 - 0x28u, t7);
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    wr32(sp0 - 0x48u, 0xcu);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x40u;
    t8 = cow_thiscall(g, rd32(rd32(esi) + 0x1c4u), esi, 2, 0xcu, sp0 - 0x10u);
    eax = t8;
    COW_AT(101d47fd)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(101d4801)
        d9 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xcu) - (double)rdf32(sp0 - 0x2cu)) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(sp0 - 0x2cu));
        wrf32(edi * 4u + self + rd8(arg1 + 2u) * 4u + 0x2d4u, (float)d9);
    }
    COW_AT(101d4825)
    d10 = (double)(float)(double)rdf32(edi * 4u + self + rd8(arg1 + 2u) * 4u + 0x2d4u);
    wrf32(sp0 - 0x2cu, (float)d10);
    d11 = fr(g, (double)rdf32(edi * 4u + self + rd8(arg1 + 2u) * 4u + 0x2d4u) - (double)rdf32(COW_IMG(0x1032b15cu)));
    d12 = (double)(float)-(double)rdf32(sp0 - 0x30u);
    wrf32(sp0 - 0x20u, (float)d12);
    d13 = (double)(float)-(double)rdf32(sp0 - 0x28u);
    wrf32(sp0 - 0x18u, (float)d13);
    d14 = fr(g, d11 - d10);
    d15 = fr(g, sqrt(fr(g, fr(g, fr(g, -(double)rdf32(sp0 - 0x28u) * d13) + fr(g, d14 * d14)) + fr(g, d12 * d12))));
    if (d15 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        x1 = d15;
        x0 = d14;
        goto L_101d4a07;
    }
    loc_2c_f = d10;
    loc_20_f = d12;
    loc_18_f = d13;
    x1 = d15;
    x0 = d14;
    COW_AT(101d4880)
    t16 = rd32(ebp + 0x58u);
    d17 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x1);
    wr32(sp0 - 8u, t16);
    t18 = rd32(ebp + 0x44u);
    wr32(sp0 - 0x10u, t18);
    t19 = rd32(ebp + 0x48u);
    wr32(sp0 - 0xcu, t19);
    d20 = (double)(float)fr(g, d17 * x0);
    wrf32(sp0 - 0x1cu, (float)d20);
    d21 = (double)(float)fr(g, d17 * loc_18_f);
    wrf32(sp0 - 0x18u, (float)d21);
    t22 = rd32(ebp + 0x4cu);
    d23 = fr(g, fr(g, loc_2c_f + (double)rdf32(COW_IMG(0x1032b15cu))) * (double)rdf32(COW_IMG(0x103384c4u)));
    wrf32(sp0 + 8u, (float)d23);
    d24 = fr(g, (double)rdf32(sp0 + 8u) * d21);
    d25 = fr(g, (double)rdf32(sp0 + 8u) * d20);
    wrf32(sp0 - 0x18u, (float)(double)(float)d24);
    d26 = fr(g, fr(g, d23 * fr(g, loc_20_f * d17)) + (double)rdf32(sp0 - 0x30u));
    wrf32(sp0 - 0x20u, (float)(double)(float)d26);
    d27 = fr(g, (double)rdf32(sp0 - 0x30u) - (double)rdf32(ebp + 0x50u));
    d28 = fr(g, (double)(float)d24 + (double)rdf32(sp0 - 0x28u));
    wrf32(sp0 - 0x30u, (float)(double)(float)d27);
    d29 = fr(g, loc_2c_f - (double)rdf32(ebp + 0x54u));
    wrf32(sp0 - 0x2cu, (float)(double)(float)d29);
    d30 = fr(g, (double)rdf32(sp0 - 0x28u) - cow_bits2f(t16));
    wr32(sp0 - 8u, t22);
    wrf32(sp0 - 0x28u, (float)(double)(float)d30);
    d31 = (double)(float)fr(g, (double)(float)d26 - cow_bits2f(t18));
    wrf32(sp0 - 0x20u, (float)d31);
    d32 = (double)(float)fr(g, fr(g, d25 + loc_2c_f) - cow_bits2f(t19));
    wrf32(sp0 - 0x1cu, (float)d32);
    d33 = fr(g, (double)(float)d29 * (double)rdf32(COW_IMG(0x1032b15cu)));
    d34 = fr(g, (double)(float)d27 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x2cu, (float)(double)(float)d33);
    d35 = fr(g, (double)(float)d30 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x28u, (float)(double)(float)d35);
    d36 = fr(g, d31 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x20u, (float)(double)(float)d36);
    d37 = fr(g, d32 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x1cu, (float)(double)(float)d37);
    d38 = fr(g, fr(g, d28 - cow_bits2f(t22)) * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x18u, (float)(double)(float)d38);
    d39 = fr(g, d34 + (double)rdf32(ebp + 0x50u));
    wrf32(sp0 - 0x30u, (float)(double)(float)d39);
    d40 = fr(g, (double)(float)d33 + (double)rdf32(ebp + 0x54u));
    wrf32(sp0 - 0x2cu, (float)(double)(float)d40);
    d41 = fr(g, (double)(float)d35 + (double)rdf32(ebp + 0x58u));
    wrf32(sp0 - 0x28u, (float)(double)(float)d41);
    d42 = fr(g, (double)(float)d36 + (double)rdf32(ebp + 0x44u));
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    wrf32(sp0 - 0x20u, (float)(double)(float)d42);
    d43 = fr(g, (double)(float)d37 + (double)rdf32(ebp + 0x48u));
    wrf32(sp0 - 0x1cu, (float)(double)(float)d43);
    d44 = fr(g, (double)(float)d38 + (double)rdf32(ebp + 0x4cu));
    wrf32(sp0 - 0x18u, (float)(double)(float)d44);
    g->eax = sp0 - 0x30u;
    g->edx = t22;
    g->esp = sp0 - 0x40u;
    t45 = cow_thiscall(g, COW_IMG(0x1001e780u), ebp, 1, sp0 - 0x30u);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    COW_AT(101d49da)
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x1001e760u), ebp, 1, sp0 - 0x20u);
L_101d49e6: ;
    COW_AT(101d49e6)
    t47 = rd32(edi * 4u + self + rd8(arg1 + 2u) * 4u + 0x4cu);
    wr32(sp0 - 0x44u, t47);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x101d4310u), self, 1, t47);
    COW_AT(101d49fd)
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    return;
L_101d4a07: ;
    COW_AT(101d4a07)
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
L_101d4a0b: ;
    COW_AT(101d4a0b)
    g->ebx = loc_34;
    g->esi = loc_3c;
    g->edi = loc_40;
    g->ebp = loc_38;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101d4760(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101d4775u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101d479au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101d479fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101d47b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101d47bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101d47c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101d47d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101d47e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101d47fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101d4801u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101d4825u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101d4880u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_18_f;
        double loc_20_f;
        double loc_2c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101d49dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x44u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x101d49e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101d49fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101d4a07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        double loc_2c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101d4a0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        double loc_2c_f;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101d4760(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101d4760(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
