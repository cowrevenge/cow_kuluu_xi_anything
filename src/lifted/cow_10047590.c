/* f_0x10047590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10047590(Guest* g)
{
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
    double d40;
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100475a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_100475a3;
    case 0x100475cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100475cb;
    case 0x100475deu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100475de;
    case 0x100475f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100475f5;
    case 0x1004760cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004760c;
    case 0x10047629u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10047629;
    case 0x10047631u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10047631;
    case 0x10047644u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10047644;
    case 0x10047658u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10047658;
    case 0x10047662u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10047662;
    case 0x10047671u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10047671;
    case 0x1004767bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004767b;
    case 0x10047690u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10047690;
    case 0x100476a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100476a2;
    case 0x100476b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100476b5;
    case 0x100476c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100476c7;
    case 0x100476dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100476dc;
    case 0x100476eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100476ee;
    case 0x10047701u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10047701;
    case 0x10047713u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10047713;
    case 0x1004771au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004771a;
    case 0x10047775u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10047775;
    case 0x10047792u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10047792;
    case 0x100477c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100477c1;
    default: break;
    }
#endif

    COW_AT(10047590)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall(g, COW_IMG(0x10044c40u), self, 1, sp0 - 0x18u);
    eax = t1;
    COW_AT(100475a3)
    wr32(sp0 - 0xcu, rd32(eax));
    t2 = rd32(eax + 4u);
    wr32(sp0 - 8u, t2);
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    t3 = rd32(self + 0x1d5u) + 0x34u;
    wr32(sp0 - 0x34u, t3);
    t4 = rd32(eax + 8u);
    wr32(sp0 - 4u, t4);
    g->edx = t3;
    t5 = rd32(eax);
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, t3, sp0 - 0xcu);
    t6 = g->edx;
    edx = t6;
    COW_AT(100475cb)
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x2cu;
    t7 = cow_thiscall(g, COW_IMG(0x100a57c0u), rd32(self + 0x1d5u), 1, sp0 - 0xcu);
    eax = t7;
    COW_AT(100475de)
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    t8 = rd32(self + 0x1d5u) + 0x5c4u;
    wr32(sp0 - 0x34u, t8);
    g->edx = t8;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, t8, sp0 - 0xcu);
    t9 = g->edx;
    edx = t9;
    COW_AT(100475f5)
    wr32(sp0 - 0x38u, sp0 - 0xcu);
    t10 = rd32(self + 0x1d5u) + 0x5fcu;
    wr32(sp0 - 0x3cu, t10);
    g->eax = sp0 - 0xcu;
    t11 = rd32(self + 0x1d5u);
    g->esp = sp0 - 0x34u;
    t12 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t10, sp0 - 0xcu);
    eax = t12;
    esi = t11;
    COW_AT(1004760c)
    wr32(esi + 0x608u, 0x3f800000u);
    t13 = rd32(self + 0x1d5u);
    g->eax = eax;
    g->edx = rd32(t13);
    t14 = rd32(t13);
    g->esp = sp0 - 0x2cu;
    t15 = cow_thiscall(g, rd32(t14 + 0x318u), t13, 0);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    esi = t13;
    COW_AT(10047629)
    if (eax == 0u)
    {
    COW_AT(10047631)
        wr32(sp0 - 0x30u, self + 0xe0u);
        wr32(sp0 - 0x34u, esi + 0x61cu);
        g->eax = self + 0xe0u;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t18 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x61cu, self + 0xe0u);
        t19 = g->edx;
        eax = t18;
        edx = t19;
        edi = esi + 0x61cu;
    COW_AT(10047644)
        if ((cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10047658)
            d20 = fr(g, (double)rdf32(edi) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi, (float)d20);
        }
    COW_AT(10047662)
        if (!((double)rdf32(edi) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10047671)
            d21 = fr(g, (double)rdf32(edi) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi, (float)d21);
        }
    COW_AT(1004767b)
        d22 = (double)rdf32(esi + 0x620u);
        if ((cow_fsw(g, d22, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d22, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d22, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10047690)
            d23 = fr(g, (double)rdf32(esi + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi + 0x620u, (float)d23);
        }
    COW_AT(100476a2)
        d24 = (double)rdf32(esi + 0x620u);
        if (!(d24 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100476b5)
            d25 = fr(g, (double)rdf32(esi + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi + 0x620u, (float)d25);
        }
    COW_AT(100476c7)
        d26 = (double)rdf32(esi + 0x624u);
        if ((cow_fsw(g, d26, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d26, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d26, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100476dc)
            d27 = fr(g, (double)rdf32(esi + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi + 0x624u, (float)d27);
        }
    COW_AT(100476ee)
        d28 = (double)rdf32(esi + 0x624u);
        if (!(d28 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10047701)
            d29 = fr(g, (double)rdf32(esi + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi + 0x624u, (float)d29);
        }
    }
    COW_AT(10047713)
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x10045d40u), self, 10, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    COW_AT(1004771a)
    esi = self + 0xa0u;
    edi = self + 0x194u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t30 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t31 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t30);
    t32 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(sp0 - 0x1cu, t32);
    t33 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t34 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t34 + 0xa90u, t33);
    esi = self + 0x194u;
    edi = t31;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = t34;
    g->esp = sp0 - 0x2cu;
    t35 = cow_stdcall(g, COW_IMG(0x10015240u), 0);
    eax = t35;
    ebp = t31;
    COW_AT(10047775)
    t36 = rd32(sp0 - 0x1cu);
    esi = eax;
    edi = t36;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x30u, t36);
    wr32(sp0 - 0x34u, ebp);
    wr32(sp0 - 0x38u, ebp);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, ebp, ebp, t36);
    COW_AT(10047792)
    esi = ebp;
    edi = self + 0x194u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(rd32(self + 0x1d5u) + 0x5f8u, self + 0x194u);
    t37 = rd32(self + 0xf8u);
    wr32(sp0 - 0x30u, t37);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x1d5u)) + 0x30u), rd32(self + 0x1d5u), 1, t37);
    esi = t37;
    COW_AT(100477c1)
    wr32(sp0 - 0x18u, esi >> 0x18u);
    wr32(sp0 - 0x14u, 0u);
    t38 = rd32(sp0 - 0x28u);
    t39 = rd32(sp0 - 0x2cu);
    d40 = fr(g, (double)(int64_t)cow_i64(esi >> 0x18u, 0u) * (double)rdf32(COW_IMG(0x1032a778u)));
    wrf32(rd32(self + 0x1d5u) + 0x59cu, (float)d40);
    t41 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t42 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t42 + 0xa90u, t41);
    t43 = rd32(sp0 - 0x1cu);
    wr32(t41 * 4u + t42 + 0xa10u, t43);
    t44 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t45 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t45 + 0xa90u, t44);
    wr32(t44 * 4u + t45 + 0xa10u, ebp);
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = t38;
    g->edi = t39;
    g->ebp = rd32(sp0 - 0x24u);
    g->edx = t43;
    return t45;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10047590(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100475a3u:
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
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100475cbu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100475deu:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100475f5u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1004760cu:
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
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047629u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047631u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047644u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047658u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047662u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047671u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1004767bu:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047690u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100476a2u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100476b5u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100476c7u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100476dcu:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100476eeu:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047701u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047713u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1004771au:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047775u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047792u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100477c1u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10047590(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10047590(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
