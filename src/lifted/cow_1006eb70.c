/* f_0x1006eb70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_1006eb70(Guest* g)
{
    double d1;
    double d10;
    double d12;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t11;
    uint32_t t13;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006eb9eu: in_eax = g->eax; ecx = g->ecx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); x0 = ST(0); g->edi = rd32(sp0 - 0x10u); goto E_1006eb9e;
    case 0x1006ebabu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006ebab;
    case 0x1006ec46u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006ec46;
    case 0x1006ec48u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006ec48;
    case 0x1006ec55u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006ec55;
    case 0x1006ec5du: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006ec5d;
    case 0x1006ec9eu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006ec9e;
    case 0x1006eca6u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006eca6;
    case 0x1006ecb7u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006ecb7;
    case 0x1006ecbfu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006ecbf;
    case 0x1006eccau: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006ecca;
    case 0x1006ecceu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006ecce;
    case 0x1006ecd9u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006ecd9;
    case 0x1006ecdfu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006ecdf;
    case 0x1006ece9u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1006ece9;
    case 0x1006eceau: eax = g->eax; ecx = g->ecx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->edi = rd32(sp0 - 0x10u); goto E_1006ecea;
    default: break;
    }
#endif

    COW_AT(1006eb70)
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 8u, 0x461c4000u);
    wr32(sp0 - 0xcu, 0x461c4000u);
    wr32(sp0 - 4u, 0xc61c4000u);
    if ((int32_t)rd32(sp0 + 0xcu) <= 0)
    {
        loc_8 = 0x461c4000u;
        loc_c = 0x461c4000u;
        loc_4 = 0xc61c4000u;
        x0 = (double)rdf32(COW_IMG(0x1032c44cu));
    }
    else
    {
        edi = rd32(sp0 + 0xcu);
        x0 = (double)rdf32(COW_IMG(0x1032c44cu));
    COW_AT(1006eb9e)
        wr32(sp0 - 0x14u, in_esi);
        eax = in_eax;
        ecx = rd32(sp0 + 0x10u);
        esi = arg2;
        loc_8 = 0x461c4000u;
        loc_c = 0x461c4000u;
        loc_4 = 0xc61c4000u;
L_1006ebab: ;
    COW_AT(1006ebab)
        d1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi) * (double)rdf32(ecx + 8u)) + fr(g, (double)rdf32(esi + 8u) * (double)rdf32(ecx + 0x28u))) + fr(g, (double)rdf32(esi + 4u) * (double)rdf32(ecx + 0x18u))) + (double)rdf32(ecx + 0x38u));
        d2 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(ecx + 0x14u) * (double)rdf32(esi + 4u)) + fr(g, (double)rdf32(esi) * (double)rdf32(ecx + 4u))) + fr(g, (double)rdf32(ecx + 0x24u) * (double)rdf32(esi + 8u))) + (double)rdf32(ecx + 0x34u));
        d3 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(ecx + 0x10u) * (double)rdf32(esi + 4u)) + fr(g, (double)rdf32(esi) * (double)rdf32(ecx))) + fr(g, (double)rdf32(ecx + 0x20u) * (double)rdf32(esi + 8u))) + (double)rdf32(ecx + 0x30u));
        d4 = fr(g, fr(g, fr(g, fr(g, d1 * (double)rdf32(arg5 + 0x20u)) + fr(g, d2 * (double)rdf32(arg5 + 0x10u))) + fr(g, d3 * (double)rdf32(arg5))) + (double)rdf32(arg5 + 0x30u));
        wrf32(sp0 + 0xcu, (float)d4);
        d5 = fr(g, fr(g, fr(g, fr(g, d1 * (double)rdf32(arg5 + 0x24u)) + fr(g, d2 * (double)rdf32(arg5 + 0x14u))) + fr(g, d3 * (double)rdf32(arg5 + 4u))) + (double)rdf32(arg5 + 0x34u));
        wrf32(sp0 + 0x10u, (float)d5);
        d6 = fr(g, fr(g, fr(g, fr(g, d3 * (double)rdf32(arg5 + 0xcu)) + fr(g, d1 * (double)rdf32(arg5 + 0x2cu))) + fr(g, d2 * (double)rdf32(arg5 + 0x1cu))) + (double)rdf32(arg5 + 0x3cu));
        if (!(d6 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            x1 = d6;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            x1 = d6;
    COW_AT(1006ec46)
            x1 = -x1;
        }
    COW_AT(1006ec48)
        if (x1 != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1006ec55)
            x1 = (double)rdf32(COW_IMG(0x1032961cu));
        }
    COW_AT(1006ec5d)
        d7 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0xcu) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x1)) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(sp0 + 0x18u));
        d8 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x1);
        wrf32(sp0 + 0xcu, (float)d7);
        wrf32(esi + 0x1cu, (float)d7);
        d9 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d8 * (double)rdf32(sp0 + 0x10u))) * (double)rdf32(sp0 + 0x1cu));
        wrf32(sp0 + 0x10u, (float)d9);
        wrf32(esi + 0x20u, (float)d9);
        d10 = (double)rdf32(sp0 + 0xcu);
        if (!(d10 < cow_bits2f(loc_c)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, cow_bits2f(loc_c), 2u);
            x1 = d9;
        }
        else
        {
            x1 = d9;
    COW_AT(1006ec9e)
            t11 = rd32(sp0 + 0xcu);
            wr32(sp0 - 0xcu, t11);
            eax = t11;
            loc_c = t11;
        }
    COW_AT(1006eca6)
        d12 = (double)rdf32(sp0 + 0xcu);
        if ((cow_fsw(g, d12, cow_bits2f(loc_4), 2u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d12, cow_bits2f(loc_4), 2u) & 0x4100u;
        }
        else
        {
    COW_AT(1006ecb7)
            t13 = rd32(sp0 + 0xcu);
            wr32(sp0 - 4u, t13);
            eax = t13;
            loc_4 = t13;
        }
    COW_AT(1006ecbf)
        if (!(x1 < cow_bits2f(loc_8)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, cow_bits2f(loc_8), 2u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, cow_bits2f(loc_8), 2u);
    COW_AT(1006ecca)
            wrf32(sp0 - 8u, (float)(double)(float)x1);
        }
    COW_AT(1006ecce)
        if ((cow_fsw(g, x1, x0, 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, x1, x0, 1u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, x1, x0, 1u) & 0x4100u;
    COW_AT(1006ecd9)
            x0 = (double)rdf32(sp0 + 0x10u);
        }
    COW_AT(1006ecdf)
        if (edi != 1u)
        {
            esi = esi + 0x24u;
            edi = edi - 1u;
            loc_8 = rd32(sp0 - 8u);
            goto L_1006ebab;
        }
    COW_AT(1006ece9)
        loc_8 = rd32(sp0 - 8u);
    }
    COW_AT(1006ecea)
    wrf32(arg1, (float)cow_bits2f(loc_c));
    wr32(arg1 + 4u, loc_8);
    wr32(arg1 + 8u, loc_4);
    wrf32(arg1 + 0xcu, (float)x0);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1006eb70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006eb9eu:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        in_eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0xcu, 0x461c4000u);
        wr32(sp0 - 8u, 0x461c4000u);
        wr32(sp0 - 4u, 0xc61c4000u);
        (void)sp0;
        return 1;
    }
    case 0x1006ebabu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x14u;
        g->edx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1006ec46u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x14u;
        g->edx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1006ec48u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x14u;
        g->edx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1006ec55u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x14u;
        g->edx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1006ec5du:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x14u;
        g->edx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1006ec9eu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x14u;
        g->edx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1006eca6u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x14u;
        g->edx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1006ecb7u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x14u;
        g->edx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1006ecbfu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x14u;
        g->edx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1006eccau:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x14u;
        g->edx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1006ecceu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x14u;
        g->edx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1006ecd9u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x14u;
        g->edx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1006ecdfu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x14u;
        g->edx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1006ece9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1006eceau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1006eb70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1006eb70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
