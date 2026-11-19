/* f_0x102ea931 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102ea931(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_214;
    uint32_t loc_21c;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 556u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ea971u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102ea971;
    case 0x102ea985u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102ea985;
    case 0x102ea98fu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102ea98f;
    case 0x102ea9a3u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102ea9a3;
    case 0x102ea9abu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102ea9ab;
    case 0x102ea9bfu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102ea9bf;
    case 0x102ea9d1u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102ea9d1;
    case 0x102ea9e7u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102ea9e7;
    case 0x102ea9f6u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102ea9f6;
    case 0x102ea9fbu: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102ea9fb;
    case 0x102eaa03u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102eaa03;
    case 0x102eaa0bu: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102eaa0b;
    case 0x102eaa11u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102eaa11;
    case 0x102eaa15u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102eaa15;
    case 0x102eaa18u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_102eaa18;
    case 0x102eaa3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_214 = rd32(sp0 - 0x214u); goto E_102eaa3c;
    default: break;
    }
#endif

    COW_AT(102ea931)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x208u, in_ebx);
    wr32(sp0 - 0x20cu, in_esi);
    wr32(sp0 - 0x210u, in_edi);
    wr32(sp0 - 0x214u, sp0 + 0xcu);
    wr32(sp0 - 0x218u, arg2);
    wr32(sp0 - 0x21cu, 0x100u);
    wr32(sp0 - 0x220u, sp0 - 0x204u);
    g->esp = sp0 - 0x208u;
    cow_cdecl(g, COW_IMG(0x10314d45u), 6, sp0 - 0x204u, 0x100u, arg2, sp0 + 0xcu, in_edi, in_esi);
    wr8(sp0 - 0x105u, 0u);
    if (rd32(arg1 + 0x3d8u) == 0u) goto L_102ea9fb;
    COW_AT(102ea971)
    wr32(sp0 - 0x214u, 0xdu);
    esi = sp0 - 0x204u;
    edi = COW_IMG(0x103465dcu);
    ecx = 0xdu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102ea9f6;
    COW_AT(102ea985)
    if (rd32(arg1 + 0x3dcu) != 0u)
    {
        eax = rd32(arg1 + 0x3dcu);
    COW_AT(102ea9a3)
        if (rd32(arg1 + 0xa0u) == 0u) goto L_102ea9e7;
    COW_AT(102ea9ab)
        wr32(sp0 - 0x214u, 4u);
        esi = arg1 + 0xc8u;
        edi = COW_IMG(0x103465a4u);
        ecx = 4u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (!zf) goto L_102ea9e7;
    COW_AT(102ea9bf)
        t2 = rd32(arg1 + 0x1d0u);
        wr32(sp0 - 0x214u, t2);
        wr32(sp0 - 0x218u, arg1 + 0x1d4u);
        wr32(sp0 - 0x21cu, COW_IMG(0x10346564u));
        loc_214 = t2;
        loc_21c = COW_IMG(0x10346564u);
    }
    else
    {
    COW_AT(102ea98f)
        t1 = rd32(arg1 + 0x1d0u);
        wr32(sp0 - 0x214u, t1);
        wr32(sp0 - 0x218u, arg1 + 0x1d4u);
        wr32(sp0 - 0x21cu, COW_IMG(0x103465a8u));
        loc_214 = t1;
        loc_21c = COW_IMG(0x103465a8u);
    }
L_102ea9d1: ;
    COW_AT(102ea9d1)
    wr32(sp0 - 0x220u, 0x100u);
    wr32(sp0 - 0x224u, sp0 - 0x104u);
    g->ebx = arg1;
    g->edx = 0u;
    g->esp = sp0 - 0x20cu;
    cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x104u, 0x100u, loc_21c, arg1 + 0x1d4u, loc_214, in_edi);
    t3 = g->edx;
    edx = t3;
L_102eaa3c: ;
    COW_AT(102eaa3c)
    wr8(sp0 - 5u, 0u);
    wr32(sp0 - 0x214u, sp0 - 0x104u);
    g->esp = sp0 - 0x210u;
    cow_thiscall(g, COW_IMG(0x102f5321u), arg1 + 0x84u, 1, sp0 - 0x104u);
    wr32(arg1 + 0xa4u, rd32(arg1 + 0xa4u) + 1u);
    t5 = rd32(sp0 - 0x20cu);
    t6 = rd32(sp0 - 0x210u);
    wr32(arg1 + 0x98u, 1u);
    g->ebx = rd32(sp0 - 0x208u);
    g->esi = t5;
    g->edi = t6;
    g->ebp = rd32(sp0 - 4u);
    return;
L_102ea9e7: ;
    COW_AT(102ea9e7)
    wr32(sp0 - 0x214u, eax);
    wr32(sp0 - 0x218u, arg1 + 0x1d4u);
    wr32(sp0 - 0x21cu, COW_IMG(0x10346534u));
    loc_214 = eax;
    loc_21c = COW_IMG(0x10346534u);
    goto L_102ea9d1;
L_102ea9f6: ;
    COW_AT(102ea9f6)
L_102ea9fb: ;
    COW_AT(102ea9fb)
    if (rd32(arg1 + 0x3e0u) == 0u)
    {
    COW_AT(102eaa0b)
        eax = rd32(arg1 + 0x1d0u);
    }
    else
    {
    COW_AT(102eaa03)
        eax = rd32(arg1 + 0x3e4u);
    }
    COW_AT(102eaa11)
    if (eax == 0u)
    {
    COW_AT(102eaa15)
        eax = 1u;
    }
    COW_AT(102eaa18)
    wr32(sp0 - 0x214u, sp0 - 0x204u);
    wr32(sp0 - 0x218u, eax);
    wr32(sp0 - 0x21cu, arg1 + 0x1d4u);
    wr32(sp0 - 0x220u, COW_IMG(0x10346514u));
    wr32(sp0 - 0x224u, 0x100u);
    wr32(sp0 - 0x228u, sp0 - 0x104u);
    g->ebx = arg1;
    g->edx = 0u;
    g->esp = sp0 - 0x210u;
    cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x104u, 0x100u, COW_IMG(0x10346514u), arg1 + 0x1d4u, eax, sp0 - 0x204u);
    t4 = g->edx;
    edx = t4;
    goto L_102eaa3c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ea931(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ea971u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        wr32(sp0 - 0x214u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102ea985u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102ea98fu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102ea9a3u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102ea9abu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102ea9bfu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102ea9d1u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x21cu;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        wr32(sp0 - 0x218u, arg1 + 0x1d4u);
        (void)sp0;
        return 1;
    }
    case 0x102ea9e7u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102ea9f6u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102ea9fbu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x100u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102eaa03u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x100u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102eaa0bu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x100u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102eaa11u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x100u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102eaa15u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x100u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102eaa18u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        uint32_t loc_21c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x100u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102eaa3cu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_214;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_214 = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x210u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ea931(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102ea931(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
