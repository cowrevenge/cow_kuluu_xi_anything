/* f_0x1006ed10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_1006ed10(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d14;
    double d16;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t13;
    uint32_t t15;
    uint32_t t17;
    uint32_t t2;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t4;
    double x0;
    double x1;
    double x2;
    double x3;
    double x4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006ed84u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ed84;
    case 0x1006ed94u: ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ed94;
    case 0x1006ed9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ed9a;
    case 0x1006edeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006edee;
    case 0x1006ee15u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ee15;
    case 0x1006ee1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ee1b;
    case 0x1006ee2au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ee2a;
    case 0x1006ee32u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ee32;
    case 0x1006ee3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ee3c;
    case 0x1006ee3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ee3e;
    case 0x1006ee4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ee4b;
    case 0x1006ee4du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ee4d;
    case 0x1006ee88u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ee88;
    case 0x1006ee90u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ee90;
    case 0x1006eea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006eea1;
    case 0x1006eea9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006eea9;
    case 0x1006eeb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006eeb8;
    case 0x1006eec0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006eec0;
    case 0x1006eecfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006eecf;
    case 0x1006eed5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006eed5;
    case 0x1006eee8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006eee8;
    case 0x1006eefbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006eefb;
    case 0x1006ef0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ef0e;
    case 0x1006ef21u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ef21;
    case 0x1006ef27u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ef27;
    case 0x1006ef31u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1006ef31;
    default: break;
    }
#endif

    COW_AT(1006ed10)
    t1 = rd32(sp0 + 0x14u);
    t2 = rd32(sp0 + 0x10u);
    wr32(self + 0xa94u, 0u);
    wr32(self + 0xa98u, 0x461c4000u);
    wr32(self + 0xa9cu, 0xc61c4000u);
    t3 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t4 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t3);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, t4, t2, t1);
    esi = t4;
    COW_AT(1006ed84)
    if ((int32_t)arg3 <= 0)
    {
        loc_c = 0x461c4000u;
        loc_10 = 0x461c4000u;
        loc_8 = 0xc61c4000u;
        x0 = cow_bits2f(0xc61c4000u);
    }
    else
    {
    COW_AT(1006ed94)
        eax = arg3;
        ecx = arg2;
        edx = arg3;
        loc_c = 0x461c4000u;
        loc_10 = 0x461c4000u;
        loc_8 = 0xc61c4000u;
        x0 = cow_bits2f(0xc61c4000u);
L_1006ed9a: ;
    COW_AT(1006ed9a)
        d5 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(ecx) * (double)rdf32(esi + 0xcu)) + fr(g, (double)rdf32(ecx + 8u) * (double)rdf32(esi + 0x2cu))) + fr(g, (double)rdf32(esi + 0x1cu) * (double)rdf32(ecx + 4u))) + (double)rdf32(esi + 0x3cu));
        if (d5 == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 4u);
            x3 = d5;
            x2 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x24u) * (double)rdf32(ecx + 8u)) + fr(g, (double)rdf32(ecx) * (double)rdf32(esi + 4u))) + fr(g, (double)rdf32(esi + 0x14u) * (double)rdf32(ecx + 4u))) + (double)rdf32(esi + 0x34u));
            x1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(ecx) * (double)rdf32(esi)) + fr(g, (double)rdf32(esi + 0x20u) * (double)rdf32(ecx + 8u))) + fr(g, (double)rdf32(esi + 0x10u) * (double)rdf32(ecx + 4u))) + (double)rdf32(esi + 0x30u));
    COW_AT(1006ee32)
            x3 = (double)rdf32(COW_IMG(0x1032961cu));
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 4u);
            x3 = d5;
            x2 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x24u) * (double)rdf32(ecx + 8u)) + fr(g, (double)rdf32(ecx) * (double)rdf32(esi + 4u))) + fr(g, (double)rdf32(esi + 0x14u) * (double)rdf32(ecx + 4u))) + (double)rdf32(esi + 0x34u));
            x1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(ecx) * (double)rdf32(esi)) + fr(g, (double)rdf32(esi + 0x20u) * (double)rdf32(ecx + 8u))) + fr(g, (double)rdf32(esi + 0x10u) * (double)rdf32(ecx + 4u))) + (double)rdf32(esi + 0x30u));
    COW_AT(1006edee)
            d6 = fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 8u) * (double)rdf32(ecx)) + fr(g, (double)rdf32(esi + 0x18u) * (double)rdf32(ecx + 4u))) + fr(g, (double)rdf32(esi + 0x28u) * (double)rdf32(ecx + 8u))) + (double)rdf32(esi + 0x38u)) / x3);
            d7 = (double)rdf32(self + 0xa98u);
            if (!(d6 < d7))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 5u);
                x4 = d6;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 5u);
                x4 = d6;
    COW_AT(1006ee15)
                wrf32(self + 0xa98u, (float)x4);
            }
    COW_AT(1006ee1b)
            d8 = (double)rdf32(self + 0xa9cu);
            if ((cow_fsw(g, x4, d8, 5u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, x4, d8, 5u) & 0x4100u;
    COW_AT(1006ee3c)
            }
            else
            {
                eax = cow_fsw(g, x4, d8, 5u) & 0x4100u;
    COW_AT(1006ee2a)
                wrf32(self + 0xa9cu, (float)x4);
            }
    COW_AT(1006ee3e)
            if (!(x3 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x3, (double)rdf32(COW_IMG(0x103295d8u)), 4u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x3, (double)rdf32(COW_IMG(0x103295d8u)), 4u);
    COW_AT(1006ee4b)
                x3 = -x3;
            }
        }
    COW_AT(1006ee4d)
        d9 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x3);
        d10 = fr(g, fr(g, fr(g, d9 * x1) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(sp0 + 0x18u));
        wrf32(sp0 + 0x14u, (float)d10);
        d11 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d9 * x2)) * (double)rdf32(sp0 + 0x1cu));
        wrf32(sp0 + 0x10u, (float)d11);
        d12 = (double)rdf32(sp0 + 0x14u);
        if (!(d12 < cow_bits2f(loc_10)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, cow_bits2f(loc_10), 1u);
        }
        else
        {
    COW_AT(1006ee88)
            t13 = rd32(sp0 + 0x14u);
            eax = t13;
            loc_10 = t13;
        }
    COW_AT(1006ee90)
        d14 = (double)rdf32(sp0 + 0x14u);
        if ((cow_fsw(g, d14, cow_bits2f(loc_8), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d14, cow_bits2f(loc_8), 1u) & 0x4100u;
        }
        else
        {
    COW_AT(1006eea1)
            t15 = rd32(sp0 + 0x14u);
            eax = t15;
            loc_8 = t15;
        }
    COW_AT(1006eea9)
        d16 = (double)rdf32(sp0 + 0x10u);
        if (!(d16 < cow_bits2f(loc_c)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, cow_bits2f(loc_c), 1u);
        }
        else
        {
    COW_AT(1006eeb8)
            t17 = rd32(sp0 + 0x10u);
            eax = t17;
            loc_c = t17;
        }
    COW_AT(1006eec0)
        d18 = (double)rdf32(sp0 + 0x10u);
        if ((cow_fsw(g, d18, x0, 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d18, x0, 1u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d18, x0, 1u) & 0x4100u;
    COW_AT(1006eecf)
            x0 = (double)rdf32(sp0 + 0x10u);
        }
    COW_AT(1006eed5)
        d19 = (double)rdf32(sp0 + 0x14u);
        if ((cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
    COW_AT(1006eee8)
            d20 = (double)rdf32(sp0 + 0x18u);
            d21 = fr(g, d20 + d20);
            d22 = (double)rdf32(sp0 + 0x14u);
            if ((cow_fsw(g, d21, d22, 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d21, d22, 1u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d21, d22, 1u) & 0x4100u;
    COW_AT(1006eefb)
                d23 = (double)rdf32(sp0 + 0x10u);
                if ((cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
    COW_AT(1006ef0e)
                    d24 = (double)rdf32(sp0 + 0x1cu);
                    d25 = fr(g, d24 + d24);
                    d26 = (double)rdf32(sp0 + 0x10u);
                    if ((cow_fsw(g, d25, d26, 1u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d25, d26, 1u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d25, d26, 1u) & 0x4100u;
    COW_AT(1006ef21)
                        wr32(self + 0xa94u, rd32(self + 0xa94u) + 1u);
                    }
                }
            }
        }
    COW_AT(1006ef27)
        if (edx != 1u)
        {
            ecx = ecx + 0x10u;
            edx = edx - 1u;
            goto L_1006ed9a;
        }
    }
    COW_AT(1006ef31)
    wrf32(arg1, (float)cow_bits2f(loc_10));
    wr32(arg1 + 4u, loc_c);
    wr32(arg1 + 8u, loc_8);
    wrf32(arg1 + 0xcu, (float)x0);
    t27 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t28 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t28 + 0xa90u, t27);
    wr32(t27 * 4u + t28 + 0xa10u, esi);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1006ed10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006ed84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x10u, 0x461c4000u);
        wr32(sp0 - 0xcu, 0x461c4000u);
        wr32(sp0 - 8u, 0xc61c4000u);
        wr32(sp0 - 4u, 0xc61c4000u);
        (void)sp0;
        return 1;
    }
    case 0x1006ed94u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->eax = arg3;
        wr32(sp0 - 0x10u, 0x461c4000u);
        wr32(sp0 - 0xcu, 0x461c4000u);
        wr32(sp0 - 8u, 0xc61c4000u);
        ST(0) = cow_bits2f(0xc61c4000u);
        (void)sp0;
        return 1;
    }
    case 0x1006ed9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006edeeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ee15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ee1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ee2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ee32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ee3cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ee3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ee4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ee4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ee88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ee90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006eea1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006eea9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006eeb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006eec0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006eecfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006eed5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006eee8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006eefbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ef0eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ef21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ef27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1006ef31u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1006ed10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1006ed10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
