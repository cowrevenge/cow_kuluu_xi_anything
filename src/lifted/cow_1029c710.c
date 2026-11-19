/* f_0x1029c710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1029c710(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d19;
    double d5;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    double loc_14_f;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    double loc_c_f;
    uint32_t t1;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029c751u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); goto E_1029c751;
    case 0x1029c76eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1029c76e;
    case 0x1029c786u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1029c786;
    case 0x1029c7b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1029c7b1;
    case 0x1029c7b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1029c7b7;
    case 0x1029c7c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1029c7c8;
    case 0x1029c7ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1029c7ce;
    case 0x1029c7f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1029c7f9;
    case 0x1029c800u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1029c800;
    case 0x1029c804u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1029c804;
    case 0x1029c806u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1029c806;
    case 0x1029c809u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1029c809;
    case 0x1029c81bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1029c81b;
    case 0x1029c835u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1029c835;
    case 0x1029c841u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); goto E_1029c841;
    default: break;
    }
#endif

    COW_AT(1029c710)
    t1 = rd32(sp0 + 4u);
    g->eax = t1 * t1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t1 * t1, COW_IMG(0x103bc7b0u), 0x2au, in_edi, in_ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t3 = g->ecx;
    t4 = g->edx;
    g->ecx = t3;
    d5 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 8u));
    fpush(g, d5);
    g->esp = sp0 - 0x20u;
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    if ((int32_t)t1 <= 0)
    {
        edi = t2;
        goto L_1029c841;
    }
    ecx = t7;
    ebx = t1;
    edi = t2;
    loc_4 = t2;
    loc_8 = t6;
    COW_AT(1029c751)
    d8 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
    t9 = (uint32_t)((int32_t)(ebx - (uint32_t)((int32_t)ebx >> 0x1fu)) >> 1u);
    eax = t9;
    edx = (uint32_t)((int32_t)ebx >> 0x1fu);
    ebp = -t9;
    loc_14_f = d8;
    loc_10 = ebx;
    loc_18 = -t9;
L_1029c76e: ;
    COW_AT(1029c76e)
    wr32(sp0 + 8u, ebp);
    d10 = fr(g, (double)(int32_t)loc_18 / loc_14_f);
    d11 = (double)(float)fr(g, d10 * d10);
    esi = 0u;
    loc_c_f = d11;
L_1029c786: ;
    COW_AT(1029c786)
    d12 = fr(g, (double)(int32_t)rd32(sp0 + 8u) / loc_14_f);
    wrf32(sp0 + 4u, (float)fr(g, sqrt(fr(g, fr(g, d12 * d12) + loc_c_f))));
    d13 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d13, rdf64(COW_IMG(0x10340b90u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d13, rdf64(COW_IMG(0x10340b90u)), 0u) & 0x4100u;
    COW_AT(1029c7b7)
        d14 = (double)rdf32(sp0 + 4u);
        if (!(d14 < rdf64(COW_IMG(0x10340b68u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, rdf64(COW_IMG(0x10340b68u)), 0u);
    COW_AT(1029c7ce)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            d15 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a378u)) - (double)rdf32(sp0 + 4u)) * (double)rdf32(COW_IMG(0x10329cecu)));
            fpush(g, (double)(int32_t)loc_8);
            g->esp = sp0 - 0xcu;
            t16 = cow_cdecl(g, COW_IMG(0x10312cd0u), 7, in_esi, in_ebp, in_edi, in_ebx, loc_18, cow_f2bits(loc_14_f), loc_10);
            t17 = g->ecx;
            t18 = g->edx;
            g->edx = t18;
            d19 = fr(g, d15 * (double)rdf32(COW_IMG(0x10329a20u)));
            fpush(g, d19);
            g->esp = sp0 - 0x28u;
            t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), t16, g->ecx, g->edx, 1, 0);
            t21 = g->edx;
            if ((int32_t)t20 <= 255)
            {
                eax = t20;
                edx = t21;
    COW_AT(1029c800)
                if ((int32_t)eax < 0)
                {
    COW_AT(1029c804)
                    eax = 0u;
                }
            }
            else
            {
                edx = t21;
    COW_AT(1029c7f9)
                eax = 0xffu;
            }
    COW_AT(1029c806)
            wr8(edi + esi, (uint8_t)eax);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, rdf64(COW_IMG(0x10340b68u)), 0u);
    COW_AT(1029c7c8)
            wr8(edi + esi, 0xffu);
        }
    }
    else
    {
        eax = cow_fsw(g, d13, rdf64(COW_IMG(0x10340b90u)), 0u) & 0x4100u;
    COW_AT(1029c7b1)
        wr8(edi + esi, 0u);
    }
    COW_AT(1029c809)
    t22 = rd32(sp0 + 8u) + 1u;
    wr32(sp0 + 8u, t22);
    if ((int32_t)(esi + 1u) < (int32_t)ebx)
    {
        ecx = t22;
        esi = esi + 1u;
        goto L_1029c786;
    }
    ecx = t22;
    COW_AT(1029c81b)
    if (loc_10 != 1u)
    {
        eax = loc_10 - 1u;
        edx = loc_18 + 1u;
        edi = ebx + edi;
        loc_10 = loc_10 - 1u;
        loc_18 = loc_18 + 1u;
        goto L_1029c76e;
    }
    COW_AT(1029c835)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return loc_4;
L_1029c841: ;
    COW_AT(1029c841)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1029c710(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029c751u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1029c76eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029c786u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029c7b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029c7b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029c7c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029c7ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029c7f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029c800u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029c804u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029c806u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029c809u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029c81bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029c835u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029c841u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1029c710(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1029c710(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
